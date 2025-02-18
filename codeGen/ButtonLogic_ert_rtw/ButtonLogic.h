/*
 * File: ButtonLogic.h
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

#ifndef RTW_HEADER_ButtonLogic_h_
#define RTW_HEADER_ButtonLogic_h_
#ifndef ButtonLogic_COMMON_INCLUDES_
#define ButtonLogic_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#include "complex_types.h"
#endif                                 /* ButtonLogic_COMMON_INCLUDES_ */

#include "exported_enum_type.h"
#include "BLU_FnCCSwtOFFSpdLmtr.h"
#include "BLU_FnResetHdstPairNewWaitFlg.h"
#include "BLU_FnCCSwtONSpdLmtr.h"
#include "BLU_FnResetPhnPairNewWaitFlg.h"
#include "BLU_FnLapTmrScrllUP.h"
#include "BLU_FnHdstSelBT.h"
#include "BLU_FnActvCallEXIT.h"
#include "BLU_FnBTHeadsetPairReq.h"
#include "BLU_FnBTPhonePairReq.h"
#include "BLU_FnBTHeadsetDvcDel.h"
#include "BLU_FnBTPhoneDvcDel.h"
#include "BLU_FnBIWarningsDwn.h"
#include "BLU_FnBTHeadsetDvcDwn.h"
#include "BLU_FnBTHeadsetDvcUp.h"
#include "BLU_FnCallVolInc.h"
#include "BLU_FnIncomingCallAnswer.h"
#include "BLU_FnBIWarningsUp.h"
#include "BLU_FnDateFrmtTgle.h"
#include "BLU_FnClkFrmtTgle.h"
#include "BLU_FnTISetAsOvwTrip2.h"
#include "BLU_FnLapTmrScrllDOWN.h"
#include "BLU_FnSETLanguage.h"
#include "BLU_FnSetQuickSelectorUP.h"
#include "BLU_FnCnctvtyCnfrmAppReg.h"
#include "BLU_FnShiftLightON.h"
#include "BLU_FnTIResetTrip2.h"
#include "BLU_FnLaunchControlOFF.h"
#include "BLU_FnClosePopUp.h"
#include "BLU_FnHdstSelCord.h"
#include "BLU_FnLaunchControlON.h"
#include "BLU_FnSaveSlot4Fav.h"
#include "BLU_FnShiftLightOFF.h"
#include "BLU_FnSaveSlot3Fav.h"
#include "BLU_FnBTPhoneDvcDwn.h"
#include "BLU_FnSaveSlot2Fav.h"
#include "BLU_FnSaveSrvcChanges.h"
#include "BLU_FnDecSrvcDistMI.h"
#include "BLU_FnIncSrvcMonths.h"
#include "BLU_FnTIResetTrip1.h"
#include "BLU_FnIncSrvcDistMI.h"
#include "BLU_FnSETTempUnits.h"
#include "BLU_FnActvCallSET.h"
#include "BLU_FnDecSrvcDistKM.h"
#include "BLU_FnBTPhonePassKeyChkd.h"
#include "BLU_FnQuickShifterSwitch.h"
#include "BLU_FnSETDistUnits.h"
#include "BLU_FnConnBTSwitch.h"
#include "BLU_FnSetHeatedGrips.h"
#include "BLU_FnSetSrvcDist.h"
#include "BLU_FnRLResetRndTmr.h"
#include "BLU_FnSaveSlot1Fav.h"
#include "BLU_FnSetQuickSelectorDOWN.h"
#include "BLU_FnClkDecDateDig2.h"
#include "BLU_FnBTPhoneDvcUp.h"
#include "BLU_FnSETConsUnits.h"
#include "BLU_FnClkDecDateDig3.h"
#include "BLU_FnClkIncDateDig3.h"
#include "BLU_FnClkDecHrs.h"
#include "BLU_FnClkSaveTime.h"
#include "BLU_FnRLRndTmrDwn.h"
#include "BLU_FnIncSrvcDistKM.h"
#include "BLU_FnIncomingCallReject.h"
#include "BLU_FnSetSrvcMonths.h"
#include "BLU_FnTISetAsOvwTrip1.h"
#include "BLU_FnNavVolDwn.h"
#include "BLU_FnNavVolUp.h"
#include "BLU_FnClkIncHrs.h"
#include "BLU_FnNavigationStatus.h"
#include "BLU_FnAudioNextTrack.h"
#include "BLU_FnClkDecDateDig1.h"
#include "BLU_FnAudioPrevTrack.h"
#include "BLU_FnDecSrvcMonths.h"
#include "BLU_FnClkSaveDate.h"
#include "BLU_FnAudioVolDwn.h"
#include "BLU_FnClkIncDateDig2.h"
#include "BLU_FnClkIncDateDig1.h"
#include "BLU_FnCCSwtONCrsCtrl.h"
#include "BLU_FnAudioVolUp.h"
#include "BLU_FnClkIncMins.h"
#include "BLU_FnClkDecMins.h"
#include "BLU_FnRLRndTmrUp.h"
#include "BLU_FnSetHeatedGripsMode.h"
#include "BLU_FnCallVolDec.h"
#include "BLU_FnAudioTglPlayPause.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_ButtonLogic_T RT_MODEL_ButtonLogic_T;

#ifndef DEFINED_TYPEDEF_FOR_eABSMode_
#define DEFINED_TYPEDEF_FOR_eABSMode_

typedef uint8_t eABSMode;

/* enum eABSMode */
#define road                           ((eABSMode)0U)            /* Default value */
#define supermoto                      ((eABSMode)2U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eTCMode_
#define DEFINED_TYPEDEF_FOR_eTCMode_

typedef uint8_t eTCMode;

/* enum eTCMode */
#define TCMode_OFF                     ((eTCMode)0U)             /* Default value */
#define TCMode_TC                      ((eTCMode)1U)
#define TCMode_MTC                     ((eTCMode)2U)
#define TCMode_TC_Demo                 ((eTCMode)3U)
#define TCMode_MTC_Demo                ((eTCMode)4U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eCCUStatus_
#define DEFINED_TYPEDEF_FOR_eCCUStatus_

typedef uint8_t eCCUStatus;

