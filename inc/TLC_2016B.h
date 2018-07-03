/*
 * File: TLC_2016B.h
 *
 * Code generated for Simulink model 'TLC_2016B'.
 *
 * Model version                  : 1.147
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jun 29 10:25:36 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
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

/* Block signals (auto storage) */
typedef struct {
  boolean_T countSD1B1;                /* '<S1>/TrafficLightController' */
  boolean_T countSD1B2;                /* '<S1>/TrafficLightController' */
  boolean_T lightGrSD1;                /* '<S1>/TrafficLightController' */
  boolean_T lightOrSD1;                /* '<S1>/TrafficLightController' */
  boolean_T countSD1B1_j;              /* '<S2>/TrafficLightController' */
  boolean_T countSD1B2_i;              /* '<S2>/TrafficLightController' */
  boolean_T lightGrSD1_h;              /* '<S2>/TrafficLightController' */
  boolean_T lightOrSD1_h;              /* '<S2>/TrafficLightController' */
  boolean_T countSD1B1_h;              /* '<S3>/TrafficLightController' */
  boolean_T countSD1B2_p;              /* '<S3>/TrafficLightController' */
  boolean_T lightGrSD1_i;              /* '<S3>/TrafficLightController' */
  boolean_T lightOrSD1_p;              /* '<S3>/TrafficLightController' */
  boolean_T countSD1B1_g;              /* '<S4>/TrafficLightController' */
  boolean_T countSD1B2_ib;             /* '<S4>/TrafficLightController' */
  boolean_T lightGrSD1_e;              /* '<S4>/TrafficLightController' */
  boolean_T lightOrSD1_l;              /* '<S4>/TrafficLightController' */
} B_TLC_2016B_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  boolean_T Delay_1_DSTATE;            /* '<Root>/Delay' */
  boolean_T Delay_11_DSTATE;           /* '<Root>/Delay' */
  boolean_T Delay_16_DSTATE;           /* '<Root>/Delay' */
  boolean_T Delay_6_DSTATE;            /* '<Root>/Delay' */
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1;/* '<S1>/TrafficLightController' */
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1_m;/* '<S2>/TrafficLightController' */
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1_a;/* '<S3>/TrafficLightController' */
  MdlrefDW_TrafficLightControll_T TrafficLightController_DWORK1_e;/* '<S4>/TrafficLightController' */
} DW_TLC_2016B_T;

/* Real-time Model Data Structure */
struct tag_RTM_TLC_2016B_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_TLC_2016B_T TLC_2016B_B;

/* Block states (auto storage) */
extern DW_TLC_2016B_T TLC_2016B_DW;

/* Model entry point functions */
extern void TLC_2016B_initialize(void);
extern void TLC_2016B_step(void);
extern void TLC_2016B_terminate(void);

/* Real-time Model object */
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
