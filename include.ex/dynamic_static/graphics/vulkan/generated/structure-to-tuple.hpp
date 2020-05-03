
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/span.hpp"
#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple-utilities.hpp"
#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include <tuple>

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj);

template <>
auto structure_to_tuple<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj);

template <>
auto structure_to_tuple<VkAllocationCallbacks>(const VkAllocationCallbacks& obj);

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
auto structure_to_tuple<VkApplicationInfo>(const VkApplicationInfo& obj);

template <>
auto structure_to_tuple<VkAttachmentDescription>(const VkAttachmentDescription& obj);

template <>
auto structure_to_tuple<VkAttachmentDescription2>(const VkAttachmentDescription2& obj);

template <>
auto structure_to_tuple<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj);

template <>
auto structure_to_tuple<VkAttachmentReference>(const VkAttachmentReference& obj);

template <>
auto structure_to_tuple<VkAttachmentReference2>(const VkAttachmentReference2& obj);

template <>
auto structure_to_tuple<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj);

template <>
auto structure_to_tuple<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj);

template <>
auto structure_to_tuple<VkBaseInStructure>(const VkBaseInStructure& obj);

template <>
auto structure_to_tuple<VkBaseOutStructure>(const VkBaseOutStructure& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj);

template <>
auto structure_to_tuple<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj);

template <>
auto structure_to_tuple<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj);

template <>
auto structure_to_tuple<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj);

template <>
auto structure_to_tuple<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj);

template <>
auto structure_to_tuple<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj);

template <>
auto structure_to_tuple<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj);

template <>
auto structure_to_tuple<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj);

template <>
auto structure_to_tuple<VkBindSparseInfo>(const VkBindSparseInfo& obj);

template <>
auto structure_to_tuple<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj);

template <>
auto structure_to_tuple<VkBufferCopy>(const VkBufferCopy& obj);

template <>
auto structure_to_tuple<VkBufferCreateInfo>(const VkBufferCreateInfo& obj);

template <>
auto structure_to_tuple<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj);

template <>
auto structure_to_tuple<VkBufferImageCopy>(const VkBufferImageCopy& obj);

template <>
auto structure_to_tuple<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj);

template <>
auto structure_to_tuple<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj);

template <>
auto structure_to_tuple<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj);

template <>
auto structure_to_tuple<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj);

template <>
auto structure_to_tuple<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj);

template <>
auto structure_to_tuple<VkCheckpointDataNV>(const VkCheckpointDataNV& obj);

template <>
auto structure_to_tuple<VkClearAttachment>(const VkClearAttachment& obj);

template <>
auto structure_to_tuple<VkClearColorValue>(const VkClearColorValue& obj);

template <>
auto structure_to_tuple<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj);

template <>
auto structure_to_tuple<VkClearRect>(const VkClearRect& obj);

template <>
auto structure_to_tuple<VkClearValue>(const VkClearValue& obj);

template <>
auto structure_to_tuple<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj);

template <>
auto structure_to_tuple<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj);

template <>
auto structure_to_tuple<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj);

template <>
auto structure_to_tuple<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj);

template <>
auto structure_to_tuple<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj);

template <>
auto structure_to_tuple<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj);

template <>
auto structure_to_tuple<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj);

template <>
auto structure_to_tuple<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj);

template <>
auto structure_to_tuple<VkComponentMapping>(const VkComponentMapping& obj);

template <>
auto structure_to_tuple<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj);

template <>
auto structure_to_tuple<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj);

template <>
auto structure_to_tuple<VkConformanceVersion>(const VkConformanceVersion& obj);

template <>
auto structure_to_tuple<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj);

template <>
auto structure_to_tuple<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj);

template <>
auto structure_to_tuple<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj);

template <>
auto structure_to_tuple<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj);

template <>
auto structure_to_tuple<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj);

template <>
auto structure_to_tuple<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj);

template <>
auto structure_to_tuple<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj);

template <>
auto structure_to_tuple<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj);

template <>
auto structure_to_tuple<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj);

template <>
auto structure_to_tuple<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj);

template <>
auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj);

template <>
auto structure_to_tuple<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj);

template <>
auto structure_to_tuple<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj);

template <>
auto structure_to_tuple<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj);

template <>
auto structure_to_tuple<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj);

template <>
auto structure_to_tuple<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj);

template <>
auto structure_to_tuple<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj);

template <>
auto structure_to_tuple<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj);

template <>
auto structure_to_tuple<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj);

template <>
auto structure_to_tuple<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj);

template <>
auto structure_to_tuple<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj);

template <>
auto structure_to_tuple<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj);

template <>
auto structure_to_tuple<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj);

template <>
auto structure_to_tuple<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj);

template <>
auto structure_to_tuple<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj);

template <>
auto structure_to_tuple<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj);

template <>
auto structure_to_tuple<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj);

template <>
auto structure_to_tuple<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj);

template <>
auto structure_to_tuple<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj);

template <>
auto structure_to_tuple<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj);

template <>
auto structure_to_tuple<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj);

template <>
auto structure_to_tuple<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj);

template <>
auto structure_to_tuple<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj);

template <>
auto structure_to_tuple<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj);

template <>
auto structure_to_tuple<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj);

template <>
auto structure_to_tuple<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj);

template <>
auto structure_to_tuple<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj);

template <>
auto structure_to_tuple<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj);

template <>
auto structure_to_tuple<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj);

template <>
auto structure_to_tuple<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj);

template <>
auto structure_to_tuple<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj);

template <>
auto structure_to_tuple<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj);

template <>
auto structure_to_tuple<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj);

template <>
auto structure_to_tuple<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj);

template <>
auto structure_to_tuple<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj);

template <>
auto structure_to_tuple<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj);

template <>
auto structure_to_tuple<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj);

template <>
auto structure_to_tuple<VkEventCreateInfo>(const VkEventCreateInfo& obj);

template <>
auto structure_to_tuple<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj);

template <>
auto structure_to_tuple<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkExtensionProperties>(const VkExtensionProperties& obj);

template <>
auto structure_to_tuple<VkExtent2D>(const VkExtent2D& obj);

template <>
auto structure_to_tuple<VkExtent3D>(const VkExtent3D& obj);

template <>
auto structure_to_tuple<VkExternalBufferProperties>(const VkExternalBufferProperties& obj);

template <>
auto structure_to_tuple<VkExternalFenceProperties>(const VkExternalFenceProperties& obj);

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
auto structure_to_tuple<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj);

template <>
auto structure_to_tuple<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj);

template <>
auto structure_to_tuple<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj);

template <>
auto structure_to_tuple<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj);

template <>
auto structure_to_tuple<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj);

template <>
auto structure_to_tuple<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj);

template <>
auto structure_to_tuple<VkFenceCreateInfo>(const VkFenceCreateInfo& obj);

template <>
auto structure_to_tuple<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkFormatProperties>(const VkFormatProperties& obj);

template <>
auto structure_to_tuple<VkFormatProperties2>(const VkFormatProperties2& obj);

template <>
auto structure_to_tuple<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj);

template <>
auto structure_to_tuple<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj);

template <>
auto structure_to_tuple<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj);

template <>
auto structure_to_tuple<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj);

template <>
auto structure_to_tuple<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj);

template <>
auto structure_to_tuple<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj);

template <>
auto structure_to_tuple<VkGeometryAABBNV>(const VkGeometryAABBNV& obj);

template <>
auto structure_to_tuple<VkGeometryDataNV>(const VkGeometryDataNV& obj);

template <>
auto structure_to_tuple<VkGeometryNV>(const VkGeometryNV& obj);

template <>
auto structure_to_tuple<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj);

template <>
auto structure_to_tuple<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj);

template <>
auto structure_to_tuple<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj);

template <>
auto structure_to_tuple<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj);

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
auto structure_to_tuple<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj);
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
auto structure_to_tuple<VkImageBlit>(const VkImageBlit& obj);

template <>
auto structure_to_tuple<VkImageCopy>(const VkImageCopy& obj);

template <>
auto structure_to_tuple<VkImageCreateInfo>(const VkImageCreateInfo& obj);

template <>
auto structure_to_tuple<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj);

template <>
auto structure_to_tuple<VkImageFormatProperties>(const VkImageFormatProperties& obj);

template <>
auto structure_to_tuple<VkImageFormatProperties2>(const VkImageFormatProperties2& obj);

template <>
auto structure_to_tuple<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj);

template <>
auto structure_to_tuple<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj);

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
auto structure_to_tuple<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj);
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
auto structure_to_tuple<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj);

template <>
auto structure_to_tuple<VkImageResolve>(const VkImageResolve& obj);

template <>
auto structure_to_tuple<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj);

template <>
auto structure_to_tuple<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj);

template <>
auto structure_to_tuple<VkImageSubresource>(const VkImageSubresource& obj);

template <>
auto structure_to_tuple<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj);

template <>
auto structure_to_tuple<VkImageSubresourceRange>(const VkImageSubresourceRange& obj);

template <>
auto structure_to_tuple<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj);

template <>
auto structure_to_tuple<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj);

template <>
auto structure_to_tuple<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj);

template <>
auto structure_to_tuple<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj);

template <>
auto structure_to_tuple<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj);

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
auto structure_to_tuple<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj);

template <>
auto structure_to_tuple<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj);

template <>
auto structure_to_tuple<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj);

template <>
auto structure_to_tuple<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj);

template <>
auto structure_to_tuple<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj);

template <>
auto structure_to_tuple<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj);

template <>
auto structure_to_tuple<VkLayerProperties>(const VkLayerProperties& obj);

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
auto structure_to_tuple<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj);
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
auto structure_to_tuple<VkMappedMemoryRange>(const VkMappedMemoryRange& obj);

template <>
auto structure_to_tuple<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj);

template <>
auto structure_to_tuple<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj);

template <>
auto structure_to_tuple<VkMemoryBarrier>(const VkMemoryBarrier& obj);

template <>
auto structure_to_tuple<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj);

template <>
auto structure_to_tuple<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj);

template <>
auto structure_to_tuple<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj);

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
auto structure_to_tuple<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkMemoryHeap>(const VkMemoryHeap& obj);

template <>
auto structure_to_tuple<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj);

template <>
auto structure_to_tuple<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj);

template <>
auto structure_to_tuple<VkMemoryRequirements>(const VkMemoryRequirements& obj);

template <>
auto structure_to_tuple<VkMemoryRequirements2>(const VkMemoryRequirements2& obj);

template <>
auto structure_to_tuple<VkMemoryType>(const VkMemoryType& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
auto structure_to_tuple<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj);
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
auto structure_to_tuple<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj);

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
auto structure_to_tuple<VkOffset2D>(const VkOffset2D& obj);

template <>
auto structure_to_tuple<VkOffset3D>(const VkOffset3D& obj);

template <>
auto structure_to_tuple<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj);

template <>
auto structure_to_tuple<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj);

template <>
auto structure_to_tuple<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj);

template <>
auto structure_to_tuple<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj);

template <>
auto structure_to_tuple<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj);

template <>
auto structure_to_tuple<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj);

template <>
auto structure_to_tuple<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj);

template <>
auto structure_to_tuple<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj);

template <>
auto structure_to_tuple<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj);

template <>
auto structure_to_tuple<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj);

template <>
auto structure_to_tuple<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj);

template <>
auto structure_to_tuple<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj);

template <>
auto structure_to_tuple<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj);

template <>
auto structure_to_tuple<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj);

template <>
auto structure_to_tuple<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj);

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
auto structure_to_tuple<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj);

template <>
auto structure_to_tuple<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj);

template <>
auto structure_to_tuple<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj);

template <>
auto structure_to_tuple<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj);

template <>
auto structure_to_tuple<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj);

template <>
auto structure_to_tuple<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj);

template <>
auto structure_to_tuple<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj);

template <>
auto structure_to_tuple<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj);

template <>
auto structure_to_tuple<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj);

template <>
auto structure_to_tuple<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj);

template <>
auto structure_to_tuple<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj);

template <>
auto structure_to_tuple<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj);

template <>
auto structure_to_tuple<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj);

#ifdef VK_USE_PLATFORM_GGP
template <>
auto structure_to_tuple<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj);
#endif // VK_USE_PLATFORM_GGP

template <>
auto structure_to_tuple<VkPresentInfoKHR>(const VkPresentInfoKHR& obj);

template <>
auto structure_to_tuple<VkPresentRegionKHR>(const VkPresentRegionKHR& obj);

template <>
auto structure_to_tuple<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj);

template <>
auto structure_to_tuple<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj);

template <>
auto structure_to_tuple<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj);

template <>
auto structure_to_tuple<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj);

template <>
auto structure_to_tuple<VkPushConstantRange>(const VkPushConstantRange& obj);

template <>
auto structure_to_tuple<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj);

template <>
auto structure_to_tuple<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj);

template <>
auto structure_to_tuple<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj);

template <>
auto structure_to_tuple<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj);

template <>
auto structure_to_tuple<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj);

template <>
auto structure_to_tuple<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj);

template <>
auto structure_to_tuple<VkRect2D>(const VkRect2D& obj);

template <>
auto structure_to_tuple<VkRectLayerKHR>(const VkRectLayerKHR& obj);

template <>
auto structure_to_tuple<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj);

template <>
auto structure_to_tuple<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj);

template <>
auto structure_to_tuple<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj);

template <>
auto structure_to_tuple<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj);

