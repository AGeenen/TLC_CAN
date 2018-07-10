/*
 * File: TrafficLightController.c
 *
 * Code generated for Simulink model 'TrafficLightController'.
 *
 * Model version                  : 1.238
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jul 10 12:24:00 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TrafficLightController.h"
#include "TrafficLightController_private.h"

/* Named constants for Chart: '<Root>/TrafficLightHandler ' */
#define TrafficLightContr_IN_OD_TRAFFIC ((uint8_T)2U)
#define TrafficLightContr_IN_SD_ORANGE1 ((uint8_T)3U)
#define TrafficLightContr_IN_SD_TRAFFIC ((uint8_T)4U)
#define TrafficLightContro_IN_EMERGENCY ((uint8_T)1U)
#define TrafficLightContro_IN_OD_ORANGE ((uint8_T)1U)
#define TrafficLightControlle_IN_BLINK1 ((uint8_T)1U)
#define TrafficLightControlle_IN_BLINK2 ((uint8_T)2U)
#define TrafficLightControlle_IN_NORMAL ((uint8_T)3U)
#define TrafficLightController_IN_INIT ((uint8_T)2U)

/* System initialize for referenced model: 'TrafficLightController' */

/* Volatile memory section */
void TrafficLightController_Init(DW_TrafficLightController_f_T *localDW)
{
  /* SystemInitialize for Chart: '<Root>/TrafficLightHandler ' */
  localDW->is_EMERGENCY = 0U;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_NORMAL = 0U;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c4_TrafficLightContro = 0U;
  localDW->is_c4_TrafficLightController = 0U;
}

/* Output and update for referenced model: 'TrafficLightController' */

