/*
 * File: ButtonLogic_data.c
 *
 * Code generated for Simulink model 'ButtonLogic'.
 *
 * Model version                  : 1.480
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Feb 18 17:46:27 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. MISRA C:2012 guidelines
 * Validation result: Passed (20), Warnings (3), Error (0)
 */

#include "ButtonLogic.h"

/* Block parameters (default storage) */
P_ButtonLogic_T ButtonLogic_P = {
    /* Variable: BLU_BTNewHdstPairWaitDur_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    1000.0,

    /* Variable: ABS_Launch_Control_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    1U,

    /* Variable: ABS_Mode_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    1U,

    /* Variable: ABS_TC_Mode_Response
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: BLU_BTNewPhnPairWaitDur_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    3000U,

    /* Variable: BLU_BTSearchDur_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    10000U,

    /* Variable: BLU_CCDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    2000U,

    /* Variable: BLU_CCDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    50U,

    /* Variable: BLU_CCSetDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    2000U,

    /* Variable: BLU_CCSetDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    50U,

    /* Variable: BLU_DwnDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    2000U,

    /* Variable: BLU_DwnDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    50U,

    /* Variable: BLU_ExitDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    1000U,

    /* Variable: BLU_ExitDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    50U,

    /* Variable: BLU_ExtraFnWtTmr_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    1000U,

    /* Variable: BLU_LngBtnEvntDur_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    500U,

    /* Variable: BLU_LngDwnDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    5000U,

    /* Variable: BLU_LngDwnDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    3000U,

    /* Variable: BLU_LngExitDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    5000U,

    /* Variable: BLU_LngExitDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    3000U,

    /* Variable: BLU_LngSetDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    5000U,

    /* Variable: BLU_LngSetDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    3000U,

    /* Variable: BLU_LngUpDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    5000U,

    /* Variable: BLU_LngUpDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    3000U,

    /* Variable: BLU_NavVolWaitDur_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    1000U,

    /* Variable: BLU_PopUpHideDly_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    200U,

    /* Variable: BLU_ResDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    2000U,

    /* Variable: BLU_ResDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    50U,

    /* Variable: BLU_SetDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    2000U,

    /* Variable: BLU_SetDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    50U,

    /* Variable: BLU_UpDtctMax_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    2000U,

    /* Variable: BLU_UpDtctMin_Tms
     * Referenced by: '<S1>/buttonFlowChart'
     */
    50U,

    /* Variable: ECU_Drive_Mode_Response
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: inSetButton
     * Referenced by: '<Root>/Constant'
     */
    false,

    /* Variable: ABS_ABS_Mode_Response
     * Referenced by: '<S1>/buttonFlowChart'
     */
    road,

    /* Variable: variant
     * Referenced by: '<S1>/buttonFlowChart'
     */
    duke200,

    /* Variable: CCU_Status
     * Referenced by: '<S1>/buttonFlowChart'
     */
    installed,

    /* Variable: ABS_TC_MTC_Mode_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    TCMode_TC,

    /* Variable: BLU_MaxRndTimeLoopLim
     * Referenced by: '<S1>/buttonFlowChart'
     */
    98U,

    /* Variable: BLU_RND_TMR_LOOP
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: CCU_BT_Status
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: CCU_Connect
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: CCU_Corded_Headset
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: CCU_Music_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: CCU_RCM_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: CCU_RCM_Ready_Status
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: CCU_TbT_Navigation_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: ECU_CC_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: ECU_Quickshifter_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: ECU_SL_Feature
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: ECU_SL_LED
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: ECU_SL_Status
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Variable: Heated_Grips
     * Referenced by: '<S1>/buttonFlowChart'
     */
    0U,

    /* Mask Parameter: CompareToConstant_const
     * Referenced by: '<S90>/Constant'
     */
    DISTANCE_KILOMETER,

    /* Mask Parameter: CompareToConstant_const_h
     * Referenced by: '<S91>/Constant'
     */
    CONNECTIVITY_BLUETOOTH_ON,

    /* Mask Parameter: CompareToConstant_const_d
     * Referenced by: '<S92>/Constant'
     */
    QUICKSHIFTER_ON,

    /* Mask Parameter: CompareToConstant_const_m
     * Referenced by: '<S93>/Constant'
     */
    HEADSETTYPE_CORDED,

    /* Mask Parameter: CompareToConstant_const_mr
     * Referenced by: '<S94>/Constant'
     */
    TEMPERATURE_CELSIUS,

    /* Computed Parameter: HeatedGripsOut_Y0
     * Referenced by: '<S27>/HeatedGripsOut'
     */
    MAIN_SCREEN,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S28>/Constant'
     */
    0U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S28>/Constant1'
     */
    1U,

    /* Computed Parameter: DistanceUnits_Y0
     * Referenced by: '<S28>/DistanceUnits'
     */
    0U,

    /* Computed Parameter: Constant_Value_g
     * Referenced by: '<S29>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value_a
     * Referenced by: '<S29>/Constant1'
     */
    0U,

    /* Computed Parameter: ConnBluetoothSwt_Y0
     * Referenced by: '<S29>/ConnBluetoothSwt'
     */
    0U,

    /* Computed Parameter: Constant_Value_k
     * Referenced by: '<S30>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value_b
     * Referenced by: '<S30>/Constant1'
     */
    0U,

    /* Computed Parameter: QuickShifterSwt_Y0
     * Referenced by: '<S30>/QuickShifterSwt'
     */
    0U,

    /* Computed Parameter: HeadsetTypeSel_Y0
     * Referenced by: '<S31>/HeadsetTypeSel'
     */
    0U,

    /* Computed Parameter: Constant_Value_b
     * Referenced by: '<S31>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value_h
     * Referenced by: '<S31>/Constant1'
     */
    0U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S32>/Constant'
     */
    0U,

    /* Computed Parameter: Constant1_Value_p
     * Referenced by: '<S32>/Constant1'
     */
    1U,

    /* Computed Parameter: TemperatureUnits_Y0
     * Referenced by: '<S32>/TemperatureUnits'
     */
    0U,

    /* Computed Parameter: FavSlot1_Y0
     * Referenced by: '<S42>/FavSlot1'
     */
    0U,

    /* Computed Parameter: FavSlot2_Y0
     * Referenced by: '<S43>/FavSlot2'
     */
    0U,

    /* Computed Parameter: FavSlot3_Y0
     * Referenced by: '<S44>/FavSlot3'
     */
    0U,

    /* Computed Parameter: FavSlot4_Y0
     * Referenced by: '<S45>/FavSlot4'
     */
    0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