template <>
auto structure_to_tuple<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj);

template <>
auto structure_to_tuple<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj);

template <>
auto structure_to_tuple<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj);

template <>
auto structure_to_tuple<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj);

template <>
auto structure_to_tuple<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj);

template <>
auto structure_to_tuple<VkSampleLocationEXT>(const VkSampleLocationEXT& obj);

template <>
auto structure_to_tuple<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj);

template <>
auto structure_to_tuple<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj);

template <>
auto structure_to_tuple<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj);

template <>
auto structure_to_tuple<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj);

template <>
auto structure_to_tuple<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj);

template <>
auto structure_to_tuple<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj);

template <>
auto structure_to_tuple<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj);

template <>
auto structure_to_tuple<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj);

template <>
auto structure_to_tuple<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj);

template <>
auto structure_to_tuple<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj);

template <>
auto structure_to_tuple<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj);

template <>
auto structure_to_tuple<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj);

template <>
auto structure_to_tuple<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj);

template <>
auto structure_to_tuple<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj);

template <>
auto structure_to_tuple<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj);

template <>
auto structure_to_tuple<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj);

template <>
auto structure_to_tuple<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj);

template <>
auto structure_to_tuple<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj);

template <>
auto structure_to_tuple<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj);

template <>
auto structure_to_tuple<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj);

template <>
auto structure_to_tuple<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj);

template <>
auto structure_to_tuple<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj);

template <>
auto structure_to_tuple<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj);

template <>
auto structure_to_tuple<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj);

template <>
auto structure_to_tuple<VkSparseMemoryBind>(const VkSparseMemoryBind& obj);

template <>
auto structure_to_tuple<VkSpecializationInfo>(const VkSpecializationInfo& obj);

template <>
auto structure_to_tuple<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj);

template <>
auto structure_to_tuple<VkStencilOpState>(const VkStencilOpState& obj);

#ifdef VK_USE_PLATFORM_GGP
template <>
auto structure_to_tuple<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj);
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkSubmitInfo>(const VkSubmitInfo& obj);

template <>
auto structure_to_tuple<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj);

template <>
auto structure_to_tuple<VkSubpassDependency>(const VkSubpassDependency& obj);

template <>
auto structure_to_tuple<VkSubpassDependency2>(const VkSubpassDependency2& obj);

template <>
auto structure_to_tuple<VkSubpassDescription>(const VkSubpassDescription& obj);

template <>
auto structure_to_tuple<VkSubpassDescription2>(const VkSubpassDescription2& obj);

template <>
auto structure_to_tuple<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj);

template <>
auto structure_to_tuple<VkSubpassEndInfo>(const VkSubpassEndInfo& obj);

template <>
auto structure_to_tuple<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj);

template <>
auto structure_to_tuple<VkSubresourceLayout>(const VkSubresourceLayout& obj);

template <>
auto structure_to_tuple<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj);

template <>
auto structure_to_tuple<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj);

template <>
auto structure_to_tuple<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj);

template <>
auto structure_to_tuple<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj);

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj);

template <>
auto structure_to_tuple<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj);

template <>
auto structure_to_tuple<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj);

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
auto structure_to_tuple<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj);
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
auto structure_to_tuple<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj);

template <>
auto structure_to_tuple<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj);

template <>
auto structure_to_tuple<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj);

template <>
auto structure_to_tuple<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj);

template <>
auto structure_to_tuple<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj);

template <>
auto structure_to_tuple<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj);

template <>
auto structure_to_tuple<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj);

#ifdef VK_USE_PLATFORM_VI_NN
template <>
auto structure_to_tuple<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj);
#endif // VK_USE_PLATFORM_VI_NN

template <>
auto structure_to_tuple<VkViewport>(const VkViewport& obj);

template <>
auto structure_to_tuple<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj);

template <>
auto structure_to_tuple<VkViewportWScalingNV>(const VkViewportWScalingNV& obj);

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
auto structure_to_tuple<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj);
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
auto structure_to_tuple<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj);
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
auto structure_to_tuple<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
auto structure_to_tuple<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj);

template <>
auto structure_to_tuple<VkXYColorEXT>(const VkXYColorEXT& obj);

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
auto structure_to_tuple<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj);
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
auto structure_to_tuple<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj);
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj)
{
    return std::forward_as_tuple(
        obj.minX,
        obj.minY,
        obj.minZ,
        obj.maxX,
        obj.maxY,
        obj.maxZ
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type,
        obj.flags,
        obj.update,
        obj.srcAccelerationStructure,
        obj.dstAccelerationStructure,
        obj.geometryArrayOfPointers,
        obj.geometryCount,
        obj.ppGeometries,
        obj.scratchData
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.primitiveCount,
        obj.primitiveOffset,
        obj.firstVertex,
        obj.transformOffset
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.geometryType,
        obj.maxPrimitiveCount,
        obj.indexType,
        obj.maxVertexCount,
        obj.vertexFormat,
        obj.allowsTransforms
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.compactedSize,
        obj.type,
        obj.flags,
        obj.maxGeometryCount,
        Span(obj.pGeometryInfos, obj.maxGeometryCount),
        obj.deviceAddress
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.compactedSize,
        obj.info
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.accelerationStructure
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.data,
        obj.stride
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj)
{
    return std::forward_as_tuple(
        obj.triangles,
        obj.aabbs,
        obj.instances
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.arrayOfPointers,
        obj.data
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.geometryType,
        obj.geometry,
        obj.flags
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.vertexFormat,
        obj.vertexData,
        obj.vertexStride,
        obj.indexType,
        obj.indexData,
        obj.transformData
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type,
        obj.flags,
        obj.instanceCount,
        obj.geometryCount,
        Span(obj.pGeometries, obj.geometryCount)
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj)
{
    return std::forward_as_tuple(
        obj.transform,
        obj.instanceCustomIndex,
        obj.mask,
        obj.instanceShaderBindingTableRecordOffset,
        obj.flags,
        obj.accelerationStructureReference
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type,
        obj.buildType,
        obj.accelerationStructure
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type,
        obj.accelerationStructure
    );
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.versionData, obj.2*VK_UUID_SIZE)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
inline auto structure_to_tuple<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.swapchain,
        obj.timeout,
        obj.semaphore,
        obj.fence,
        obj.deviceMask
    );
}

template <>
inline auto structure_to_tuple<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.timeout
    );
}

template <>
inline auto structure_to_tuple<VkAllocationCallbacks>(const VkAllocationCallbacks& obj)
{
    return std::forward_as_tuple(
        obj.pUserData,
        obj.pfnAllocation,
        obj.pfnReallocation,
        obj.pfnFree,
        obj.pfnInternalAllocation,
        obj.pfnInternalFree
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.format,
        obj.externalFormat,
        obj.formatFeatures,
        obj.samplerYcbcrConversionComponents,
        obj.suggestedYcbcrModel,
        obj.suggestedYcbcrRange,
        obj.suggestedXChromaOffset,
        obj.suggestedYChromaOffset
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.allocationSize,
        obj.memoryTypeBits
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.androidHardwareBufferUsage
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkApplicationInfo>(const VkApplicationInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        DynamicStringTupleElementWrapper { obj.pApplicationName },
        obj.applicationVersion,
        DynamicStringTupleElementWrapper { obj.pEngineName },
        obj.engineVersion,
        obj.apiVersion
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentDescription>(const VkAttachmentDescription& obj)
{
    return std::forward_as_tuple(
        obj.flags,
        obj.format,
        obj.samples,
        obj.loadOp,
        obj.storeOp,
        obj.stencilLoadOp,
        obj.stencilStoreOp,
        obj.initialLayout,
        obj.finalLayout
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentDescription2>(const VkAttachmentDescription2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.format,
        obj.samples,
        obj.loadOp,
        obj.storeOp,
        obj.stencilLoadOp,
        obj.stencilStoreOp,
        obj.initialLayout,
        obj.finalLayout
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.stencilInitialLayout,
        obj.stencilFinalLayout
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentReference>(const VkAttachmentReference& obj)
{
    return std::forward_as_tuple(
        obj.attachment,
        obj.layout
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentReference2>(const VkAttachmentReference2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.attachment,
        obj.layout,
        obj.aspectMask
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.stencilLayout
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj)
{
    return std::forward_as_tuple(
        obj.attachmentIndex,
        obj.sampleLocationsInfo
    );
}

template <>
inline auto structure_to_tuple<VkBaseInStructure>(const VkBaseInStructure& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext }
    );
}

template <>
inline auto structure_to_tuple<VkBaseOutStructure>(const VkBaseOutStructure& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext }
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.accelerationStructure,
        obj.memory,
        obj.memoryOffset,
        obj.deviceIndexCount,
        Span(obj.pDeviceIndices, obj.deviceIndexCount)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceIndexCount,
        Span(obj.pDeviceIndices, obj.deviceIndexCount)
    );
}

template <>
inline auto structure_to_tuple<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.buffer,
        obj.memory,
        obj.memoryOffset
    );
}

template <>
inline auto structure_to_tuple<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceIndexCount,
        Span(obj.pDeviceIndices, obj.deviceIndexCount),
        obj.splitInstanceBindRegionCount,
        Span(obj.pSplitInstanceBindRegions, obj.splitInstanceBindRegionCount)
    );
}

template <>
inline auto structure_to_tuple<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.image,
        obj.memory,
        obj.memoryOffset
    );
}

template <>
inline auto structure_to_tuple<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.swapchain,
        obj.imageIndex
    );
}

template <>
inline auto structure_to_tuple<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.planeAspect
    );
}

template <>
inline auto structure_to_tuple<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj)
{
    return std::forward_as_tuple(
        obj.bufferAddress,
        obj.size,
        obj.indexType
    );
}

template <>
inline auto structure_to_tuple<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj)
{
    return std::forward_as_tuple(
        obj.groupIndex
    );
}

template <>
inline auto structure_to_tuple<VkBindSparseInfo>(const VkBindSparseInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.waitSemaphoreCount,
        Span(obj.pWaitSemaphores, obj.waitSemaphoreCount),
        obj.bufferBindCount,
        Span(obj.pBufferBinds, obj.bufferBindCount),
        obj.imageOpaqueBindCount,
        Span(obj.pImageOpaqueBinds, obj.imageOpaqueBindCount),
        obj.imageBindCount,
        Span(obj.pImageBinds, obj.imageBindCount),
        obj.signalSemaphoreCount,
        Span(obj.pSignalSemaphores, obj.signalSemaphoreCount)
    );
}

template <>
inline auto structure_to_tuple<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj)
{
    return std::forward_as_tuple(
        obj.bufferAddress,
        obj.size,
        obj.stride
    );
}

template <>
inline auto structure_to_tuple<VkBufferCopy>(const VkBufferCopy& obj)
{
    return std::forward_as_tuple(
        obj.srcOffset,
        obj.dstOffset,
        obj.size
    );
}

template <>
inline auto structure_to_tuple<VkBufferCreateInfo>(const VkBufferCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.size,
        obj.usage,
        obj.sharingMode,
        obj.queueFamilyIndexCount,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount)
    );
}

template <>
inline auto structure_to_tuple<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceAddress
    );
}

template <>
inline auto structure_to_tuple<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.buffer
    );
}

template <>
inline auto structure_to_tuple<VkBufferImageCopy>(const VkBufferImageCopy& obj)
{
    return std::forward_as_tuple(
        obj.bufferOffset,
        obj.bufferRowLength,
        obj.bufferImageHeight,
        obj.imageSubresource,
        obj.imageOffset,
        obj.imageExtent
    );
}

template <>
inline auto structure_to_tuple<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.srcAccessMask,
        obj.dstAccessMask,
        obj.srcQueueFamilyIndex,
        obj.dstQueueFamilyIndex,
        obj.buffer,
        obj.offset,
        obj.size
    );
}

template <>
inline auto structure_to_tuple<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.buffer
    );
}

template <>
inline auto structure_to_tuple<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.opaqueCaptureAddress
    );
}

template <>
inline auto structure_to_tuple<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.buffer,
        obj.format,
        obj.offset,
        obj.range
    );
}

template <>
inline auto structure_to_tuple<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.timeDomain
    );
}

template <>
inline auto structure_to_tuple<VkCheckpointDataNV>(const VkCheckpointDataNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.stage,
        obj.pCheckpointMarker
    );
}

template <>
inline auto structure_to_tuple<VkClearAttachment>(const VkClearAttachment& obj)
{
    return std::forward_as_tuple(
        obj.aspectMask,
        obj.colorAttachment,
        obj.clearValue
    );
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
inline auto structure_to_tuple<VkClearColorValue>(const VkClearColorValue& obj)
{
    return std::forward_as_tuple(
        Span(obj.float32, 4),
        Span(obj.int32, 4),
        Span(obj.uint32, 4)
    );
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
inline auto structure_to_tuple<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj)
{
    return std::forward_as_tuple(
        obj.depth,
        obj.stencil
    );
}

template <>
inline auto structure_to_tuple<VkClearRect>(const VkClearRect& obj)
{
    return std::forward_as_tuple(
        obj.rect,
        obj.baseArrayLayer,
        obj.layerCount
    );
}

template <>
inline auto structure_to_tuple<VkClearValue>(const VkClearValue& obj)
{
    return std::forward_as_tuple(
        obj.color,
        obj.depthStencil
    );
}

template <>
inline auto structure_to_tuple<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj)
{
    return std::forward_as_tuple(
        obj.pixelX,
        obj.pixelY,
        obj.sample
    );
}

