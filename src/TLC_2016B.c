/*
 * File: TLC_2016B.c
 *
 * Code generated for Simulink model 'TLC_2016B'.
 *
 * Model version                  : 1.223
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jul 06 15:33:34 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TLC_2016B.h"
#include "TLC_2016B_private.h"

/* Block signals (auto storage) */
B_TLC_2016B_T TLC_2016B_B;

/* Block states (auto storage) */
DW_TLC_2016B_T TLC_2016B_DW;

/* Real-time model */
RT_MODEL_TLC_2016B_T TLC_2016B_M_;
RT_MODEL_TLC_2016B_T *const TLC_2016B_M = &TLC_2016B_M_;

/* Model step function */
void TLC_2016B_step(void)
{
  /* local block i/o variables */
  real_T rtb_countSD1_E;
  real_T rtb_countSD1_N;
  real_T rtb_countSD1_S;
  real_T rtb_countSD1_W;
  uint8_T rtb_lightSD1_E;
  uint8_T rtb_lightSD1_N;
  uint8_T rtb_lightSD1_S;
  uint8_T rtb_lightSD1_W;
  boolean_T rtb_vdSD1_N;
  boolean_T rtb_vdSD1_E;
  boolean_T rtb_vdSD1_S;
  boolean_T rtb_vdSD1_W;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_N = TLC_2016B_B.vdSD1_N;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_E = TLC_2016B_B.vdSD1_E;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_E = TLC_2016B_B.countSD1_E;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_E = TLC_2016B_B.lightSD1_E;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_N = TLC_2016B_B.countSD1_N;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_N = TLC_2016B_B.lightSD1_N;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_S = TLC_2016B_B.vdSD1_S;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_S = TLC_2016B_B.countSD1_S;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_S = TLC_2016B_B.lightSD1_S;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_W = TLC_2016B_B.vdSD1_W;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_W = TLC_2016B_B.countSD1_W;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_W = TLC_2016B_B.lightSD1_W;

  /* ModelReference: '<S1>/TrafficLightController' */
  TrafficLightController(&TLC_2016B_B.sensor1Vd_E, &TLC_2016B_B.sensor2Vd_E,
    &TLC_2016B_B.sensor3Vd_E, &TLC_2016B_B.lgtGrVd_E,
    &TLC_2016B_B.sensor1Value_E, &TLC_2016B_B.sensor2Value_E,
    &TLC_2016B_B.sensor3Value_E, &rtb_vdSD1_W, &rtb_countSD1_W, &rtb_lightSD1_W,
    &rtb_vdSD1_S, &rtb_countSD1_S, &rtb_lightSD1_S, &rtb_vdSD1_N,
    &rtb_countSD1_N, &rtb_lightSD1_N, &TLC_2016B_B.tag_E, &TLC_2016B_B.vdSD1_E,
    &TLC_2016B_B.countSD1_E, &TLC_2016B_B.lightSD1_E,
    &(TLC_2016B_DW.TrafficLightController_DWORK1.rtdw));

  /* ModelReference: '<S2>/TrafficLightController' */
  TrafficLightController(&TLC_2016B_B.sensor1Vd_N, &TLC_2016B_B.sensor2Vd_N,
    &TLC_2016B_B.sensor3Vd_N, &TLC_2016B_B.lgtGrVd_N,
    &TLC_2016B_B.sensor1Value_N, &TLC_2016B_B.sensor2Value_N,
    &TLC_2016B_B.sensor3Value_N, &rtb_vdSD1_S, &rtb_countSD1_S, &rtb_lightSD1_S,
    &rtb_vdSD1_E, &rtb_countSD1_E, &rtb_lightSD1_E, &rtb_vdSD1_W,
    &rtb_countSD1_W, &rtb_lightSD1_W, &TLC_2016B_B.tag_N, &TLC_2016B_B.vdSD1_N,
    &TLC_2016B_B.countSD1_N, &TLC_2016B_B.lightSD1_N,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_m.rtdw));

  /* ModelReference: '<S3>/TrafficLightController' */
  TrafficLightController(&TLC_2016B_B.sensor1Vd_S, &TLC_2016B_B.sensor2Vd_S,
    &TLC_2016B_B.sensor3Vd_S, &TLC_2016B_B.lgtGrVd_S,
    &TLC_2016B_B.sensor1Value_S, &TLC_2016B_B.sensor2Value_S,
    &TLC_2016B_B.sensor3Value_S, &rtb_vdSD1_N, &rtb_countSD1_N, &rtb_lightSD1_N,
    &rtb_vdSD1_W, &rtb_countSD1_W, &rtb_lightSD1_W, &rtb_vdSD1_E,
    &rtb_countSD1_E, &rtb_lightSD1_E, &TLC_2016B_B.tag_S, &TLC_2016B_B.vdSD1_S,
    &TLC_2016B_B.countSD1_S, &TLC_2016B_B.lightSD1_S,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_d.rtdw));

  /* ModelReference: '<S4>/TrafficLightController' */
  TrafficLightController(&TLC_2016B_B.sensor1Vd_W, &TLC_2016B_B.sensor2Vd_W,
    &TLC_2016B_B.sensor3Vd_W, &TLC_2016B_B.lgtGrVd_W,
    &TLC_2016B_B.sensor1Value_W, &TLC_2016B_B.sensor2Value_W,
    &TLC_2016B_B.sensor3Value_W, &rtb_vdSD1_E, &rtb_countSD1_E, &rtb_lightSD1_E,
    &rtb_vdSD1_N, &rtb_countSD1_N, &rtb_lightSD1_N, &rtb_vdSD1_S,
    &rtb_countSD1_S, &rtb_lightSD1_S, &TLC_2016B_B.tag_W, &TLC_2016B_B.vdSD1_W,
    &TLC_2016B_B.countSD1_W, &TLC_2016B_B.lightSD1_W,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_i.rtdw));
}