/* enum eCCUStatus */
#define installed                      ((eCCUStatus)1U)          /* Default value */
#define notInstalled                   ((eCCUStatus)0U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eBikeVariant_
#define DEFINED_TYPEDEF_FOR_eBikeVariant_

typedef uint8_t eBikeVariant;

/* enum eBikeVariant */
#define duke390                        ((eBikeVariant)1U)        /* Default value */
#define duke200                        ((eBikeVariant)2U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eHeatedGripsMode_
#define DEFINED_TYPEDEF_FOR_eHeatedGripsMode_

typedef uint8_t eHeatedGripsMode;

/* enum eHeatedGripsMode */
#define OFF                            ((eHeatedGripsMode)0U)    /* Default value */
#define MINIMUM                        ((eHeatedGripsMode)1U)
#define MEDIUM                         ((eHeatedGripsMode)2U)
#define MAXIMUM                        ((eHeatedGripsMode)3U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eButton_
#define DEFINED_TYPEDEF_FOR_eButton_

typedef uint8_t eButton;

/* enum eButton */
#define pressed                        ((eButton)1U)             /* Default value */
#define released                       ((eButton)0U)
#define on                             ((eButton)1U)
#define off                            ((eButton)0U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eRideMode_
#define DEFINED_TYPEDEF_FOR_eRideMode_

typedef uint8_t eRideMode;

/* enum eRideMode */
#define track                          ((eRideMode)3U)           /* Default value */
#define rain                           ((eRideMode)2U)
#define street                         ((eRideMode)0U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eSwitch_
#define DEFINED_TYPEDEF_FOR_eSwitch_

typedef uint8_t eSwitch;

/* enum eSwitch */
#define open                           ((eSwitch)0U)             /* Default value */
#define closed                         ((eSwitch)1U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_eFeatureStatus_
#define DEFINED_TYPEDEF_FOR_eFeatureStatus_

typedef uint8_t eFeatureStatus;

/* enum eFeatureStatus */
#define notAvailable                   ((eFeatureStatus)0U)      /* Default value */
#define available                      ((eFeatureStatus)1U)
#define enabled                        ((eFeatureStatus)1U)
#define disabled                       ((eFeatureStatus)0U)
#endif