template <>
inline auto structure_to_tuple<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj)
{
    return std::forward_as_tuple(
        obj.shadingRate,
        obj.sampleCount,
        obj.sampleLocationCount,
        Span(obj.pSampleLocations, obj.sampleLocationCount)
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.commandPool,
        obj.level,
        obj.commandBufferCount
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pInheritanceInfo
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.conditionalRenderingEnable
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.renderPass,
        obj.subpass,
        obj.framebuffer,
        obj.occlusionQueryEnable,
        obj.queryFlags,
        obj.pipelineStatistics
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.transform,
        obj.renderArea
    );
}

template <>
inline auto structure_to_tuple<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.queueFamilyIndex
    );
}

template <>
inline auto structure_to_tuple<VkComponentMapping>(const VkComponentMapping& obj)
{
    return std::forward_as_tuple(
        obj.r,
        obj.g,
        obj.b,
        obj.a
    );
}

template <>
inline auto structure_to_tuple<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.stage,
        obj.layout,
        obj.basePipelineHandle,
        obj.basePipelineIndex
    );
}

template <>
inline auto structure_to_tuple<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.buffer,
        obj.offset,
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkConformanceVersion>(const VkConformanceVersion& obj)
{
    return std::forward_as_tuple(
        obj.major,
        obj.minor,
        obj.subminor,
        obj.patch
    );
}

template <>
inline auto structure_to_tuple<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.MSize,
        obj.NSize,
        obj.KSize,
        obj.AType,
        obj.BType,
        obj.CType,
        obj.DType,
        obj.scope
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.src,
        obj.dst,
        obj.mode
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.src,
        obj.dst,
        obj.mode
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.srcSet,
        obj.srcBinding,
        obj.srcArrayElement,
        obj.dstSet,
        obj.dstBinding,
        obj.dstArrayElement,
        obj.descriptorCount
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.src,
        obj.dst,
        obj.mode
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.waitSemaphoreValuesCount,
        Span(obj.pWaitSemaphoreValues, obj.waitSemaphoreValuesCount),
        obj.signalSemaphoreValuesCount,
        Span(obj.pSignalSemaphoreValues, obj.signalSemaphoreValuesCount)
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        DynamicStringTupleElementWrapper { obj.pMarkerName },
        Span(obj.color, 4)
    );
}

template <>
inline auto structure_to_tuple<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.objectType,
        obj.object,
        DynamicStringTupleElementWrapper { obj.pObjectName }
    );
}

template <>
inline auto structure_to_tuple<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.objectType,
        obj.object,
        obj.tagName,
        obj.tagSize,
        Span((const uint8_t*)obj.pTag, obj.tagSize)
    );
}

template <>
inline auto structure_to_tuple<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pfnCallback,
        obj.pUserData
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        DynamicStringTupleElementWrapper { obj.pLabelName },
        Span(obj.color, 4)
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        DynamicStringTupleElementWrapper { obj.pMessageIdName },
        obj.messageIdNumber,
        DynamicStringTupleElementWrapper { obj.pMessage },
        obj.queueLabelCount,
        Span(obj.pQueueLabels, obj.queueLabelCount),
        obj.cmdBufLabelCount,
        Span(obj.pCmdBufLabels, obj.cmdBufLabelCount),
        obj.objectCount,
        Span(obj.pObjects, obj.objectCount)
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.messageSeverity,
        obj.messageType,
        obj.pfnUserCallback,
        obj.pUserData
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.objectType,
        obj.objectHandle,
        DynamicStringTupleElementWrapper { obj.pObjectName }
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.objectType,
        obj.objectHandle,
        obj.tagName,
        obj.tagSize,
        Span((const uint8_t*)obj.pTag, obj.tagSize)
    );
}

template <>
inline auto structure_to_tuple<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.dedicatedAllocation
    );
}

template <>
inline auto structure_to_tuple<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.dedicatedAllocation
    );
}

template <>
inline auto structure_to_tuple<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.image,
        obj.buffer
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.operationHandle
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj)
{
    return std::forward_as_tuple(
        obj.buffer,
        obj.offset,
        obj.range
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj)
{
    return std::forward_as_tuple(
        obj.sampler,
        obj.imageView,
        obj.imageLayout
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.maxSets,
        obj.poolSizeCount,
        Span(obj.pPoolSizes, obj.poolSizeCount)
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxInlineUniformBlockBindings
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj)
{
    return std::forward_as_tuple(
        obj.type,
        obj.descriptorCount
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.descriptorPool,
        obj.descriptorSetCount,
        Span(obj.pSetLayouts, obj.descriptorSetCount)
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj)
{
    return std::forward_as_tuple(
        obj.binding,
        obj.descriptorType,
        obj.descriptorCount,
        obj.stageFlags,
        Span(obj.pImmutableSamplers, obj.descriptorCount)
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.bindingCount,
        Span(obj.pBindingFlags, obj.bindingCount)
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.bindingCount,
        Span(obj.pBindings, obj.bindingCount)
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.supported
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.descriptorSetCount,
        Span(obj.pDescriptorCounts, obj.descriptorSetCount)
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxVariableDescriptorCount
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.descriptorUpdateEntryCount,
        Span(obj.pDescriptorUpdateEntries, obj.descriptorUpdateEntryCount),
        obj.templateType,
        obj.descriptorSetLayout,
        obj.pipelineBindPoint,
        obj.pipelineLayout,
        obj.set
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj)
{
    return std::forward_as_tuple(
        obj.dstBinding,
        obj.dstArrayElement,
        obj.descriptorCount,
        obj.descriptorType,
        obj.offset,
        obj.stride
    );
}

template <>
inline auto structure_to_tuple<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.queueCreateInfoCount,
        Span(obj.pQueueCreateInfos, obj.queueCreateInfoCount),
        obj.enabledLayerCount,
        DynamicStringArrayTupleElementWrapper { obj.enabledLayerCount, obj.ppEnabledLayerNames },
        obj.enabledExtensionCount,
        DynamicStringArrayTupleElementWrapper { obj.enabledExtensionCount, obj.ppEnabledExtensionNames },
        obj.pEnabledFeatures
    );
}

template <>
inline auto structure_to_tuple<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceEvent
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.resourceDeviceIndex,
        obj.memoryDeviceIndex
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceMask
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.physicalDeviceCount,
        Span(obj.pPhysicalDevices, obj.physicalDeviceCount)
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.presentMask, VK_MAX_DEVICE_GROUP_SIZE),
        obj.modes
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.swapchainCount,
        Span(obj.pDeviceMasks, obj.swapchainCount),
        obj.mode
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceMask,
        obj.deviceRenderAreaCount,
        Span(obj.pDeviceRenderAreas, obj.deviceRenderAreaCount)
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.waitSemaphoreCount,
        Span(obj.pWaitSemaphoreDeviceIndices, obj.waitSemaphoreCount),
        obj.commandBufferCount,
        Span(obj.pCommandBufferDeviceMasks, obj.commandBufferCount),
        obj.signalSemaphoreCount,
        Span(obj.pSignalSemaphoreDeviceIndices, obj.signalSemaphoreCount)
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.modes
    );
}

template <>
inline auto structure_to_tuple<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memory
    );
}

template <>
inline auto structure_to_tuple<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.overallocationBehavior
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj)
{
    return std::forward_as_tuple(
        obj.deviceAddress,
        obj.hostAddress
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj)
{
    return std::forward_as_tuple(
        obj.deviceAddress,
        obj.hostAddress
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.queueFamilyIndex,
        obj.queueCount,
        Span(obj.pQueuePriorities, obj.queueCount)
    );
}

template <>
inline auto structure_to_tuple<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.globalPriority
    );
}

template <>
inline auto structure_to_tuple<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.queueFamilyIndex,
        obj.queueIndex
    );
}

template <>
inline auto structure_to_tuple<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj)
{
    return std::forward_as_tuple(
        obj.x,
        obj.y,
        obj.z
    );
}

template <>
inline auto structure_to_tuple<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.displayEvent
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.parameters
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj)
{
    return std::forward_as_tuple(
        obj.visibleRegion,
        obj.refreshRate
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.displayModeProperties
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.displayMode,
        obj.parameters
    );
}

template <>
inline auto structure_to_tuple<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.localDimmingSupport
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.capabilities
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.supportedAlpha,
        obj.minSrcPosition,
        obj.maxSrcPosition,
        obj.minSrcExtent,
        obj.maxSrcExtent,
        obj.minDstPosition,
        obj.maxDstPosition,
        obj.minDstExtent,
        obj.maxDstExtent
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.mode,
        obj.planeIndex
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.displayPlaneProperties
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.currentDisplay,
        obj.currentStackIndex
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.powerState
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.srcRect,
        obj.dstRect,
        obj.persistent
    );
}

template <>
inline auto structure_to_tuple<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.displayProperties
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.display,
        DynamicStringTupleElementWrapper { obj.displayName },
        obj.physicalDimensions,
        obj.physicalResolution,
        obj.supportedTransforms,
        obj.planeReorderPossible,
        obj.persistentContent
    );
}

template <>
inline auto structure_to_tuple<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.displayMode,
        obj.planeIndex,
        obj.planeStackIndex,
        obj.transform,
        obj.globalAlpha,
        obj.alphaMode,
        obj.imageExtent
    );
}

template <>
inline auto structure_to_tuple<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj)
{
    return std::forward_as_tuple(
        obj.indexCount,
        obj.instanceCount,
        obj.firstIndex,
        obj.vertexOffset,
        obj.firstInstance
    );
}

template <>
inline auto structure_to_tuple<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj)
{
    return std::forward_as_tuple(
        obj.vertexCount,
        obj.instanceCount,
        obj.firstVertex,
        obj.firstInstance
    );
}

template <>
inline auto structure_to_tuple<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj)
{
    return std::forward_as_tuple(
        obj.taskCount,
        obj.firstTask
    );
}

template <>
inline auto structure_to_tuple<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.drmFormatModifier,
        obj.drmFormatModifierPlaneCount,
        obj.drmFormatModifierTilingFeatures
    );
}

template <>
inline auto structure_to_tuple<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.drmFormatModifierCount,
        Span(obj.pDrmFormatModifierProperties, obj.drmFormatModifierCount)
    );
}

template <>
inline auto structure_to_tuple<VkEventCreateInfo>(const VkEventCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleTypes
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pAttributes,
        obj.dwAccess,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleTypes
    );
}

template <>
inline auto structure_to_tuple<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleTypes
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pAttributes,
        obj.dwAccess,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pAttributes,
        obj.dwAccess
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleTypes
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pAttributes,
        obj.dwAccess,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkExtensionProperties>(const VkExtensionProperties& obj)
{
    return std::forward_as_tuple(
        Span(obj.extensionName, VK_MAX_EXTENSION_NAME_SIZE),
        obj.specVersion
    );
}

template <>
inline auto structure_to_tuple<VkExtent2D>(const VkExtent2D& obj)
{
    return std::forward_as_tuple(
        obj.width,
        obj.height
    );
}

template <>
inline auto structure_to_tuple<VkExtent3D>(const VkExtent3D& obj)
{
    return std::forward_as_tuple(
        obj.width,
        obj.height,
        obj.depth
    );
}

template <>
inline auto structure_to_tuple<VkExternalBufferProperties>(const VkExternalBufferProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.externalMemoryProperties
    );
}

template <>
inline auto structure_to_tuple<VkExternalFenceProperties>(const VkExternalFenceProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.exportFromImportedHandleTypes,
        obj.compatibleHandleTypes,
        obj.externalFenceFeatures
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.externalFormat
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.externalMemoryProperties
    );
}

template <>
inline auto structure_to_tuple<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.imageFormatProperties,
        obj.externalMemoryFeatures,
        obj.exportFromImportedHandleTypes,
        obj.compatibleHandleTypes
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleTypes
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleTypes
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleTypes
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj)
{
    return std::forward_as_tuple(
        obj.externalMemoryFeatures,
        obj.exportFromImportedHandleTypes,
        obj.compatibleHandleTypes
    );
}

template <>
inline auto structure_to_tuple<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.exportFromImportedHandleTypes,
        obj.compatibleHandleTypes,
        obj.externalSemaphoreFeatures
    );
}

template <>
inline auto structure_to_tuple<VkFenceCreateInfo>(const VkFenceCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fence,
        obj.handleType
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fence,
        obj.handleType
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.filterCubic,
        obj.filterCubicMinmax
    );
}

template <>
inline auto structure_to_tuple<VkFormatProperties>(const VkFormatProperties& obj)
{
    return std::forward_as_tuple(
        obj.linearTilingFeatures,
        obj.optimalTilingFeatures,
        obj.bufferFeatures
    );
}

template <>
inline auto structure_to_tuple<VkFormatProperties2>(const VkFormatProperties2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.formatProperties
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.usage,
        obj.width,
        obj.height,
        obj.layerCount,
        obj.viewFormatCount,
        Span(obj.pViewFormats, obj.viewFormatCount)
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.attachmentImageInfoCount,
        Span(obj.pAttachmentImageInfos, obj.attachmentImageInfoCount)
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.renderPass,
        obj.attachmentCount,
        Span(obj.pAttachments, obj.attachmentCount),
        obj.width,
        obj.height,
        obj.layers
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.coverageReductionMode,
        obj.rasterizationSamples,
        obj.depthStencilSamples,
        obj.colorSamples
    );
}

