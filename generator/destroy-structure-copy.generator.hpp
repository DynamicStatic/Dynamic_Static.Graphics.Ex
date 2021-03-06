
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
#include "utilities.hpp"

namespace dst {
namespace vk {
namespace cppgen {

inline void generate_destroy_structure_copy_declaration(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "destroy-structure-copy.hpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #pragma once

    #include "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp"
    #include "dynamic_static/graphics/vulkan/defines.hpp"

    namespace dst {
    namespace vk {
    namespace detail {

    void destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocator);

    $<UNFILTERED_STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <> void destroy_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocator);
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    } // namespace detail
    } // namespace vk
    } // namespace dst
    )", {
        get_unfiltered_structure_source_blocks(xmlManifest)
    });
}

inline void generate_destroy_structure_copy_definition(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
    File(sourcePath / "destroy-structure-copy.cpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #include "dynamic_static/graphics/vulkan/generated/destroy-structure-copy.hpp"

    namespace dst {
    namespace vk {
    namespace detail {

    ////////////////////////////////////////////////////////////////////////////////
    // NOTE : The following functions are manually implemented
    #if 0
    $<MANUALLY_IMPLEMENTED_STRUCTURES>
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <> void destroy_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocator);
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>
    #endif
    ////////////////////////////////////////////////////////////////////////////////

    $<STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    void destroy_structure_copy<${STRUCTURE_NAME}>(const ${STRUCTURE_NAME}& obj, const VkAllocationCallbacks* pAllocator)
    {
        $<MEMBERS>
        $<condition="PNEXT">
        destroy_pnext_copy(obj.pNext, pAllocator);
        $</>
        $<condition="STATIC_ARRAY">
        destroy_static_array_copy<${MEMBER_LENGTH}>(obj.${MEMBER_NAME}, pAllocator);
        $</>
        $<condition="DYNAMIC_ARRAY">
        destroy_dynamic_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocator);
        $</>
        $<condition="DYNAMIC_STRING">
        destroy_dynamic_string_copy(obj.${MEMBER_NAME}, pAllocator);
        $</>
        $<condition="DYNAMIC_STRING_ARRAY">
        destroy_dynamic_string_array_copy(obj.${MEMBER_LENGTH}, obj.${MEMBER_NAME}, pAllocator);
        $</>
        $<condition="STRUCTURE_POINTER">
        destroy_dynamic_array_copy(1, obj.${MEMBER_NAME}, pAllocator);
        $</>
        $<condition="STRUCTURE">
        destroy_structure_copy(obj.${MEMBER_NAME}, pAllocator);
        $</>
        $</>
    }
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    void destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocator)
    {
        if (pNext) {
            switch (*(VkStructureType*)pNext) {
            $<UNFILTERED_STRUCTURES>
            $<condition="HAS_STRUCTURE_TYPE_ENUM">
            $<COMPILE_GUARDS>
            #ifdef ${COMPILE_GUARD}
            $</>
            case ${STRUCTURE_TYPE_ENUM}: {
                destroy_dynamic_array_copy(1, (const ${STRUCTURE_NAME}*)pNext, pAllocator);
            } break;
            $<COMPILE_GUARDS:reverse=true>
            #endif // ${COMPILE_GUARD}
            $</>
            $</>
            $</>
            default: {
            } break;
            }
        }
    }

    } // namespace detail
    } // namespace vk
    } // namespace dst
    )", {
        get_manually_implemented_structure_source_blocks(xmlManifest),
        get_automatically_implemented_structure_source_blocks(xmlManifest),
        get_unfiltered_structure_source_blocks(xmlManifest)
    });
}

inline void generate_destroy_structure_copy(const xml::Manifest& xmlManifest)
{
    generate_destroy_structure_copy_declaration(xmlManifest);
    generate_destroy_structure_copy_definition(xmlManifest);
}

} // namespace cppgen
} // namespace vk
} // namespace dst
