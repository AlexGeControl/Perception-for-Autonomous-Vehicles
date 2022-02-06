#pragma once
#include <geometry_msgs/TransformStamped.h>
#include <nav_msgs/Odometry.h>
#include <tf/tfMessage.h>

#include "nuscenes2bag/utils.hpp"
#include <nuscenes2bag/MetaDataTypes.hpp>

namespace nuscenes2bag {

nav_msgs::Odometry
egoPoseInfo2OdometryMsg(const EgoPoseInfo& egoPoseInfo);

geometry_msgs::TransformStamped
egoPoseInfo2TransformStamped(const EgoPoseInfo& egoPoseInfo);

}
