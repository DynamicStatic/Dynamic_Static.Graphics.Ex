
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

#include "Dynamic_Static/Core/Defines.hpp"
#include "Dynamic_Static/Core/NonCopyable.hpp"

#include <vector>

namespace ShapeBlaster_ex {

    template <typename T>
    class Pool final
        : dst::NonCopyable
    {
        // TODO : Refine, test, and move into dst::Core.

    private:
        std::vector<T> mObjects;
        std::vector<T*> mAvailableObjects;

    public:
        Pool() = default;

    public:
        size_t total_count() const
        {
            return mObjects.size();
        }

        size_t avaiable_count() const
        {
            return mAvailableObjects.size();
        }

        size_t in_use_count() const
        {
            return total_count() - avaiable_count();
        }

        void reserve(size_t count)
        {
            mObjects.reserve(count);
            mAvailableObjects.reserve(count);
        }

        template <typename ...Args>
        void create(Args&&... args)
        {
            mObjects.push_back(std::forward<Args>(args)...);
            mAvailableObjects.push_back(&mObjects.back());
        }

        void add(const T& object)
        {
            mObjects.push_back(std::move(object));
            mAvailableObjects.push_back(&mObjects.back());
        }

        void add(T&& object)
        {
            mObjects.push_back(std::move(object));
            mAvailableObjects.push_back(&mObjects.back());
        }

        T* check_out()
        {
            T* object = nullptr;
            if (!mAvailableObjects.empty()) {
                object = mAvailableObjects.back();
                mAvailableObjects.pop_back();
            }

            return object;
        }

        void check_in(T* object)
        {
            if (object) {
                assert(
                    mObjects.data() <= object && object < mObjects.data() + mObjects.size() &&
                    "Attempted to check in object that doesn't belong to this Pool"
                );

                mAvailableObjects.push_back(object);
            }
        }
    };

} // namespace ShapeBlaster_ex
