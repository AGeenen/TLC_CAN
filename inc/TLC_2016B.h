/*
 * File: TLC_2016B.h
 *
 * Code generated for Simulink model 'TLC_2016B'.
 *
 * Model version                  : 1.249
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jul 10 12:25:03 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TLC_2016B_h_
#define RTW_HEADER_TLC_2016B_h_
#include <stddef.h>
#include <string.h>
#ifndef TLC_2016B_COMMON_INCLUDES_
# define TLC_2016B_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TLC_2016B_COMMON_INCLUDES_ */

#include "TLC_2016B_types.h"

/* Child system includes */
#include "TrafficLightController.h"

/* Includes for objects with custom storage classes. */
#include "TLC_def.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1;/* '<S1>/TrafficLightController' */
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1_m;/* '<S2>/TrafficLightController' */
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1_d;/* '<S3>/TrafficLightController' */
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1_i;/* '<S4>/TrafficLightController' */
} DW_TLC_2016B_T;

/* Real-time Model Data Structure */
struct tag_RTM_TLC_2016B_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
/* Volatile memory section */
extern DW_TLC_2016B_T TLC_2016B_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T countSD1_E;              /* '<S1>/TrafficLightController' */
extern real_T lightSD1_E;              /* '<S1>/TrafficLightController' */
extern real_T countSD1_N;              /* '<S2>/TrafficLightController' */
extern real_T lightSD1_N;              /* '<S2>/TrafficLightController' */
extern real_T countSD1_S;              /* '<S3>/TrafficLightController' */
extern real_T lightSD1_S;              /* '<S3>/TrafficLightController' */
extern real_T countSD1_W;              /* '<S4>/TrafficLightController' */
extern real_T lightSD1_W;              /* '<S4>/TrafficLightController' */
extern boolean_T tag_N;                /* '<Root>/Constant' */
extern boolean_T tag_S;                /* '<Root>/Constant1' */
extern boolean_T tag_W;                /* '<Root>/Constant2' */
extern boolean_T tag_E;                /* '<Root>/Constant3' */
extern boolean_T lgtVd_E;              /* '<S1>/LgtVd_' */
extern boolean_T sensor1Value_E;       /* '<S1>/Sensor1Value_' */
extern boolean_T sensor1Vd_E;          /* '<S1>/Sensor1Vd_' */
extern boolean_T sensor2Value_E;       /* '<S1>/Sensor2Value_' */
extern boolean_T sensor2Vd_E;          /* '<S1>/Sensor2Vd_' */
extern boolean_T sensor3Value_E;       /* '<S1>/Sensor3Value_' */
extern boolean_T sensor3Vd_E;          /* '<S1>/Sensor3Vd_' */
extern boolean_T vdSD1_E;              /* '<S1>/TrafficLightController' */
extern boolean_T lgtVd_N;              /* '<S2>/LgtVd_' */
extern boolean_T sensor1Value_N;       /* '<S2>/Sensor1Value_' */
extern boolean_T sensor1Vd_N;          /* '<S2>/Sensor1Vd_' */
extern boolean_T sensor2Value_N;       /* '<S2>/Sensor2Value_' */
extern boolean_T sensor2Vd_N;          /* '<S2>/Sensor2Vd_' */
extern boolean_T sensor3Value_N;       /* '<S2>/Sensor3Value_' */
extern boolean_T sensor3Vd_N;          /* '<S2>/Sensor3Vd_' */
extern boolean_T vdSD1_N;              /* '<S2>/TrafficLightController' */
extern boolean_T lgtVd_S;              /* '<S3>/LgtVd_' */
extern boolean_T sensor1Value_S;       /* '<S3>/Sensor1Value_' */
extern boolean_T sensor1Vd_S;          /* '<S3>/Sensor1Vd_' */
extern boolean_T sensor2Value_S;       /* '<S3>/Sensor2Value_' */
extern boolean_T sensor2Vd_S;          /* '<S3>/Sensor2Vd_' */
extern boolean_T sensor3Value_S;       /* '<S3>/Sensor3Value_' */
extern boolean_T sensor3Vd_S;          /* '<S3>/Sensor3Vd_' */
extern boolean_T vdSD1_S;              /* '<S3>/TrafficLightController' */
extern boolean_T lgtVd_W;              /* '<S4>/LgtVd_' */
extern boolean_T sensor1Value_W;       /* '<S4>/Sensor1Value_' */
extern boolean_T sensor1Vd_W;          /* '<S4>/Sensor1Vd_' */
extern boolean_T sensor2Value_W;       /* '<S4>/Sensor2Value_' */
extern boolean_T sensor2Vd_W;          /* '<S4>/Sensor2Vd_' */
extern boolean_T sensor3Value_W;       /* '<S4>/Sensor3Value_' */
extern boolean_T sensor3Vd_W;          /* '<S4>/Sensor3Vd_' */
extern boolean_T vdSD1_W;              /* '<S4>/TrafficLightController' */

/* Model entry point functions */
/* Volatile memory section */
extern void TLC_2016B_initialize(void);

/* Volatile memory section */
extern void TLC_2016B_step(void);

/* Volatile memory section */
extern void TLC_2016B_terminate(void);

/* Real-time Model object */

/* Volatile memory section */
extern RT_MODEL_TLC_2016B_T *const TLC_2016B_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TLC_2016B'
 * '<S1>'   : 'TLC_2016B/EastCan'
 * '<S2>'   : 'TLC_2016B/NorthCan'
 * '<S3>'   : 'TLC_2016B/SouthCan'
 * '<S4>'   : 'TLC_2016B/WestCan'
 */
#endif                                 /* RTW_HEADER_TLC_2016B_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
