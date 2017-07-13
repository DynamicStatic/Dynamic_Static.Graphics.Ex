
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Camera.hpp"

namespace Dynamic_Static
{
    namespace Graphics
    {
        Transform& Camera::transform()
        {
            return mTransform;
        }

        const Transform& Camera::transform() const
        {
            return mTransform;
        }

        float Camera::aspect_ratio() const
        {
            return mAspectRatio;
        }

        void Camera::aspect_ratio(float aspectRatio)
        {
            mAspectRatio = aspectRatio;
        }

        float Camera::field_of_view() const
        {
            return mFieldOfView;
        }

        void Camera::field_of_view(float fieldOfView)
        {
            mFieldOfView = fieldOfView;
        }

        float Camera::near_plane() const
        {
            return mNearPlane;
        }

        void Camera::near_plane(float nearPlane)
        {
            mNearPlane = nearPlane;
        }

        float Camera::far_plane() const
        {
            return mFarPlane;
        }

        void Camera::far_plane(float farPlane)
        {
            mFarPlane = farPlane;
        }

        Matrix4x4 Camera::view() const
        {
            return Matrix4x4::Identity;
        }

        Matrix4x4 Camera::projection() const
        {
            return Matrix4x4::Identity;
        }
    } // namespace Graphics
} // namespace Dynamic_Static