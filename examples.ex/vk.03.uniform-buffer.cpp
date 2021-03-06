
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/color.hpp"
#include "dynamic_static/graphics/vulkan/application.hpp"
#include "dynamic_static/graphics/vulkan/physical-device-utilities.hpp"
#include "dynamic_static/graphics/vulkan/shader-module-utilities.hpp"
#include "dynamic_static/graphics/vulkan/vertex-utilities.hpp"

#include <algorithm>

class VulkanExample_03_VertexBuffer final
    : public dst::vk::Application
{
public:
    static constexpr char* Name { "dynamic_static Vulkan example 03 Uniform Buffer" };

    inline VulkanExample_03_VertexBuffer()
        : dst::vk::Application(
            []()
            {
                dst::sys::Window::Info windowInfo { };
                windowInfo.extent = { 1280, 720 };
                windowInfo.pName = Name;
                return windowInfo;
            }(),
            []()
            {
                auto applicationInfo = dst::vk::get_default<VkApplicationInfo>();
                applicationInfo.pApplicationName = Name;
                return applicationInfo;
            }()
        )
    {
    }

private:
    struct Uniforms final
    {
        glm::mat4 world;
        glm::mat4 view;
        glm::mat4 projection;
    };

    struct Vertex final
    {
        glm::vec3 position { };
        glm::vec4 color { };
    };

    inline bool setup() override final
    {
        Application::setup();
        setup_pipeline_and_descriptor_set_layout();
        setup_vertex_and_index_buffers();
        setup_uniform_buffer();
        setup_descriptor_set();
        record_command_buffers();
        return true;
    }

    inline void setup_pipeline_and_descriptor_set_layout()
    {
        using namespace dst::vk;
        auto vertexShaderByteCode = compile_glsl_to_spirv(
            VK_SHADER_STAGE_VERTEX_BIT,
            __LINE__,
            R"(
                #version 450

                layout(binding = 0)
                uniform Uniforms
                {
                    mat4 world;
                    mat4 view;
                    mat4 projection;
                } ubo;

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec4 vsColor;
                layout(location = 0) out vec4 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = ubo.projection * ubo.view * ubo.world * vec4(vsPosition, 1);
                    fsColor = vsColor;
                }
            )"
        );
        auto vertexShaderModuleCreateInfo = get_default<VkShaderModuleCreateInfo>();
        vertexShaderModuleCreateInfo.codeSize = vertexShaderByteCode.size() * sizeof(uint32_t);
        vertexShaderModuleCreateInfo.pCode = !vertexShaderByteCode.empty() ? vertexShaderByteCode.data() : nullptr;
        Managed<VkShaderModule> vertexShaderModule;
        dst_vk(create<Managed<VkShaderModule>>(get_device(), &vertexShaderModuleCreateInfo, nullptr, &vertexShaderModule));
        auto vertexPipelineShaderStageCreateInfo = get_default<VkPipelineShaderStageCreateInfo>();
        vertexPipelineShaderStageCreateInfo.stage = VK_SHADER_STAGE_VERTEX_BIT;
        vertexPipelineShaderStageCreateInfo.module = vertexShaderModule;

        auto fragmentShaderByteCode = compile_glsl_to_spirv(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            __LINE__,
            R"(
                #version 450

                layout(location = 0) in vec4 fsColor;
                layout(location = 0) out vec4 fragColor;

                void main()
                {
                    fragColor = fsColor;
                }
            )"
        );
        auto fragmentShaderModuleCreateInfo = get_default<VkShaderModuleCreateInfo>();
        fragmentShaderModuleCreateInfo.codeSize = fragmentShaderByteCode.size() * sizeof(uint32_t);
        fragmentShaderModuleCreateInfo.pCode = !fragmentShaderByteCode.empty() ? fragmentShaderByteCode.data() : nullptr;
        Managed<VkShaderModule> fragmentShaderModule;
        dst_vk(create<Managed<VkShaderModule>>(get_device(), &fragmentShaderModuleCreateInfo, nullptr, &fragmentShaderModule));
        auto fragmentPipelineShaderStageCreateInfo = get_default<VkPipelineShaderStageCreateInfo>();
        fragmentPipelineShaderStageCreateInfo.stage = VK_SHADER_STAGE_FRAGMENT_BIT;
        fragmentPipelineShaderStageCreateInfo.module = fragmentShaderModule;

        std::array<VkPipelineShaderStageCreateInfo, 2> pipelineShaderStageCreateInfos {
            vertexPipelineShaderStageCreateInfo,
            fragmentPipelineShaderStageCreateInfo,
        };

        auto descriptorSetLayoutCreateInfo = get_default<VkDescriptorSetLayoutCreateInfo>();
        auto codeSize = vertexShaderModuleCreateInfo.codeSize;
        auto pCode = (const uint8_t*)vertexShaderModuleCreateInfo.pCode;
        const auto& descriptorSetReflectionInfos = reflect_descriptor_set_layout_bindings(codeSize, pCode);
        assert(descriptorSetReflectionInfos.size() == 1 && "TODO : Error handling");
        const auto& descriptorSetLayoutBindings = descriptorSetReflectionInfos[0].descriptorSetLayoutBindings;
        assert(descriptorSetLayoutBindings.size() == 1 && "TODO : Error handling");
        descriptorSetLayoutCreateInfo.bindingCount = (uint32_t)descriptorSetLayoutBindings.size();
        descriptorSetLayoutCreateInfo.pBindings = !descriptorSetLayoutBindings.empty() ? descriptorSetLayoutBindings.data() : nullptr;
        dst_vk(create<Managed<VkDescriptorSetLayout>>(get_device(), &descriptorSetLayoutCreateInfo, nullptr, &mDescriptorSetLayout));

        auto pipelineLayoutCreateInfo = get_default<VkPipelineLayoutCreateInfo>();
        pipelineLayoutCreateInfo.setLayoutCount = 1;
        pipelineLayoutCreateInfo.pSetLayouts = &*mDescriptorSetLayout;
        dst_vk(create<Managed<VkPipelineLayout>>(get_device(), &pipelineLayoutCreateInfo, nullptr, &mPipelineLayout));

        auto vertexInputBindingDescription = get_vertex_input_binding_description<Vertex>(0);
        auto vertexInputAttributeDescriptions = get_vertex_input_attribute_descriptions<glm::vec3, glm::vec4>(0);
        auto pipelineVertexInputStateCreateInfo = get_default<VkPipelineVertexInputStateCreateInfo>();
        pipelineVertexInputStateCreateInfo.vertexBindingDescriptionCount = 1;
        pipelineVertexInputStateCreateInfo.pVertexBindingDescriptions = &vertexInputBindingDescription;
        pipelineVertexInputStateCreateInfo.vertexAttributeDescriptionCount = (uint32_t)vertexInputAttributeDescriptions.size();
        pipelineVertexInputStateCreateInfo.pVertexAttributeDescriptions = vertexInputAttributeDescriptions.data();

        auto graphicsPipelineCreateInfo = get_default<VkGraphicsPipelineCreateInfo>();
        graphicsPipelineCreateInfo.stageCount = (uint32_t)pipelineShaderStageCreateInfos.size();
        graphicsPipelineCreateInfo.pStages = pipelineShaderStageCreateInfos.data();
        graphicsPipelineCreateInfo.pVertexInputState = &pipelineVertexInputStateCreateInfo;
        graphicsPipelineCreateInfo.layout = mPipelineLayout;
        graphicsPipelineCreateInfo.renderPass = get_swapchain_render_pass();
        dst_vk(create<Managed<VkPipeline>>(get_device(), VK_NULL_HANDLE, 1, &graphicsPipelineCreateInfo, nullptr, &mPipeline));
    }

    inline void setup_vertex_and_index_buffers()
    {
        using namespace dst::vk;
        std::array<Vertex, 4> vertices {
            Vertex {{ -0.5f, 0.0f, -0.5f }, { dst::Color<>::OrangeRed }},
            Vertex {{  0.5f, 0.0f, -0.5f }, { dst::Color<>::BlueViolet }},
            Vertex {{  0.5f, 0.0f,  0.5f }, { dst::Color<>::DodgerBlue }},
            Vertex {{ -0.5f, 0.0f,  0.5f }, { dst::Color<>::Goldenrod }},
        };
        auto vertexBufferCreateInfo = get_default<VkBufferCreateInfo>();
        vertexBufferCreateInfo.size = (VkDeviceSize)vertices.size() * sizeof(vertices[0]);
        vertexBufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
        dst_vk(create<Managed<VkBuffer>>(get_device(), &vertexBufferCreateInfo, nullptr, &mVertexBuffer));
        VkMemoryRequirements vertexBufferMemoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), mVertexBuffer, &vertexBufferMemoryRequirements);

        std::array<uint16_t, 6> indices {
            0, 1, 2,
            2, 3, 0,
        };
        mIndexCount = indices.size();
        auto indexBufferCreateInfo = get_default<VkBufferCreateInfo>();
        indexBufferCreateInfo.size = (VkDeviceSize)indices.size() * sizeof(indices[0]);
        indexBufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
        dst_vk(create<Managed<VkBuffer>>(get_device(), &indexBufferCreateInfo, nullptr, &mIndexBuffer));
        VkMemoryRequirements indexBufferMemoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), mIndexBuffer, &indexBufferMemoryRequirements);

        auto memoryTypeBits = vertexBufferMemoryRequirements.memoryTypeBits & indexBufferMemoryRequirements.memoryTypeBits;
        auto memoryTypeIndex = get_memory_type_index(get_physical_device(), memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        assert(memoryTypeIndex.has_value() && "TODO : Error handling");
        auto memoryAllocateInfo = get_default<VkMemoryAllocateInfo>();
        memoryAllocateInfo.memoryTypeIndex = memoryTypeIndex.value();
        memoryAllocateInfo.allocationSize = vertexBufferMemoryRequirements.size;
        memoryAllocateInfo.allocationSize += memoryAllocateInfo.allocationSize % indexBufferMemoryRequirements.alignment;
        auto indexBufferMemoryOffset = memoryAllocateInfo.allocationSize;
        memoryAllocateInfo.allocationSize += indexBufferMemoryRequirements.size;
        Managed<VkDeviceMemory> memory;
        dst_vk(allocate<Managed<VkDeviceMemory>>(get_device(), &memoryAllocateInfo, nullptr, &memory));
        dst_vk(bind_memory(mVertexBuffer, memory, 0));
        dst_vk(bind_memory(mIndexBuffer, memory, indexBufferMemoryOffset));

        auto stagingBufferCreateInfo = get_default<VkBufferCreateInfo>();
        stagingBufferCreateInfo.size = std::max(vertexBufferCreateInfo.size, indexBufferCreateInfo.size);
        stagingBufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        Managed<VkBuffer> stagingBuffer;
        dst_vk(create<Managed<VkBuffer>>(get_device(), &stagingBufferCreateInfo, nullptr, &stagingBuffer));
        VkMemoryRequirements stagingBufferMemoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), stagingBuffer, &stagingBufferMemoryRequirements);
        auto stagingMemoryTypeBits = stagingBufferMemoryRequirements.memoryTypeBits;
        auto stagingMemoryPropertyFlags = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;
        auto stagingMemoryTypeIndex = get_memory_type_index(get_physical_device(), stagingMemoryTypeBits, stagingMemoryPropertyFlags);
        assert(stagingMemoryTypeIndex.has_value() && "TODO : Error handling");
        auto stagingMemoryAllocateInfo = get_default<VkMemoryAllocateInfo>();
        stagingMemoryAllocateInfo.memoryTypeIndex = stagingMemoryTypeIndex.value();
        stagingMemoryAllocateInfo.allocationSize = stagingBufferMemoryRequirements.size;
        Managed<VkDeviceMemory> stagingMemory;
        dst_vk(allocate<Managed<VkDeviceMemory>>(get_device(), &stagingMemoryAllocateInfo, nullptr, &stagingMemory));
        dst_vk(bind_memory(stagingBuffer, stagingMemory, 0));

        process_immediately(
            [&](const Managed<VkCommandBuffer>& commandBuffer)
            {
                uint8_t* pStagingData = nullptr;
                dst_vk(vkMapMemory(get_device(), stagingMemory, 0, VK_WHOLE_SIZE, 0, (void**)&pStagingData));
                assert(pStagingData && "TODO : Error handling");
                memcpy(pStagingData, vertices.data(), vertexBufferCreateInfo.size);
                vkUnmapMemory(get_device(), stagingMemory);
                VkBufferCopy bufferCopy { };
                bufferCopy.size = vertexBufferCreateInfo.size;
                vkCmdCopyBuffer(commandBuffer, stagingBuffer, mVertexBuffer, 1, &bufferCopy);
            }
        );

        process_immediately(
            [&](const Managed<VkCommandBuffer>& commandBuffer)
            {
                uint8_t* pStagingData = nullptr;
                dst_vk(vkMapMemory(get_device(), stagingMemory, 0, VK_WHOLE_SIZE, 0, (void**)&pStagingData));
                assert(pStagingData && "TODO : Error handling");
                memcpy(pStagingData, indices.data(), indexBufferCreateInfo.size);
                vkUnmapMemory(get_device(), stagingMemory);
                VkBufferCopy bufferCopy { };
                bufferCopy.size = indexBufferCreateInfo.size;
                vkCmdCopyBuffer(commandBuffer, stagingBuffer, mIndexBuffer, 1, &bufferCopy);
            }
        );
    }

    inline void setup_uniform_buffer()
    {
        using namespace dst::vk;
        auto bufferCreateInfo = get_default<VkBufferCreateInfo>();
        bufferCreateInfo.size = sizeof(Uniforms);
        bufferCreateInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        dst_vk(create<Managed<VkBuffer>>(get_device(), &bufferCreateInfo, nullptr, &mUniformBuffer));
        VkMemoryRequirements memoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), mUniformBuffer, &memoryRequirements);
        auto memoryTypeBits = memoryRequirements.memoryTypeBits;
        auto memoryPropertyFlags = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;
        auto memoryTypeIndex = get_memory_type_index(get_physical_device(), memoryTypeBits, memoryPropertyFlags);
        assert(memoryTypeIndex.has_value() && "TODO : Error handling");
        auto memoryAllocateInfo = get_default<VkMemoryAllocateInfo>();
        memoryAllocateInfo.memoryTypeIndex = memoryTypeIndex.value();
        memoryAllocateInfo.allocationSize = memoryRequirements.size;
        Managed<VkDeviceMemory> memory;
        dst_vk(allocate<Managed<VkDeviceMemory>>(get_device(), &memoryAllocateInfo, nullptr, &memory));
        dst_vk(bind_memory(mUniformBuffer, memory, 0));
        dst_vk(vkMapMemory(get_device(), memory, 0, VK_WHOLE_SIZE, 0, (void**)&mpUniformBufferData));
    }

    inline void setup_descriptor_set()
    {
        using namespace dst::vk;
        auto descriptorPoolSize = get_default<VkDescriptorPoolSize>();
        descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorPoolSize.descriptorCount = 1;
        auto descriptorPoolCreateInfo = get_default<VkDescriptorPoolCreateInfo>();
        descriptorPoolCreateInfo.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
        descriptorPoolCreateInfo.maxSets = 1;
        descriptorPoolCreateInfo.poolSizeCount = 1;
        descriptorPoolCreateInfo.pPoolSizes = &descriptorPoolSize;
        Managed<VkDescriptorPool> descriptorPool;
        dst_vk(create<Managed<VkDescriptorPool>>(get_device(), &descriptorPoolCreateInfo, nullptr, &descriptorPool));
        auto descriptorSetAllocateInfo = get_default<VkDescriptorSetAllocateInfo>();
        descriptorSetAllocateInfo.descriptorPool = descriptorPool;
        descriptorSetAllocateInfo.descriptorSetCount = 1;
        descriptorSetAllocateInfo.pSetLayouts = &*mDescriptorSetLayout;
        dst_vk(allocate<Managed<VkDescriptorSet>>(get_device(), &descriptorSetAllocateInfo, &mDescriptorSet));
        auto descriptorBufferInfo = get_default<VkDescriptorBufferInfo>();
        descriptorBufferInfo.buffer = mUniformBuffer;
        descriptorBufferInfo.range = VK_WHOLE_SIZE;
        auto writeDescriptorSet = get_default<VkWriteDescriptorSet>();
        writeDescriptorSet.dstSet = mDescriptorSet;
        writeDescriptorSet.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        writeDescriptorSet.descriptorCount = 1;
        writeDescriptorSet.pBufferInfo = &descriptorBufferInfo;
        vkUpdateDescriptorSets(get_device(), 1, &writeDescriptorSet, 0, nullptr);
    }

    inline void record_command_buffers()
    {
        using namespace dst::vk;
        std::array<VkClearValue, 2> clearValues;
        clearValues[0].color = { 0, 0, 0, 1 };
        clearValues[1].depthStencil = { 1, 0 };
        auto extent = get_swapchain().get<Managed<VkSwapchainCreateInfoKHR>>()->imageExtent;
        for (size_t i = 0; i < get_swapchain_command_buffers().size(); ++i) {
            const auto& commandBuffer = get_swapchain_command_buffers()[i];
            auto commandBufferBeginInfo = get_default<VkCommandBufferBeginInfo>();
            dst_vk(vkBeginCommandBuffer(commandBuffer, &commandBufferBeginInfo));
            auto renderPassBeginInfo = get_default<VkRenderPassBeginInfo>();
            renderPassBeginInfo.renderPass = get_swapchain_render_pass();
            renderPassBeginInfo.framebuffer = get_swapchain_framebuffers()[i];
            renderPassBeginInfo.renderArea.extent = extent;
            renderPassBeginInfo.clearValueCount = 1;
            renderPassBeginInfo.pClearValues = clearValues.data();
            vkCmdBeginRenderPass(commandBuffer, &renderPassBeginInfo, VK_SUBPASS_CONTENTS_INLINE);
            vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, mPipeline);
            vkCmdBindDescriptorSets(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, mPipelineLayout, 0, 1, &*mDescriptorSet, 0, nullptr);
            VkRect2D scissor { };
            scissor.extent = extent;
            vkCmdSetScissor(commandBuffer, 0, 1, &scissor);
            VkViewport viewport { };
            viewport.width = (float)extent.width;
            viewport.height = (float)extent.height;
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            vkCmdSetViewport(commandBuffer, 0, 1, &viewport);
            VkDeviceSize offset = 0;
            vkCmdBindVertexBuffers(commandBuffer, 0, 1, &*mVertexBuffer, &offset);
            vkCmdBindIndexBuffer(commandBuffer, mIndexBuffer, 0, VK_INDEX_TYPE_UINT16);
            vkCmdDrawIndexed(commandBuffer, (uint32_t)mIndexCount, 1, 0, 0, 0);
            vkCmdEndRenderPass(commandBuffer);
            vkEndCommandBuffer(commandBuffer);
        }
    }

    inline void  update(const dst::Clock& clock, const dst::sys::Input& input) override final
    {
        Uniforms uniforms { };
        mRotation += 90.0f * clock.elapsed<dst::Seconds<float>>();
        uniforms.world = glm::toMat4(glm::angleAxis(glm::radians(mRotation), glm::vec3 { 0, 1, 0 }));
        uniforms.view = glm::lookAt({ 0, 2, 2 }, glm::vec3 { }, glm::vec3 { 0, 1, 0 });
        auto swapchainImageExtent = get_swapchain().get<dst::vk::Managed<VkSwapchainCreateInfoKHR>>()->imageExtent;
        uniforms.projection = glm::perspective(
            glm::radians(30.0f),
            (float)swapchainImageExtent.width / (float)swapchainImageExtent.height,
            0.01f,
            10.0f
        );
        uniforms.projection[1][1] *= -1;
        memcpy(mpUniformBufferData, &uniforms, sizeof(Uniforms));
    }

    inline void render(const dst::Clock& clock) override final
    {
        using namespace dst::vk;
        uint32_t swapchainImageIndex = 0;
        dst_vk(vkAcquireNextImageKHR(get_device(), get_swapchain(), 0, get_swapchain_image_acquired_semaphore(), VK_NULL_HANDLE, &swapchainImageIndex));

        VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
        auto submitInfo = get_default<VkSubmitInfo>();
        submitInfo.waitSemaphoreCount = 1;
        submitInfo.pWaitSemaphores = &*get_swapchain_image_acquired_semaphore();
        submitInfo.pWaitDstStageMask = waitStages;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &*get_swapchain_command_buffers()[swapchainImageIndex];
        submitInfo.signalSemaphoreCount = 1;
        submitInfo.pSignalSemaphores = &*get_swapchain_image_rendered_semaphore();
        dst_vk(vkQueueSubmit(get_graphics_queue(), 1, &submitInfo, VK_NULL_HANDLE));

        auto presentInfo = get_default<VkPresentInfoKHR>();
        presentInfo.waitSemaphoreCount = 1;
        presentInfo.pWaitSemaphores = &*get_swapchain_image_rendered_semaphore();
        presentInfo.swapchainCount = 1;
        presentInfo.pSwapchains = &*get_swapchain();
        presentInfo.pImageIndices = &swapchainImageIndex;
        dst_vk(vkQueuePresentKHR(get_graphics_queue(), &presentInfo));
        dst_vk(vkQueueWaitIdle(get_graphics_queue()));
    }

    dst::vk::Managed<VkDescriptorSetLayout> mDescriptorSetLayout;
    dst::vk::Managed<VkPipelineLayout> mPipelineLayout;
    dst::vk::Managed<VkPipeline> mPipeline;
    dst::vk::Managed<VkBuffer> mVertexBuffer;
    dst::vk::Managed<VkBuffer> mIndexBuffer;
    dst::vk::Managed<VkBuffer> mUniformBuffer;
    dst::vk::Managed<VkDescriptorSet> mDescriptorSet;
    uint8_t* mpUniformBufferData { nullptr };
    size_t mIndexCount { 0 };
    float mRotation { 0.0f };
};

int main(int argc, const char* argv[])
{
    VulkanExample_03_VertexBuffer().start();
    return 0;
}
