
/*
==========================================
    Licensed under the MIT license
    Copyright (c) 2017 Dynamic_Static
        Patrick Purcell
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include "gsl/span"

#include <memory>
#include <vector>

namespace ComputeFluid2D {

    struct ClearPushConstants final
    {
        glm::vec2 value;
        int32_t dst_idx;
    };

    struct AddFluidPushConstants final
    {
        glm::vec2 value;
        glm::vec2 position;
        float radius;
        int32_t dst_idx;
    };

    struct AdvectPushConstants final
    {
        float timeStep;
        float dissipation;
        int32_t velocity_idx;
        int32_t src_idx;
        int32_t dst_idx;
    };

    // struct ApplyBuoyancyPushConstants final
    // {
    // 
    // };

    struct ComputDivergencePushConstants final
    {
        int32_t velocity_idx;
        int32_t dst_idx;
    };

    struct JacobiPushConstants final
    {
        float alpha;
        float inverseBeta;
        int32_t pressure_idx;
        int32_t divergence_idx;
        int32_t dst_idx;
    };

    struct SubtractGradientPushConstants final
    {
        float gradientScale;
        int32_t velocity_idx;
        int32_t pressure_idx;
        int32_t dst_idx;
    };

    class ComputePipeline final
    {
    public:
        std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> mPipeline;

    public:
        ComputePipeline() = default;
        ComputePipeline(
            dst::vlkn::Device& device,
            const std::shared_ptr<dst::vlkn::Descriptor::Set::Layout>& descriptorSetLayout,
            const std::string& shaderSource
        )
            : ComputePipeline(device, descriptorSetLayout, 0, shaderSource)
        {
        }

        ComputePipeline(
            dst::vlkn::Device& device,
            const std::shared_ptr<dst::vlkn::Descriptor::Set::Layout>& descriptorSetLayout,
            int lineOffset,
            const std::string& shaderSource
        )
        {
            using namespace dst::vlkn;
            auto shader = device.create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                ShaderModule::Source::Code,
                lineOffset,
                shaderSource
            );

            auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &descriptorSetLayout->handle();
            pipelineLayoutInfo.pushConstantRangeCount = static_cast<uint32_t>(shader->push_constant_ranges().size());
            pipelineLayoutInfo.pPushConstantRanges = shader->push_constant_ranges().data();
            mPipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

            auto pipelineInfo = Pipeline::ComputeCreateInfo;
            pipelineInfo.stage = shader->pipeline_stage_create_info();
            pipelineInfo.layout = *mPipelineLayout;
            mPipeline = device.create<Pipeline>(pipelineInfo);
        }

    public:
        template <typename PushConstantsType>
        void dispatch(
            dst::vlkn::Command::Buffer& commandBuffer,
            const dst::vlkn::Descriptor::Set& descriptorSet,
            const PushConstantsType& pushConstants
        )
        {
            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_COMPUTE, *mPipeline);
            vkCmdBindDescriptorSets(commandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, *mPipelineLayout, 0, 1, &descriptorSet.handle(), 0, nullptr);
            vkCmdPushConstants(commandBuffer, *mPipelineLayout, VK_SHADER_STAGE_COMPUTE_BIT, 0, sizeof(PushConstantsType), &pushConstants);
            vkCmdDispatch(commandBuffer, 1280, 720, 1);
        }
    };

} // namespace ComputeFluid2D