template <>
inline auto structure_to_tuple<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pipelineBindPoint,
        obj.pipeline,
        obj.indirectCommandsLayout,
        obj.streamCount,
        Span(obj.pStreams, obj.streamCount),
        obj.sequencesCount,
        obj.preprocessBuffer,
        obj.preprocessOffset,
        obj.preprocessSize,
        obj.sequencesCountBuffer,
        obj.sequencesCountOffset,
        obj.sequencesIndexBuffer,
        obj.sequencesIndexOffset
    );
}

template <>
inline auto structure_to_tuple<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pipelineBindPoint,
        obj.pipeline,
        obj.indirectCommandsLayout,
        obj.maxSequencesCount
    );
}

template <>
inline auto structure_to_tuple<VkGeometryAABBNV>(const VkGeometryAABBNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.aabbData,
        obj.numAABBs,
        obj.stride,
        obj.offset
    );
}

template <>
inline auto structure_to_tuple<VkGeometryDataNV>(const VkGeometryDataNV& obj)
{
    return std::forward_as_tuple(
        obj.triangles,
        obj.aabbs
    );
}

template <>
inline auto structure_to_tuple<VkGeometryNV>(const VkGeometryNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.geometryType,
        obj.geometry,
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.vertexData,
        obj.vertexOffset,
        obj.vertexCount,
        obj.vertexStride,
        obj.vertexFormat,
        obj.indexData,
        obj.indexOffset,
        obj.indexCount,
        obj.indexType,
        obj.transformData,
        obj.transformOffset
    );
}

template <>
inline auto structure_to_tuple<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.stageCount,
        Span(obj.pStages, obj.stageCount),
        obj.pVertexInputState,
        obj.pInputAssemblyState,
        obj.pTessellationState,
        obj.pViewportState,
        obj.pRasterizationState,
        obj.pMultisampleState,
        obj.pDepthStencilState,
        obj.pColorBlendState,
        obj.pDynamicState,
        obj.layout,
        obj.renderPass,
        obj.subpass,
        obj.basePipelineHandle,
        obj.basePipelineIndex
    );
}

template <>
inline auto structure_to_tuple<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.groupCount,
        Span(obj.pGroups, obj.groupCount),
        obj.pipelineCount,
        Span(obj.pPipelines, obj.pipelineCount)
    );
}

template <>
inline auto structure_to_tuple<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.stageCount,
        Span(obj.pStages, obj.stageCount),
        obj.pVertexInputState,
        obj.pTessellationState
    );
}

template <>
inline auto structure_to_tuple<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.displayPrimaryRed,
        obj.displayPrimaryGreen,
        obj.displayPrimaryBlue,
        obj.whitePoint,
        obj.maxLuminance,
        obj.minLuminance,
        obj.maxContentLightLevel,
        obj.maxFrameAverageLightLevel
    );
}

template <>
inline auto structure_to_tuple<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags
    );
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
inline auto structure_to_tuple<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pView
    );
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
inline auto structure_to_tuple<VkImageBlit>(const VkImageBlit& obj)
{
    return std::forward_as_tuple(
        obj.srcSubresource,
        Span(obj.srcOffsets, 2),
        obj.dstSubresource,
        Span(obj.dstOffsets, 2)
    );
}

template <>
inline auto structure_to_tuple<VkImageCopy>(const VkImageCopy& obj)
{
    return std::forward_as_tuple(
        obj.srcSubresource,
        obj.srcOffset,
        obj.dstSubresource,
        obj.dstOffset,
        obj.extent
    );
}

template <>
inline auto structure_to_tuple<VkImageCreateInfo>(const VkImageCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.imageType,
        obj.format,
        obj.extent,
        obj.mipLevels,
        obj.arrayLayers,
        obj.samples,
        obj.tiling,
        obj.usage,
        obj.sharingMode,
        obj.queueFamilyIndexCount,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount),
        obj.initialLayout
    );
}

template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.drmFormatModifier,
        obj.drmFormatModifierPlaneCount,
        Span(obj.pPlaneLayouts, obj.drmFormatModifierPlaneCount)
    );
}

template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.drmFormatModifierCount,
        Span(obj.pDrmFormatModifiers, obj.drmFormatModifierCount)
    );
}

template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.drmFormatModifier
    );
}

template <>
inline auto structure_to_tuple<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.viewFormatCount,
        Span(obj.pViewFormats, obj.viewFormatCount)
    );
}

template <>
inline auto structure_to_tuple<VkImageFormatProperties>(const VkImageFormatProperties& obj)
{
    return std::forward_as_tuple(
        obj.maxExtent,
        obj.maxMipLevels,
        obj.maxArrayLayers,
        obj.sampleCounts,
        obj.maxResourceSize
    );
}

template <>
inline auto structure_to_tuple<VkImageFormatProperties2>(const VkImageFormatProperties2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.imageFormatProperties
    );
}

template <>
inline auto structure_to_tuple<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.srcAccessMask,
        obj.dstAccessMask,
        obj.oldLayout,
        obj.newLayout,
        obj.srcQueueFamilyIndex,
        obj.dstQueueFamilyIndex,
        obj.image,
        obj.subresourceRange
    );
}

template <>
inline auto structure_to_tuple<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.image
    );
}

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
inline auto structure_to_tuple<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.imagePipeHandle
    );
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
inline auto structure_to_tuple<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.planeAspect
    );
}

template <>
inline auto structure_to_tuple<VkImageResolve>(const VkImageResolve& obj)
{
    return std::forward_as_tuple(
        obj.srcSubresource,
        obj.srcOffset,
        obj.dstSubresource,
        obj.dstOffset,
        obj.extent
    );
}

template <>
inline auto structure_to_tuple<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.image
    );
}

template <>
inline auto structure_to_tuple<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.stencilUsage
    );
}

template <>
inline auto structure_to_tuple<VkImageSubresource>(const VkImageSubresource& obj)
{
    return std::forward_as_tuple(
        obj.aspectMask,
        obj.mipLevel,
        obj.arrayLayer
    );
}

template <>
inline auto structure_to_tuple<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj)
{
    return std::forward_as_tuple(
        obj.aspectMask,
        obj.mipLevel,
        obj.baseArrayLayer,
        obj.layerCount
    );
}

template <>
inline auto structure_to_tuple<VkImageSubresourceRange>(const VkImageSubresourceRange& obj)
{
    return std::forward_as_tuple(
        obj.aspectMask,
        obj.baseMipLevel,
        obj.levelCount,
        obj.baseArrayLayer,
        obj.layerCount
    );
}

template <>
inline auto structure_to_tuple<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.swapchain
    );
}

template <>
inline auto structure_to_tuple<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.decodeMode
    );
}

template <>
inline auto structure_to_tuple<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.image,
        obj.viewType,
        obj.format,
        obj.components,
        obj.subresourceRange
    );
}

template <>
inline auto structure_to_tuple<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.imageView,
        obj.descriptorType,
        obj.sampler
    );
}

template <>
inline auto structure_to_tuple<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.usage
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.buffer
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fence,
        obj.flags,
        obj.handleType,
        obj.fd
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fence,
        obj.flags,
        obj.handleType,
        obj.handle,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleType,
        obj.fd
    );
}

template <>
inline auto structure_to_tuple<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleType,
        obj.pHostPointer
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleType,
        obj.handle,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleType,
        obj.handle
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.semaphore,
        obj.flags,
        obj.handleType,
        obj.fd
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.semaphore,
        obj.flags,
        obj.handleType,
        obj.handle,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pipelineBindPoint,
        obj.tokenCount,
        Span(obj.pTokens, obj.tokenCount),
        obj.streamCount,
        Span(obj.pStreamStrides, obj.streamCount)
    );
}

template <>
inline auto structure_to_tuple<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.tokenType,
        obj.stream,
        obj.offset,
        obj.vertexBindingUnit,
        obj.vertexDynamicStride,
        obj.pushconstantPipelineLayout,
        obj.pushconstantShaderStageFlags,
        obj.pushconstantOffset,
        obj.pushconstantSize,
        obj.indirectStateFlags,
        obj.indexTypeCount,
        Span(obj.pIndexTypes, obj.indexTypeCount),
        Span(obj.pIndexTypeValues, obj.indexTypeCount)
    );
}

template <>
inline auto structure_to_tuple<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj)
{
    return std::forward_as_tuple(
        obj.buffer,
        obj.offset
    );
}

template <>
inline auto structure_to_tuple<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pUserData
    );
}

template <>
inline auto structure_to_tuple<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj)
{
    return std::forward_as_tuple(
        obj.subpass,
        obj.inputAttachmentIndex,
        obj.aspectMask
    );
}

template <>
inline auto structure_to_tuple<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pApplicationInfo,
        obj.enabledLayerCount,
        DynamicStringArrayTupleElementWrapper { obj.enabledLayerCount, obj.ppEnabledLayerNames },
        obj.enabledExtensionCount,
        DynamicStringArrayTupleElementWrapper { obj.enabledExtensionCount, obj.ppEnabledExtensionNames }
    );
}

template <>
inline auto structure_to_tuple<VkLayerProperties>(const VkLayerProperties& obj)
{
    return std::forward_as_tuple(
        Span(obj.layerName, VK_MAX_EXTENSION_NAME_SIZE),
        obj.specVersion,
        obj.implementationVersion,
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE)
    );
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
inline auto structure_to_tuple<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pView
    );
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
inline auto structure_to_tuple<VkMappedMemoryRange>(const VkMappedMemoryRange& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memory,
        obj.offset,
        obj.size
    );
}

template <>
inline auto structure_to_tuple<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.deviceMask
    );
}

template <>
inline auto structure_to_tuple<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.allocationSize,
        obj.memoryTypeIndex
    );
}

template <>
inline auto structure_to_tuple<VkMemoryBarrier>(const VkMemoryBarrier& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.srcAccessMask,
        obj.dstAccessMask
    );
}

template <>
inline auto structure_to_tuple<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.image,
        obj.buffer
    );
}

template <>
inline auto structure_to_tuple<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.prefersDedicatedAllocation,
        obj.requiresDedicatedAllocation
    );
}

template <>
inline auto structure_to_tuple<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memoryTypeBits
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memory
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memory,
        obj.handleType
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memory,
        obj.handleType
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkMemoryHeap>(const VkMemoryHeap& obj)
{
    return std::forward_as_tuple(
        obj.size,
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memoryTypeBits
    );
}

template <>
inline auto structure_to_tuple<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.opaqueCaptureAddress
    );
}

template <>
inline auto structure_to_tuple<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.priority
    );
}

template <>
inline auto structure_to_tuple<VkMemoryRequirements>(const VkMemoryRequirements& obj)
{
    return std::forward_as_tuple(
        obj.size,
        obj.alignment,
        obj.memoryTypeBits
    );
}

template <>
inline auto structure_to_tuple<VkMemoryRequirements2>(const VkMemoryRequirements2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memoryRequirements
    );
}

