
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/shader-compiler.hpp"

#include "glslang/Public/ShaderLang.h"
#include "glslang/SPIRV/GlslangToSpv.h"

#include <cassert>
#include <iostream>
#include <iterator>
#include <unordered_map>
#include <fstream>

namespace dst {
namespace vk {

class GlslangInitializer final
{
public:
    ~GlslangInitializer()
    {
        glslang::FinalizeProcess();
    }

    static bool validate()
    {
        static GlslangInitializer sGlslangInitializer;
        return sGlslangInitializer.mInitialized;
    }

private:
    GlslangInitializer()
    {
        mInitialized = glslang::InitializeProcess();
    }

    bool mInitialized { false };
};

static const TBuiltInResource& get_built_in_resource();

std::vector<uint32_t> compile_shader_from_file(const std::filesystem::path& filePath)
{
    static const std::unordered_map<std::string, VkShaderStageFlagBits> ExtensionToStage {
            { ".vert", VK_SHADER_STAGE_VERTEX_BIT },
            { ".tesc", VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT },
            { ".tese", VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT },
            { ".geom", VK_SHADER_STAGE_GEOMETRY_BIT },
            { ".frag", VK_SHADER_STAGE_FRAGMENT_BIT },
            { ".comp", VK_SHADER_STAGE_COMPUTE_BIT },

            { ".vs", VK_SHADER_STAGE_VERTEX_BIT },
            { ".tc", VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT },
            { ".te", VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT },
            { ".gs", VK_SHADER_STAGE_GEOMETRY_BIT },
            { ".fs", VK_SHADER_STAGE_FRAGMENT_BIT },
            { ".cs", VK_SHADER_STAGE_COMPUTE_BIT },
    };
    assert(filePath.has_extension() && "TODO : Better file and error handling");
    auto itr = ExtensionToStage.find(filePath.extension().string());
    assert(itr != ExtensionToStage.end() && "TODO : Better file and error handling");
    std::ifstream file(filePath);
    assert(file.is_open() && "TODO : Better file and error handling");
    std::string source(std::istreambuf_iterator<char>(file), { });
    assert(source.empty() && "TODO : Better file and error handling");
    return compile_shader_from_source(itr->second, source.c_str());
}

std::vector<uint32_t> compile_shader_from_source(VkShaderStageFlagBits stage, const char* pSource)
{
    return compile_shader_from_source(stage, 0, pSource);
}

std::vector<uint32_t> compile_shader_from_source(VkShaderStageFlagBits stage, int lineOffset, const char* pSource)
{
    assert(pSource && "TODO : Better file and error handling");
    auto glslangInitialized = GlslangInitializer::validate();
    (void)glslangInitialized;
    assert(glslangInitialized && "TODO : Better file and error handling");
    EShLanguage eshStage;
    switch (stage) {
    case VK_SHADER_STAGE_VERTEX_BIT: eshStage = EShLangVertex; break;
    case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT: eshStage = EShLangTessControl; break;
    case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT: eshStage = EShLangTessEvaluation; break;
    case VK_SHADER_STAGE_GEOMETRY_BIT: eshStage = EShLangGeometry; break;
    case VK_SHADER_STAGE_FRAGMENT_BIT: eshStage = EShLangFragment; break;
    case VK_SHADER_STAGE_COMPUTE_BIT: eshStage = EShLangCompute; break;
    default: assert(false && "TODO : Better file and error handling");
    }
    glslang::TShader shader(eshStage);
    shader.setStrings(&pSource, 1);
    auto messages = (EShMessages)(EShMsgSpvRules | EShMsgVulkanRules);
    if (!shader.parse(&get_built_in_resource(), 100, false, messages)) {
        std::cerr << shader.getInfoLog() << '\n';
        std::cerr << shader.getInfoDebugLog() << '\n';
        assert(false && "TODO : Better file and error handling");
    }
    glslang::TProgram program;
    program.addShader(&shader);
    if (!program.link(messages)) {
        std::cerr << shader.getInfoLog() << '\n';
        std::cerr << shader.getInfoDebugLog() << '\n';
        assert(false && "TODO : Better file and error handling");
    }
    std::vector<uint32_t> spirv;
    glslang::GlslangToSpv(*program.getIntermediate(eshStage), spirv);
    return spirv;
}

ShaderReflectionInfo reflect_shader(size_t codeSize, const uint32_t* pCode)
{
    ShaderReflectionInfo shaderReflectionInfo { };
    return shaderReflectionInfo;
}

static const TBuiltInResource& get_built_in_resource()
{
    static const TBuiltInResource BuiltInResource =
    []()
    {
        TBuiltInResource builtInResource;
        builtInResource.maxLights = 32;
        builtInResource.maxClipPlanes = 6;
        builtInResource.maxTextureUnits = 32;
        builtInResource.maxTextureCoords = 32;
        builtInResource.maxVertexAttribs = 64;
        builtInResource.maxVertexUniformComponents = 4096;
        builtInResource.maxVaryingFloats = 64;
        builtInResource.maxVertexTextureImageUnits = 32;
        builtInResource.maxCombinedTextureImageUnits = 80;
        builtInResource.maxTextureImageUnits = 32;
        builtInResource.maxFragmentUniformComponents = 4096;
        builtInResource.maxDrawBuffers = 32;
        builtInResource.maxVertexUniformVectors = 128;
        builtInResource.maxVaryingVectors = 8;
        builtInResource.maxFragmentUniformVectors = 16;
        builtInResource.maxVertexOutputVectors = 16;
        builtInResource.maxFragmentInputVectors = 15;
        builtInResource.minProgramTexelOffset = -8;
        builtInResource.maxProgramTexelOffset = 7;
        builtInResource.maxClipDistances = 8;
        builtInResource.maxComputeWorkGroupCountX = 65535;
        builtInResource.maxComputeWorkGroupCountY = 65535;
        builtInResource.maxComputeWorkGroupCountZ = 65535;
        builtInResource.maxComputeWorkGroupSizeX = 1024;
        builtInResource.maxComputeWorkGroupSizeY = 1024;
        builtInResource.maxComputeWorkGroupSizeZ = 64;
        builtInResource.maxComputeUniformComponents = 1024;
        builtInResource.maxComputeTextureImageUnits = 16;
        builtInResource.maxComputeImageUniforms = 8;
        builtInResource.maxComputeAtomicCounters = 8;
        builtInResource.maxComputeAtomicCounterBuffers = 1;
        builtInResource.maxVaryingComponents = 60;
        builtInResource.maxVertexOutputComponents = 64;
        builtInResource.maxGeometryInputComponents = 64;
        builtInResource.maxGeometryOutputComponents = 128;
        builtInResource.maxFragmentInputComponents = 128;
        builtInResource.maxImageUnits = 8;
        builtInResource.maxCombinedImageUnitsAndFragmentOutputs = 8;
        builtInResource.maxCombinedShaderOutputResources = 8;
        builtInResource.maxImageSamples = 0;
        builtInResource.maxVertexImageUniforms = 0;
        builtInResource.maxTessControlImageUniforms = 0;
        builtInResource.maxTessEvaluationImageUniforms = 0;
        builtInResource.maxGeometryImageUniforms = 0;
        builtInResource.maxFragmentImageUniforms = 8;
        builtInResource.maxCombinedImageUniforms = 8;
        builtInResource.maxGeometryTextureImageUnits = 16;
        builtInResource.maxGeometryOutputVertices = 256;
        builtInResource.maxGeometryTotalOutputComponents = 1024;
        builtInResource.maxGeometryUniformComponents = 1024;
        builtInResource.maxGeometryVaryingComponents = 64;
        builtInResource.maxTessControlInputComponents = 128;
        builtInResource.maxTessControlOutputComponents = 128;
        builtInResource.maxTessControlTextureImageUnits = 16;
        builtInResource.maxTessControlUniformComponents = 1024;
        builtInResource.maxTessControlTotalOutputComponents = 4096;
        builtInResource.maxTessEvaluationInputComponents = 128;
        builtInResource.maxTessEvaluationOutputComponents = 128;
        builtInResource.maxTessEvaluationTextureImageUnits = 16;
        builtInResource.maxTessEvaluationUniformComponents = 1024;
        builtInResource.maxTessPatchComponents = 120;
        builtInResource.maxPatchVertices = 32;
        builtInResource.maxTessGenLevel = 64;
        builtInResource.maxViewports = 16;
        builtInResource.maxVertexAtomicCounters = 0;
        builtInResource.maxTessControlAtomicCounters = 0;
        builtInResource.maxTessEvaluationAtomicCounters = 0;
        builtInResource.maxGeometryAtomicCounters = 0;
        builtInResource.maxFragmentAtomicCounters = 8;
        builtInResource.maxCombinedAtomicCounters = 8;
        builtInResource.maxAtomicCounterBindings = 1;
        builtInResource.maxVertexAtomicCounterBuffers = 0;
        builtInResource.maxTessControlAtomicCounterBuffers = 0;
        builtInResource.maxTessEvaluationAtomicCounterBuffers = 0;
        builtInResource.maxGeometryAtomicCounterBuffers = 0;
        builtInResource.maxFragmentAtomicCounterBuffers = 1;
        builtInResource.maxCombinedAtomicCounterBuffers = 1;
        builtInResource.maxAtomicCounterBufferSize = 16384;
        builtInResource.maxTransformFeedbackBuffers = 4;
        builtInResource.maxTransformFeedbackInterleavedComponents = 64;
        builtInResource.maxCullDistances = 8;
        builtInResource.maxCombinedClipAndCullDistances = 8;
        builtInResource.maxSamples = 4;
        builtInResource.limits.nonInductiveForLoops = 1;
        builtInResource.limits.whileLoops = 1;
        builtInResource.limits.doWhileLoops = 1;
        builtInResource.limits.generalUniformIndexing = 1;
        builtInResource.limits.generalAttributeMatrixVectorIndexing = 1;
        builtInResource.limits.generalVaryingIndexing = 1;
        builtInResource.limits.generalSamplerIndexing = 1;
        builtInResource.limits.generalVariableIndexing = 1;
        builtInResource.limits.generalConstantMatrixVectorIndexing = 1;
        return builtInResource;
    }();
    return BuiltInResource;
}

} // namespace vk
} // namespace dst
