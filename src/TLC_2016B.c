/*
 * File: TLC_2016B.c
 *
 * Code generated for Simulink model 'TLC_2016B'.
 *
 * Model version                  : 1.145
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 28 10:49:16 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TLC_2016B.h"
#include "TLC_2016B_private.h"
#include "rtwtypes.h"

extern const boolean_T rtCP_pooled_DW8BfQUitOnV;
const boolean_T rtCP_pooled_DW8BfQUitOnV = 0;
extern const boolean_T rtCP_pooled_IFpGdxwf999t;
const boolean_T rtCP_pooled_IFpGdxwf999t = 1;

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
  boolean_T rtb_vdSD1_j;
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
  rtb_vdSD1_p = TLC_2016B_DW.Delay_1_DSTATE;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1 = TLC_2016B_B.lightOrSD1_p;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_po = TLC_2016B_DW.Delay_11_DSTATE;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B1 = TLC_2016B_B.countSD1B1_g;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B2 = TLC_2016B_B.countSD1B2_ib;

  /* Delay: '<Root>/Delay' */
  rtb_lightGrSD1 = TLC_2016B_B.lightGrSD1_e;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1_c = TLC_2016B_B.lightOrSD1_l;

  /* Delay: '<Root>/Delay' */
  rtb_vdSD1_pon = TLC_2016B_DW.Delay_16_DSTATE;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B1_l = TLC_2016B_B.countSD1B1;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B2_d = TLC_2016B_B.countSD1B2;

  /* Delay: '<Root>/Delay' */
  rtb_lightGrSD1_d = TLC_2016B_B.lightGrSD1;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B1_lv = TLC_2016B_B.countSD1B1_j;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1_cq = TLC_2016B_B.lightOrSD1;

  /* Delay: '<Root>/Delay' */
  rtb_countSD1B2_dw = TLC_2016B_B.countSD1B2_i;

  /* Delay: '<Root>/Delay' */
  rtb_lightGrSD1_de = TLC_2016B_B.lightGrSD1_h;

  /* Delay: '<Root>/Delay' */
  rtb_lightOrSD1_cqc = TLC_2016B_B.lightOrSD1_h;

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
    &TLC_2016B_B.countSD1B1, &TLC_2016B_B.countSD1B2, &TLC_2016B_B.lightGrSD1,
    &TLC_2016B_B.lightOrSD1, &(TLC_2016B_DW.TrafficLightController_DWORK1.rtdw));

  /* ModelReference: '<S2>/TrafficLightController' */
  TrafficLightController(&rtCP_Sensor1Vd_Value_a, &rtCP_Sensor2Vd_Value_j,
    &rtCP_Sensor3Vd_Value_o, &rtCP_LgtGrVd_Value_f, &rtCP_LightOrVd_Value_c,
    &rtCP_LgtReVd_Value_c, &rtCP_Sensor1Value_Value_p,
    &rtCP_Sensor2Value_Value_c, &rtCP_Sensor3Value_Value_f, &rtb_vdSD1_ponu,
    &rtb_lightGrSD1_dee, &rtb_lightOrSD1, &rtb_countSD1B1_lvr,
    &rtb_countSD1B2_dw2, &rtb_vdSD1_pon, &rtb_lightGrSD1_d, &rtb_lightOrSD1_cq,
    &rtb_countSD1B1_l, &rtb_countSD1B2_d, &rtb_vdSD1_po, &rtb_lightGrSD1,
    &rtb_lightOrSD1_c, &rtb_countSD1B1, &rtb_countSD1B2, &rtCP_Constant_Value,
    &rtb_vdSD1_j, &TLC_2016B_B.countSD1B1_j, &TLC_2016B_B.countSD1B2_i,
    &TLC_2016B_B.lightGrSD1_h, &TLC_2016B_B.lightOrSD1_h,
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
    &rtb_vdSD1_g, &TLC_2016B_B.countSD1B1_g, &TLC_2016B_B.countSD1B2_ib,
    &TLC_2016B_B.lightGrSD1_e, &TLC_2016B_B.lightOrSD1_l,
    &(TLC_2016B_DW.TrafficLightController_DWORK1_e.rtdw));

  /* Update for Delay: '<Root>/Delay' */
  TLC_2016B_DW.Delay_1_DSTATE = rtb_vdSD1_j;

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
