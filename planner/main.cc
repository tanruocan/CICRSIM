#include <planner/motion_planning.h>
#include <ros/ros.h>
int main(int argc, char *argv[]) {
  ros::init(argc, argv, "planning");

  cicr::planning::MotionPlanning motion_planning;
  motion_planning.Init();

  ros::Rate loop_rate(10);
  while (ros::ok()) {
    motion_planning.MainLoop();
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