/* Block signals (default storage) */
typedef struct {
    float TmpSignalConversionAtSFunctionI[99];/* '<S1>/buttonFlowChart' */
    uint8_t Switch_h;                  /* '<S31>/Switch' */
    eRideMode rideMode;                /* '<S1>/buttonFlowChart' */
    bool Switch_i;                     /* '<Root>/Switch' */
} B_ButtonLogic_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
    double exitDur;                    /* '<S1>/buttonFlowChart' */
    double setDur;                     /* '<S1>/buttonFlowChart' */
    double downDur;                    /* '<S1>/buttonFlowChart' */
    double ccDur;                      /* '<S1>/buttonFlowChart' */
    double upDur;                      /* '<S1>/buttonFlowChart' */
    double resumeDur;                  /* '<S1>/buttonFlowChart' */
    double favSlot2Sel;                /* '<S1>/buttonFlowChart' */
    double favSlot3Sel;                /* '<S1>/buttonFlowChart' */
    double favSlot4Sel;                /* '<S1>/buttonFlowChart' */
    double favSlot1Sel;                /* '<S1>/buttonFlowChart' */
    double dateFormat;                 /* '<S1>/buttonFlowChart' */
    float INcall_prev;                 /* '<S1>/buttonFlowChart' */
    float INcall_start;                /* '<S1>/buttonFlowChart' */
    float cc_start;                    /* '<S1>/buttonFlowChart' */
    float resume_start;                /* '<S1>/buttonFlowChart' */
    float ccSet_prev;                  /* '<S1>/buttonFlowChart' */
    float ccSet_start;                 /* '<S1>/buttonFlowChart' */
    int32_t sfEvent;                   /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex;           /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex;            /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_a;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_m;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_m;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_p;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_p;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_h;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_pg;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_pk;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_l;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_k;          /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_o;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_g;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_hy;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_n;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_e;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_e;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_b;          /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_l;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_gl;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_hu;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_n1;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_kw;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_d;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_f;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_b;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_i;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_le;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_hh;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_k;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_pc;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_h;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_p0;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_fl;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_bs;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_py;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_hk;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_nm;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_n;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_l4;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_l2;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_bn;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_e1;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_gx;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_j;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_mg;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_j3;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_ea;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ml;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_pc;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_f0;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_hu;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_a;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_b3;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_c;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_bq;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_cx;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_j;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ir;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_f;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_o2;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_ep;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_cr;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_je;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_kw0;        /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_eb;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_jx;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_o;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ac;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_k1;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_b5;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_hf;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_cg;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_jt;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_m1;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_pk;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_im;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_lr;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_bq;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_dd;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_kh;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_c;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_g;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_eq;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_fw;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_fe;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_me;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_bs;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_of;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_kr;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_imu;        /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_krh;       /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_n5;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_dh;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_oq;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_ao;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_h4;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_ddw;       /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ho;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_me;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ic;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_i;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_cq;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_mc;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_o2h;        /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_i1;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ai;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_bqp;       /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_cb;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_kb;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_jp;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_mc3;       /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ka;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_i5;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_n1;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_hz;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_le;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_ao;         /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_cu;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_il;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_d;          /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_ke;        /* '<S1>/buttonFlowChart' */
    uint32_t exitPortIndex_h2;         /* '<S1>/buttonFlowChart' */
    uint32_t entryPortIndex_oi;        /* '<S1>/buttonFlowChart' */
    uint32_t temporalCounter_i4;       /* '<S1>/buttonFlowChart' */
    uint32_t temporalCounter_i5;       /* '<S1>/buttonFlowChart' */
    uint32_t temporalCounter_i6;       /* '<S1>/buttonFlowChart' */
    uint32_t temporalCounter_i7;       /* '<S1>/buttonFlowChart' */
    uint32_t temporalCounter_i8;       /* '<S1>/buttonFlowChart' */
    uint32_t temporalCounter_i9;       /* '<S1>/buttonFlowChart' */
    uint32_t temporalCounter_i10;      /* '<S1>/buttonFlowChart' */
    uint32_t durationCounter_1;        /* '<S1>/buttonFlowChart' */
    uint32_t durationCounter_2;        /* '<S1>/buttonFlowChart' */
    uint32_t durationCounter_1_e;      /* '<S1>/buttonFlowChart' */
    uint32_t durationCounter_1_m;      /* '<S1>/buttonFlowChart' */
    uint8_t is_active_c3_ButtonLogic;  /* '<S1>/buttonFlowChart' */
    uint8_t is_active_PopUpChecker;    /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckWarning;    /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckWarning;           /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckCall;       /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckCall;              /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckEndCall;    /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckEndCall;           /* '<S1>/buttonFlowChart' */
    uint8_t is_active_ButtonChecker;   /* '<S1>/buttonFlowChart' */
    uint8_t is_ButtonChecker;          /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckUP;         /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckUP;                /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckDown;       /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckDown;              /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckSet;        /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckSet;               /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckExit;       /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckExit;              /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckCC;         /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckCC;                /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckResume;     /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckResume;            /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckCCSet;      /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckCCSet;             /* '<S1>/buttonFlowChart' */
    uint8_t is_active_Flow;            /* '<S1>/buttonFlowChart' */
    uint8_t is_Flow;                   /* '<S1>/buttonFlowChart' */
    uint8_t is_ButtonTriggeredMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t was_ButtonTriggeredMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t is_MainScreen;             /* '<S1>/buttonFlowChart' */
    uint8_t is_Menu;                   /* '<S1>/buttonFlowChart' */
    uint8_t was_Menu;                  /* '<S1>/buttonFlowChart' */
    uint8_t is_MainSubMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t was_MainSubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_AudioMain;              /* '<S1>/buttonFlowChart' */
    uint8_t is_AudioSubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_BikeInfoSubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t was_BikeInfoSubMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t is_BikeInfoSubMenuMain;    /* '<S1>/buttonFlowChart' */
    uint8_t was_BikeInfoSubMenuMain;   /* '<S1>/buttonFlowChart' */
    uint8_t is_CruiseCtrlSubMenu;      /* '<S1>/buttonFlowChart' */
    uint8_t was_CruiseCtrlSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_ModeCCSelChk;           /* '<S1>/buttonFlowChart' */
    uint8_t is_ModeSubMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t was_ModeSubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_SpeedLimiterSelChk;     /* '<S1>/buttonFlowChart' */
    uint8_t is_SpeedLimiterSubMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t was_SpeedLimiterSubMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t is_HeatedGripsSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_HeatedGripsMenuGrp;     /* '<S1>/buttonFlowChart' */
    uint8_t was_HeatedGripsMenuGrp;    /* '<S1>/buttonFlowChart' */
    uint8_t is_LapTimer;               /* '<S1>/buttonFlowChart' */
    uint8_t is_Lap_TimerV2;            /* '<S1>/buttonFlowChart' */
    uint8_t was_Lap_TimerV2;           /* '<S1>/buttonFlowChart' */
    uint8_t is_ResetLaps;              /* '<S1>/buttonFlowChart' */
    uint8_t is_ResetLapsMenu;          /* '<S1>/buttonFlowChart' */
    uint8_t is_MotorCycleSubMenu;      /* '<S1>/buttonFlowChart' */
    uint8_t was_MotorCycleSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_ABSSubMenu;             /* '<S1>/buttonFlowChart' */
    uint8_t was_ABSSubMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t is_ABSMenu1;               /* '<S1>/buttonFlowChart' */
    uint8_t was_ABSMenu1;              /* '<S1>/buttonFlowChart' */
    uint8_t is_LaunchControlSubMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t is_LaunchControlSubMenu1;  /* '<S1>/buttonFlowChart' */
    uint8_t was_LaunchControlSubMenu1; /* '<S1>/buttonFlowChart' */
    uint8_t is_MTCSubMenu;             /* '<S1>/buttonFlowChart' */
    uint8_t was_MTCSubMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t is_MTCMenuOptions;         /* '<S1>/buttonFlowChart' */
    uint8_t was_MTCMenuOptions;        /* '<S1>/buttonFlowChart' */
    uint8_t is_MotorCycleSubMenu1;     /* '<S1>/buttonFlowChart' */
    uint8_t was_MotorCycleSubMenu1;    /* '<S1>/buttonFlowChart' */
    uint8_t is_RideModeSubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t was_RideModeSubMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t is_RideModeSubMenu1;       /* '<S1>/buttonFlowChart' */
    uint8_t was_RideModeSubMenu1;      /* '<S1>/buttonFlowChart' */
    uint8_t is_NavigationMain;         /* '<S1>/buttonFlowChart' */
    uint8_t is_NavigationVolSubMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t was_NavigationVolSubMenu;  /* '<S1>/buttonFlowChart' */
    uint8_t is_NavGroup;               /* '<S1>/buttonFlowChart' */
    uint8_t was_NavGroup;              /* '<S1>/buttonFlowChart' */
    uint8_t is_NavigationSubMenu;      /* '<S1>/buttonFlowChart' */
    uint8_t is_SetService;             /* '<S1>/buttonFlowChart' */
    uint8_t was_SetService;            /* '<S1>/buttonFlowChart' */
    uint8_t is_ServiceMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t was_ServiceMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_SetServiceDistanceMenu; /* '<S1>/buttonFlowChart' */
    uint8_t was_SetServiceDistanceMenu;/* '<S1>/buttonFlowChart' */
    uint8_t is_DistanceModifyMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t was_DistanceModifyMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t is_SettingsMain;           /* '<S1>/buttonFlowChart' */
    uint8_t is_SettingsSubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t was_SettingsSubMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t is_ClockSubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t was_ClockSubMenu;          /* '<S1>/buttonFlowChart' */
    uint8_t is_ClockDateMenu;          /* '<S1>/buttonFlowChart' */
    uint8_t was_ClockDateMenu;         /* '<S1>/buttonFlowChart' */
    uint8_t is_DateSubMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t was_DateSubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_DateDDMMYYYY;           /* '<S1>/buttonFlowChart' */
    uint8_t was_DateDDMMYYYY;          /* '<S1>/buttonFlowChart' */
    uint8_t is_DateMMDDYYYY;           /* '<S1>/buttonFlowChart' */
    uint8_t was_DateMMDDYYYY;          /* '<S1>/buttonFlowChart' */
    uint8_t is_DateYYYYMMDD;           /* '<S1>/buttonFlowChart' */
    uint8_t was_DateYYYYMMDD;          /* '<S1>/buttonFlowChart' */
    uint8_t is_SetClockFormat;         /* '<S1>/buttonFlowChart' */
    uint8_t is_SetClockFormatMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_SetDateFormat;          /* '<S1>/buttonFlowChart' */
    uint8_t is_SetDateFormatMenu;      /* '<S1>/buttonFlowChart' */
    uint8_t was_SetDateFormatMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_TimeSubMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t was_TimeSubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_ConnectivityMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t was_ConnectivityMenu;      /* '<S1>/buttonFlowChart' */
    uint8_t is_ConnectivitySubMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t was_ConnectivitySubMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t is_BLUETOOTH_ONOFF;        /* '<S1>/buttonFlowChart' */
    uint8_t is_BT_Sel;                 /* '<S1>/buttonFlowChart' */
    uint8_t is_BT_HeadsetMenu;         /* '<S1>/buttonFlowChart' */
    uint8_t was_BT_HeadsetMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t is_HeadsetBTDvcDelete;     /* '<S1>/buttonFlowChart' */
    uint8_t was_HeadsetBTDvcDelete;    /* '<S1>/buttonFlowChart' */
    uint8_t is_HeadsetDeviceSearch;    /* '<S1>/buttonFlowChart' */
    uint8_t was_HeadsetDeviceSearch;   /* '<S1>/buttonFlowChart' */
    uint8_t is_HeadsetPairingSubMenu;  /* '<S1>/buttonFlowChart' */
    uint8_t is_ConnectivitySubMenu_k;  /* '<S1>/buttonFlowChart' */
    uint8_t is_HeadsetTypeMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t is_HeadsetSel;             /* '<S1>/buttonFlowChart' */
    uint8_t was_HeadsetSel;            /* '<S1>/buttonFlowChart' */
    uint8_t is_PhoneMenu;              /* '<S1>/buttonFlowChart' */
    uint8_t was_PhoneMenu;             /* '<S1>/buttonFlowChart' */
    uint8_t is_PhoneBTDvcDelete;       /* '<S1>/buttonFlowChart' */
    uint8_t was_PhoneBTDvcDelete;      /* '<S1>/buttonFlowChart' */
    uint8_t is_PhoneDeviceSearch;      /* '<S1>/buttonFlowChart' */
    uint8_t was_PhoneDeviceSearch;     /* '<S1>/buttonFlowChart' */
    uint8_t is_PhonePairinSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_ExtraFunctionsSubMenu;  /* '<S1>/buttonFlowChart' */
    uint8_t was_ExtraFunctionsSubMenu; /* '<S1>/buttonFlowChart' */
    uint8_t is_ExtraFncSubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t was_ExtraFncSubMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t is_FavoritesSubMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t was_FavoritesSubMenu;      /* '<S1>/buttonFlowChart' */
    uint8_t is_FavoritesSlotsMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t was_FavoritesSlotsMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot1Menu;              /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot1FavoritesMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t was_Slot1FavoritesMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot2Menu;              /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot2FavoritesMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t was_Slot2FavoritesMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot3Menu;              /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot3FavoritesMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t was_Slot3FavoritesMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot4Menu;              /* '<S1>/buttonFlowChart' */
    uint8_t is_Slot4FavoritesMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t was_Slot4FavoritesMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t is_HeatingGripsSettingsSubMenu;/* '<S1>/buttonFlowChart' */
    uint8_t was_HeatingGripsSettingsSubMenu;/* '<S1>/buttonFlowChart' */
    uint8_t is_HtdGripsSel;            /* '<S1>/buttonFlowChart' */
    uint8_t was_HtdGripsSel;           /* '<S1>/buttonFlowChart' */
    uint8_t is_LanguageSubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t is_LanguageSetSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t was_LanguageSetSubMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t is_QuickSelectorSubMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t was_QuickSelectorSubMenu;  /* '<S1>/buttonFlowChart' */
    uint8_t is_QuickSelectorDOWNSubMenu;/* '<S1>/buttonFlowChart' */
    uint8_t is_QS_DOWN_SubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t was_QS_DOWN_SubMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t is_QuickSelectorSubMenu1;  /* '<S1>/buttonFlowChart' */
    uint8_t is_QuickSelectorUPSubMenu; /* '<S1>/buttonFlowChart' */
    uint8_t is_QS_UP_SubMenu;          /* '<S1>/buttonFlowChart' */
    uint8_t was_QS_UP_SubMenu;         /* '<S1>/buttonFlowChart' */
    uint8_t is_QuickShifterMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t is_QuickShifterSubMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t was_QuickShifterSubMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t is_SettingsMenuScreens;    /* '<S1>/buttonFlowChart' */
    uint8_t was_SettingsMenuScreens;   /* '<S1>/buttonFlowChart' */
    uint8_t is_ShiftLightSubMenu;      /* '<S1>/buttonFlowChart' */
    uint8_t was_ShiftLightSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_RPM1menu;               /* '<S1>/buttonFlowChart' */
    uint8_t is_RPM2menu;               /* '<S1>/buttonFlowChart' */
    uint8_t is_ShiftLightMenu1;        /* '<S1>/buttonFlowChart' */
    uint8_t was_ShiftLightMenu1;       /* '<S1>/buttonFlowChart' */
    uint8_t is_ShiftLightSubMenu_o;    /* '<S1>/buttonFlowChart' */
    uint8_t is_ShiftLightOnOffMenu;    /* '<S1>/buttonFlowChart' */
    uint8_t was_ShiftLightOnOffMenu;   /* '<S1>/buttonFlowChart' */
    uint8_t is_UnitsSubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t was_UnitsSubMenu;          /* '<S1>/buttonFlowChart' */
    uint8_t is_ConsumptionSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_ConsUnits;              /* '<S1>/buttonFlowChart' */
    uint8_t was_ConsUnits;             /* '<S1>/buttonFlowChart' */
    uint8_t is_DistanceSubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t is_DstnceMenu;             /* '<S1>/buttonFlowChart' */
    uint8_t was_DstnceMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t is_TemperatureSubMenu;     /* '<S1>/buttonFlowChart' */
    uint8_t is_TempUnitsMenu;          /* '<S1>/buttonFlowChart' */
    uint8_t was_TempUnitsMenu;         /* '<S1>/buttonFlowChart' */
    uint8_t is_UnitsMenu;              /* '<S1>/buttonFlowChart' */
    uint8_t was_UnitsMenu;             /* '<S1>/buttonFlowChart' */
    uint8_t is_TripInfoSubMenu;        /* '<S1>/buttonFlowChart' */
    uint8_t was_TripInfoSubMenu;       /* '<S1>/buttonFlowChart' */
    uint8_t is_Trip1;                  /* '<S1>/buttonFlowChart' */
    uint8_t is_Trip1SubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_Trip2;                  /* '<S1>/buttonFlowChart' */
    uint8_t is_Trip2SubMenu;           /* '<S1>/buttonFlowChart' */
    uint8_t is_TripInfoSubMenuMain;    /* '<S1>/buttonFlowChart' */
    uint8_t was_TripInfoSubMenuMain;   /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckBattIgn;           /* '<S1>/buttonFlowChart' */
    uint8_t is_CallOperator;           /* '<S1>/buttonFlowChart' */
    uint8_t is_WarningMenu;            /* '<S1>/buttonFlowChart' */
    uint8_t is_active_DiagChecker;     /* '<S1>/buttonFlowChart' */
    uint8_t is_active_CheckStateReset; /* '<S1>/buttonFlowChart' */
    uint8_t is_CheckStateReset;        /* '<S1>/buttonFlowChart' */
    uint8_t temporalCounter_i1;        /* '<S1>/buttonFlowChart' */
    uint8_t temporalCounter_i2;        /* '<S1>/buttonFlowChart' */
    uint8_t temporalCounter_i3;        /* '<S1>/buttonFlowChart' */
    bool headsetPaired;                /* '<S1>/buttonFlowChart' */
    bool INwarning_start;              /* '<S1>/buttonFlowChart' */
    bool INcallEnded_start;            /* '<S1>/buttonFlowChart' */
    bool up_start;                     /* '<S1>/buttonFlowChart' */
    bool down_start;                   /* '<S1>/buttonFlowChart' */
    bool set_start;                    /* '<S1>/buttonFlowChart' */
    bool exitButton_start;             /* '<S1>/buttonFlowChart' */
    bool canCommsErr_prev;             /* '<S1>/buttonFlowChart' */
    bool canCommsErr_start;            /* '<S1>/buttonFlowChart' */
    bool RCMExitFlg_prev;              /* '<S1>/buttonFlowChart' */
    bool RCMExitFlg_start;             /* '<S1>/buttonFlowChart' */
    bool inShwWrngMnFlg_prev;          /* '<S1>/buttonFlowChart' */
    bool inShwWrngMnFlg_start;         /* '<S1>/buttonFlowChart' */
    bool btHdstDelErr_prev;            /* '<S1>/buttonFlowChart' */
    bool btHdstDelErr_start;           /* '<S1>/buttonFlowChart' */
    bool btHdstPrngScs_prev;           /* '<S1>/buttonFlowChart' */
    bool btHdstPrngScs_start;          /* '<S1>/buttonFlowChart' */
    bool btHeadsetFound_prev;          /* '<S1>/buttonFlowChart' */
    bool btHeadsetFound_start;         /* '<S1>/buttonFlowChart' */
    bool btHeadsetPairingError_prev;   /* '<S1>/buttonFlowChart' */
    bool btHeadsetPairingError_start;  /* '<S1>/buttonFlowChart' */
    bool btPhoneDelErr_prev;           /* '<S1>/buttonFlowChart' */
    bool btPhoneDelErr_start;          /* '<S1>/buttonFlowChart' */
    bool btPhonePrngScs_prev;          /* '<S1>/buttonFlowChart' */
    bool btPhonePrngScs_start;         /* '<S1>/buttonFlowChart' */
    bool btPhoneFound_prev;            /* '<S1>/buttonFlowChart' */
    bool btPhoneFound_start;           /* '<S1>/buttonFlowChart' */
    bool btPhonePairingError_prev;     /* '<S1>/buttonFlowChart' */
    bool btPhonePairingError_start;    /* '<S1>/buttonFlowChart' */
    bool btPhonePassKeyRcvd_prev;      /* '<S1>/buttonFlowChart' */
    bool btPhonePassKeyRcvd_start;     /* '<S1>/buttonFlowChart' */
    bool rgstrAppReply_prev;           /* '<S1>/buttonFlowChart' */
    bool rgstrAppReply_start;          /* '<S1>/buttonFlowChart' */
    bool btPhonePairCnctd_prev;        /* '<S1>/buttonFlowChart' */
    bool btPhonePairCnctd_start;       /* '<S1>/buttonFlowChart' */
    bool IgnBattFlg_prev;              /* '<S1>/buttonFlowChart' */
    bool IgnBattFlg_start;             /* '<S1>/buttonFlowChart' */
    bool stateResetFlg_start;          /* '<S1>/buttonFlowChart' */
    eHeatedGripsMode HeatedGripsMode;  /* '<S1>/buttonFlowChart' */
} DW_ButtonLogic_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
    bool inSet;                        /* '<Root>/inSet' */
    bool inUp;                         /* '<Root>/inUp' */
    bool inDown;                       /* '<Root>/inDown' */
    bool inExit;                       /* '<Root>/inExit' */
    float inCc;                        /* '<Root>/inCc' */
    float inResume;                    /* '<Root>/inResume' */
    float inCCSet;                     /* '<Root>/inCCSet' */
    float inVehSpeed;                  /* '<Root>/inVehSpeed' */
    uint8_t inDistanceUnits;           /* '<Root>/inDistanceUnits' */
    uint8_t inKillSwitch;              /* '<Root>/inKillSwitch' */
    uint32_t inOdoVal;                 /* '<Root>/inOdoVal' */
    bool inWarning;                    /* '<Root>/inWarning' */
    float inCall;                      /* '<Root>/inCall' */
    bool inCallEnded;                  /* '<Root>/inCallEnded' */
    bool inBTPhoneFound;               /* '<Root>/inBTPhoneFound' */
    bool inBTPhonePairingError;        /* '<Root>/inBTPhonePairingError' */
    bool inBTHeadsetPairingError;      /* '<Root>/inBTHeadsetPairingError' */
    bool inBTHeadsetFound;             /* '<Root>/inBTHeadsetFound' */
    bool inBTPhonePassKeyRcvd;         /* '<Root>/inBTPhonePassKeyRcvd' */
    bool inPhonePrngScs;               /* '<Root>/inPhonePrngScs' */
    bool inHdstPrngScs;                /* '<Root>/inHdstPrngScs' */
    bool inHCU_Grip_Heat_Level_Res;    /* '<Root>/inHCU_Grip_Heat_Level_Res' */
    bool inRgstrAppReply;              /* '<Root>/inRgstrAppReply' */
    bool inBTPhoneDelErr;              /* '<Root>/inBTPhoneDelErr' */
    bool inBTHdstDelErr;               /* '<Root>/inBTHdstDelErr' */
    uint8_t InCallStatus;              /* '<Root>/InCallStatus' */
    bool InIgnBattFlg;                 /* '<Root>/InIgnBattFlg' */
    bool InCANErr;                     /* '<Root>/InCANErr' */
    bool inStateResetFlag;             /* '<Root>/inStateResetFlag' */
    bool inBTPhonePairCnctd;           /* '<Root>/inBTPhonePairCnctd' */
    bool inPhonePairWait;              /* '<Root>/inPhonePairWait' */
    bool inWarningPrsnt;               /* '<Root>/inWarningPrsnt' */
    bool inHdstPairWait;               /* '<Root>/inHdstPairWait' */
    bool inPopUpOvrdFlg;               /* '<Root>/inPopUpOvrdFlg' */
    bool inRCMExitFlag;                /* '<Root>/inRCMExitFlag' */
    bool inShwWrngMnFlg;               /* '<Root>/inShwWrngMnFlg' */
} ExtU_ButtonLogic_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
    eStateName CurrentState;           /* '<Root>/CurrentState' */
    eButton DASH_RCM_Set_Switch;       /* '<Root>/DASH_RCM_Set_Switch' */
    eButton DASH_RCM_Down_Switch;      /* '<Root>/DASH_RCM_Down_Switch' */
    eButton DASH_RCM_Up_Switch;        /* '<Root>/DASH_RCM_Up_Switch' */
    eButton DASH_RCM_Exit_Switch;      /* '<Root>/DASH_RCM_Exit_Switch' */
    eButton DASH_Cc_Resume_Switch;     /* '<Root>/DASH_Cc_Resume_Switch' */
    eButton DASH_Cc_Set_Switch;        /* '<Root>/DASH_Cc_Set_Switch' */
    eStateName HeatedGripsOut;         /* '<Root>/HeatedGripsOut' */
    uint8_t DistanceUnitsOut;          /* '<Root>/DistanceUnitsOut' */
    uint8_t ConnBluetoothSwtOut;       /* '<Root>/ConnBluetoothSwtOut' */
    uint8_t QuickShifterSwtOut;        /* '<Root>/QuickShifterSwtOut' */
    uint8_t HeadsetTypeSelOut;         /* '<Root>/HeadsetTypeSelOut' */
    uint8_t TemperatureUnitsOut;       /* '<Root>/TemperatureUnitsOut' */
    uint16_t ConsumptionsUnitsOut;     /* '<Root>/ConsumptionsUnitsOut' */
    uint8_t FavSlot1Out;               /* '<Root>/FavSlot1Out' */
    uint8_t FavSlot2Out;               /* '<Root>/FavSlot2Out' */
    uint8_t FavSlot3Out;               /* '<Root>/FavSlot3Out' */
    uint8_t FavSlot4Out;               /* '<Root>/FavSlot4Out' */
    eButton DASH_CC_Master_Switch;     /* '<Root>/DASH_CC_Master_Switch' */
    uint16_t DASH_Drive_Mode_Request;  /* '<Root>/DASH_Drive_Mode_Request' */
    uint16_t DASH_TC_Mode_Request;     /* '<Root>/DASH_TC_Mode_Request' */
    uint8_t DASH_ABS_Mode_Request;     /* '<Root>/DASH_ABS_Mode_Request' */
    uint16_t DASH_MTC_Off_Switch;      /* '<Root>/DASH_MTC_Off_Switch' */
    uint16_t ShiftLight;               /* '<Root>/ShiftLight' */
    uint16_t rpm1;                     /* '<Root>/rpm1' */
    uint16_t rpm2;                     /* '<Root>/rpm2' */
    uint16_t heatedGripsStatus;        /* '<Root>/heatedGripsStatus' */
    uint16_t quickSelectorDown;        /* '<Root>/quickSelectorDown' */
    uint16_t quickSelectorUp;          /* '<Root>/quickSelectorUp' */
    uint16_t DASH_RCM_Ready_Switch;    /* '<Root>/DASH_RCM_Ready_Switch' */
    uint16_t navigationStatus;         /* '<Root>/navigationStatus' */
    uint8_t QuickSelectorDbg;          /* '<Root>/QuickSelectorDbg' */
    uint16_t popUpState;               /* '<Root>/popUpState' */
    uint8_t DASH_Grip_Installation;    /* '<Root>/DASH_Grip_Installation' */
    uint8_t DASH_SL_Switch;            /* '<Root>/DASH_SL_Switch' */
    uint16_t popUpWrnState;            /* '<Root>/popUpWrnState' */
    uint16_t popUpCallState;           /* '<Root>/popUpCallState' */
} ExtY_ButtonLogic_T;

