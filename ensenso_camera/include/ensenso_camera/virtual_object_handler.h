#pragma once

#include <vector>

#include <tf2_ros/transform_listener.h>
#include <tf2/LinearMath/Transform.h>

namespace ensenso_camera
{
class VirtualObjectHandler
{
public:
  VirtualObjectHandler(std::string const& filename, std::string const& objectsFrame, std::string const& cameraFrame);

  void updateObjectLinks();

private:
  // Original object poses in the base frame.
  std::vector<tf2::Transform> originalPoses;

  // Frame in which objects are defined.
  std::string objectsFrame;

  // Optical frame of the camera.
  std::string cameraFrame;

  tf2_ros::Buffer tfBuffer;
  tf2_ros::TransformListener tfListener{ tfBuffer };
};
}  // namespace ensenso_camera
