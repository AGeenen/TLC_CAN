/*
 * File: TLC_2016B.c
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

#include "TLC_2016B.h"
#include "TLC_2016B_private.h"

/* Exported block signals */
real_T countSD1_E;                     /* '<S1>/TrafficLightController' */
real_T lightSD1_E;                     /* '<S1>/TrafficLightController' */
real_T countSD1_N;                     /* '<S2>/TrafficLightController' */
real_T lightSD1_N;                     /* '<S2>/TrafficLightController' */
real_T countSD1_S;                     /* '<S3>/TrafficLightController' */
real_T lightSD1_S;                     /* '<S3>/TrafficLightController' */
real_T countSD1_W;                     /* '<S4>/TrafficLightController' */
real_T lightSD1_W;                     /* '<S4>/TrafficLightController' */
boolean_T tag_N;                       /* '<Root>/Constant' */
boolean_T tag_S;                       /* '<Root>/Constant1' */
boolean_T tag_W;                       /* '<Root>/Constant2' */
boolean_T tag_E;                       /* '<Root>/Constant3' */
boolean_T lgtVd_E;                     /* '<S1>/LgtVd_' */
boolean_T sensor1Value_E;              /* '<S1>/Sensor1Value_' */
boolean_T sensor1Vd_E;                 /* '<S1>/Sensor1Vd_' */
boolean_T sensor2Value_E;              /* '<S1>/Sensor2Value_' */
boolean_T sensor2Vd_E;                 /* '<S1>/Sensor2Vd_' */
boolean_T sensor3Value_E;              /* '<S1>/Sensor3Value_' */
boolean_T sensor3Vd_E;                 /* '<S1>/Sensor3Vd_' */
boolean_T vdSD1_E;                     /* '<S1>/TrafficLightController' */
boolean_T lgtVd_N;                     /* '<S2>/LgtVd_' */
boolean_T sensor1Value_N;              /* '<S2>/Sensor1Value_' */
boolean_T sensor1Vd_N;                 /* '<S2>/Sensor1Vd_' */
boolean_T sensor2Value_N;              /* '<S2>/Sensor2Value_' */
boolean_T sensor2Vd_N;                 /* '<S2>/Sensor2Vd_' */
boolean_T sensor3Value_N;              /* '<S2>/Sensor3Value_' */
boolean_T sensor3Vd_N;                 /* '<S2>/Sensor3Vd_' */
boolean_T vdSD1_N;                     /* '<S2>/TrafficLightController' */
boolean_T lgtVd_S;                     /* '<S3>/LgtVd_' */
boolean_T sensor1Value_S;              /* '<S3>/Sensor1Value_' */
boolean_T sensor1Vd_S;                 /* '<S3>/Sensor1Vd_' */
boolean_T sensor2Value_S;              /* '<S3>/Sensor2Value_' */
boolean_T sensor2Vd_S;                 /* '<S3>/Sensor2Vd_' */
boolean_T sensor3Value_S;              /* '<S3>/Sensor3Value_' */
boolean_T sensor3Vd_S;                 /* '<S3>/Sensor3Vd_' */
boolean_T vdSD1_S;                     /* '<S3>/TrafficLightController' */
boolean_T lgtVd_W;                     /* '<S4>/LgtVd_' */
boolean_T sensor1Value_W;              /* '<S4>/Sensor1Value_' */
boolean_T sensor1Vd_W;                 /* '<S4>/Sensor1Vd_' */
boolean_T sensor2Value_W;              /* '<S4>/Sensor2Value_' */
boolean_T sensor2Vd_W;                 /* '<S4>/Sensor2Vd_' */
boolean_T sensor3Value_W;              /* '<S4>/Sensor3Value_' */
boolean_T sensor3Vd_W;                 /* '<S4>/Sensor3Vd_' */
boolean_T vdSD1_W;                     /* '<S4>/TrafficLightController' */

/* Exported data definition */

/* Volatile memory section */
/* Definition for custom storage class: Volatile */
volatile uint16_T GreenTime = 4096U;   /* Calib to regulate waiting time per direction, in ms to optimize code */
volatile uint16_T OrangeTime = 1024U;  /* Calib to regulate waiting time per direction, in ms to optimize code */

