/*
 * File: TrafficLightController.h
 *
 * Code generated for Simulink model 'TrafficLightController'.
 *
 * Model version                  : 1.160
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jun 29 10:25:27 2018
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
#include "rt_urand_Upu32_Yd_f_pw.h"

/* Block states (auto storage) for model 'TrafficLightController' */
typedef struct {
  real_T UniformRandomNumber_NextOutput;/* '<Root>/Uniform Random Number' */
  uint32_T RandSeed;                   /* '<Root>/Uniform Random Number' */
  uint32_T temporalCounter_i1;         /* '<Root>/TrafficLightHandler ' */
  uint32_T temporalCounter_i2;         /* '<Root>/TrafficLightHandler ' */
  boolean_T Delay_DSTATE;              /* '<Root>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<Root>/Delay1' */
  boolean_T DelayOneStep2_DSTATE;      /* '<Root>/Delay One Step2' */
  boolean_T DelayOneStep3_DSTATE;      /* '<Root>/Delay One Step3' */
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
  *rtu_LgtGrVd_, const boolean_T *rtu_LgtOrVd_, const boolean_T *rtu_LgtReVd_,
  const boolean_T *rtu_Sensor1Value_, const boolean_T *rtu_Sensor2Value_, const
  boolean_T *rtu_Sensor3Value_, const boolean_T *rtu_VdSD2, const boolean_T
  *rtu_LightGrSD2_, const boolean_T *rtu_LightOrSD2_, const boolean_T
  *rtu_CountSD2B1_, const boolean_T *rtu_CountSD2B2_, const boolean_T *rtu_VdOD1,
  const boolean_T *rtu_LightGrOD1_, const boolean_T *rtu_LightOrOD1_, const
  boolean_T *rtu_CountOD1B1_, const boolean_T *rtu_CountOD1B2_, const boolean_T *
  rtu_VdOD2, const boolean_T *rtu_LightGrOD2_, const boolean_T *rtu_LightOrOD2_,
  const boolean_T *rtu_CountOD2B1_, const boolean_T *rtu_CountOD2B2_, const
  boolean_T *rtu_Tag_, boolean_T *rty_VdSD1, boolean_T *rty_CountSD1B1,
  boolean_T *rty_CountSD1B2, boolean_T *rty_LightGrSD1, boolean_T
  *rty_LightOrSD1, DW_TrafficLightController_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<S2>'   : 'TrafficLightController/Counter'
 * '<S3>'   : 'TrafficLightController/LightEmControl'
 * '<S4>'   : 'TrafficLightController/TrafficLightHandler '
 * '<S5>'   : 'TrafficLightController/Validator'
 * '<S6>'   : 'TrafficLightController/sensorValueHandler'
 */
#endif                                 /* RTW_HEADER_TrafficLightController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