template <>
inline auto structure_to_tuple<VkMemoryType>(const VkMemoryType& obj)
{
    return std::forward_as_tuple(
        obj.propertyFlags,
        obj.heapIndex
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memoryTypeBits
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
inline auto structure_to_tuple<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pLayer
    );
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
inline auto structure_to_tuple<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxSampleLocationGridSize
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handle,
        obj.stride,
        obj.format,
        obj.usage,
        obj.usage2
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj)
{
    return std::forward_as_tuple(
        obj.consumer,
        obj.producer
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkOffset2D>(const VkOffset2D& obj)
{
    return std::forward_as_tuple(
        obj.x,
        obj.y
    );
}

template <>
inline auto structure_to_tuple<VkOffset3D>(const VkOffset3D& obj)
{
    return std::forward_as_tuple(
        obj.x,
        obj.y,
        obj.z
    );
}

template <>
inline auto structure_to_tuple<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj)
{
    return std::forward_as_tuple(
        obj.presentID,
        obj.desiredPresentTime,
        obj.actualPresentTime,
        obj.earliestPresentTime,
        obj.presentMargin
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        Span(obj.name, VK_MAX_DESCRIPTION_SIZE),
        Span(obj.category, VK_MAX_DESCRIPTION_SIZE),
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE)
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.unit,
        obj.scope,
        obj.storage,
        Span(obj.uuid, VK_UUID_SIZE)
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj)
{
    return std::forward_as_tuple(
        obj.int32,
        obj.int64,
        obj.uint32,
        obj.uint64,
        obj.float32,
        obj.float64
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.marker
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type,
        obj.enable,
        obj.parameter
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.counterPassIndex
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.marker
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj)
{
    return std::forward_as_tuple(
        obj.value32,
        obj.value64,
        obj.valueFloat,
        obj.valueBool,
        obj.valueString
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj)
{
    return std::forward_as_tuple(
        obj.type,
        obj.data
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.storageBuffer16BitAccess,
        obj.uniformAndStorageBuffer16BitAccess,
        obj.storagePushConstant16,
        obj.storageInputOutput16
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.storageBuffer8BitAccess,
        obj.uniformAndStorageBuffer8BitAccess,
        obj.storagePushConstant8
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.decodeModeSharedExponent
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.advancedBlendCoherentOperations
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.advancedBlendMaxColorAttachments,
        obj.advancedBlendIndependentBlend,
        obj.advancedBlendNonPremultipliedSrcColor,
        obj.advancedBlendNonPremultipliedDstColor,
        obj.advancedBlendCorrelatedOverlap,
        obj.advancedBlendAllOperations
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.bufferDeviceAddress,
        obj.bufferDeviceAddressCaptureReplay,
        obj.bufferDeviceAddressMultiDevice
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.bufferDeviceAddress,
        obj.bufferDeviceAddressCaptureReplay,
        obj.bufferDeviceAddressMultiDevice
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceCoherentMemory
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.computeDerivativeGroupQuads,
        obj.computeDerivativeGroupLinear
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.conditionalRendering,
        obj.inheritedConditionalRendering
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.primitiveOverestimationSize,
        obj.maxExtraPrimitiveOverestimationSize,
        obj.extraPrimitiveOverestimationSizeGranularity,
        obj.primitiveUnderestimation,
        obj.conservativePointAndLineRasterization,
        obj.degenerateTrianglesRasterized,
        obj.degenerateLinesRasterized,
        obj.fullyCoveredFragmentShaderInputVariable,
        obj.conservativeRasterizationPostDepthCoverage
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.cooperativeMatrix,
        obj.cooperativeMatrixRobustBufferAccess
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.cooperativeMatrixSupportedStages
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.cornerSampledImage
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.coverageReductionMode
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.dedicatedAllocationImageAliasing
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.depthClipEnable
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.supportedDepthResolveModes,
        obj.supportedStencilResolveModes,
        obj.independentResolveNone,
        obj.independentResolve
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderInputAttachmentArrayDynamicIndexing,
        obj.shaderUniformTexelBufferArrayDynamicIndexing,
        obj.shaderStorageTexelBufferArrayDynamicIndexing,
        obj.shaderUniformBufferArrayNonUniformIndexing,
        obj.shaderSampledImageArrayNonUniformIndexing,
        obj.shaderStorageBufferArrayNonUniformIndexing,
        obj.shaderStorageImageArrayNonUniformIndexing,
        obj.shaderInputAttachmentArrayNonUniformIndexing,
        obj.shaderUniformTexelBufferArrayNonUniformIndexing,
        obj.shaderStorageTexelBufferArrayNonUniformIndexing,
        obj.descriptorBindingUniformBufferUpdateAfterBind,
        obj.descriptorBindingSampledImageUpdateAfterBind,
        obj.descriptorBindingStorageImageUpdateAfterBind,
        obj.descriptorBindingStorageBufferUpdateAfterBind,
        obj.descriptorBindingUniformTexelBufferUpdateAfterBind,
        obj.descriptorBindingStorageTexelBufferUpdateAfterBind,
        obj.descriptorBindingUpdateUnusedWhilePending,
        obj.descriptorBindingPartiallyBound,
        obj.descriptorBindingVariableDescriptorCount,
        obj.runtimeDescriptorArray
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxUpdateAfterBindDescriptorsInAllPools,
        obj.shaderUniformBufferArrayNonUniformIndexingNative,
        obj.shaderSampledImageArrayNonUniformIndexingNative,
        obj.shaderStorageBufferArrayNonUniformIndexingNative,
        obj.shaderStorageImageArrayNonUniformIndexingNative,
        obj.shaderInputAttachmentArrayNonUniformIndexingNative,
        obj.robustBufferAccessUpdateAfterBind,
        obj.quadDivergentImplicitLod,
        obj.maxPerStageDescriptorUpdateAfterBindSamplers,
        obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers,
        obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers,
        obj.maxPerStageDescriptorUpdateAfterBindSampledImages,
        obj.maxPerStageDescriptorUpdateAfterBindStorageImages,
        obj.maxPerStageDescriptorUpdateAfterBindInputAttachments,
        obj.maxPerStageUpdateAfterBindResources,
        obj.maxDescriptorSetUpdateAfterBindSamplers,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffers,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffers,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
        obj.maxDescriptorSetUpdateAfterBindSampledImages,
        obj.maxDescriptorSetUpdateAfterBindStorageImages,
        obj.maxDescriptorSetUpdateAfterBindInputAttachments
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.deviceGeneratedCommands
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxGraphicsShaderGroupCount,
        obj.maxIndirectSequenceCount,
        obj.maxIndirectCommandsTokenCount,
        obj.maxIndirectCommandsStreamCount,
        obj.maxIndirectCommandsTokenOffset,
        obj.maxIndirectCommandsStreamStride,
        obj.minSequencesCountBufferOffsetAlignment,
        obj.minSequencesIndexBufferOffsetAlignment,
        obj.minIndirectCommandsBufferOffsetAlignment
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.diagnosticsConfig
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxDiscardRectangles
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.driverID,
        Span(obj.driverName, VK_MAX_DRIVER_NAME_SIZE),
        Span(obj.driverInfo, VK_MAX_DRIVER_INFO_SIZE),
        obj.conformanceVersion
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.exclusiveScissor
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.usage,
        obj.handleType
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleType
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleType
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.minImportedHostPointerAlignment
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.handleType
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj)
{
    return std::forward_as_tuple(
        obj.robustBufferAccess,
        obj.fullDrawIndexUint32,
        obj.imageCubeArray,
        obj.independentBlend,
        obj.geometryShader,
        obj.tessellationShader,
        obj.sampleRateShading,
        obj.dualSrcBlend,
        obj.logicOp,
        obj.multiDrawIndirect,
        obj.drawIndirectFirstInstance,
        obj.depthClamp,
        obj.depthBiasClamp,
        obj.fillModeNonSolid,
        obj.depthBounds,
        obj.wideLines,
        obj.largePoints,
        obj.alphaToOne,
        obj.multiViewport,
        obj.samplerAnisotropy,
        obj.textureCompressionETC2,
        obj.textureCompressionASTC_LDR,
        obj.textureCompressionBC,
        obj.occlusionQueryPrecise,
        obj.pipelineStatisticsQuery,
        obj.vertexPipelineStoresAndAtomics,
        obj.fragmentStoresAndAtomics,
        obj.shaderTessellationAndGeometryPointSize,
        obj.shaderImageGatherExtended,
        obj.shaderStorageImageExtendedFormats,
        obj.shaderStorageImageMultisample,
        obj.shaderStorageImageReadWithoutFormat,
        obj.shaderStorageImageWriteWithoutFormat,
        obj.shaderUniformBufferArrayDynamicIndexing,
        obj.shaderSampledImageArrayDynamicIndexing,
        obj.shaderStorageBufferArrayDynamicIndexing,
        obj.shaderStorageImageArrayDynamicIndexing,
        obj.shaderClipDistance,
        obj.shaderCullDistance,
        obj.shaderFloat64,
        obj.shaderInt64,
        obj.shaderInt16,
        obj.shaderResourceResidency,
        obj.shaderResourceMinLod,
        obj.sparseBinding,
        obj.sparseResidencyBuffer,
        obj.sparseResidencyImage2D,
        obj.sparseResidencyImage3D,
        obj.sparseResidency2Samples,
        obj.sparseResidency4Samples,
        obj.sparseResidency8Samples,
        obj.sparseResidency16Samples,
        obj.sparseResidencyAliased,
        obj.variableMultisampleRate,
        obj.inheritedQueries
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.features
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.denormBehaviorIndependence,
        obj.roundingModeIndependence,
        obj.shaderSignedZeroInfNanPreserveFloat16,
        obj.shaderSignedZeroInfNanPreserveFloat32,
        obj.shaderSignedZeroInfNanPreserveFloat64,
        obj.shaderDenormPreserveFloat16,
        obj.shaderDenormPreserveFloat32,
        obj.shaderDenormPreserveFloat64,
        obj.shaderDenormFlushToZeroFloat16,
        obj.shaderDenormFlushToZeroFloat32,
        obj.shaderDenormFlushToZeroFloat64,
        obj.shaderRoundingModeRTEFloat16,
        obj.shaderRoundingModeRTEFloat32,
        obj.shaderRoundingModeRTEFloat64,
        obj.shaderRoundingModeRTZFloat16,
        obj.shaderRoundingModeRTZFloat32,
        obj.shaderRoundingModeRTZFloat64
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fragmentDensityMap,
        obj.fragmentDensityMapDynamic,
        obj.fragmentDensityMapNonSubsampledImages
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.minFragmentDensityTexelSize,
        obj.maxFragmentDensityTexelSize,
        obj.fragmentDensityInvocations
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fragmentShaderBarycentric
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fragmentShaderSampleInterlock,
        obj.fragmentShaderPixelInterlock,
        obj.fragmentShaderShadingRateInterlock
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.physicalDeviceCount,
        Span(obj.physicalDevices, VK_MAX_DEVICE_GROUP_SIZE),
        obj.subsetAllocation
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.hostQueryReset
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.deviceUUID, VK_UUID_SIZE),
        Span(obj.driverUUID, VK_UUID_SIZE),
        Span(obj.deviceLUID, VK_LUID_SIZE),
        obj.deviceNodeMask,
        obj.deviceLUIDValid
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.drmFormatModifier,
        obj.sharingMode,
        obj.queueFamilyIndexCount,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount)
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.format,
        obj.type,
        obj.tiling,
        obj.usage,
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.imageViewType
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.imagelessFramebuffer
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.indexTypeUint8
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.inlineUniformBlock,
        obj.descriptorBindingInlineUniformBlockUpdateAfterBind
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxInlineUniformBlockSize,
        obj.maxPerStageDescriptorInlineUniformBlocks,
        obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,
        obj.maxDescriptorSetInlineUniformBlocks,
        obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj)
{
    return std::forward_as_tuple(
        obj.maxImageDimension1D,
        obj.maxImageDimension2D,
        obj.maxImageDimension3D,
        obj.maxImageDimensionCube,
        obj.maxImageArrayLayers,
        obj.maxTexelBufferElements,
        obj.maxUniformBufferRange,
        obj.maxStorageBufferRange,
        obj.maxPushConstantsSize,
        obj.maxMemoryAllocationCount,
        obj.maxSamplerAllocationCount,
        obj.bufferImageGranularity,
        obj.sparseAddressSpaceSize,
        obj.maxBoundDescriptorSets,
        obj.maxPerStageDescriptorSamplers,
        obj.maxPerStageDescriptorUniformBuffers,
        obj.maxPerStageDescriptorStorageBuffers,
        obj.maxPerStageDescriptorSampledImages,
        obj.maxPerStageDescriptorStorageImages,
        obj.maxPerStageDescriptorInputAttachments,
        obj.maxPerStageResources,
        obj.maxDescriptorSetSamplers,
        obj.maxDescriptorSetUniformBuffers,
        obj.maxDescriptorSetUniformBuffersDynamic,
        obj.maxDescriptorSetStorageBuffers,
        obj.maxDescriptorSetStorageBuffersDynamic,
        obj.maxDescriptorSetSampledImages,
        obj.maxDescriptorSetStorageImages,
        obj.maxDescriptorSetInputAttachments,
        obj.maxVertexInputAttributes,
        obj.maxVertexInputBindings,
        obj.maxVertexInputAttributeOffset,
        obj.maxVertexInputBindingStride,
        obj.maxVertexOutputComponents,
        obj.maxTessellationGenerationLevel,
        obj.maxTessellationPatchSize,
        obj.maxTessellationControlPerVertexInputComponents,
        obj.maxTessellationControlPerVertexOutputComponents,
        obj.maxTessellationControlPerPatchOutputComponents,
        obj.maxTessellationControlTotalOutputComponents,
        obj.maxTessellationEvaluationInputComponents,
        obj.maxTessellationEvaluationOutputComponents,
        obj.maxGeometryShaderInvocations,
        obj.maxGeometryInputComponents,
        obj.maxGeometryOutputComponents,
        obj.maxGeometryOutputVertices,
        obj.maxGeometryTotalOutputComponents,
        obj.maxFragmentInputComponents,
        obj.maxFragmentOutputAttachments,
        obj.maxFragmentDualSrcAttachments,
        obj.maxFragmentCombinedOutputResources,
        obj.maxComputeSharedMemorySize,
        Span(obj.maxComputeWorkGroupCount, 3),
        obj.maxComputeWorkGroupInvocations,
        Span(obj.maxComputeWorkGroupSize, 3),
        obj.subPixelPrecisionBits,
        obj.subTexelPrecisionBits,
        obj.mipmapPrecisionBits,
        obj.maxDrawIndexedIndexValue,
        obj.maxDrawIndirectCount,
        obj.maxSamplerLodBias,
        obj.maxSamplerAnisotropy,
        obj.maxViewports,
        Span(obj.maxViewportDimensions, 2),
        Span(obj.viewportBoundsRange, 2),
        obj.viewportSubPixelBits,
        obj.minMemoryMapAlignment,
        obj.minTexelBufferOffsetAlignment,
        obj.minUniformBufferOffsetAlignment,
        obj.minStorageBufferOffsetAlignment,
        obj.minTexelOffset,
        obj.maxTexelOffset,
        obj.minTexelGatherOffset,
        obj.maxTexelGatherOffset,
        obj.minInterpolationOffset,
        obj.maxInterpolationOffset,
        obj.subPixelInterpolationOffsetBits,
        obj.maxFramebufferWidth,
        obj.maxFramebufferHeight,
        obj.maxFramebufferLayers,
        obj.framebufferColorSampleCounts,
        obj.framebufferDepthSampleCounts,
        obj.framebufferStencilSampleCounts,
        obj.framebufferNoAttachmentsSampleCounts,
        obj.maxColorAttachments,
        obj.sampledImageColorSampleCounts,
        obj.sampledImageIntegerSampleCounts,
        obj.sampledImageDepthSampleCounts,
        obj.sampledImageStencilSampleCounts,
        obj.storageImageSampleCounts,
        obj.maxSampleMaskWords,
        obj.timestampComputeAndGraphics,
        obj.timestampPeriod,
        obj.maxClipDistances,
        obj.maxCullDistances,
        obj.maxCombinedClipAndCullDistances,
        obj.discreteQueuePriorities,
        Span(obj.pointSizeRange, 2),
        Span(obj.lineWidthRange, 2),
        obj.pointSizeGranularity,
        obj.lineWidthGranularity,
        obj.strictLines,
        obj.standardSampleLocations,
        obj.optimalBufferCopyOffsetAlignment,
        obj.optimalBufferCopyRowPitchAlignment,
        obj.nonCoherentAtomSize
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.rectangularLines,
        obj.bresenhamLines,
        obj.smoothLines,
        obj.stippledRectangularLines,
        obj.stippledBresenhamLines,
        obj.stippledSmoothLines
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.lineSubPixelPrecisionBits
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxPerSetDescriptors,
        obj.maxMemoryAllocationSize
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.heapBudget, VK_MAX_MEMORY_HEAPS),
        Span(obj.heapUsage, VK_MAX_MEMORY_HEAPS)
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memoryPriority
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj)
{
    return std::forward_as_tuple(
        obj.memoryTypeCount,
        Span(obj.memoryTypes, VK_MAX_MEMORY_TYPES),
        obj.memoryHeapCount,
        Span(obj.memoryHeaps, VK_MAX_MEMORY_HEAPS)
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memoryProperties
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.taskShader,
        obj.meshShader
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxDrawMeshTasksCount,
        obj.maxTaskWorkGroupInvocations,
        Span(obj.maxTaskWorkGroupSize, 3),
        obj.maxTaskTotalMemorySize,
        obj.maxTaskOutputCount,
        obj.maxMeshWorkGroupInvocations,
        Span(obj.maxMeshWorkGroupSize, 3),
        obj.maxMeshTotalMemorySize,
        obj.maxMeshOutputVertices,
        obj.maxMeshOutputPrimitives,
        obj.maxMeshMultiviewViewCount,
        obj.meshOutputPerVertexGranularity,
        obj.meshOutputPerPrimitiveGranularity
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.multiview,
        obj.multiviewGeometryShader,
        obj.multiviewTessellationShader
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.perViewPositionAllComponents
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxMultiviewViewCount,
        obj.maxMultiviewInstanceIndex
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pciDomain,
        obj.pciBus,
        obj.pciDevice,
        obj.pciFunction
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.performanceCounterQueryPools,
        obj.performanceCounterMultipleQueryPools
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.allowCommandBufferQueryCopies
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pipelineCreationCacheControl
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pipelineExecutableInfo
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pointClippingBehavior
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.sharedImage
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj)
{
    return std::forward_as_tuple(
        obj.apiVersion,
        obj.driverVersion,
        obj.vendorID,
        obj.deviceID,
        obj.deviceType,
        Span(obj.deviceName, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE),
        Span(obj.pipelineCacheUUID, VK_UUID_SIZE),
        obj.limits,
        obj.sparseProperties
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.properties
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.protectedMemory
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.protectedNoFault
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxPushDescriptors
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.rayTracing,
        obj.rayTracingShaderGroupHandleCaptureReplay,
        obj.rayTracingShaderGroupHandleCaptureReplayMixed,
        obj.rayTracingAccelerationStructureCaptureReplay,
        obj.rayTracingIndirectTraceRays,
        obj.rayTracingIndirectAccelerationStructureBuild,
        obj.rayTracingHostAccelerationStructureCommands,
        obj.rayQuery,
        obj.rayTracingPrimitiveCulling
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderGroupHandleSize,
        obj.maxRecursionDepth,
        obj.maxShaderGroupStride,
        obj.shaderGroupBaseAlignment,
        obj.maxGeometryCount,
        obj.maxInstanceCount,
        obj.maxPrimitiveCount,
        obj.maxDescriptorSetAccelerationStructures,
        obj.shaderGroupHandleCaptureReplaySize
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderGroupHandleSize,
        obj.maxRecursionDepth,
        obj.maxShaderGroupStride,
        obj.shaderGroupBaseAlignment,
        obj.maxGeometryCount,
        obj.maxInstanceCount,
        obj.maxTriangleCount,
        obj.maxDescriptorSetAccelerationStructures
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.representativeFragmentTest
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.sampleLocationSampleCounts,
        obj.maxSampleLocationGridSize,
        Span(obj.sampleLocationCoordinateRange, 2),
        obj.sampleLocationSubPixelBits,
        obj.variableSampleLocations
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.filterMinmaxSingleComponentFormats,
        obj.filterMinmaxImageComponentMapping
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.samplerYcbcrConversion
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.scalarBlockLayout
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.separateDepthStencilLayouts
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderBufferInt64Atomics,
        obj.shaderSharedInt64Atomics
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderSubgroupClock,
        obj.shaderDeviceClock
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderCoreFeatures,
        obj.activeComputeUnitCount
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderEngineCount,
        obj.shaderArraysPerEngineCount,
        obj.computeUnitsPerShaderArray,
        obj.simdPerComputeUnit,
        obj.wavefrontsPerSimd,
        obj.wavefrontSize,
        obj.sgprsPerSimd,
        obj.minSgprAllocation,
        obj.maxSgprAllocation,
        obj.sgprAllocationGranularity,
        obj.vgprsPerSimd,
        obj.minVgprAllocation,
        obj.maxVgprAllocation,
        obj.vgprAllocationGranularity
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderDemoteToHelperInvocation
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderDrawParameters
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderFloat16,
        obj.shaderInt8
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.imageFootprint
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderIntegerFunctions2
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderSMBuiltins
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderSMCount,
        obj.shaderWarpsPerSM
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shaderSubgroupExtendedTypes
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shadingRateImage,
        obj.shadingRateCoarseSampleOrder
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shadingRateTexelSize,
        obj.shadingRatePaletteSize,
        obj.shadingRateMaxCoarseSamples
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.format,
        obj.type,
        obj.samples,
        obj.usage,
        obj.tiling
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj)
{
    return std::forward_as_tuple(
        obj.residencyStandard2DBlockShape,
        obj.residencyStandard2DMultisampleBlockShape,
        obj.residencyStandard3DBlockShape,
        obj.residencyAlignedMipSize,
        obj.residencyNonResidentStrict
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.subgroupSize,
        obj.supportedStages,
        obj.supportedOperations,
        obj.quadOperationsInAllStages
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.subgroupSizeControl,
        obj.computeFullSubgroups
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.minSubgroupSize,
        obj.maxSubgroupSize,
        obj.maxComputeWorkgroupSubgroups,
        obj.requiredSubgroupSizeStages
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.surface
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.texelBufferAlignment
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.storageTexelBufferOffsetAlignmentBytes,
        obj.storageTexelBufferOffsetSingleTexelAlignment,
        obj.uniformTexelBufferOffsetAlignmentBytes,
        obj.uniformTexelBufferOffsetSingleTexelAlignment
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.textureCompressionASTC_HDR
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.timelineSemaphore
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxTimelineSemaphoreValueDifference
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.name, VK_MAX_EXTENSION_NAME_SIZE),
        Span(obj.version, VK_MAX_EXTENSION_NAME_SIZE),
        obj.purposes,
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE),
        Span(obj.layer, VK_MAX_EXTENSION_NAME_SIZE)
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.transformFeedback,
        obj.geometryStreams
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxTransformFeedbackStreams,
        obj.maxTransformFeedbackBuffers,
        obj.maxTransformFeedbackBufferSize,
        obj.maxTransformFeedbackStreamDataSize,
        obj.maxTransformFeedbackBufferDataSize,
        obj.maxTransformFeedbackBufferDataStride,
        obj.transformFeedbackQueries,
        obj.transformFeedbackStreamsLinesTriangles,
        obj.transformFeedbackRasterizationStreamSelect,
        obj.transformFeedbackDraw
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.uniformBufferStandardLayout
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.variablePointersStorageBuffer,
        obj.variablePointers
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.vertexAttributeInstanceRateDivisor,
        obj.vertexAttributeInstanceRateZeroDivisor
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxVertexAttribDivisor
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.storageBuffer16BitAccess,
        obj.uniformAndStorageBuffer16BitAccess,
        obj.storagePushConstant16,
        obj.storageInputOutput16,
        obj.multiview,
        obj.multiviewGeometryShader,
        obj.multiviewTessellationShader,
        obj.variablePointersStorageBuffer,
        obj.variablePointers,
        obj.protectedMemory,
        obj.samplerYcbcrConversion,
        obj.shaderDrawParameters
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.deviceUUID, VK_UUID_SIZE),
        Span(obj.driverUUID, VK_UUID_SIZE),
        Span(obj.deviceLUID, VK_LUID_SIZE),
        obj.deviceNodeMask,
        obj.deviceLUIDValid,
        obj.subgroupSize,
        obj.subgroupSupportedStages,
        obj.subgroupSupportedOperations,
        obj.subgroupQuadOperationsInAllStages,
        obj.pointClippingBehavior,
        obj.maxMultiviewViewCount,
        obj.maxMultiviewInstanceIndex,
        obj.protectedNoFault,
        obj.maxPerSetDescriptors,
        obj.maxMemoryAllocationSize
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.samplerMirrorClampToEdge,
        obj.drawIndirectCount,
        obj.storageBuffer8BitAccess,
        obj.uniformAndStorageBuffer8BitAccess,
        obj.storagePushConstant8,
        obj.shaderBufferInt64Atomics,
        obj.shaderSharedInt64Atomics,
        obj.shaderFloat16,
        obj.shaderInt8,
        obj.descriptorIndexing,
        obj.shaderInputAttachmentArrayDynamicIndexing,
        obj.shaderUniformTexelBufferArrayDynamicIndexing,
        obj.shaderStorageTexelBufferArrayDynamicIndexing,
        obj.shaderUniformBufferArrayNonUniformIndexing,
        obj.shaderSampledImageArrayNonUniformIndexing,
        obj.shaderStorageBufferArrayNonUniformIndexing,
        obj.shaderStorageImageArrayNonUniformIndexing,
        obj.shaderInputAttachmentArrayNonUniformIndexing,
        obj.shaderUniformTexelBufferArrayNonUniformIndexing,
        obj.shaderStorageTexelBufferArrayNonUniformIndexing,
        obj.descriptorBindingUniformBufferUpdateAfterBind,
        obj.descriptorBindingSampledImageUpdateAfterBind,
        obj.descriptorBindingStorageImageUpdateAfterBind,
        obj.descriptorBindingStorageBufferUpdateAfterBind,
        obj.descriptorBindingUniformTexelBufferUpdateAfterBind,
        obj.descriptorBindingStorageTexelBufferUpdateAfterBind,
        obj.descriptorBindingUpdateUnusedWhilePending,
        obj.descriptorBindingPartiallyBound,
        obj.descriptorBindingVariableDescriptorCount,
        obj.runtimeDescriptorArray,
        obj.samplerFilterMinmax,
        obj.scalarBlockLayout,
        obj.imagelessFramebuffer,
        obj.uniformBufferStandardLayout,
        obj.shaderSubgroupExtendedTypes,
        obj.separateDepthStencilLayouts,
        obj.hostQueryReset,
        obj.timelineSemaphore,
        obj.bufferDeviceAddress,
        obj.bufferDeviceAddressCaptureReplay,
        obj.bufferDeviceAddressMultiDevice,
        obj.vulkanMemoryModel,
        obj.vulkanMemoryModelDeviceScope,
        obj.vulkanMemoryModelAvailabilityVisibilityChains,
        obj.shaderOutputViewportIndex,
        obj.shaderOutputLayer,
        obj.subgroupBroadcastDynamicId
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.driverID,
        Span(obj.driverName, VK_MAX_DRIVER_NAME_SIZE),
        Span(obj.driverInfo, VK_MAX_DRIVER_INFO_SIZE),
        obj.conformanceVersion,
        obj.denormBehaviorIndependence,
        obj.roundingModeIndependence,
        obj.shaderSignedZeroInfNanPreserveFloat16,
        obj.shaderSignedZeroInfNanPreserveFloat32,
        obj.shaderSignedZeroInfNanPreserveFloat64,
        obj.shaderDenormPreserveFloat16,
        obj.shaderDenormPreserveFloat32,
        obj.shaderDenormPreserveFloat64,
        obj.shaderDenormFlushToZeroFloat16,
        obj.shaderDenormFlushToZeroFloat32,
        obj.shaderDenormFlushToZeroFloat64,
        obj.shaderRoundingModeRTEFloat16,
        obj.shaderRoundingModeRTEFloat32,
        obj.shaderRoundingModeRTEFloat64,
        obj.shaderRoundingModeRTZFloat16,
        obj.shaderRoundingModeRTZFloat32,
        obj.shaderRoundingModeRTZFloat64,
        obj.maxUpdateAfterBindDescriptorsInAllPools,
        obj.shaderUniformBufferArrayNonUniformIndexingNative,
        obj.shaderSampledImageArrayNonUniformIndexingNative,
        obj.shaderStorageBufferArrayNonUniformIndexingNative,
        obj.shaderStorageImageArrayNonUniformIndexingNative,
        obj.shaderInputAttachmentArrayNonUniformIndexingNative,
        obj.robustBufferAccessUpdateAfterBind,
        obj.quadDivergentImplicitLod,
        obj.maxPerStageDescriptorUpdateAfterBindSamplers,
        obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers,
        obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers,
        obj.maxPerStageDescriptorUpdateAfterBindSampledImages,
        obj.maxPerStageDescriptorUpdateAfterBindStorageImages,
        obj.maxPerStageDescriptorUpdateAfterBindInputAttachments,
        obj.maxPerStageUpdateAfterBindResources,
        obj.maxDescriptorSetUpdateAfterBindSamplers,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffers,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffers,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
        obj.maxDescriptorSetUpdateAfterBindSampledImages,
        obj.maxDescriptorSetUpdateAfterBindStorageImages,
        obj.maxDescriptorSetUpdateAfterBindInputAttachments,
        obj.supportedDepthResolveModes,
        obj.supportedStencilResolveModes,
        obj.independentResolveNone,
        obj.independentResolve,
        obj.filterMinmaxSingleComponentFormats,
        obj.filterMinmaxImageComponentMapping,
        obj.maxTimelineSemaphoreValueDifference,
        obj.framebufferIntegerColorSampleCounts
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.vulkanMemoryModel,
        obj.vulkanMemoryModelDeviceScope,
        obj.vulkanMemoryModelAvailabilityVisibilityChains
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.ycbcrImageArrays
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.initialDataSize,
        Span((const uint8_t*)obj.pInitialData, obj.initialDataSize)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.srcPremultiplied,
        obj.dstPremultiplied,
        obj.blendOverlap
    );
}

template <>
inline auto structure_to_tuple<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj)
{
    return std::forward_as_tuple(
        obj.blendEnable,
        obj.srcColorBlendFactor,
        obj.dstColorBlendFactor,
        obj.colorBlendOp,
        obj.srcAlphaBlendFactor,
        obj.dstAlphaBlendFactor,
        obj.alphaBlendOp,
        obj.colorWriteMask
    );
}

template <>
inline auto structure_to_tuple<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.logicOpEnable,
        obj.logicOp,
        obj.attachmentCount,
        Span(obj.pAttachments, obj.attachmentCount),
        Span(obj.blendConstants, 4)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.compilerControlFlags
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.coverageModulationMode,
        obj.coverageModulationTableEnable,
        obj.coverageModulationTableCount,
        Span(obj.pCoverageModulationTable, obj.coverageModulationTableCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.coverageReductionMode
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.coverageToColorEnable,
        obj.coverageToColorLocation
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pPipelineCreationFeedback,
        obj.pipelineStageCreationFeedbackCount,
        Span(obj.pPipelineStageCreationFeedbacks, obj.pipelineStageCreationFeedbackCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj)
{
    return std::forward_as_tuple(
        obj.flags,
        obj.duration
    );
}

template <>
inline auto structure_to_tuple<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.depthTestEnable,
        obj.depthWriteEnable,
        obj.depthCompareOp,
        obj.depthBoundsTestEnable,
        obj.stencilTestEnable,
        obj.front,
        obj.back,
        obj.minDepthBounds,
        obj.maxDepthBounds
    );
}