/* Block states (auto storage) */
/* Volatile memory section */
DW_TLC_2016B_T TLC_2016B_DW;

/* Real-time model */
/* Volatile memory section */
RT_MODEL_TLC_2016B_T TLC_2016B_M_;

/* Volatile memory section */
RT_MODEL_TLC_2016B_T *const TLC_2016B_M = &TLC_2016B_M_;

/* Model step function */
/* Volatile memory section */
void TLC_2016B_step(void)
{
  /* local block i/o variables */
  real_T rtb_countSD1_E;
  real_T rtb_lightSD1_E;
  real_T rtb_countSD1_N;
  real_T rtb_lightSD1_N;
  real_T rtb_countSD1_S;
  real_T rtb_lightSD1_S;
  real_T rtb_countSD1_W;
  real_T rtb_lightSD1_W;
  boolean_T rtb_vdSD1_N;
  boolean_T rtb_vdSD1_E;
  boolean_T rtb_vdSD1_S;
  boolean_T rtb_vdSD1_W;

  /* Constant: '<Root>/Constant' */
  tag_N = NS;

  /* Constant: '<Root>/Constant1' */
  tag_S = NS;

  /* Constant: '<Root>/Constant2' */
  tag_W = EW;

  /* Constant: '<Root>/Constant3' */
  tag_E = EW;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_N = vdSD1_N;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_E = vdSD1_E;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_E = countSD1_E;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_E = lightSD1_E;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_N = countSD1_N;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_N = lightSD1_N;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_S = vdSD1_S;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_S = countSD1_S;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_S = lightSD1_S;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_W = vdSD1_W;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1_W = countSD1_W;

  /* Delay: '<Root>/Delay' */
  rtb_lightSD1_W = lightSD1_W;

  /* ModelReference: '<S1>/TrafficLightController' */
  TrafficLightController(&sensor1Vd_E, &sensor2Vd_E, &sensor3Vd_E, &lgtVd_E,
    &sensor1Value_E, &sensor2Value_E, &sensor3Value_E, &rtb_vdSD1_W,
    &rtb_countSD1_W, &rtb_lightSD1_W, &rtb_vdSD1_S, &rtb_countSD1_S,
    &rtb_lightSD1_S, &rtb_vdSD1_N, &rtb_countSD1_N, &rtb_lightSD1_N, &tag_E,
    &vdSD1_E, &countSD1_E, &lightSD1_E,
    &(TLC_2016B_DW.TrafficLightController_DWORK1.rtdw));

  /* ModelReference: '<S2>/TrafficLightController' */
  TrafficLightController(&sensor1Vd_N, &sensor2Vd_N, &sensor3Vd_N, &lgtVd_N,
    &sensor1Value_N, &sensor2Value_N, &sensor3Value_N, &rtb_vdSD1_S,
    &rtb_countSD1_S, &rtb_lightSD1_S, &rtb_vdSD1_E, &rtb_countSD1_E,
    &rtb_lightSD1_E, &rtb_vdSD1_W, &rtb_countSD1_W, &rtb_lightSD1_W, &tag_N,
    &vdSD1_N, &countSD1_N, &lightSD1_N,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_m.rtdw));

  /* ModelReference: '<S3>/TrafficLightController' */
  TrafficLightController(&sensor1Vd_S, &sensor2Vd_S, &sensor3Vd_S, &lgtVd_S,
    &sensor1Value_S, &sensor2Value_S, &sensor3Value_S, &rtb_vdSD1_N,
    &rtb_countSD1_N, &rtb_lightSD1_N, &rtb_vdSD1_W, &rtb_countSD1_W,
    &rtb_lightSD1_W, &rtb_vdSD1_E, &rtb_countSD1_E, &rtb_lightSD1_E, &tag_S,
    &vdSD1_S, &countSD1_S, &lightSD1_S,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_d.rtdw));

  /* ModelReference: '<S4>/TrafficLightController' */
  TrafficLightController(&sensor1Vd_W, &sensor2Vd_W, &sensor3Vd_W, &lgtVd_W,
    &sensor1Value_W, &sensor2Value_W, &sensor3Value_W, &rtb_vdSD1_E,
    &rtb_countSD1_E, &rtb_lightSD1_E, &rtb_vdSD1_N, &rtb_countSD1_N,
    &rtb_lightSD1_N, &rtb_vdSD1_S, &rtb_countSD1_S, &rtb_lightSD1_S, &tag_W,
    &vdSD1_W, &countSD1_W, &lightSD1_W,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_i.rtdw));
}

