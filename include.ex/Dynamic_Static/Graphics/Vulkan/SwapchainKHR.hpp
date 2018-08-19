
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHRChild.hpp"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan swapchain.
    */
    class SwapchainKHR final
        : public Object<VkSwapchainKHR>
        , public SharedObject<SwapchainKHR>
        , public DeviceChild
        , public SurfaceKHRChild
    {
    public:
        /*
        * Configuration parameters for SwapchainKHR construction.
        */
        struct CreateInfo final
            : public VkSwapchainCreateInfoKHR
        {
            /*
            * Constructs an instance of SwapchainKHR::CreateInfo.
            */
            inline CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
                pNext = nullptr;
                flags = 0;
                surface = VK_NULL_HANDLE;
                minImageCount = 0;
                imageFormat = VK_FORMAT_UNDEFINED;
                imageColorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
                imageExtent.width = 1;
                imageExtent.height = 1;
                imageArrayLayers = 1;
                imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
                imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
                queueFamilyIndexCount = 0;
                pQueueFamilyIndices = nullptr;
                preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
                compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
                presentMode = VK_PRESENT_MODE_MAILBOX_KHR;
                clipped = VK_FALSE;
                oldSwapchain = VK_NULL_HANDLE;
                static_assert(
                    sizeof(SwapchainKHR::CreateInfo) == sizeof(VkSwapchainCreateInfoKHR),
                    "sizeof(SwapchainKHR::CreateInfo) != sizeof(VkSwapchainCreateInfoKHR)"
                );
            }
        };

    private:
        CreateInfo mCreateInfo { };
        std::vector<Image> mImages;
        uint32_t mCurrentImageIndex;
        bool mVsyncEnabled { false };

    public:
        /*
        * Callback executed when this SwapchainKHR is resized.
        * @param [in] This SwapchainKHR
        */
        Callback<SwapchainKHR, const SwapchainKHR&> on_resize;

    private:
        /*
        * Constructs an instance of SwapchainKHR.
        * @param [in] device This SwapchainKHR's Device
        * @param [in] surface This SwapchainKHR's SurfaceKHR
        * @param [in] createInfo This SwapchainKHR's SwapchainKHR::CreateInfo (optional = { })
        * @param [in] vsyncEnabled Whether or not to enable vsync (optional = false)
        */
        SwapchainKHR(
            const std::shared_ptr<Device>& device,
            const std::shared_ptr<SurfaceKHR>& surface,
            CreateInfo createInfo = { },
            bool vsyncEnabled = false
        );

    public:
        /*
        * Destroys this instance of SwapchainKHR.
        */
        ~SwapchainKHR();

    public:
        /*
        * Gets a value indicating whether or not this SwapchainKHR is valid.
        * @return A value indicating whether or not this SwapchainKHR is valid
        */
        bool is_valid() const;

        /*
        * Gets this SwapchainKHR's VkFormat.
        * @return This SwapchainKHR's VkFormat
        */
        VkFormat get_format() const;

        /*
        * Gets this SwapchainKHR's VkExtent2D.
        * @return This SwapchainKHR's VkExtent2D.
        */
        const VkExtent2D& get_extent() const;

        /*
        * Gets this SwapchainKHR's VkColorSpaceKHR.
        * @return This SwapchainKHR's VkColorSpaceKHR
        */
        VkColorSpaceKHR get_color_space() const;

        /*
        * Gets this SwapchainKHR's VkPresentModeKHR.
        * @return This SwapchainKHR's VkPresentModeKHR
        */
        VkPresentModeKHR get_present_mode() const;

        /*
        * Gets this SwapchainKHR's VkSurfaceTransformFlagBitsKHR.
        * @return This SwapchainKHR's VkSurfaceTransformFlagBitsKHR
        */
        VkSurfaceTransformFlagBitsKHR get_surface_transform_flag() const;

        /*
        * Gets this SwapchainKHR's VkCompositeAlphaFlagBitsKHR.
        * @return This SwapchainKHR's VkCompositeAlphaFlagBitsKHR
        */
        VkCompositeAlphaFlagBitsKHR get_composite_alpha_flag() const;

        /*
        * Gets this SwapchainKHR's VkImageUsageFlags.
        * @return This SwapchainKHR's VkImageUsageFlags
        */
        VkImageUsageFlags get_image_usage_flags() const;

        /*
        * Gets this SwapchainKHR's Images.
        * @return This SwapchainKHR's Images.
        */
        Span<Image> get_images();

        /*
        * Gets this SwapchainKHR's Images.
        * @return This SwapchainKHR's Images.
        */
        Span<const Image> get_images() const;

        /*
        * Acquires and gets the index of this SwapchainKHR's next presentable Image.
        * @param [in] timeout How long this method should wait, in nanoseconds, for an Image to become available
        * \n NOTE : UINT64_MAX will result in this method blocking until an Image is acquired or an error occurs (optional = UINT64_MAX)
        * @param [in] semaphore The Semaphore to signal (optional = VK_NULL_HANDLE)
        * \n NOTE : If semaphore is not nullptr, the Semaphore must be unsignaled, with no signal or wait operations pending
        * \n        If semaphore is not nullptr, the Semaphore will become signaled when the application can use the Image
        * @param [in] fence The Fence to signal (optional = VK_NULL_HANDLE)
        * \n NOTE : If fence is not nullptr, the Fence must be unsignaled, with no signal or wait operations pending
        * \n        If fence is not nullptr, the Fence will become signaled when the application can use the Image
        * @param [out] pImageIndex The index of the acquired Image (optional = nullptr)
        * @return A value indicating the result of this operation
        * \n NOTE : VK_SUCCESS indicates that an Image was successfully acquired
        * \n        VK_TIMEOUT indicates that the timeout value was reached before an Image was acquired
        * \n        VK_NOT_READY indicates that the timeout value was zero and no Image was acquired
        * \n        VK_SUBOPTIMAL_KHR indicates that an Image was acquired but that this SwapchainKHR and its SurfaceKHR no longer match
        * \n        VK_ERROR_OUT_OF_HOST_MEMORY indicates that a host memory allocation failed
        * \n        VK_ERROR_OUT_OF_DEVICE_MEMORY indicates that a device memory allocation failed
        * \n        VK_ERROR_DEVICE_LOST The logical or physical device has been lost
        * \n        VK_ERROR_OUT_OF_DATE_KHR indicates that this SwapchainKHR and its SurfaceKHR are no longer compatible
        * \n        VK_ERROR_SURFACE_LOST_KHR indicates that this SwapchainKHR's SurfaceKHR is no longer available
        */
        VkResult acquire_next_image(
            uint64_t timeout = UINT64_MAX,
            VkSemaphore semaphore = VK_NULL_HANDLE,
            VkFence fence = VK_NULL_HANDLE,
            uint32_t* pImageIndex = nullptr
        );

        /*
        * Gets the index of this SwapchainKHR's current presentable Image.
        * @return The index of this SwapchainKHR's current presentable Image
        */
        uint32_t get_current_image_index() const;

        /*
        * Gets a value indicating whether or not this SwapchainKHR has vsync enabled.
        * @return A value indicating whether or not this SwapchainKHR has vsync enabled
        */
        bool vsync_enabled() const;

        /*
        * Sets a value indicating whether or not this SwapchainKHR has vsync enabled.
        * @param [in] vsyncEnabled Whether or not this SwapchainKHR has vsync enabled
        */
        void vsync_enabled(bool vsyncEnabled);

        /*
        * Validates this SwapchainKHR.
        */
        void validate();

    private:
        void create_vk_resources();
        void destroy_vk_resources();
        void on_surface_resize(const SurfaceKHR& surface);
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
