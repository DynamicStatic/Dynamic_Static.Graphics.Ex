
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionTexCoordColor.hpp"

#include <utility>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Generalize primitive creation...
     */
    std::pair<
        std::vector<VertexPositionTexCoordColor>,
        std::vector<uint16_t>
    >
        create_box_primitive(
        const dst::Vector3& dimensions,
        const dst::Color& topColor,
        const dst::Color& bottomColor
    );

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