/* Model initialize function */
/* Volatile memory section */
void TLC_2016B_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TLC_2016B_M, (NULL));

  /* block I/O */

  /* exported global signals */
  countSD1_E = 0.0;
  lightSD1_E = 0.0;
  countSD1_N = 0.0;
  lightSD1_N = 0.0;
  countSD1_S = 0.0;
  lightSD1_S = 0.0;
  countSD1_W = 0.0;
  lightSD1_W = 0.0;
  tag_N = false;
  tag_S = false;
  tag_W = false;
  tag_E = false;
  lgtVd_E = true;
  sensor1Value_E = true;
  sensor1Vd_E = true;
  sensor2Value_E = true;
  sensor2Vd_E = true;
  sensor3Value_E = false;
  sensor3Vd_E = true;
  vdSD1_E = false;
  lgtVd_N = true;
  sensor1Value_N = true;
  sensor1Vd_N = true;
  sensor2Value_N = true;
  sensor2Vd_N = true;
  sensor3Value_N = false;
  sensor3Vd_N = true;
  vdSD1_N = false;
  lgtVd_S = true;
  sensor1Value_S = true;
  sensor1Vd_S = true;
  sensor2Value_S = true;
  sensor2Vd_S = true;
  sensor3Value_S = false;
  sensor3Vd_S = true;
  vdSD1_S = false;
  lgtVd_W = true;
  sensor1Value_W = true;
  sensor1Vd_W = true;
  sensor2Value_W = true;
  sensor2Vd_W = true;
  sensor3Value_W = false;
  sensor3Vd_W = true;
  vdSD1_W = false;

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
  tag_N = NS;

  /* Start for Constant: '<Root>/Constant1' */
  tag_S = NS;

  /* Start for Constant: '<Root>/Constant2' */
  tag_W = EW;

  /* Start for Constant: '<Root>/Constant3' */
  tag_E = EW;

  /* Start for Constant: '<S1>/LgtVd_' */
  lgtVd_E = true;

  /* Start for Constant: '<S1>/Sensor1Value_' */
  sensor1Value_E = true;

  /* Start for Constant: '<S1>/Sensor1Vd_' */
  sensor1Vd_E = true;

  /* Start for Constant: '<S1>/Sensor2Value_' */
  sensor2Value_E = true;

  /* Start for Constant: '<S1>/Sensor2Vd_' */
  sensor2Vd_E = true;

  /* Start for Constant: '<S1>/Sensor3Value_' */
  sensor3Value_E = false;

  /* Start for Constant: '<S1>/Sensor3Vd_' */
  sensor3Vd_E = true;

  /* Start for Constant: '<S2>/LgtVd_' */
  lgtVd_N = true;

  /* Start for Constant: '<S2>/Sensor1Value_' */
  sensor1Value_N = true;

  /* Start for Constant: '<S2>/Sensor1Vd_' */
  sensor1Vd_N = true;

  /* Start for Constant: '<S2>/Sensor2Value_' */
  sensor2Value_N = true;

  /* Start for Constant: '<S2>/Sensor2Vd_' */
  sensor2Vd_N = true;

  /* Start for Constant: '<S2>/Sensor3Value_' */
  sensor3Value_N = false;

  /* Start for Constant: '<S2>/Sensor3Vd_' */
  sensor3Vd_N = true;

  /* Start for Constant: '<S3>/LgtVd_' */
  lgtVd_S = true;

  /* Start for Constant: '<S3>/Sensor1Value_' */
  sensor1Value_S = true;

  /* Start for Constant: '<S3>/Sensor1Vd_' */
  sensor1Vd_S = true;

  /* Start for Constant: '<S3>/Sensor2Value_' */
  sensor2Value_S = true;

  /* Start for Constant: '<S3>/Sensor2Vd_' */
  sensor2Vd_S = true;

  /* Start for Constant: '<S3>/Sensor3Value_' */
  sensor3Value_S = false;

  /* Start for Constant: '<S3>/Sensor3Vd_' */
  sensor3Vd_S = true;

  /* Start for Constant: '<S4>/LgtVd_' */
  lgtVd_W = true;

  /* Start for Constant: '<S4>/Sensor1Value_' */
  sensor1Value_W = true;

  /* Start for Constant: '<S4>/Sensor1Vd_' */
  sensor1Vd_W = true;

  /* Start for Constant: '<S4>/Sensor2Value_' */
  sensor2Value_W = true;

  /* Start for Constant: '<S4>/Sensor2Vd_' */
  sensor2Vd_W = true;

  /* Start for Constant: '<S4>/Sensor3Value_' */
  sensor3Value_W = false;

  /* Start for Constant: '<S4>/Sensor3Vd_' */
  sensor3Vd_W = true;

  /* ConstCode for Constant: '<S1>/LgtVd_' */
  lgtVd_E = true;

  /* ConstCode for Constant: '<S1>/Sensor1Value_' */
  sensor1Value_E = true;

  /* ConstCode for Constant: '<S1>/Sensor1Vd_' */
  sensor1Vd_E = true;

  /* ConstCode for Constant: '<S1>/Sensor2Value_' */
  sensor2Value_E = true;

  /* ConstCode for Constant: '<S1>/Sensor2Vd_' */
  sensor2Vd_E = true;

  /* ConstCode for Constant: '<S1>/Sensor3Value_' */
  sensor3Value_E = false;

  /* ConstCode for Constant: '<S1>/Sensor3Vd_' */
  sensor3Vd_E = true;

  /* ConstCode for Constant: '<S2>/LgtVd_' */
  lgtVd_N = true;

  /* ConstCode for Constant: '<S2>/Sensor1Value_' */
  sensor1Value_N = true;

  /* ConstCode for Constant: '<S2>/Sensor1Vd_' */
  sensor1Vd_N = true;

  /* ConstCode for Constant: '<S2>/Sensor2Value_' */
  sensor2Value_N = true;

  /* ConstCode for Constant: '<S2>/Sensor2Vd_' */
  sensor2Vd_N = true;

  /* ConstCode for Constant: '<S2>/Sensor3Value_' */
  sensor3Value_N = false;

  /* ConstCode for Constant: '<S2>/Sensor3Vd_' */
  sensor3Vd_N = true;

  /* ConstCode for Constant: '<S3>/LgtVd_' */
  lgtVd_S = true;

  /* ConstCode for Constant: '<S3>/Sensor1Value_' */
  sensor1Value_S = true;

  /* ConstCode for Constant: '<S3>/Sensor1Vd_' */
  sensor1Vd_S = true;

  /* ConstCode for Constant: '<S3>/Sensor2Value_' */
  sensor2Value_S = true;

  /* ConstCode for Constant: '<S3>/Sensor2Vd_' */
  sensor2Vd_S = true;

  /* ConstCode for Constant: '<S3>/Sensor3Value_' */
  sensor3Value_S = false;

  /* ConstCode for Constant: '<S3>/Sensor3Vd_' */
  sensor3Vd_S = true;

  /* ConstCode for Constant: '<S4>/LgtVd_' */
  lgtVd_W = true;

  /* ConstCode for Constant: '<S4>/Sensor1Value_' */
  sensor1Value_W = true;

  /* ConstCode for Constant: '<S4>/Sensor1Vd_' */
  sensor1Vd_W = true;

  /* ConstCode for Constant: '<S4>/Sensor2Value_' */
  sensor2Value_W = true;

  /* ConstCode for Constant: '<S4>/Sensor2Vd_' */
  sensor2Vd_W = true;

  /* ConstCode for Constant: '<S4>/Sensor3Value_' */
  sensor3Value_W = false;

  /* ConstCode for Constant: '<S4>/Sensor3Vd_' */
  sensor3Vd_W = true;

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
/* Volatile memory section */
void TLC_2016B_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
