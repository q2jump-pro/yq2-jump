#ifndef STRAFE_HELPER_INCLUDES_H
#define STRAFE_HELPER_INCLUDES_H

#define STRAFE_HELPER_CUSTOMIZATION_DISABLE_DRAW_SPEED

#include "strafe_helper/strafe_helper_customization.h"
#include "vid/header/ref.h"
#include <math.h>
#include <stdint.h>
#include <stdio.h>

#define STRAFE_HELPER_ACCELERATING_ANGLES_COLOR 0x03
#define STRAFE_HELPER_OPTIMAL_ANGLE_COLOR 0xD4
#define STRAFE_HELPER_CENTER_MARKER_COLOR 0xFB

int getColor(int element_id) {
  switch (element_id) {
  case shc_ElementId_AcceleratingAngles:
    return STRAFE_HELPER_ACCELERATING_ANGLES_COLOR;
  case shc_ElementId_OptimalAngle:
    return STRAFE_HELPER_OPTIMAL_ANGLE_COLOR;
  case shc_ElementId_CenterMarker:
    return STRAFE_HELPER_CENTER_MARKER_COLOR;
  default:
    return SHELL_RED_COLOR;
  }
}

void shc_drawFilledRectangle(const float x, const float y, const float w,
                             const float h, enum shc_ElementId element_id) {

  Draw_Fill(roundf(x), roundf(y), roundf(w), roundf(h), getColor(element_id));
}

#endif // STRAFE_HELPER_INCLUDES_H
