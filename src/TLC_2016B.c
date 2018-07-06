/*
 * File: TLC_2016B.c
 *
 * Code generated for Simulink model 'TLC_2016B'.
 *
 * Model version                  : 1.153
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jul 06 10:43:42 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TLC_2016B.h"
#include "TLC_2016B_private.h"

/* Exported block signals */
boolean_T tag;                         /* '<Root>/Constant' */
boolean_T lgtGrVd;                     /* '<S2>/LgtGrVd_' */
boolean_T lgtReVd;                     /* '<S2>/LgtReVd_' */
boolean_T lgtOrVd;                     /* '<S2>/LightOrVd_' */
boolean_T sensor1Value;                /* '<S2>/Sensor1Value_' */
boolean_T sensor1Vd;                   /* '<S2>/Sensor1Vd_' */
boolean_T sensor2Value;                /* '<S2>/Sensor2Value_' */
boolean_T sensor2Vd;                   /* '<S2>/Sensor2Vd_' */
boolean_T sensor3Value;                /* '<S2>/Sensor3Value_' */
boolean_T sensor3Vd;                   /* '<S2>/Sensor3Vd_' */
boolean_T vdSD1;                       /* '<S2>/TrafficLightController' */
boolean_T countSD1B1;                  /* '<S2>/TrafficLightController' */
boolean_T countSD1B2;                  /* '<S2>/TrafficLightController' */
boolean_T lightGrSD1;                  /* '<S2>/TrafficLightController' */
boolean_T lightOrSD1;                  /* '<S2>/TrafficLightController' */

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
  boolean_T rtb_vdSD1;
  boolean_T rtb_vdSD1_f;
  boolean_T rtb_vdSD1_g;
  boolean_T rtb_vdSD1_p;
  boolean_T rtb_lightOrSD1;
  boolean_T rtb_vdSD1_po;
  boolean_T rtb_countSD1B1;
  boolean_T rtb_countSD1B2;
  boolean_T rtb_lightGrSD1;
  boolean_T rtb_lightOrSD1_c;
  boolean_T rtb_vdSD1_pon;
  boolean_T rtb_countSD1B1_l;
  boolean_T rtb_countSD1B2_d;
  boolean_T rtb_lightGrSD1_d;
  boolean_T rtb_countSD1B1_lv;
  boolean_T rtb_lightOrSD1_cq;
  boolean_T rtb_countSD1B2_dw;
  boolean_T rtb_lightGrSD1_de;
  boolean_T rtb_lightOrSD1_cqc;
  boolean_T rtb_vdSD1_ponu;
  boolean_T rtb_countSD1B1_lvr;
  boolean_T rtb_countSD1B2_dw2;
  boolean_T rtb_lightGrSD1_dee;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_p = vdSD1;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1 = TLC_2016B_B.lightOrSD1_p;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_po = TLC_2016B_DW.Delay_11_DSTATE;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B1 = TLC_2016B_B.countSD1B1_g;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B2 = TLC_2016B_B.countSD1B2_i;

  /* Delay: '<Root>/Delay' */
  rtb_lightGrSD1 = TLC_2016B_B.lightGrSD1_e;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1_c = TLC_2016B_B.lightOrSD1_l;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_pon = TLC_2016B_DW.Delay_16_DSTATE;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B1_l = TLC_2016B_B.countSD1B1_e;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B2_d = TLC_2016B_B.countSD1B2_n;

  /* Delay: '<Root>/Delay' */
  rtb_lightGrSD1_d = TLC_2016B_B.lightGrSD1_k;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B1_lv = countSD1B1;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1_cq = TLC_2016B_B.lightOrSD1_e;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B2_dw = countSD1B2;

  /* Delay: '<Root>/Delay' */
  rtb_lightGrSD1_de = lightGrSD1;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1_cqc = lightOrSD1;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_ponu = TLC_2016B_DW.Delay_6_DSTATE;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B1_lvr = TLC_2016B_B.countSD1B1_h;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B2_dw2 = TLC_2016B_B.countSD1B2_p;

  /* Delay: '<Root>/Delay' */
  rtb_lightGrSD1_dee = TLC_2016B_B.lightGrSD1_i;

  /* ModelReference: '<S1>/TrafficLightController' */
  TrafficLightController(&rtCP_Sensor1Vd_Value, &rtCP_Sensor2Vd_Value,
    &rtCP_Sensor3Vd_Value, &rtCP_LgtGrVd_Value, &rtCP_LightOrVd_Value,
    &rtCP_LgtReVd_Value, &rtCP_Sensor1Value_Value, &rtCP_Sensor2Value_Value,
    &rtCP_Sensor3Value_Value, &rtb_vdSD1_po, &rtb_lightGrSD1, &rtb_lightOrSD1_c,
    &rtb_countSD1B1, &rtb_countSD1B2, &rtb_vdSD1_ponu, &rtb_lightGrSD1_dee,
    &rtb_lightOrSD1, &rtb_countSD1B1_lvr, &rtb_countSD1B2_dw2, &rtb_vdSD1_p,
    &rtb_lightGrSD1_de, &rtb_lightOrSD1_cqc, &rtb_countSD1B1_lv,
    &rtb_countSD1B2_dw, &rtCP_Constant3_Value, &rtb_vdSD1,
    &TLC_2016B_B.countSD1B1_e, &TLC_2016B_B.countSD1B2_n,
    &TLC_2016B_B.lightGrSD1_k, &TLC_2016B_B.lightOrSD1_e,
    &(TLC_2016B_DW.TrafficLightController_DWORK1.rtdw));

  /* ModelReference: '<S2>/TrafficLightController' */
  TrafficLightController(&sensor1Vd, &sensor2Vd, &sensor3Vd, &lgtGrVd, &lgtOrVd,
    &lgtReVd, &sensor1Value, &sensor2Value, &sensor3Value, &rtb_vdSD1_ponu,
    &rtb_lightGrSD1_dee, &rtb_lightOrSD1, &rtb_countSD1B1_lvr,
    &rtb_countSD1B2_dw2, &rtb_vdSD1_pon, &rtb_lightGrSD1_d, &rtb_lightOrSD1_cq,
    &rtb_countSD1B1_l, &rtb_countSD1B2_d, &rtb_vdSD1_po, &rtb_lightGrSD1,
    &rtb_lightOrSD1_c, &rtb_countSD1B1, &rtb_countSD1B2, &tag, &vdSD1,
    &countSD1B1, &countSD1B2, &lightGrSD1, &lightOrSD1,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_m.rtdw));

  /* ModelReference: '<S3>/TrafficLightController' */
  TrafficLightController(&rtCP_Sensor1Vd_Value_e, &rtCP_Sensor2Vd_Value_c,
    &rtCP_Sensor3Vd_Value_h, &rtCP_LgtGrVd_Value_e, &rtCP_LightOrVd_Value_i,
    &rtCP_LgtReVd_Value_j, &rtCP_Sensor1Value_Value_c,
    &rtCP_Sensor2Value_Value_g, &rtCP_Sensor3Value_Value_l, &rtb_vdSD1_p,
    &rtb_lightGrSD1_de, &rtb_lightOrSD1_cqc, &rtb_countSD1B1_lv,
    &rtb_countSD1B2_dw, &rtb_vdSD1_po, &rtb_lightGrSD1, &rtb_lightOrSD1_c,
    &rtb_countSD1B1, &rtb_countSD1B2, &rtb_vdSD1_pon, &rtb_lightGrSD1_d,
    &rtb_lightOrSD1_cq, &rtb_countSD1B1_l, &rtb_countSD1B2_d,
    &rtCP_Constant1_Value, &rtb_vdSD1_f, &TLC_2016B_B.countSD1B1_h,
    &TLC_2016B_B.countSD1B2_p, &TLC_2016B_B.lightGrSD1_i,
    &TLC_2016B_B.lightOrSD1_p,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_a.rtdw));

  /* ModelReference: '<S4>/TrafficLightController' */
  TrafficLightController(&rtCP_Sensor1Vd_Value_f, &rtCP_Sensor2Vd_Value_n,
    &rtCP_Sensor3Vd_Value_p, &rtCP_LgtGrVd_Value_ev, &rtCP_LightOrVd_Value_h,
    &rtCP_LgtReVd_Value_i, &rtCP_Sensor1Value_Value_h,
    &rtCP_Sensor2Value_Value_a, &rtCP_Sensor3Value_Value_c, &rtb_vdSD1_pon,
    &rtb_lightGrSD1_d, &rtb_lightOrSD1_cq, &rtb_countSD1B1_l, &rtb_countSD1B2_d,
    &rtb_vdSD1_p, &rtb_lightGrSD1_de, &rtb_lightOrSD1_cqc, &rtb_countSD1B1_lv,
    &rtb_countSD1B2_dw, &rtb_vdSD1_ponu, &rtb_lightGrSD1_dee, &rtb_lightOrSD1,
    &rtb_countSD1B1_lvr, &rtb_countSD1B2_dw2, &rtCP_Constant2_Value,
    &rtb_vdSD1_g, &TLC_2016B_B.countSD1B1_g, &TLC_2016B_B.countSD1B2_i,
    &TLC_2016B_B.lightGrSD1_e, &TLC_2016B_B.lightOrSD1_l,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_e.rtdw));

  /* Update for Delay: '<Root>/Delay' */
  TLC_2016B_DW.Delay_11_DSTATE = rtb_vdSD1_g;

  /* Update for Delay: '<Root>/Delay' */
  TLC_2016B_DW.Delay_16_DSTATE = rtb_vdSD1;

  /* Update for Delay: '<Root>/Delay' */
  TLC_2016B_DW.Delay_6_DSTATE = rtb_vdSD1_f;
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

  /* exported global signals */
  tag = false;
  lgtGrVd = true;
  lgtReVd = true;
  lgtOrVd = true;
  sensor1Value = true;
  sensor1Vd = true;
  sensor2Value = true;
  sensor2Vd = true;
  sensor3Value = false;
  sensor3Vd = true;
  vdSD1 = false;
  countSD1B1 = false;
  countSD1B2 = false;
  lightGrSD1 = false;
  lightOrSD1 = false;

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
    &(TLC_2016B_DW.TrafficLightController_DWORK1_a.rtm),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_a.rtdw));

  /* Model Initialize fcn for ModelReference Block: '<S4>/TrafficLightController' */
  TrafficLightControll_initialize(rtmGetErrorStatusPointer(TLC_2016B_M),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_e.rtm),
    &(TLC_2016B_DW.TrafficLightController_DWORK1_e.rtdw));

  /* Start for Constant: '<Root>/Constant' */
  tag = false;

  /* Start for Constant: '<S2>/LgtGrVd_' */
  lgtGrVd = true;

  /* Start for Constant: '<S2>/LgtReVd_' */
  lgtReVd = true;

  /* Start for Constant: '<S2>/LightOrVd_' */
  lgtOrVd = true;

  /* Start for Constant: '<S2>/Sensor1Value_' */
  sensor1Value = true;

  /* Start for Constant: '<S2>/Sensor1Vd_' */
  sensor1Vd = true;

  /* Start for Constant: '<S2>/Sensor2Value_' */
  sensor2Value = true;

  /* Start for Constant: '<S2>/Sensor2Vd_' */
  sensor2Vd = true;

  /* Start for Constant: '<S2>/Sensor3Value_' */
  sensor3Value = false;

  /* Start for Constant: '<S2>/Sensor3Vd_' */
  sensor3Vd = true;

  /* ConstCode for Constant: '<Root>/Constant' */
  tag = false;

  /* ConstCode for Constant: '<S2>/LgtGrVd_' */
  lgtGrVd = true;

  /* ConstCode for Constant: '<S2>/LgtReVd_' */
  lgtReVd = true;

  /* ConstCode for Constant: '<S2>/LightOrVd_' */
  lgtOrVd = true;

  /* ConstCode for Constant: '<S2>/Sensor1Value_' */
  sensor1Value = true;

  /* ConstCode for Constant: '<S2>/Sensor1Vd_' */
  sensor1Vd = true;

  /* ConstCode for Constant: '<S2>/Sensor2Value_' */
  sensor2Value = true;

  /* ConstCode for Constant: '<S2>/Sensor2Vd_' */
  sensor2Vd = true;

  /* ConstCode for Constant: '<S2>/Sensor3Value_' */
  sensor3Value = false;

  /* ConstCode for Constant: '<S2>/Sensor3Vd_' */
  sensor3Vd = true;

  /* SystemInitialize for ModelReference: '<S1>/TrafficLightController' */
  TrafficLightController_Init(&(TLC_2016B_DW.TrafficLightController_DWORK1.rtdw));

  /* SystemInitialize for ModelReference: '<S2>/TrafficLightController' */
  TrafficLightController_Init
    (&(TLC_2016B_DW.TrafficLightController_DWORK1_m.rtdw));

  /* SystemInitialize for ModelReference: '<S3>/TrafficLightController' */
  TrafficLightController_Init
    (&(TLC_2016B_DW.TrafficLightController_DWORK1_a.rtdw));

  /* SystemInitialize for ModelReference: '<S4>/TrafficLightController' */
  TrafficLightController_Init
    (&(TLC_2016B_DW.TrafficLightController_DWORK1_e.rtdw));
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
