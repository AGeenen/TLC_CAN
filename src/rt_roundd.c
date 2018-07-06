/*
 * File: rt_roundd.c
 *
 * Code generated for Simulink model 'TrafficLightController'.
 *
 * Model version                  : 1.174
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jul 06 13:52:59 2018
 */

#include "rtwtypes.h"
#include <math.h>
#include "rt_roundd.h"

real_T rt_roundd(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