/* Volatile memory section */
void TrafficLightController(const boolean_T *rtu_Sensor1Vd_, const boolean_T
  *rtu_Sensor2Vd_, const boolean_T *rtu_Sensor3Vd_, const boolean_T *rtu_lgtVd,
  const boolean_T *rtu_Sensor1Value_, const boolean_T *rtu_Sensor2Value_, const
  boolean_T *rtu_Sensor3Value_, const boolean_T *rtu_VdSD2, const real_T
  *rtu_CountSD2, const real_T *rtu_LightSD2_, const boolean_T *rtu_VdOD1, const
  real_T *rtu_CountOD1, const real_T *rtu_LightOD1_, const boolean_T *rtu_VdOD2,
  const real_T *rtu_CountOD2, const real_T *rtu_LightOD2_, const boolean_T
  *rtu_Tag_, boolean_T *rty_VdSD1, real_T *rty_CountSD1, real_T *rty_LightSD1,
  DW_TrafficLightController_f_T *localDW)
{
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_em;
  boolean_T rtb_InitPr;
  real_T rtb_countSD;
  real_T rtb_countOD;
  uint32_T tmp;

  /* Sum: '<Root>/Add' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   */
  *rty_CountSD1 = ((real_T)*rtu_Sensor1Value_ + (real_T)*rtu_Sensor2Value_) +
    (real_T)*rtu_Sensor3Value_;

  /* Sum: '<Root>/Add1' incorporates:
   *  Delay: '<Root>/Delay One Step1'
   */
  rtb_countSD = localDW->DelayOneStep1_DSTATE + *rtu_CountSD2;

  /* Sum: '<Root>/Add2' */
  rtb_countOD = *rtu_CountOD1 + *rtu_CountOD2;

  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:3' */
  /* '<S1>:4:1' sf_internal_predicateOutput = ... */
  /* '<S1>:4:1' TAG==NS&&CountSD+RANDOM>CountOD; */
  if ((*rtu_Tag_ == NS) && (rtb_countSD + 0.1 > rtb_countOD)) {
    /* Transition: '<S1>:4' */
    /* Transition: '<S1>:6' */
    /* '<S1>:6:1' InitPr=NS; */
    rtb_InitPr = NS;

    /* Transition: '<S1>:11' */
    /* Transition: '<S1>:10' */
  } else {
    /* Transition: '<S1>:5' */
    /* '<S1>:7:1' sf_internal_predicateOutput = ... */
    /* '<S1>:7:1' TAG==EW&&CountSD>CountOD+RANDOM; */
    if ((*rtu_Tag_ == EW) && (rtb_countSD > rtb_countOD + 0.1)) {
      /* Transition: '<S1>:7' */
      /* Transition: '<S1>:9' */
      /* '<S1>:9:1' InitPr=EW; */
      rtb_InitPr = EW;

      /* Transition: '<S1>:10' */
    } else {
      /* Transition: '<S1>:8' */
      /* '<S1>:8:1' InitPr=NS; */
      rtb_InitPr = NS;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* RelationalOperator: '<S2>/Relational Operator' incorporates:
   *  Constant: '<S2>/Constant'
   *  Delay: '<Root>/Delay'
   */
  /* Transition: '<S1>:12' */
  rtb_RelationalOperator = (localDW->Delay_DSTATE > 1.0);

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Delay: '<Root>/Delay One Step4'
   */
  rtb_em = !(localDW->DelayOneStep4_DSTATE && (*rtu_VdSD2) && (*rtu_VdOD1) &&
             (*rtu_VdOD2));

  /* RelationalOperator: '<S4>/Equal' incorporates:
   *  Logic: '<S4>/Logical Operator'
   */
  *rty_VdSD1 = ((*rtu_Sensor1Vd_) && (*rtu_Sensor2Vd_) && (*rtu_Sensor3Vd_) && (*
    rtu_lgtVd));

  /* Chart: '<Root>/TrafficLightHandler ' incorporates:
   *  Delay: '<Root>/Delay2'
   */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->temporalCounter_i2 < MAX_uint32_T) {
    localDW->temporalCounter_i2++;
  }

  /* Gateway: TrafficLightHandler
   */
  /* During: TrafficLightHandler
   */
  if (localDW->is_active_c4_TrafficLightContro == 0U) {
    /* Entry: TrafficLightHandler
     */
    localDW->is_active_c4_TrafficLightContro = 1U;

    /* Entry Internal: TrafficLightHandler
     */
    /* Transition: '<S3>:7' */
    localDW->is_c4_TrafficLightController = TrafficLightController_IN_INIT;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'INIT': '<S3>:23' */
    /* '<S3>:23:1' Light=RE; */
    *rty_LightSD1 = RE;
  } else {
    switch (localDW->is_c4_TrafficLightController) {
     case TrafficLightContro_IN_EMERGENCY:
      /* During 'EMERGENCY': '<S3>:11' */
      /* '<S3>:6:1' sf_internal_predicateOutput = ... */
      /* '<S3>:6:1' after(GreenTime,msec); */
      if (localDW->temporalCounter_i2 * 100U >= GreenTime) {
        /* Transition: '<S3>:6' */
        /* Exit Internal 'EMERGENCY': '<S3>:11' */
        localDW->is_EMERGENCY = 0U;
        localDW->is_c4_TrafficLightController = TrafficLightController_IN_INIT;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'INIT': '<S3>:23' */
        /* '<S3>:23:1' Light=RE; */
        *rty_LightSD1 = RE;
      } else if (localDW->is_EMERGENCY == TrafficLightControlle_IN_BLINK1) {
        /* During 'BLINK1': '<S3>:22' */
        /* '<S3>:1:1' sf_internal_predicateOutput = ... */
        /* '<S3>:1:1' after(10*OrangeTime,msec); */
        tmp = 10U * OrangeTime;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        if (localDW->temporalCounter_i1 * 100U >= tmp) {
          /* Transition: '<S3>:1' */
          localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK2;
          localDW->temporalCounter_i1 = 0U;

          /* Entry 'BLINK2': '<S3>:10' */
          /* '<S3>:10:1' Light=OFF */
          *rty_LightSD1 = OFF;
        }
      } else {
        /* During 'BLINK2': '<S3>:10' */
        /* '<S3>:9:1' sf_internal_predicateOutput = ... */
        /* '<S3>:9:1' after(10*OrangeTime,msec); */
        tmp = 10U * OrangeTime;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        if (localDW->temporalCounter_i1 * 100U >= tmp) {
          /* Transition: '<S3>:9' */
          localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK1;
          localDW->temporalCounter_i1 = 0U;

          /* Entry 'BLINK1': '<S3>:22' */
          /* '<S3>:22:1' Light=OR */
          *rty_LightSD1 = OR;
        }
      }
      break;

     case TrafficLightController_IN_INIT:
      /* During 'INIT': '<S3>:23' */
      /* '<S3>:17:1' sf_internal_predicateOutput = ... */
      /* '<S3>:17:1' ((TAG==InitPr)&&(after(OrangeTime,msec))); */
      if ((*rtu_Tag_ == localDW->Delay2_DSTATE) && (localDW->temporalCounter_i1 *
           100U >= OrangeTime)) {
        /* Transition: '<S3>:17' */
        localDW->is_c4_TrafficLightController = TrafficLightControlle_IN_NORMAL;
        localDW->is_NORMAL = TrafficLightContr_IN_SD_TRAFFIC;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'SD_TRAFFIC': '<S3>:8' */
        /* '<S3>:8:1' Light=GR */
        *rty_LightSD1 = GR;
      } else {
        /* '<S3>:15:1' sf_internal_predicateOutput = ... */
        /* '<S3>:15:1' ((TAG~=InitPr)&&(after(0.5,sec))); */
        if ((*rtu_Tag_ != localDW->Delay2_DSTATE) &&
            (localDW->temporalCounter_i1 >= 5U)) {
          /* Transition: '<S3>:15' */
          localDW->is_c4_TrafficLightController =
            TrafficLightControlle_IN_NORMAL;
          localDW->is_NORMAL = TrafficLightContr_IN_OD_TRAFFIC;
          localDW->temporalCounter_i1 = 0U;

          /* Entry 'OD_TRAFFIC': '<S3>:5' */
          /* '<S3>:5:1' Light=RE */
          *rty_LightSD1 = RE;
        } else {
          /* '<S3>:4:1' sf_internal_predicateOutput = ... */
          /* '<S3>:4:1' ((EM==1)&&(after(OrangeTime,msec))); */
          if (rtb_em && (localDW->temporalCounter_i1 * 100U >= OrangeTime)) {
            /* Transition: '<S3>:4' */
            localDW->is_c4_TrafficLightController =
              TrafficLightContro_IN_EMERGENCY;
            localDW->temporalCounter_i2 = 0U;

            /* Entry Internal 'EMERGENCY': '<S3>:11' */
            /* Transition: '<S3>:2' */
            localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK1;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'BLINK1': '<S3>:22' */
            /* '<S3>:22:1' Light=OR */
            *rty_LightSD1 = OR;
          }
        }
      }
      break;

     default:
      /* During 'NORMAL': '<S3>:24' */
      /* '<S3>:12:1' sf_internal_predicateOutput = ... */
      /* '<S3>:12:1' EM==1; */
      if (rtb_em) {
        /* Transition: '<S3>:12' */
        /* Exit Internal 'NORMAL': '<S3>:24' */
        localDW->is_NORMAL = 0U;
        localDW->is_c4_TrafficLightController = TrafficLightContro_IN_EMERGENCY;
        localDW->temporalCounter_i2 = 0U;

        /* Entry Internal 'EMERGENCY': '<S3>:11' */
        /* Transition: '<S3>:2' */
        localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK1;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'BLINK1': '<S3>:22' */
        /* '<S3>:22:1' Light=OR */
        *rty_LightSD1 = OR;
      } else {
        switch (localDW->is_NORMAL) {
         case TrafficLightContro_IN_OD_ORANGE:
          /* During 'OD_ORANGE': '<S3>:21' */
          /* '<S3>:20:1' sf_internal_predicateOutput = ... */
          /* '<S3>:20:1' after(OrangeTime,msec); */
          if (localDW->temporalCounter_i1 * 100U >= OrangeTime) {
            /* Transition: '<S3>:20' */
            localDW->is_NORMAL = TrafficLightContr_IN_SD_TRAFFIC;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'SD_TRAFFIC': '<S3>:8' */
            /* '<S3>:8:1' Light=GR */
            *rty_LightSD1 = GR;
          }
          break;

         case TrafficLightContr_IN_OD_TRAFFIC:
          /* During 'OD_TRAFFIC': '<S3>:5' */
          /* '<S3>:18:1' sf_internal_predicateOutput = ... */
          /* '<S3>:18:1' after(GreenTime,msec); */
          if (localDW->temporalCounter_i1 * 100U >= GreenTime) {
            /* Transition: '<S3>:18' */
            localDW->is_NORMAL = TrafficLightContro_IN_OD_ORANGE;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'OD_ORANGE': '<S3>:21' */
            /* '<S3>:21:1' Light=RE */
            *rty_LightSD1 = RE;
          }
          break;

         case TrafficLightContr_IN_SD_ORANGE1:
          /* During 'SD_ORANGE1': '<S3>:3' */
          /* '<S3>:16:1' sf_internal_predicateOutput = ... */
          /* '<S3>:16:1' after(OrangeTime,msec); */
          if (localDW->temporalCounter_i1 * 100U >= OrangeTime) {
            /* Transition: '<S3>:16' */
            localDW->is_NORMAL = TrafficLightContr_IN_OD_TRAFFIC;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'OD_TRAFFIC': '<S3>:5' */
            /* '<S3>:5:1' Light=RE */
            *rty_LightSD1 = RE;
          }
          break;

         default:
          /* During 'SD_TRAFFIC': '<S3>:8' */
          /* '<S3>:19:1' sf_internal_predicateOutput = ... */
          /* '<S3>:19:1' after(GreenTime,msec); */
          if (localDW->temporalCounter_i1 * 100U >= GreenTime) {
            /* Transition: '<S3>:19' */
            localDW->is_NORMAL = TrafficLightContr_IN_SD_ORANGE1;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'SD_ORANGE1': '<S3>:3' */
            /* '<S3>:3:1' Light=OR */
            *rty_LightSD1 = OR;
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/TrafficLightHandler ' */

  /* Update for Delay: '<Root>/Delay One Step1' */
  localDW->DelayOneStep1_DSTATE = *rty_CountSD1;

  /* Update for Delay: '<Root>/Delay' */
  localDW->Delay_DSTATE = *rty_LightSD1;

  /* Update for Delay: '<Root>/Delay One Step4' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant2'
   *  Constant: '<S2>/Constant3'
   *  Logic: '<Root>/Logical Operator1'
   *  Logic: '<S2>/Logical Operator2'
   *  Logic: '<S2>/Logical Operator4'
   *  Logic: '<S2>/Logical Operator6'
   *  RelationalOperator: '<S2>/Relational Operator1'
   *  RelationalOperator: '<S2>/Relational Operator2'
   *  RelationalOperator: '<S2>/Relational Operator3'
   */
  localDW->DelayOneStep4_DSTATE = ((*rty_VdSD1) && (!((rtb_RelationalOperator ||
    (*rtu_LightSD2_ > 1.0)) && ((*rtu_LightOD1_ > 1.0) || (*rtu_LightOD2_ > 1.0)))));

  /* Update for Delay: '<Root>/Delay2' */
  localDW->Delay2_DSTATE = rtb_InitPr;
}

/* Model initialize function */
/* Volatile memory section */
void TrafficLightControll_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TrafficLightControll_T *const TrafficLightController_M,
  DW_TrafficLightController_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(TrafficLightController_M, rt_errorStatus);

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_TrafficLightController_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
