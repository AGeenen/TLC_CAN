/*
 * File: TrafficLightController.h
 *
 * Code generated for Simulink model 'TrafficLightController'.
 *
 * Model version                  : 1.194
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jul 06 15:05:53 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TrafficLightController_h_
#define RTW_HEADER_TrafficLightController_h_
#include <string.h>
#ifndef TrafficLightController_COMMON_INCLUDES_
# define TrafficLightController_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TrafficLightController_COMMON_INCLUDES_ */

#include "TrafficLightController_types.h"

/* Block states (auto storage) for model 'TrafficLightController' */
typedef struct {
  real_T DelayOneStep1_DSTATE;         /* '<Root>/Delay One Step1' */
  uint32_T temporalCounter_i1;         /* '<Root>/TrafficLightHandler ' */
  uint32_T temporalCounter_i2;         /* '<Root>/TrafficLightHandler ' */
  uint8_T Delay_DSTATE;                /* '<Root>/Delay' */
  boolean_T DelayOneStep4_DSTATE;      /* '<Root>/Delay One Step4' */
  boolean_T Delay2_DSTATE;             /* '<Root>/Delay2' */
  uint8_T is_active_c4_TrafficLightContro;/* '<Root>/TrafficLightHandler ' */
  uint8_T is_c4_TrafficLightController;/* '<Root>/TrafficLightHandler ' */
  uint8_T is_NORMAL;                   /* '<Root>/TrafficLightHandler ' */
  uint8_T is_EMERGENCY;                /* '<Root>/TrafficLightHandler ' */
} DW_TrafficLightController_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_TrafficLightControlle_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_TrafficLightController_f_T rtdw;
  RT_MODEL_TrafficLightControll_T rtm;
} MdlrefDW_TrafficLightControll_T;

/* Model reference registration function */
extern void TrafficLightControll_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TrafficLightControll_T *const TrafficLightController_M,
  DW_TrafficLightController_f_T *localDW);
extern void TrafficLightController_Init(DW_TrafficLightController_f_T *localDW);
extern void TrafficLightController(const boolean_T *rtu_Sensor1Vd_, const
  boolean_T *rtu_Sensor2Vd_, const boolean_T *rtu_Sensor3Vd_, const boolean_T
  *rtu_lgtVd, const boolean_T *rtu_Sensor1Value_, const boolean_T
  *rtu_Sensor2Value_, const boolean_T *rtu_Sensor3Value_, const boolean_T
  *rtu_VdSD2, const real_T *rtu_CountSD2, const uint8_T *rtu_LightSD2_, const
  boolean_T *rtu_VdOD1, const real_T *rtu_CountOD1, const uint8_T *rtu_LightOD1_,
  const boolean_T *rtu_VdOD2, const real_T *rtu_CountOD2, const uint8_T
  *rtu_LightOD2_, const boolean_T *rtu_Tag_, boolean_T *rty_VdSD1, real_T
  *rty_CountSD1, uint8_T *rty_LightSD1, DW_TrafficLightController_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Data Type Conversion3' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'TrafficLightController'
 * '<S1>'   : 'TrafficLightController/Chart'
 * '<S2>'   : 'TrafficLightController/LightEmControl'
 * '<S3>'   : 'TrafficLightController/TrafficLightHandler '
 * '<S4>'   : 'TrafficLightController/Validator'
 */
#endif                                 /* RTW_HEADER_TrafficLightController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
