#pragma once

#include "ensenso_camera/camera.h"
#include "ensenso_camera/mono_camera.h"
#include "ensenso_camera/stereo_camera.h"

#include <nodelet/nodelet.h>

#include <memory>
#include <string>

namespace camera_nodelet
{
void initNxLib(ros::NodeHandle& nh);

template <typename CameraType>
std::unique_ptr<CameraType> initCamera(ros::NodeHandle& nh, ros::NodeHandle& nhPrivate, std::string const& nodeType);

}  // namespace camera_nodelet
