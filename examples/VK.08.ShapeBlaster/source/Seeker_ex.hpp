
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Enemy_ex.hpp"

namespace ShapeBlaster_ex {

    class Seeker final
        : public Enemy
    {
    private:
        static constexpr float Acceleration { 54 }; // Pixels / second
        Entity* mTarget { nullptr };

    public:
        Seeker(Sprite* sprite)
            : Enemy(sprite)
        {
        }

    public:
        void spawn(const glm::vec2& position, Entity& target)
        {
            mPosition = position;
            mTarget = &target;
        }

        void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playArea
        ) override final
        {
            Enemy::on_update(clock, input, playArea);
            if (mTarget) {
                auto direction = mTarget->position() - mPosition;
                if (direction != glm::vec2 { }) {
                    direction = glm::normalize(direction);
                    mRotation = std::atan2(direction.y, direction.x);
                }

                mVelocity += direction * Acceleration;
            }
        }
    };

} // namespace ShapeBlaster_ex
