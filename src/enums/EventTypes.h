#ifndef EVENTTYPES_H
#define EVENTTYPES_H

enum
{
  NEW_USER = 1,
  USER_IS_VISIBLE = 2,
  USER_IS_OUT_OF_SCENE = 3,
  USER_IS_LOST = 4,
  SKELETON_STOPPED_TRACKING = 5,
  SKELETON_CALIBRATING = 6,
  SKELETON_TRACKING = 7,
  SKELETON_CALIBRATION_FAILED = 8,
  DEVICE_INITIALIZED = 9,
  DEVICE_ERROR = 10
};
#endif