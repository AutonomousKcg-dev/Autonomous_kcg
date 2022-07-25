//
// MathUtils.h - sample application that use cognata simulation engine SDK
//
// Copyright Cognata Ltd. (c) 2021 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#ifndef __MATHUTILS_H__
#define __MATHUTILS_H__

#include <string>
#include <vectors.pb.h>
#include <cmath>

const float DEG2RAD = 0.0174532925f;
const float RAD2DEG = 57.295779513f;
const double g_epsilon = std::numeric_limits<double>::epsilon();
#if defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
#include "Eigen/Dense"
#include "Eigen/Geometry"
#if defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif
namespace Cognata
{
namespace SDK
{

static Eigen::Vector3f SDKVecToVector3f(const Cognata::SDK::SDKVector3& v1)
{
    Eigen::Vector3f vec(v1.x(), v1.y(), v1.z());
    return vec;
}

static Cognata::SDK::SDKVector3 Vector3fToSDKVec(const Eigen::Vector3f& v1)
{
    Cognata::SDK::SDKVector3 vec;
    vec.set_x(v1.x());
    vec.set_y(v1.y());
    vec.set_z(v1.z());

    return vec;
}

static Eigen::Vector3f transformPointByRotationDegree(Eigen::Vector3f point, Eigen::Vector3f rotation)
{
    Eigen::Transform<float, 3, Eigen::Affine> t;
    t = t.Identity();
    t.rotate(Eigen::AngleAxis<float>(rotation.z() * DEG2RAD, Eigen::Vector3f::UnitZ()));
    t.rotate(Eigen::AngleAxis<float>(rotation.y() * DEG2RAD, Eigen::Vector3f::UnitY()));
    t.rotate(Eigen::AngleAxis<float>(rotation.x() * DEG2RAD, Eigen::Vector3f::UnitX()));

    return t * point;
}

static Eigen::Vector3f transformPointByHeading(Eigen::Vector3f point, float angle)
{
    Eigen::Matrix3f m;
    m = Eigen::AngleAxisf(angle, Eigen::Vector3f::UnitZ());

    return m * point;
}

static float transformDirectionByHeading(float rotation, float angle)
{
    float rv;
    rv = (float)std::fmod(rotation + angle, 360);
    return rv;
}

template<class T>
static T clamp(T val, T min, T max)
{
    if (val < min)
        return min;
    if (val > max)
        return max;
    return val;
}

///TODO: check usage of ostream overloading
static std::string toString(const Cognata::SDK::SDKVector3& vec)
{
    std::ostringstream stringStream;
    stringStream << "[" << vec.x() << "," << vec.y() << "," << vec.z() << "]";
    return stringStream.str();
}

///TODO: check usage of ostream overloading
static std::string toString(const Eigen::Vector3f& vec)
{
    std::ostringstream stringStream;
    stringStream << "[" << vec.x() << "," << vec.y() << "," << vec.z() << "]";
    return stringStream.str();
}

static inline bool fuzzyCompare(double x, double y)
{
    return std::abs(x-y) < g_epsilon;
}

} // namespace SDK
} // namespace Cognata

#endif // __MATHUTILS_H__
