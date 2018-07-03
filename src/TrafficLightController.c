/*
 * File: TrafficLightController.c
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
void TrafficLightController_Init(DW_TrafficLightController_f_T *localDW)
{
  /* InitializeConditions for UniformRandomNumber: '<Root>/Uniform Random Number' */
  localDW->RandSeed = 1144108930U;
  localDW->UniformRandomNumber_NextOutput = rt_urand_Upu32_Yd_f_pw
    (&localDW->RandSeed) * 2.0 + -1.0;

  /* SystemInitialize for Chart: '<Root>/TrafficLightHandler ' */
  localDW->is_EMERGENCY = 0U;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_NORMAL = 0U;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c4_TrafficLightContro = 0U;
  localDW->is_c4_TrafficLightController = 0U;
}

/* Output and update for referenced model: 'TrafficLightController' */
void TrafficLightController(const boolean_T *rtu_Sensor1Vd_, const boolean_T
  *rtu_Sensor2Vd_, const boolean_T *rtu_Sensor3Vd_, const boolean_T
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
  *rty_LightOrSD1, DW_TrafficLightController_f_T *localDW)
{
  boolean_T rtb_lgtOrSD1Del;
  boolean_T rtb_lgtGrSD1Del;
  boolean_T rtb_em;
  boolean_T rtb_InitPr;
  int32_T rtb_Add;
  int32_T rtb_Add1;

  /* Sum: '<S2>/Add' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  DataTypeConversion: '<S2>/Data Type Conversion1'
   *  DataTypeConversion: '<S2>/Data Type Conversion2'
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   *  Delay: '<Root>/Delay'
   *  Delay: '<Root>/Delay1'
   *  Gain: '<S2>/Gain2'
   *  Gain: '<S2>/Gain3'
   */
  rtb_Add = (((localDW->Delay1_DSTATE << 1) + localDW->Delay_DSTATE) +
             *rtu_CountSD2B1_) + (*rtu_CountSD2B2_ << 1);

  /* Sum: '<S2>/Add1' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion4'
   *  DataTypeConversion: '<S2>/Data Type Conversion5'
   *  DataTypeConversion: '<S2>/Data Type Conversion6'
   *  DataTypeConversion: '<S2>/Data Type Conversion7'
   *  Gain: '<S2>/Gain'
   *  Gain: '<S2>/Gain1'
   */
  rtb_Add1 = (((*rtu_CountOD1B2_ << 1) + *rtu_CountOD1B1_) + *rtu_CountOD2B1_) +
    (*rtu_CountOD2B2_ << 1);

  /* Chart: '<Root>/Chart' incorporates:
   *  UniformRandomNumber: '<Root>/Uniform Random Number'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:3' */
  /* '<S1>:4:1' sf_internal_predicateOutput = ... */
  /* '<S1>:4:1' TAG==NS&&CountSD+RANDOM>CountOD; */
  if ((!*rtu_Tag_) && ((real_T)rtb_Add + localDW->UniformRandomNumber_NextOutput
                       > rtb_Add1)) {
    /* Transition: '<S1>:4' */
    /* Transition: '<S1>:6' */
    /* '<S1>:6:1' InitPr=NS; */
    rtb_InitPr = false;

    /* Transition: '<S1>:11' */
    /* Transition: '<S1>:10' */
  } else {
    /* Transition: '<S1>:5' */
    /* '<S1>:7:1' sf_internal_predicateOutput = ... */
    /* '<S1>:7:1' TAG==EW&&CountSD>CountOD+RANDOM; */
    if ((*rtu_Tag_) && (rtb_Add > (real_T)rtb_Add1 +
                        localDW->UniformRandomNumber_NextOutput)) {
      /* Transition: '<S1>:7' */
      /* Transition: '<S1>:9' */
      /* '<S1>:9:1' InitPr=EW; */
      rtb_InitPr = true;

      /* Transition: '<S1>:10' */
    } else {
      /* Transition: '<S1>:8' */
      /* '<S1>:8:1' InitPr=NS; */
      rtb_InitPr = false;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Delay: '<Root>/Delay One Step2' */
  /* Transition: '<S1>:12' */
  rtb_lgtOrSD1Del = localDW->DelayOneStep2_DSTATE;

  /* Delay: '<Root>/Delay One Step3' */
  rtb_lgtGrSD1Del = localDW->DelayOneStep3_DSTATE;

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Delay: '<Root>/Delay One Step4'
   */
  rtb_em = !(localDW->DelayOneStep4_DSTATE && (*rtu_VdSD2) && (*rtu_VdOD1) &&
             (*rtu_VdOD2));

  /* RelationalOperator: '<S5>/Equal' incorporates:
   *  Logic: '<S5>/Logical Operator'
   */
  *rty_VdSD1 = ((*rtu_Sensor1Vd_) && (*rtu_Sensor2Vd_) && (*rtu_Sensor3Vd_) && (*
    rtu_LgtGrVd_) && (*rtu_LgtOrVd_) && (*rtu_LgtReVd_));

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
    /* Transition: '<S4>:7' */
    localDW->is_c4_TrafficLightController = TrafficLightController_IN_INIT;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'INIT': '<S4>:23' */
    /* '<S4>:23:1' LightReSD=true; */
    /* '<S4>:23:1' LightOrSD=false; */
    *rty_LightOrSD1 = false;

    /* '<S4>:23:2' LightGrSD=false; */
    *rty_LightGrSD1 = false;

    /* LightReOD=true; */
    /* LightOrOD=false;; */
    /* LightGrOD=false;; */
  } else {
    switch (localDW->is_c4_TrafficLightController) {
     case TrafficLightContro_IN_EMERGENCY:
      /* During 'EMERGENCY': '<S4>:11' */
      /* '<S4>:6:1' sf_internal_predicateOutput = ... */
      /* '<S4>:6:1' after(GreenTime,sec); */
      if (localDW->temporalCounter_i2 >= 40U) {
        /* Transition: '<S4>:6' */
        /* Exit Internal 'EMERGENCY': '<S4>:11' */
        localDW->is_EMERGENCY = 0U;
        localDW->is_c4_TrafficLightController = TrafficLightController_IN_INIT;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'INIT': '<S4>:23' */
        /* '<S4>:23:1' LightReSD=true; */
        /* '<S4>:23:1' LightOrSD=false; */
        *rty_LightOrSD1 = false;

        /* '<S4>:23:2' LightGrSD=false; */
        *rty_LightGrSD1 = false;

        /* LightReOD=true; */
        /* LightOrOD=false;; */
        /* LightGrOD=false;; */
      } else if (localDW->is_EMERGENCY == TrafficLightControlle_IN_BLINK1) {
        /* During 'BLINK1': '<S4>:22' */
        /* '<S4>:1:1' sf_internal_predicateOutput = ... */
        /* '<S4>:1:1' after(OrangeTime,sec); */
        if (localDW->temporalCounter_i1 >= 10U) {
          /* Transition: '<S4>:1' */
          localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK2;
          localDW->temporalCounter_i1 = 0U;

          /* Entry 'BLINK2': '<S4>:10' */
          /* '<S4>:10:1' LightReSD=false; */
          /* '<S4>:10:1' LightOrSD=false; */
          *rty_LightOrSD1 = false;

          /* '<S4>:10:2' LightGrSD=false; */
          *rty_LightGrSD1 = false;

          /* LightReOD=true; */
          /* LightOrOD=true; */
          /* LightGrOD=true; */
        }
      } else {
        /* During 'BLINK2': '<S4>:10' */
        /* '<S4>:9:1' sf_internal_predicateOutput = ... */
        /* '<S4>:9:1' after(OrangeTime,sec); */
        if (localDW->temporalCounter_i1 >= 10U) {
          /* Transition: '<S4>:9' */
          localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK1;
          localDW->temporalCounter_i1 = 0U;

          /* Entry 'BLINK1': '<S4>:22' */
          /* '<S4>:22:1' LightReSD=true; */
          /* '<S4>:22:1' LightOrSD=true; */
          *rty_LightOrSD1 = true;

          /* '<S4>:22:1' LightGrSD=true; */
          *rty_LightGrSD1 = true;

          /* LightReOD=false;; */
          /* LightOrOD=false;; */
          /* LightGrOD=false;; */
        }
      }
      break;

     case TrafficLightController_IN_INIT:
      /* During 'INIT': '<S4>:23' */
      /* '<S4>:17:1' sf_internal_predicateOutput = ... */
      /* '<S4>:17:1' ((TAG==InitPr)&&(after(0.5,sec))); */
      if ((*rtu_Tag_ == localDW->Delay2_DSTATE) && (localDW->temporalCounter_i1 >=
           5U)) {
        /* Transition: '<S4>:17' */
        localDW->is_c4_TrafficLightController = TrafficLightControlle_IN_NORMAL;
        localDW->is_NORMAL = TrafficLightContr_IN_SD_TRAFFIC;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'SD_TRAFFIC': '<S4>:8' */
        /* '<S4>:8:1' LightReSD=false; */
        /* LightOrSD=false; */
        /* '<S4>:8:2' LightGrSD=true; */
        *rty_LightGrSD1 = true;

        /* LightReOD=true; */
        /* LightOrOD=false; */
        /* LightGrOD=false; */
      } else {
        /* '<S4>:15:1' sf_internal_predicateOutput = ... */
        /* '<S4>:15:1' ((TAG~=InitPr)&&(after(0.5,sec))); */
        if ((*rtu_Tag_ != localDW->Delay2_DSTATE) &&
            (localDW->temporalCounter_i1 >= 5U)) {
          /* Transition: '<S4>:15' */
          localDW->is_c4_TrafficLightController =
            TrafficLightControlle_IN_NORMAL;
          localDW->is_NORMAL = TrafficLightContr_IN_OD_TRAFFIC;
          localDW->temporalCounter_i1 = 0U;

          /* Entry 'OD_TRAFFIC': '<S4>:5' */
          /* '<S4>:5:1' LightReSD=true; */
          /* '<S4>:5:1' LightOrSD=false; */
          *rty_LightOrSD1 = false;

          /* '<S4>:5:2' LightGrSD=false; */
          *rty_LightGrSD1 = false;

          /* LightReOD=false; */
          /* LightOrOD=false */
          /* LightGrOD=true; */
        } else {
          /* '<S4>:4:1' sf_internal_predicateOutput = ... */
          /* '<S4>:4:1' ((EM==1)&&(after(0.5,sec))); */
          if (rtb_em && (localDW->temporalCounter_i1 >= 5U)) {
            /* Transition: '<S4>:4' */
            localDW->is_c4_TrafficLightController =
              TrafficLightContro_IN_EMERGENCY;
            localDW->temporalCounter_i2 = 0U;

            /* Entry Internal 'EMERGENCY': '<S4>:11' */
            /* Transition: '<S4>:2' */
            localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK1;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'BLINK1': '<S4>:22' */
            /* '<S4>:22:1' LightReSD=true; */
            /* '<S4>:22:1' LightOrSD=true; */
            *rty_LightOrSD1 = true;

            /* '<S4>:22:1' LightGrSD=true; */
            *rty_LightGrSD1 = true;

            /* LightReOD=false;; */
            /* LightOrOD=false;; */
            /* LightGrOD=false;; */
          }
        }
      }
      break;

     default:
      /* During 'NORMAL': '<S4>:24' */
      /* '<S4>:12:1' sf_internal_predicateOutput = ... */
      /* '<S4>:12:1' EM==1; */
      if (rtb_em) {
        /* Transition: '<S4>:12' */
        /* Exit Internal 'NORMAL': '<S4>:24' */
        localDW->is_NORMAL = 0U;
        localDW->is_c4_TrafficLightController = TrafficLightContro_IN_EMERGENCY;
        localDW->temporalCounter_i2 = 0U;

        /* Entry Internal 'EMERGENCY': '<S4>:11' */
        /* Transition: '<S4>:2' */
        localDW->is_EMERGENCY = TrafficLightControlle_IN_BLINK1;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'BLINK1': '<S4>:22' */
        /* '<S4>:22:1' LightReSD=true; */
        /* '<S4>:22:1' LightOrSD=true; */
        *rty_LightOrSD1 = true;

        /* '<S4>:22:1' LightGrSD=true; */
        *rty_LightGrSD1 = true;

        /* LightReOD=false;; */
        /* LightOrOD=false;; */
        /* LightGrOD=false;; */
      } else {
        switch (localDW->is_NORMAL) {
         case TrafficLightContro_IN_OD_ORANGE:
          /* During 'OD_ORANGE': '<S4>:21' */
          /* '<S4>:20:1' sf_internal_predicateOutput = ... */
          /* '<S4>:20:1' after(OrangeTime,sec); */
          if (localDW->temporalCounter_i1 >= 10U) {
            /* Transition: '<S4>:20' */
            localDW->is_NORMAL = TrafficLightContr_IN_SD_TRAFFIC;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'SD_TRAFFIC': '<S4>:8' */
            /* '<S4>:8:1' LightReSD=false; */
            /* LightOrSD=false; */
            /* '<S4>:8:2' LightGrSD=true; */
            *rty_LightGrSD1 = true;

            /* LightReOD=true; */
            /* LightOrOD=false; */
            /* LightGrOD=false; */
          }
          break;

         case TrafficLightContr_IN_OD_TRAFFIC:
          /* During 'OD_TRAFFIC': '<S4>:5' */
          /* '<S4>:18:1' sf_internal_predicateOutput = ... */
          /* '<S4>:18:1' after(GreenTime,sec); */
          if (localDW->temporalCounter_i1 >= 40U) {
            /* Transition: '<S4>:18' */
            localDW->is_NORMAL = TrafficLightContro_IN_OD_ORANGE;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'OD_ORANGE': '<S4>:21' */
            /* LightReSD=true; */
            /* LightOrSD=false; */
            /* LightGrSD=false; */
            /* LightReOD=false;; */
            /* LightOrOD=true; */
            /* LightGrOD=false; */
          }
          break;

         case TrafficLightContr_IN_SD_ORANGE1:
          /* During 'SD_ORANGE1': '<S4>:3' */
          /* '<S4>:16:1' sf_internal_predicateOutput = ... */
          /* '<S4>:16:1' after(OrangeTime,sec); */
          if (localDW->temporalCounter_i1 >= 10U) {
            /* Transition: '<S4>:16' */
            localDW->is_NORMAL = TrafficLightContr_IN_OD_TRAFFIC;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'OD_TRAFFIC': '<S4>:5' */
            /* '<S4>:5:1' LightReSD=true; */
            /* '<S4>:5:1' LightOrSD=false; */
            *rty_LightOrSD1 = false;

            /* '<S4>:5:2' LightGrSD=false; */
            *rty_LightGrSD1 = false;

            /* LightReOD=false; */
            /* LightOrOD=false */
            /* LightGrOD=true; */
          }
          break;

         default:
          /* During 'SD_TRAFFIC': '<S4>:8' */
          /* '<S4>:19:1' sf_internal_predicateOutput = ... */
          /* '<S4>:19:1' after(GreenTime,sec); */
          if (localDW->temporalCounter_i1 >= 40U) {
            /* Transition: '<S4>:19' */
            localDW->is_NORMAL = TrafficLightContr_IN_SD_ORANGE1;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'SD_ORANGE1': '<S4>:3' */
            /* LightReSD=false; */
            /* '<S4>:3:1' LightOrSD=true; */
            *rty_LightOrSD1 = true;

            /* '<S4>:3:2' LightGrSD=false; */
            *rty_LightGrSD1 = false;

            /* LightReSD=true; */
            /* LightOrSD=false; */
            /* LightGrSD=false; */
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/TrafficLightHandler ' */

  /* Chart: '<Root>/sensorValueHandler' */
  /* Gateway: sensorValueHandler */
  /* During: sensorValueHandler */
  /* Entry Internal: sensorValueHandler */
  /* Transition: '<S6>:37' */
  /* Count Sensor Values */
  /* '<S6>:38:1' sf_internal_predicateOutput = ... */
  /* '<S6>:38:1' (S1==true)&&(S2==true)&&(S3==true); */
  if ((*rtu_Sensor1Value_) && (*rtu_Sensor2Value_) && (*rtu_Sensor3Value_)) {
    /* Transition: '<S6>:38' */
    /* Transition: '<S6>:40' */
    /* '<S6>:40:1' CountB1=true; */
    *rty_CountSD1B1 = true;

    /* '<S6>:40:1' CountB2=true; */
    *rty_CountSD1B2 = true;

    /* Transition: '<S6>:49' */
    /* Transition: '<S6>:48' */
    /* Transition: '<S6>:47' */
  } else {
    /* Transition: '<S6>:39' */
    /* '<S6>:41:1' sf_internal_predicateOutput = ... */
    /* '<S6>:41:1' (S1==true) && (S2==true) && (S3==false); */
    if ((*rtu_Sensor1Value_) && (*rtu_Sensor2Value_) && (!*rtu_Sensor3Value_)) {
      /* Transition: '<S6>:41' */
      /* Transition: '<S6>:43' */
      /* '<S6>:43:1' CountB1=false; */
      *rty_CountSD1B1 = false;

      /* '<S6>:43:1' CountB2=true */
      *rty_CountSD1B2 = true;

      /* Transition: '<S6>:48' */
      /* Transition: '<S6>:47' */
    } else {
      /* Transition: '<S6>:42' */
      /* '<S6>:44:1' sf_internal_predicateOutput = ... */
      /* '<S6>:44:1' (S1==true)&&(S2==false)&&(S3==false); */
      if ((*rtu_Sensor1Value_) && (!*rtu_Sensor2Value_) && (!*rtu_Sensor3Value_))
      {
        /* Transition: '<S6>:44' */
        /* Transition: '<S6>:46' */
        /* '<S6>:46:1' CountB1=true; */
        *rty_CountSD1B1 = true;

        /* '<S6>:46:1' CountB2=false; */
        *rty_CountSD1B2 = false;

        /* Transition: '<S6>:47' */
      } else {
        /* Transition: '<S6>:45' */
        /* '<S6>:45:1' CountB1=false; */
        *rty_CountSD1B1 = false;

        /* '<S6>:45:1' CountB2=false; */
        *rty_CountSD1B2 = false;
      }
    }
  }

  /* End of Chart: '<Root>/sensorValueHandler' */

  /* Update for Delay: '<Root>/Delay' */
  /* Transition: '<S6>:50' */
  localDW->Delay_DSTATE = *rty_CountSD1B1;

  /* Update for Delay: '<Root>/Delay1' */
  localDW->Delay1_DSTATE = *rty_CountSD1B2;

  /* Update for UniformRandomNumber: '<Root>/Uniform Random Number' */
  localDW->UniformRandomNumber_NextOutput = rt_urand_Upu32_Yd_f_pw
    (&localDW->RandSeed) * 2.0 + -1.0;

  /* Update for Delay: '<Root>/Delay One Step2' */
  localDW->DelayOneStep2_DSTATE = *rty_LightOrSD1;

  /* Update for Delay: '<Root>/Delay One Step3' */
  localDW->DelayOneStep3_DSTATE = *rty_LightGrSD1;

  /* Update for Delay: '<Root>/Delay One Step4' incorporates:
   *  Logic: '<Root>/Logical Operator1'
   *  Logic: '<S3>/Logical Operator3'
   *  Logic: '<S3>/Logical Operator4'
   *  Logic: '<S3>/Logical Operator6'
   */
  localDW->DelayOneStep4_DSTATE = ((*rty_VdSD1) && (!((rtb_lgtGrSD1Del ||
    rtb_lgtOrSD1Del || (*rtu_LightGrSD2_) || (*rtu_LightOrSD2_)) &&
    ((*rtu_LightGrOD1_) || (*rtu_LightOrOD1_) || (*rtu_LightGrOD2_) ||
     (*rtu_LightOrOD2_)))));

  /* Update for Delay: '<Root>/Delay2' */
  localDW->Delay2_DSTATE = rtb_InitPr;
}

/* Model initialize function */
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