/* Parameters (default storage) */
struct P_ButtonLogic_T_ {
    double BLU_BTNewHdstPairWaitDur_Tms;/* Variable: BLU_BTNewHdstPairWaitDur_Tms
                                         * Referenced by: '<S1>/buttonFlowChart'
                                         */
    uint16_t ABS_Launch_Control_Feature;/* Variable: ABS_Launch_Control_Feature
                                         * Referenced by: '<S1>/buttonFlowChart'
                                         */
    uint16_t ABS_Mode_Feature;         /* Variable: ABS_Mode_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t ABS_TC_Mode_Response;     /* Variable: ABS_TC_Mode_Response
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_BTNewPhnPairWaitDur_Tms;/* Variable: BLU_BTNewPhnPairWaitDur_Tms
                                          * Referenced by: '<S1>/buttonFlowChart'
                                          */
    uint16_t BLU_BTSearchDur_Tms;      /* Variable: BLU_BTSearchDur_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_CCDtctMax_Tms;        /* Variable: BLU_CCDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_CCDtctMin_Tms;        /* Variable: BLU_CCDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_CCSetDtctMax_Tms;     /* Variable: BLU_CCSetDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_CCSetDtctMin_Tms;     /* Variable: BLU_CCSetDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_DwnDtctMax_Tms;       /* Variable: BLU_DwnDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_DwnDtctMin_Tms;       /* Variable: BLU_DwnDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_ExitDtctMax_Tms;      /* Variable: BLU_ExitDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_ExitDtctMin_Tms;      /* Variable: BLU_ExitDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_ExtraFnWtTmr_Tms;     /* Variable: BLU_ExtraFnWtTmr_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngBtnEvntDur_Tms;    /* Variable: BLU_LngBtnEvntDur_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngDwnDtctMax_Tms;    /* Variable: BLU_LngDwnDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngDwnDtctMin_Tms;    /* Variable: BLU_LngDwnDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngExitDtctMax_Tms;   /* Variable: BLU_LngExitDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngExitDtctMin_Tms;   /* Variable: BLU_LngExitDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngSetDtctMax_Tms;    /* Variable: BLU_LngSetDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngSetDtctMin_Tms;    /* Variable: BLU_LngSetDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngUpDtctMax_Tms;     /* Variable: BLU_LngUpDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_LngUpDtctMin_Tms;     /* Variable: BLU_LngUpDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_NavVolWaitDur_Tms;    /* Variable: BLU_NavVolWaitDur_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_PopUpHideDly_Tms;     /* Variable: BLU_PopUpHideDly_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_ResDtctMax_Tms;       /* Variable: BLU_ResDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_ResDtctMin_Tms;       /* Variable: BLU_ResDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_SetDtctMax_Tms;       /* Variable: BLU_SetDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_SetDtctMin_Tms;       /* Variable: BLU_SetDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_UpDtctMax_Tms;        /* Variable: BLU_UpDtctMax_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t BLU_UpDtctMin_Tms;        /* Variable: BLU_UpDtctMin_Tms
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint16_t ECU_Drive_Mode_Response;  /* Variable: ECU_Drive_Mode_Response
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    bool inSetButton;                  /* Variable: inSetButton
                                        * Referenced by: '<Root>/Constant'
                                        */
    eABSMode ABS_ABS_Mode_Response;    /* Variable: ABS_ABS_Mode_Response
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    eBikeVariant variant;              /* Variable: variant
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    eCCUStatus CCU_Status;             /* Variable: CCU_Status
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    eTCMode ABS_TC_MTC_Mode_Feature;   /* Variable: ABS_TC_MTC_Mode_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t BLU_MaxRndTimeLoopLim;     /* Variable: BLU_MaxRndTimeLoopLim
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t BLU_RND_TMR_LOOP;          /* Variable: BLU_RND_TMR_LOOP
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t CCU_BT_Status;             /* Variable: CCU_BT_Status
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t CCU_Connect;               /* Variable: CCU_Connect
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t CCU_Corded_Headset;        /* Variable: CCU_Corded_Headset
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t CCU_Music_Feature;         /* Variable: CCU_Music_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t CCU_RCM_Feature;           /* Variable: CCU_RCM_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t CCU_RCM_Ready_Status;      /* Variable: CCU_RCM_Ready_Status
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t CCU_TbT_Navigation_Feature;/* Variable: CCU_TbT_Navigation_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t ECU_CC_Feature;            /* Variable: ECU_CC_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t ECU_Quickshifter_Feature;  /* Variable: ECU_Quickshifter_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t ECU_SL_Feature;            /* Variable: ECU_SL_Feature
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t ECU_SL_LED;                /* Variable: ECU_SL_LED
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t ECU_SL_Status;             /* Variable: ECU_SL_Status
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    uint8_t Heated_Grips;              /* Variable: Heated_Grips
                                        * Referenced by: '<S1>/buttonFlowChart'
                                        */
    eStateName CompareToConstant_const;
                                      /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S90>/Constant'
                                       */
    eStateName CompareToConstant_const_h;
                                    /* Mask Parameter: CompareToConstant_const_h
                                     * Referenced by: '<S91>/Constant'
                                     */
    eStateName CompareToConstant_const_d;
                                    /* Mask Parameter: CompareToConstant_const_d
                                     * Referenced by: '<S92>/Constant'
                                     */
    eStateName CompareToConstant_const_m;
                                    /* Mask Parameter: CompareToConstant_const_m
                                     * Referenced by: '<S93>/Constant'
                                     */
    eStateName CompareToConstant_const_mr;
                                   /* Mask Parameter: CompareToConstant_const_mr
                                    * Referenced by: '<S94>/Constant'
                                    */
    eStateName HeatedGripsOut_Y0;      /* Computed Parameter: HeatedGripsOut_Y0
                                        * Referenced by: '<S27>/HeatedGripsOut'
                                        */
    uint8_t Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S28>/Constant'
                                        */
    uint8_t Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S28>/Constant1'
                                        */
    uint8_t DistanceUnits_Y0;          /* Computed Parameter: DistanceUnits_Y0
                                        * Referenced by: '<S28>/DistanceUnits'
                                        */
    uint8_t Constant_Value_g;          /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S29>/Constant'
                                        */
    uint8_t Constant1_Value_a;         /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S29>/Constant1'
                                        */
    uint8_t ConnBluetoothSwt_Y0;      /* Computed Parameter: ConnBluetoothSwt_Y0
                                       * Referenced by: '<S29>/ConnBluetoothSwt'
                                       */
    uint8_t Constant_Value_k;          /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S30>/Constant'
                                        */
    uint8_t Constant1_Value_b;         /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S30>/Constant1'
                                        */
    uint8_t QuickShifterSwt_Y0;        /* Computed Parameter: QuickShifterSwt_Y0
                                        * Referenced by: '<S30>/QuickShifterSwt'
                                        */
    uint8_t HeadsetTypeSel_Y0;         /* Computed Parameter: HeadsetTypeSel_Y0
                                        * Referenced by: '<S31>/HeadsetTypeSel'
                                        */
    uint8_t Constant_Value_b;          /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S31>/Constant'
                                        */
    uint8_t Constant1_Value_h;         /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S31>/Constant1'
                                        */
    uint8_t Constant_Value_m;          /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S32>/Constant'
                                        */
    uint8_t Constant1_Value_p;         /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S32>/Constant1'
                                        */
    uint8_t TemperatureUnits_Y0;      /* Computed Parameter: TemperatureUnits_Y0
                                       * Referenced by: '<S32>/TemperatureUnits'
                                       */
    uint8_t FavSlot1_Y0;               /* Computed Parameter: FavSlot1_Y0
                                        * Referenced by: '<S42>/FavSlot1'
                                        */
    uint8_t FavSlot2_Y0;               /* Computed Parameter: FavSlot2_Y0
                                        * Referenced by: '<S43>/FavSlot2'
                                        */
    uint8_t FavSlot3_Y0;               /* Computed Parameter: FavSlot3_Y0
                                        * Referenced by: '<S44>/FavSlot3'
                                        */
    uint8_t FavSlot4_Y0;               /* Computed Parameter: FavSlot4_Y0
                                        * Referenced by: '<S45>/FavSlot4'
                                        */
};