template <>
inline auto structure_to_tuple<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.discardRectangleMode,
        obj.discardRectangleCount,
        Span(obj.pDiscardRectangles, obj.discardRectangleCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.dynamicStateCount,
        Span(obj.pDynamicStates, obj.dynamicStateCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pipeline,
        obj.executableIndex
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.name, VK_MAX_DESCRIPTION_SIZE),
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE),
        obj.isText,
        obj.dataSize,
        Span((const uint8_t*)obj.pData, obj.dataSize)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.stages,
        Span(obj.name, VK_MAX_DESCRIPTION_SIZE),
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE),
        obj.subgroupSize
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.name, VK_MAX_DESCRIPTION_SIZE),
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE),
        obj.format,
        obj.value
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj)
{
    return std::forward_as_tuple(
        obj.b32,
        obj.i64,
        obj.u64,
        obj.f64
    );
}

template <>
inline auto structure_to_tuple<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.pipeline
    );
}

template <>
inline auto structure_to_tuple<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.topology,
        obj.primitiveRestartEnable
    );
}

template <>
inline auto structure_to_tuple<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.setLayoutCount,
        Span(obj.pSetLayouts, obj.setLayoutCount),
        obj.pushConstantRangeCount,
        Span(obj.pPushConstantRanges, obj.pushConstantRangeCount)
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.libraryCount,
        Span(obj.pLibraries, obj.libraryCount)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