/* Model initialize function */
void TLC_2016B_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TLC_2016B_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &TLC_2016B_B), 0,
                sizeof(B_TLC_2016B_T));

  {
    TLC_2016B_B.tag_N = false;
    TLC_2016B_B.tag_S = false;
    TLC_2016B_B.tag_W = true;
    TLC_2016B_B.tag_E = true;
    TLC_2016B_B.lgtGrVd_E = true;
    TLC_2016B_B.sensor1Value_E = true;
    TLC_2016B_B.sensor1Vd_E = true;
    TLC_2016B_B.sensor2Value_E = true;
    TLC_2016B_B.sensor2Vd_E = true;
    TLC_2016B_B.sensor3Value_E = false;
    TLC_2016B_B.sensor3Vd_E = true;
    TLC_2016B_B.lgtGrVd_N = true;
    TLC_2016B_B.sensor1Value_N = true;
    TLC_2016B_B.sensor1Vd_N = true;
    TLC_2016B_B.sensor2Value_N = true;
    TLC_2016B_B.sensor2Vd_N = true;
    TLC_2016B_B.sensor3Value_N = false;
    TLC_2016B_B.sensor3Vd_N = true;
    TLC_2016B_B.lgtGrVd_S = true;
    TLC_2016B_B.sensor1Value_S = true;
    TLC_2016B_B.sensor1Vd_S = true;
    TLC_2016B_B.sensor2Value_S = true;
    TLC_2016B_B.sensor2Vd_S = true;
    TLC_2016B_B.sensor3Value_S = false;
    TLC_2016B_B.sensor3Vd_S = true;
    TLC_2016B_B.lgtGrVd_W = true;
    TLC_2016B_B.sensor1Value_W = true;
    TLC_2016B_B.sensor1Vd_W = true;
    TLC_2016B_B.sensor2Value_W = true;
    TLC_2016B_B.sensor2Vd_W = true;
    TLC_2016B_B.sensor3Value_W = false;
    TLC_2016B_B.sensor3Vd_W = true;
  }

  /* states (dwork) */
  (void) memset((void *)&TLC_2016B_DW, 0,
                sizeof(DW_TLC_2016B_T));

  /* Model Initialize fcn for ModelReference Block: '<S1>/TrafficLightController' */
  TrafficLightControll_initialize(rtmGetErrorStatusPointer(TLC_2016B_M),
    &(TLC_2016B_DW.TrafficLightController_DWORK1.rtm),
    &(TLC_2016B_DW.TrafficLightController_DWORK1.rtdw));

  /* Model Initialize fcn for ModelReference Block: '<S2>/TrafficLightController' */
  TrafficLightControll_initialize(rtmGetErrorStatusPointer(TLC_2016B_M),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_m.rtm),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_m.rtdw));

  /* Model Initialize fcn for ModelReference Block: '<S3>/TrafficLightController' */
  TrafficLightControll_initialize(rtmGetErrorStatusPointer(TLC_2016B_M),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_d.rtm),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_d.rtdw));

  /* Model Initialize fcn for ModelReference Block: '<S4>/TrafficLightController' */
  TrafficLightControll_initialize(rtmGetErrorStatusPointer(TLC_2016B_M),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_i.rtm),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_i.rtdw));

  /* Start for Constant: '<Root>/Constant' */
  TLC_2016B_B.tag_N = false;

  /* Start for Constant: '<Root>/Constant1' */
  TLC_2016B_B.tag_S = false;

  /* Start for Constant: '<Root>/Constant2' */
  TLC_2016B_B.tag_W = true;

  /* Start for Constant: '<Root>/Constant3' */
  TLC_2016B_B.tag_E = true;

  /* Start for Constant: '<S1>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_E = true;

  /* Start for Constant: '<S1>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_E = true;

  /* Start for Constant: '<S1>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_E = true;

  /* Start for Constant: '<S1>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_E = true;

  /* Start for Constant: '<S1>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_E = true;

  /* Start for Constant: '<S1>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_E = false;

  /* Start for Constant: '<S1>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_E = true;

  /* Start for Constant: '<S2>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_N = true;

  /* Start for Constant: '<S2>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_N = true;

  /* Start for Constant: '<S2>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_N = true;

  /* Start for Constant: '<S2>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_N = true;

  /* Start for Constant: '<S2>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_N = true;

  /* Start for Constant: '<S2>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_N = false;

  /* Start for Constant: '<S2>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_N = true;

  /* Start for Constant: '<S3>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_S = true;

  /* Start for Constant: '<S3>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_S = true;

  /* Start for Constant: '<S3>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_S = true;

  /* Start for Constant: '<S3>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_S = true;

  /* Start for Constant: '<S3>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_S = true;

  /* Start for Constant: '<S3>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_S = false;

  /* Start for Constant: '<S3>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_S = true;

  /* Start for Constant: '<S4>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_W = true;

  /* Start for Constant: '<S4>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_W = true;

  /* Start for Constant: '<S4>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_W = true;

  /* Start for Constant: '<S4>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_W = true;

  /* Start for Constant: '<S4>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_W = true;

  /* Start for Constant: '<S4>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_W = false;

  /* Start for Constant: '<S4>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_W = true;

  /* ConstCode for Constant: '<Root>/Constant' */
  TLC_2016B_B.tag_N = false;

  /* ConstCode for Constant: '<Root>/Constant1' */
  TLC_2016B_B.tag_S = false;

  /* ConstCode for Constant: '<Root>/Constant2' */
  TLC_2016B_B.tag_W = true;

  /* ConstCode for Constant: '<Root>/Constant3' */
  TLC_2016B_B.tag_E = true;

  /* ConstCode for Constant: '<S1>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_E = true;

  /* ConstCode for Constant: '<S1>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_E = true;

  /* ConstCode for Constant: '<S1>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_E = true;

  /* ConstCode for Constant: '<S1>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_E = true;

  /* ConstCode for Constant: '<S1>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_E = true;

  /* ConstCode for Constant: '<S1>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_E = false;

  /* ConstCode for Constant: '<S1>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_E = true;

  /* ConstCode for Constant: '<S2>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_N = true;

  /* ConstCode for Constant: '<S2>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_N = true;

  /* ConstCode for Constant: '<S2>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_N = true;

  /* ConstCode for Constant: '<S2>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_N = true;

  /* ConstCode for Constant: '<S2>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_N = true;

  /* ConstCode for Constant: '<S2>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_N = false;

  /* ConstCode for Constant: '<S2>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_N = true;

  /* ConstCode for Constant: '<S3>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_S = true;

  /* ConstCode for Constant: '<S3>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_S = true;

  /* ConstCode for Constant: '<S3>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_S = true;

  /* ConstCode for Constant: '<S3>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_S = true;

  /* ConstCode for Constant: '<S3>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_S = true;

  /* ConstCode for Constant: '<S3>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_S = false;

  /* ConstCode for Constant: '<S3>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_S = true;

  /* ConstCode for Constant: '<S4>/LgtGrVd_' */
  TLC_2016B_B.lgtGrVd_W = true;

  /* ConstCode for Constant: '<S4>/Sensor1Value_' */
  TLC_2016B_B.sensor1Value_W = true;

  /* ConstCode for Constant: '<S4>/Sensor1Vd_' */
  TLC_2016B_B.sensor1Vd_W = true;

  /* ConstCode for Constant: '<S4>/Sensor2Value_' */
  TLC_2016B_B.sensor2Value_W = true;

  /* ConstCode for Constant: '<S4>/Sensor2Vd_' */
  TLC_2016B_B.sensor2Vd_W = true;

  /* ConstCode for Constant: '<S4>/Sensor3Value_' */
  TLC_2016B_B.sensor3Value_W = false;

  /* ConstCode for Constant: '<S4>/Sensor3Vd_' */
  TLC_2016B_B.sensor3Vd_W = true;

  /* SystemInitialize for ModelReference: '<S1>/TrafficLightController' */
  TrafficLightController_Init(&(TLC_2016B_DW.TrafficLightController_DWORK1.rtdw));

  /* SystemInitialize for ModelReference: '<S2>/TrafficLightController' */
  TrafficLightController_Init
    (&(TLC_2016B_DW.TrafficLightController_DWORK1_m.rtdw));

  /* SystemInitialize for ModelReference: '<S3>/TrafficLightController' */
  TrafficLightController_Init
    (&(TLC_2016B_DW.TrafficLightController_DWORK1_d.rtdw));

  /* SystemInitialize for ModelReference: '<S4>/TrafficLightController' */
  TrafficLightController_Init
    (&(TLC_2016B_DW.TrafficLightController_DWORK1_i.rtdw));
}

/* Model terminate function */
void TLC_2016B_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