/* Parameters (default storage) */
typedef struct P_ButtonLogic_T_ P_ButtonLogic_T;

/* Real-time Model Data Structure */
struct tag_RTM_ButtonLogic_T {
    const char * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_ButtonLogic_T ButtonLogic_P;

/* Block signals (default storage) */
extern B_ButtonLogic_T ButtonLogic_B;

/* Block states (default storage) */
extern DW_ButtonLogic_T ButtonLogic_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_ButtonLogic_T ButtonLogic_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ButtonLogic_T ButtonLogic_Y;

/* Model entry point functions */
extern void ButtonLogic_initialize(void);
extern void ButtonLogic_step(void);
extern void ButtonLogic_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ButtonLogic_T *const ButtonLogic_M;

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
 * '<Root>' : 'ButtonLogic'
 * '<S1>'   : 'ButtonLogic/ButtonStates'
 * '<S2>'   : 'ButtonLogic/ButtonStates/buttonFlowChart'
 * '<S3>'   : 'ButtonLogic/ButtonStates/fnCallSubsystem'
 * '<S4>'   : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem1'
 * '<S5>'   : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem10'
 * '<S6>'   : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem11'
 * '<S7>'   : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem12'
 * '<S8>'   : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem13'
 * '<S9>'   : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem14'
 * '<S10>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem15'
 * '<S11>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem16'
 * '<S12>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem17'
 * '<S13>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem18'
 * '<S14>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem19'
 * '<S15>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem2'
 * '<S16>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem20'
 * '<S17>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem21'
 * '<S18>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem22'
 * '<S19>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem23'
 * '<S20>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem24'
 * '<S21>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem25'
 * '<S22>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem26'
 * '<S23>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem27'
 * '<S24>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem28'
 * '<S25>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem29'
 * '<S26>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem3'
 * '<S27>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem30'
 * '<S28>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem31'
 * '<S29>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem32'
 * '<S30>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem33'
 * '<S31>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem34'
 * '<S32>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem35'
 * '<S33>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem36'
 * '<S34>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem37'
 * '<S35>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem38'
 * '<S36>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem39'
 * '<S37>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem4'
 * '<S38>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem40'
 * '<S39>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem41'
 * '<S40>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem42'
 * '<S41>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem43'
 * '<S42>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem44'
 * '<S43>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem45'
 * '<S44>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem46'
 * '<S45>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem47'
 * '<S46>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem48'
 * '<S47>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem49'
 * '<S48>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem5'
 * '<S49>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem50'
 * '<S50>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem51'
 * '<S51>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem52'
 * '<S52>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem53'
 * '<S53>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem54'
 * '<S54>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem55'
 * '<S55>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem56'
 * '<S56>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem57'
 * '<S57>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem58'
 * '<S58>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem59'
 * '<S59>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem6'
 * '<S60>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem60'
 * '<S61>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem61'
 * '<S62>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem62'
 * '<S63>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem63'
 * '<S64>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem64'
 * '<S65>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem65'
 * '<S66>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem66'
 * '<S67>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem67'
 * '<S68>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem68'
 * '<S69>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem69'
 * '<S70>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem7'
 * '<S71>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem70'
 * '<S72>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem71'
 * '<S73>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem72'
 * '<S74>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem73'
 * '<S75>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem74'
 * '<S76>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem75'
 * '<S77>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem76'
 * '<S78>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem77'
 * '<S79>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem78'
 * '<S80>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem79'
 * '<S81>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem8'
 * '<S82>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem80'
 * '<S83>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem81'
 * '<S84>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem82'
 * '<S85>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem83'
 * '<S86>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem84'
 * '<S87>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem85'
 * '<S88>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem86'
 * '<S89>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem9'
 * '<S90>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem31/Compare To Constant'
 * '<S91>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem32/Compare To Constant'
 * '<S92>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem33/Compare To Constant'
 * '<S93>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem34/Compare To Constant'
 * '<S94>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem35/Compare To Constant'
 * '<S95>'  : 'ButtonLogic/ButtonStates/fnCallSubsystem/Function-Call Subsystem36/Chart'
 */
#endif                                 /* RTW_HEADER_ButtonLogic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