inline auto structure_to_tuple<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.rasterizationSamples,
        obj.sampleShadingEnable,
        obj.minSampleShading,
        Span(obj.pSampleMask, obj.latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil]),
        obj.alphaToCoverageEnable,
        obj.alphaToOneEnable
    );
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
inline auto structure_to_tuple<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.conservativeRasterizationMode,
        obj.extraPrimitiveOverestimationSize
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.depthClipEnable
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.lineRasterizationMode,
        obj.stippledLineEnable,
        obj.lineStippleFactor,
        obj.lineStipplePattern
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.depthClampEnable,
        obj.rasterizerDiscardEnable,
        obj.polygonMode,
        obj.cullMode,
        obj.frontFace,
        obj.depthBiasEnable,
        obj.depthBiasConstantFactor,
        obj.depthBiasClamp,
        obj.depthBiasSlopeFactor,
        obj.lineWidth
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.rasterizationOrder
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.rasterizationStream
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.representativeFragmentTestEnable
    );
}

template <>
inline auto structure_to_tuple<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.sampleLocationsEnable,
        obj.sampleLocationsInfo
    );
}

template <>
inline auto structure_to_tuple<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.stage,
        obj.module,
        DynamicStringTupleElementWrapper { obj.pName },
        obj.pSpecializationInfo
    );
}

template <>
inline auto structure_to_tuple<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.requiredSubgroupSize
    );
}

template <>
inline auto structure_to_tuple<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.domainOrigin
    );
}

template <>
inline auto structure_to_tuple<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.patchControlPoints
    );
}

template <>
inline auto structure_to_tuple<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.vertexBindingDivisorCount,
        Span(obj.pVertexBindingDivisors, obj.vertexBindingDivisorCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.vertexBindingDescriptionCount,
        Span(obj.pVertexBindingDescriptions, obj.vertexBindingDescriptionCount),
        obj.vertexAttributeDescriptionCount,
        Span(obj.pVertexAttributeDescriptions, obj.vertexAttributeDescriptionCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.sampleOrderType,
        obj.customSampleOrderCount,
        Span(obj.pCustomSampleOrders, obj.customSampleOrderCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.exclusiveScissorCount,
        Span(obj.pExclusiveScissors, obj.exclusiveScissorCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.shadingRateImageEnable,
        obj.viewportCount,
        Span(obj.pShadingRatePalettes, obj.viewportCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.viewportCount,
        Span(obj.pViewports, obj.viewportCount),
        obj.scissorCount,
        Span(obj.pScissors, obj.scissorCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.viewportCount,
        Span(obj.pViewportSwizzles, obj.viewportCount)
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.viewportWScalingEnable,
        obj.viewportCount,
        Span(obj.pViewportWScalings, obj.viewportCount)
    );
}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto structure_to_tuple<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.frameToken
    );
}
#endif // VK_USE_PLATFORM_GGP

template <>
inline auto structure_to_tuple<VkPresentInfoKHR>(const VkPresentInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.waitSemaphoreCount,
        Span(obj.pWaitSemaphores, obj.waitSemaphoreCount),
        obj.swapchainCount,
        Span(obj.pSwapchains, obj.swapchainCount),
        Span(obj.pImageIndices, obj.swapchainCount),
        Span(obj.pResults, obj.swapchainCount)
    );
}

template <>
inline auto structure_to_tuple<VkPresentRegionKHR>(const VkPresentRegionKHR& obj)
{
    return std::forward_as_tuple(
        obj.rectangleCount,
        Span(obj.pRectangles, obj.rectangleCount)
    );
}

template <>
inline auto structure_to_tuple<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.swapchainCount,
        Span(obj.pRegions, obj.swapchainCount)
    );
}

template <>
inline auto structure_to_tuple<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj)
{
    return std::forward_as_tuple(
        obj.presentID,
        obj.desiredPresentTime
    );
}

template <>
inline auto structure_to_tuple<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.swapchainCount,
        Span(obj.pTimes, obj.swapchainCount)
    );
}

template <>
inline auto structure_to_tuple<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.protectedSubmit
    );
}

template <>
inline auto structure_to_tuple<VkPushConstantRange>(const VkPushConstantRange& obj)
{
    return std::forward_as_tuple(
        obj.stageFlags,
        obj.offset,
        obj.size
    );
}

template <>
inline auto structure_to_tuple<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.queryType,
        obj.queryCount,
        obj.pipelineStatistics
    );
}

template <>
inline auto structure_to_tuple<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.queueFamilyIndex,
        obj.counterIndexCount,
        Span(obj.pCounterIndices, obj.counterIndexCount)
    );
}

template <>
inline auto structure_to_tuple<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.performanceCountersSampling
    );
}

template <>
inline auto structure_to_tuple<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.checkpointExecutionStageMask
    );
}

template <>
inline auto structure_to_tuple<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj)
{
    return std::forward_as_tuple(
        obj.queueFlags,
        obj.queueCount,
        obj.timestampValidBits,
        obj.minImageTransferGranularity
    );
}

template <>
inline auto structure_to_tuple<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.queueFamilyProperties
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.stageCount,
        Span(obj.pStages, obj.stageCount),
        obj.groupCount,
        Span(obj.pGroups, obj.groupCount),
        obj.maxRecursionDepth,
        obj.libraries,
        obj.pLibraryInterface,
        obj.layout,
        obj.basePipelineHandle,
        obj.basePipelineIndex
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.stageCount,
        Span(obj.pStages, obj.stageCount),
        obj.groupCount,
        Span(obj.pGroups, obj.groupCount),
        obj.maxRecursionDepth,
        obj.layout,
        obj.basePipelineHandle,
        obj.basePipelineIndex
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.maxPayloadSize,
        obj.maxAttributeSize,
        obj.maxCallableSize
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type,
        obj.generalShader,
        obj.closestHitShader,
        obj.anyHitShader,
        obj.intersectionShader,
        obj.pShaderGroupCaptureReplayHandle
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.type,
        obj.generalShader,
        obj.closestHitShader,
        obj.anyHitShader,
        obj.intersectionShader
    );
}

template <>
inline auto structure_to_tuple<VkRect2D>(const VkRect2D& obj)
{
    return std::forward_as_tuple(
        obj.offset,
        obj.extent
    );
}

template <>
inline auto structure_to_tuple<VkRectLayerKHR>(const VkRectLayerKHR& obj)
{
    return std::forward_as_tuple(
        obj.offset,
        obj.extent,
        obj.layer
    );
}

template <>
inline auto structure_to_tuple<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj)
{
    return std::forward_as_tuple(
        obj.refreshDuration
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.attachmentCount,
        Span(obj.pAttachments, obj.attachmentCount)
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.renderPass,
        obj.framebuffer,
        obj.renderArea,
        obj.clearValueCount,
        Span(obj.pClearValues, obj.clearValueCount)
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.attachmentCount,
        Span(obj.pAttachments, obj.attachmentCount),
        obj.subpassCount,
        Span(obj.pSubpasses, obj.subpassCount),
        obj.dependencyCount,
        Span(obj.pDependencies, obj.dependencyCount)
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.attachmentCount,
        Span(obj.pAttachments, obj.attachmentCount),
        obj.subpassCount,
        Span(obj.pSubpasses, obj.subpassCount),
        obj.dependencyCount,
        Span(obj.pDependencies, obj.dependencyCount),
        obj.correlatedViewMaskCount,
        Span(obj.pCorrelatedViewMasks, obj.correlatedViewMaskCount)
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fragmentDensityMapAttachment
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.aspectReferenceCount,
        Span(obj.pAspectReferences, obj.aspectReferenceCount)
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.subpassCount,
        Span(obj.pViewMasks, obj.subpassCount),
        obj.dependencyCount,
        Span(obj.pViewOffsets, obj.dependencyCount),
        obj.correlationMaskCount,
        Span(obj.pCorrelationMasks, obj.correlationMaskCount)
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.attachmentInitialSampleLocationsCount,
        Span(obj.pAttachmentInitialSampleLocations, obj.attachmentInitialSampleLocationsCount),
        obj.postSubpassSampleLocationsCount,
        Span(obj.pPostSubpassSampleLocations, obj.postSubpassSampleLocationsCount)
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.transform
    );
}

template <>
inline auto structure_to_tuple<VkSampleLocationEXT>(const VkSampleLocationEXT& obj)
{
    return std::forward_as_tuple(
        obj.x,
        obj.y
    );
}

template <>
inline auto structure_to_tuple<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.sampleLocationsPerPixel,
        obj.sampleLocationGridSize,
        obj.sampleLocationsCount,
        Span(obj.pSampleLocations, obj.sampleLocationsCount)
    );
}

