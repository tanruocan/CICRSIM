#pragma once

#include <ros/ros.h>

namespace cicr {
namespace planning {

class MotionPlanning {
 public:
  explicit MotionPlanning();
  ~MotionPlanning() = default;

  Init();
  void MainLoop();
}
}  // namespace planning
}  // namespace cicr