template <>
inline auto structure_to_tuple<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.magFilter,
        obj.minFilter,
        obj.mipmapMode,
        obj.addressModeU,
        obj.addressModeV,
        obj.addressModeW,
        obj.mipLodBias,
        obj.anisotropyEnable,
        obj.maxAnisotropy,
        obj.compareEnable,
        obj.compareOp,
        obj.minLod,
        obj.maxLod,
        obj.borderColor,
        obj.unnormalizedCoordinates
    );
}

template <>
inline auto structure_to_tuple<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.reductionMode
    );
}

template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.format,
        obj.ycbcrModel,
        obj.ycbcrRange,
        obj.components,
        obj.xChromaOffset,
        obj.yChromaOffset,
        obj.chromaFilter,
        obj.forceExplicitReconstruction
    );
}

template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.combinedImageSamplerDescriptorCount
    );
}

template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.conversion
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.semaphore,
        obj.handleType
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.semaphore,
        obj.handleType
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.semaphore,
        obj.value
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.semaphoreType,
        obj.initialValue
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.semaphoreCount,
        Span(obj.pSemaphores, obj.semaphoreCount),
        Span(obj.pValues, obj.semaphoreCount)
    );
}

template <>
inline auto structure_to_tuple<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj)
{
    return std::forward_as_tuple(
        obj.data
    );
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
inline auto structure_to_tuple<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.codeSize,
        Span(obj.pCode, obj.latexmath:[\textrm{codeSize} \over 4])
    );
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
inline auto structure_to_tuple<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.validationCache
    );
}

template <>
inline auto structure_to_tuple<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj)
{
    return std::forward_as_tuple(
        obj.numUsedVgprs,
        obj.numUsedSgprs,
        obj.ldsSizePerLocalWorkGroup,
        obj.ldsUsageSizeInBytes,
        obj.scratchMemUsageInBytes
    );
}

template <>
inline auto structure_to_tuple<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj)
{
    return std::forward_as_tuple(
        obj.shaderStageMask,
        obj.resourceUsage,
        obj.numPhysicalVgprs,
        obj.numPhysicalSgprs,
        obj.numAvailableVgprs,
        obj.numAvailableSgprs,
        Span(obj.computeWorkGroupSize, 3)
    );
}

template <>
inline auto structure_to_tuple<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj)
{
    return std::forward_as_tuple(
        obj.shadingRatePaletteEntryCount,
        Span(obj.pShadingRatePaletteEntries, obj.shadingRatePaletteEntryCount)
    );
}

template <>
inline auto structure_to_tuple<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.sharedPresentSupportedUsageFlags
    );
}

template <>
inline auto structure_to_tuple<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj)
{
    return std::forward_as_tuple(
        obj.buffer,
        obj.bindCount,
        Span(obj.pBinds, obj.bindCount)
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj)
{
    return std::forward_as_tuple(
        obj.aspectMask,
        obj.imageGranularity,
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.properties
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj)
{
    return std::forward_as_tuple(
        obj.subresource,
        obj.offset,
        obj.extent,
        obj.memory,
        obj.memoryOffset,
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj)
{
    return std::forward_as_tuple(
        obj.image,
        obj.bindCount,
        Span(obj.pBinds, obj.bindCount)
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj)
{
    return std::forward_as_tuple(
        obj.formatProperties,
        obj.imageMipTailFirstLod,
        obj.imageMipTailSize,
        obj.imageMipTailOffset,
        obj.imageMipTailStride
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.memoryRequirements
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj)
{
    return std::forward_as_tuple(
        obj.image,
        obj.bindCount,
        Span(obj.pBinds, obj.bindCount)
    );
}

template <>
inline auto structure_to_tuple<VkSparseMemoryBind>(const VkSparseMemoryBind& obj)
{
    return std::forward_as_tuple(
        obj.resourceOffset,
        obj.size,
        obj.memory,
        obj.memoryOffset,
        obj.flags
    );
}

template <>
inline auto structure_to_tuple<VkSpecializationInfo>(const VkSpecializationInfo& obj)
{
    return std::forward_as_tuple(
        obj.mapEntryCount,
        Span(obj.pMapEntries, obj.mapEntryCount),
        obj.dataSize,
        Span((const uint8_t*)obj.pData, obj.dataSize)
    );
}

template <>
inline auto structure_to_tuple<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj)
{
    return std::forward_as_tuple(
        obj.constantID,
        obj.offset,
        obj.size
    );
}

template <>
inline auto structure_to_tuple<VkStencilOpState>(const VkStencilOpState& obj)
{
    return std::forward_as_tuple(
        obj.failOp,
        obj.passOp,
        obj.depthFailOp,
        obj.compareOp,
        obj.compareMask,
        obj.writeMask,
        obj.reference
    );
}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto structure_to_tuple<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.streamDescriptor
    );
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj)
{
    return std::forward_as_tuple(
        obj.buffer,
        obj.offset,
        obj.stride,
        obj.size
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkSubmitInfo>(const VkSubmitInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.waitSemaphoreCount,
        Span(obj.pWaitSemaphores, obj.waitSemaphoreCount),
        Span(obj.pWaitDstStageMask, obj.waitSemaphoreCount),
        obj.commandBufferCount,
        Span(obj.pCommandBuffers, obj.commandBufferCount),
        obj.signalSemaphoreCount,
        Span(obj.pSignalSemaphores, obj.signalSemaphoreCount)
    );
}

template <>
inline auto structure_to_tuple<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.contents
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDependency>(const VkSubpassDependency& obj)
{
    return std::forward_as_tuple(
        obj.srcSubpass,
        obj.dstSubpass,
        obj.srcStageMask,
        obj.dstStageMask,
        obj.srcAccessMask,
        obj.dstAccessMask,
        obj.dependencyFlags
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDependency2>(const VkSubpassDependency2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.srcSubpass,
        obj.dstSubpass,
        obj.srcStageMask,
        obj.dstStageMask,
        obj.srcAccessMask,
        obj.dstAccessMask,
        obj.dependencyFlags,
        obj.viewOffset
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDescription>(const VkSubpassDescription& obj)
{
    return std::forward_as_tuple(
        obj.flags,
        obj.pipelineBindPoint,
        obj.inputAttachmentCount,
        Span(obj.pInputAttachments, obj.inputAttachmentCount),
        obj.colorAttachmentCount,
        Span(obj.pColorAttachments, obj.colorAttachmentCount),
        Span(obj.pResolveAttachments, obj.colorAttachmentCount),
        obj.pDepthStencilAttachment,
        obj.preserveAttachmentCount,
        Span(obj.pPreserveAttachments, obj.preserveAttachmentCount)
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDescription2>(const VkSubpassDescription2& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.pipelineBindPoint,
        obj.viewMask,
        obj.inputAttachmentCount,
        Span(obj.pInputAttachments, obj.inputAttachmentCount),
        obj.colorAttachmentCount,
        Span(obj.pColorAttachments, obj.colorAttachmentCount),
        Span(obj.pResolveAttachments, obj.colorAttachmentCount),
        obj.pDepthStencilAttachment,
        obj.preserveAttachmentCount,
        Span(obj.pPreserveAttachments, obj.preserveAttachmentCount)
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.depthResolveMode,
        obj.stencilResolveMode,
        obj.pDepthStencilResolveAttachment
    );
}

template <>
inline auto structure_to_tuple<VkSubpassEndInfo>(const VkSubpassEndInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext }
    );
}

template <>
inline auto structure_to_tuple<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj)
{
    return std::forward_as_tuple(
        obj.subpassIndex,
        obj.sampleLocationsInfo
    );
}

template <>
inline auto structure_to_tuple<VkSubresourceLayout>(const VkSubresourceLayout& obj)
{
    return std::forward_as_tuple(
        obj.offset,
        obj.size,
        obj.rowPitch,
        obj.arrayPitch,
        obj.depthPitch
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.minImageCount,
        obj.maxImageCount,
        obj.currentExtent,
        obj.minImageExtent,
        obj.maxImageExtent,
        obj.maxImageArrayLayers,
        obj.supportedTransforms,
        obj.currentTransform,
        obj.supportedCompositeAlpha,
        obj.supportedUsageFlags,
        obj.supportedSurfaceCounters
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.surfaceCapabilities
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fullScreenExclusiveSupported
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.minImageCount,
        obj.maxImageCount,
        obj.currentExtent,
        obj.minImageExtent,
        obj.maxImageExtent,
        obj.maxImageArrayLayers,
        obj.supportedTransforms,
        obj.currentTransform,
        obj.supportedCompositeAlpha,
        obj.supportedUsageFlags
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.surfaceFormat
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj)
{
    return std::forward_as_tuple(
        obj.format,
        obj.colorSpace
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.fullScreenExclusive
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.hmonitor
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.supportsProtected
    );
}

template <>
inline auto structure_to_tuple<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.surfaceCounters
    );
}

template <>
inline auto structure_to_tuple<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.surface,
        obj.minImageCount,
        obj.imageFormat,
        obj.imageColorSpace,
        obj.imageExtent,
        obj.imageArrayLayers,
        obj.imageUsage,
        obj.imageSharingMode,
        obj.queueFamilyIndexCount,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount),
        obj.preTransform,
        obj.compositeAlpha,
        obj.presentMode,
        obj.clipped,
        obj.oldSwapchain
    );
}

template <>
inline auto structure_to_tuple<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.localDimmingEnable
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.usage
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.supportsTextureGatherLODBiasAMD
    );
}

template <>
inline auto structure_to_tuple<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.waitSemaphoreValueCount,
        Span(obj.pWaitSemaphoreValues, obj.waitSemaphoreValueCount),
        obj.signalSemaphoreValueCount,
        Span(obj.pSignalSemaphoreValues, obj.signalSemaphoreValueCount)
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj)
{
    return std::forward_as_tuple(
        obj.width,
        obj.height,
        obj.depth
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj)
{
    return std::forward_as_tuple(
        Span(obj.matrix, 34)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
inline auto structure_to_tuple<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.initialDataSize,
        Span((const uint8_t*)obj.pInitialData, obj.initialDataSize)
    );
}

template <>
inline auto structure_to_tuple<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.enabledValidationFeatureCount,
        Span(obj.pEnabledValidationFeatures, obj.enabledValidationFeatureCount),
        obj.disabledValidationFeatureCount,
        Span(obj.pDisabledValidationFeatures, obj.disabledValidationFeatureCount)
    );
}

template <>
inline auto structure_to_tuple<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.disabledValidationCheckCount,
        Span(obj.pDisabledValidationChecks, obj.disabledValidationCheckCount)
    );
}

template <>
inline auto structure_to_tuple<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj)
{
    return std::forward_as_tuple(
        obj.location,
        obj.binding,
        obj.format,
        obj.offset
    );
}

template <>
inline auto structure_to_tuple<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj)
{
    return std::forward_as_tuple(
        obj.binding,
        obj.stride,
        obj.inputRate
    );
}

template <>
inline auto structure_to_tuple<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj)
{
    return std::forward_as_tuple(
        obj.binding,
        obj.divisor
    );
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
inline auto structure_to_tuple<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
inline auto structure_to_tuple<VkViewport>(const VkViewport& obj)
{
    return std::forward_as_tuple(
        obj.x,
        obj.y,
        obj.width,
        obj.height,
        obj.minDepth,
        obj.maxDepth
    );
}

template <>
inline auto structure_to_tuple<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj)
{
    return std::forward_as_tuple(
        obj.x,
        obj.y,
        obj.z,
        obj.w
    );
}

template <>
inline auto structure_to_tuple<VkViewportWScalingNV>(const VkViewportWScalingNV& obj)
{
    return std::forward_as_tuple(
        obj.xcoeff,
        obj.ycoeff
    );
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
inline auto structure_to_tuple<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.display,
        obj.surface
    );
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.acquireCount,
        Span(obj.pAcquireSyncs, obj.acquireCount),
        Span(obj.pAcquireKeys, obj.acquireCount),
        Span(obj.pAcquireTimeouts, obj.acquireCount),
        obj.releaseCount,
        Span(obj.pReleaseSyncs, obj.releaseCount),
        Span(obj.pReleaseKeys, obj.releaseCount)
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.acquireCount,
        Span(obj.pAcquireSyncs, obj.acquireCount),
        Span(obj.pAcquireKeys, obj.acquireCount),
        Span(obj.pAcquireTimeoutMilliseconds, obj.acquireCount),
        obj.releaseCount,
        Span(obj.pReleaseSyncs, obj.releaseCount),
        Span(obj.pReleaseKeys, obj.releaseCount)
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.hinstance,
        obj.hwnd
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.dstSet,
        obj.dstBinding,
        obj.dstArrayElement,
        obj.descriptorCount,
        obj.descriptorType,
        Span(obj.pImageInfo, obj.descriptorCount),
        Span(obj.pBufferInfo, obj.descriptorCount),
        Span(obj.pTexelBufferView, obj.descriptorCount)
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.accelerationStructureCount,
        Span(obj.pAccelerationStructures, obj.accelerationStructureCount)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.dataSize,
        Span((const uint8_t*)obj.pData, obj.dataSize)
    );
}

template <>
inline auto structure_to_tuple<VkXYColorEXT>(const VkXYColorEXT& obj)
{
    return std::forward_as_tuple(
        obj.x,
        obj.y
    );
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
inline auto structure_to_tuple<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.connection,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
inline auto structure_to_tuple<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.dpy,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
