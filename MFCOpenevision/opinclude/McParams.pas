// McParams.pas Parameter Identifier File
// Created: 2006/02/01
// This file has been generated automatically and should not be modified


const
  MC_DriverIndex                           =     0 SHL 14;
const
  MC_PciPosition                           =     1 SHL 14;
const
  MC_BoardName                             =     2 SHL 14;
const
  MC_BoardIdentifier                       =     3 SHL 14;
const
  MC_NameBoard                             =     4 SHL 14;
const
  MC_SerialNumber                          =     5 SHL 14;
const
  MC_BoardType                             =     6 SHL 14;
const
  MC_BoardType_MULTI                       =            1;
const
  MC_BoardType_MULTIPLUS                   =            2;
const
  MC_BoardType_MULTIEXPRESS                =            3;
const
  MC_BoardType_GAMMA                       =            4;
const
  MC_BoardType_ALPHA                       =            5;
const
  MC_BoardType_PRESTISSIMO                 =            6;
const
  MC_BoardType_VALUE                       =            7;
const
  MC_BoardType_EXPERT                      =            8;
const
  MC_BoardType_STREAM                      =            9;
const
  MC_BoardType_ALPHA_CPCI                  =           10;
const
  MC_BoardType_IOTA                        =           11;
const
  MC_BoardType_ALPHA_2                     =           12;
const
  MC_BoardType_PICOLO                      =           13;
const
  MC_BoardType_PICOLO_PRO2                 =           14;
const
  MC_BoardType_PICOLO_PRO3I                =           15;
const
  MC_BoardType_PICOLO_PRO3E                =           16;
const
  MC_BoardType_PICOLO_TETRA                =           17;
const
  MC_BoardType_PICOLO_JETX                 =           18;
const
  MC_BoardType_EXPERT_2                    =           19;
const
  MC_BoardType_EXPERT_2_CPCI               =           20;
const
  MC_BoardType_VALUE_CPCI                  =           21;
const
  MC_BoardType_COLORSCAN                   =           22;
const
  MC_BoardType_COLORSCAN_CPCI              =           23;
const
  MC_BoardType_PICOLO_TETRAX               =           24;
const
  MC_BoardType_JUNIOR_4                    =           25;
const
  MC_BoardType_DOMINO_HARMONY              =           26;
const
  MC_BoardType_DOMINO_MELODY               =           27;
const
  MC_BoardType_DOMINO_SYMPHONY             =           28;
const
  MC_BoardType_DOMINO_DELTA                =           29;
const
  MC_BoardType_GRABLINK_AVENUE             =           30;
const
  MC_BoardType_PICOLO_ALERT                =           31;
const
  MC_BoardType_PICOLO_DILIGENT             =           32;
const
  MC_BoardType_PICOLO_TYMO                 =           33;
const
  MC_BoardType_PICOLO_FULL_ALERT           =           34;
const
  MC_BoardType_PICOLO_ALERT_RC             =           35;
const
  MC_ModuleType                            =     7 SHL 14;
const
  MC_ModuleType_NONE                       =            1;
const
  MC_ModuleType_DIG16                      =            2;
const
  MC_ModuleType_DIG32                      =            3;
const
  MC_ModuleType_DIG16_C_2K644              =            4;
const
  MC_ModuleType_DIG16_C_2K422              =            5;
const
  MC_ModuleType_DIG16_C_CUSTOM             =            6;
const
  MC_ModuleType_DIG32_B_8K644              =            7;
const
  MC_ModuleType_DIG32_B_2K422              =            8;
const
  MC_ModuleType_DIG32_B_CUSTOM             =            9;
const
  MC_ModuleType_DIG32_644                  =           10;
const
  MC_ModuleType_DIG32_C_2K422              =           11;
const
  MC_ModuleType_DIG32_C_CUSTOM             =           12;
const
  MC_ModuleType_DIG16_644                  =           13;
const
  MC_ModuleType_DIG16_422                  =           14;
const
  MC_ModuleType_DIG32_422                  =           15;
const
  MC_ModuleType_CAMERALINK                 =           16;
const
  MC_OemSafetyLock                         =     8 SHL 14;
const
  MC_OemSafetyKey                          =     9 SHL 14;
const
  MC_EvolutionNumber                       =    10 SHL 14;
const
  MC_CamFile                               =    11 SHL 14;
const
  MC_Cluster                               =    12 SHL 14;
const
  MC_ClusterMode                           =    13 SHL 14;
const
  MC_ClusterMode_AUTO                      =            1;
const
  MC_ClusterMode_MANUAL                    =            2;
const
  MC_ClusterMask                           =    14 SHL 14;
const
  MC_ClusterMask_NONE                      =            1;
const
  MC_ClusterMask_SKIP                      =            2;
const
  MC_ClusterMask_HOLD                      =            3;
const
  MC_ClusterMask_DELAY                     =            4;
const
  MC_ClusterMask_STOP                      =            5;
const
  MC_ChannelState                          =    15 SHL 14;
const
  MC_ChannelState_IDLE                     =            1;
const
  MC_ChannelState_ACTIVE                   =            2;
const
  MC_ChannelState_READY                    =            3;
const
  MC_ChannelState_FREE                     =            4;
const
  MC_ChannelState_ORPHAN                   =            5;
const
  MC_LineIndex                             =    16 SHL 14;
const
  MC_SurfaceIndex                          =    17 SHL 14;
const
  MC_TriggerMode                           =    18 SHL 14;
const
  MC_TriggerMode_TIMER                     =            1;
const
  MC_TriggerMode_GRABBER                   =            2;
const
  MC_InitialPause                          =    19 SHL 14;
const
  MC_Pause                                 =    20 SHL 14;
const
  MC_InitialTrigger                        =    21 SHL 14;
const
  MC_Trigger                               =    22 SHL 14;
const
  MC_Trigger_PAUSE                         =            1;
const
  MC_Trigger_GOHIGH                        =            2;
const
  MC_Trigger_GOLOW                         =            3;
const
  MC_GrabCount                             =    23 SHL 14;
const
  MC_SignalEnable                          =    24 SHL 14;
const
  MC_SignalEnable_NONE                     =            1;
const
  MC_SignalEnable_PROCESSING               =            2;
const
  MC_SignalEnable_FILLED                   =            3;
const
  MC_SignalEnable_OFF                      =            4;
const
  MC_SignalEnable_ON                       =            5;
const
  MC_SignalEnable_AFTER_EAS                =            6;
const
  MC_SignalEvent                           =    25 SHL 14;
const
  MC_Usage                                 =    26 SHL 14;
const
  MC_SurfaceSize                           =    27 SHL 14;
const
  MC_SurfaceAddr                           =    28 SHL 14;
const
  MC_SurfacePitch                          =    29 SHL 14;
const
  MC_PlaneCount                            =    30 SHL 14;
const
  MC_SurfaceState                          =    31 SHL 14;
const
  MC_SurfaceState_FREE                     =            1;
const
  MC_SurfaceState_FILLING                  =            2;
const
  MC_SurfaceState_FILLED                   =            3;
const
  MC_SurfaceState_PROCESSING               =            4;
const
  MC_SurfaceState_RESERVED                 =            5;
const
  MC_SurfaceContext                        =    32 SHL 14;
const
  MC_DebugMode                             =    33 SHL 14;
const
  MC_ResourceId                            =    34 SHL 14;
const
  MC_ResourceId_DSP1                       =            1;
const
  MC_ResourceId_DSP2                       =            2;
const
  MC_ResourceId_DSP12                      =            3;
const
  MC_ResourceId_DSP3                       =            3;
const
  MC_ResourceId_DSP4                       =            4;
const
  MC_Source                                =    35 SHL 14;
const
  MC_ProcessFile                           =    36 SHL 14;
const
  MC_Black                                 =    37 SHL 14;
const
  MC_White                                 =    38 SHL 14;
const
  MC_BlackProfile                          =    39 SHL 14;
const
  MC_WhiteProfile                          =    40 SHL 14;
const
  MC_ProcessType                           =    41 SHL 14;
const
  MC_ProcessorState                        =    42 SHL 14;
const
  MC_ProcessorState_OFF                    =            1;
const
  MC_ProcessorState_ON                     =            2;
const
  MC_FillCount                             =    43 SHL 14;
const
  MC_Gain                                  =    44 SHL 14;
const
  MC_PageDuration                          =    45 SHL 14;
const
  MC_OverrunCount                          =    46 SHL 14;
const
  MC_Level                                 =    47 SHL 14;
const
  MC_SurfaceLocation                       =    48 SHL 14;
const
  MC_SurfaceLocation_HOST                  =            1;
const
  MC_SurfaceLocation_DSP                   =            2;
const
  MC_SurfaceLocation_BOARD                 =            3;
const
  MC_SurfaceLocation_PHYSICAL              =            4;
const
  MC_ErrorHandling                         =    49 SHL 14;
const
  MC_ErrorHandling_NONE                    =            1;
const
  MC_ErrorHandling_MSGBOX                  =            2;
const
  MC_ErrorHandling_EXCEPTION               =            3;
const
  MC_ErrorHandling_MSGEXCEPTION            =            4;
const
  MC_ForceTrig                             =    50 SHL 14;
const
  MC_ForceTrig_TRIG                        =            1;
const
  MC_ParamBlock                            =    51 SHL 14;
const
  MC_SurfaceFormat                         =    52 SHL 14;
const
  MC_SurfaceFormat_RAW                     =            1;
const
  MC_SurfaceFormat_RGB24                   =            2;
const
  MC_SurfaceFormat_PLANAR24                =            3;
const
  MC_SurfaceFormat_SPLITX                  =            4;
const
  MC_Lookup                                =    53 SHL 14;
const
  MC_Flags                                 =    54 SHL 14;
const
  MC_HardwareKey                           =    55 SHL 14;
const
  MC_AcqTimeout_ms                         =    56 SHL 14;
const
  MC_LineTriggerViolation                  =    57 SHL 14;
const
  MC_FrameTriggerViolation                 =    58 SHL 14;
const
  MC_BoardTopology                         =    59 SHL 14;
const
  MC_BoardTopology_3_3_0                   =            1;
const
  MC_BoardTopology_2_3_1                   =            2;
const
  MC_BoardTopology_2_2_2                   =            3;
const
  MC_BoardTopology_2_2_1                   =            4;
const
  MC_BoardTopology_1_3_1                   =            5;
const
  MC_BoardTopology_1_1_2                   =            6;
const
  MC_BoardTopology_1_1_1                   =            7;
const
  MC_BoardTopology_2_2_11                  =            8;
const
  MC_BoardTopology_11_3_1                  =            9;
const
  MC_BoardTopology_11_11_2                 =           10;
const
  MC_BoardTopology_11_11_11                =           11;
const
  MC_BoardTopology_0_3_1                   =           12;
const
  MC_BoardTopology_2_2_0                   =           13;
const
  MC_BoardTopology_2_2                     =           14;
const
  MC_BoardTopology_2_1                     =           15;
const
  MC_BoardTopology_1_1                     =           16;
const
  MC_BoardTopology_2_11                    =           17;
const
  MC_BoardTopology_11_11                   =           18;
const
  MC_BoardTopology_0_2                     =           19;
const
  MC_BoardTopology_1_1_1_1                 =           20;
const
  MC_GrabberConfig                         =    60 SHL 14;
const
  MC_GrabberConfig_1_1_1                   =            1;
const
  MC_GrabberConfig_1_1_2                   =            2;
const
  MC_GrabberConfig_2_0                     =            3;
const
  MC_GrabberConfig_1_1                     =            4;
const
  MC_GrabberConfig_0_2                     =            5;
const
  MC_GrabberConfig_2_2_0                   =            6;
const
  MC_MPFRevision                           =    61 SHL 14;
const
  MC_BoardCount                            =    62 SHL 14;
const
  MC_RemainingGrab                         =    63 SHL 14;
const
  MC_ElapsedGrab                           =    64 SHL 14;
const
  MC_LineDelay                             =    65 SHL 14;
const
  MC_LutIndex                              =    66 SHL 14;
const
  MC_InputLut                              =    67 SHL 14;
const
  MC_SurfaceInfo                           =    68 SHL 14;
const
  MC_GrabDuration_us                       =    69 SHL 14;
const
  MC_SerialControlA                        =    70 SHL 14;
const
  MC_SerialControlB                        =    71 SHL 14;
const
  MC_TimeCode                              =    72 SHL 14;
const
  MC_GenerateSignal                        =    73 SHL 14;
const
  MC_GenerateSignal_EACH_EVENT             =            1;
const
  MC_GenerateSignal_LATEST_EVENT           =            2;
const
  MC_SignalHandling                        =    74 SHL 14;
const
  MC_SignalHandling_ANY                    =            1;
const
  MC_SignalHandling_CALLBACK_SIGNALING     =            2;
const
  MC_SignalHandling_WAITING_SIGNALING      =            3;
const
  MC_SignalHandling_OS_EVENT_SIGNALING     =            4;
const
  MC_Parity                                =    75 SHL 14;
const
  MC_Parity_NA                             =            1;
const
  MC_Parity_UP                             =            2;
const
  MC_Parity_DOWN                           =            3;
const
  MC_Parity_UPDW                           =            4;
const
  MC_Parity_DWUP                           =            5;
const
  MC_TimeAnsi                              =    76 SHL 14;
const
  MC_TimeStamp_us                          =    77 SHL 14;
const
  MC_WatchdogResetsCount                   =    78 SHL 14;
const
  MC_StartupTimeout_s                      =    79 SHL 14;
const
  MC_ApplicationTimeout_s                  =    80 SHL 14;
const
  MC_ErrorLog                              =    81 SHL 14;
const
  MC_SurfaceCount                          =    82 SHL 14;
const
  MC_sctxt                                 =    83 SHL 14;
const
  MC_SurfaceSizeX                          =    84 SHL 14;
const
  MC_SurfaceSizeY                          =    85 SHL 14;
const
  MC_SurfaceColorFormat                    =    86 SHL 14;
const
  MC_FilledPlanes                          =    87 SHL 14;
const
  MC_SAB                                   =    88 SHL 14;
const
  MC_TransferReport                        =    89 SHL 14;
const
  MC_TransferReport_OK                     =            1;
const
  MC_TransferReport_FIFO_OVERRUN           =            2;
const
  MC_BufferAddress                         =    90 SHL 14;
const
  MC_FrameType                             =    91 SHL 14;
const
  MC_FrameType_I                           =            1;
const
  MC_FrameType_P                           =            2;
const
  MC_FrameType_B                           =            3;
const
  MC_SurfaceReserved5                      =    92 SHL 14;
const
  MC_SurfaceReserved6                      =    93 SHL 14;
const
  MC_SurfaceReserved7                      =    94 SHL 14;
const
  MC_SurfaceReserved8                      =    95 SHL 14;
const
  MC_SurfaceReserved9                      =    96 SHL 14;
const
  MC_ParamInfoStructSize                   =    97 SHL 14;
const
  MC_ErrorDesc                             =    98 SHL 14;
const
  MC_MaxEvents                             =    99 SHL 14;
const
  MC_CallbackPriority                      =   100 SHL 14;
const
  MC_CallbackPriority_LOWEST               =            1;
const
  MC_CallbackPriority_BELOW_NORMAL         =            2;
const
  MC_CallbackPriority_NORMAL               =            3;
const
  MC_CallbackPriority_ABOVE_NORMAL         =            4;
const
  MC_CallbackPriority_HIGHEST              =            5;
const
  MC_CallbackPriority_TIME_CRITICAL        =            6;
const
  MC_CurrentTime_us                        =   101 SHL 14;
const
  MC_TrigMode                              =   512 SHL 14;
const
  MC_TrigMode_INT                          =            1;
const
  MC_TrigMode_EXT                          =            2;
const
  MC_TrigMode_SOFT                         =            3;
const
  MC_TrigMode_ENC                          =            3;
const
  MC_TrigMode_EXTRC                        =            4;
const
  MC_TrigMode_AUTO                         =            5;
const
  MC_TrigMode_IMMEDIATE                    =            6;
const
  MC_TrigMode_HARD                         =            7;
const
  MC_TrigMode_COMBINED                     =            8;
const
  MC_TrigCtl                               =   513 SHL 14;
const
  MC_TrigCtl_TGOLOW                        =            1;
const
  MC_TrigCtl_TGOHIGH                       =            2;
const
  MC_TrigCtl_VGOLOW                        =            3;
const
  MC_TrigCtl_VGOHIGH                       =            4;
const
  MC_TrigFlt                               =   514 SHL 14;
const
  MC_ExpScl                                =   515 SHL 14;
const
  MC_ExpTrm                                =   516 SHL 14;
const
  MC_DataWidth                             =   517 SHL 14;
const
  MC_LinePeriod                            =   518 SHL 14;
const
  MC_ImagePixelSize                        =   519 SHL 14;
const
  MC_FramePeriod                           =   520 SHL 14;
const
  MC_SensorWidth                           =   521 SHL 14;
const
  MC_SensorHeight                          =   522 SHL 14;
const
  MC_ImageSizeX                            =   523 SHL 14;
const
  MC_ImageSizeY                            =   524 SHL 14;
const
  MC_ImageFlipY                            =   525 SHL 14;
const
  MC_ImageFlipY_OFF                        =            1;
const
  MC_ImageFlipY_ON                         =            2;
const
  MC_CameraChannels                        =   526 SHL 14;
const
  MC_AcqScl                                =   527 SHL 14;
const
  MC_AcqCount                              =   528 SHL 14;
const
  MC_AcqShift                              =   529 SHL 14;
const
  MC_AcqSplit                              =   530 SHL 14;
const
  MC_FrameShift                            =   531 SHL 14;
const
  MC_VcamCount                             =   532 SHL 14;
const
  MC_StrCtl                                =   533 SHL 14;
const
  MC_StrCtl_LOW                            =            1;
const
  MC_StrCtl_HIGH                           =            2;
const
  MC_StrCtl_PLSLOW                         =            3;
const
  MC_StrCtl_PLSHIGH                        =            4;
const
  MC_StrLvl                                =   534 SHL 14;
const
  MC_StrLvl_DIS                            =            1;
const
  MC_StrLvl_TTL                            =            2;
const
  MC_StrLvl_OC                             =            3;
const
  MC_StrLvl_OE                             =            4;
const
  MC_StrPos                                =   535 SHL 14;
const
  MC_StrDur                                =   536 SHL 14;
const
  MC_PendLines                             =   537 SHL 14;
const
  MC_FrameRstCtl                           =   538 SHL 14;
const
  MC_FrameRstCtl_TPLSLOW                   =            1;
const
  MC_FrameRstCtl_TPLSHIGH                  =            2;
const
  MC_FrameRstCtl_DPLSLOW                   =            3;
const
  MC_FrameRstCtl_DPLSHIGH                  =            4;
const
  MC_FrameRstPos                           =   539 SHL 14;
const
  MC_FrameRstDur                           =   540 SHL 14;
const
  MC_ExpMode                               =   541 SHL 14;
const
  MC_ExpMode_Reset_Width                   =            1;
const
  MC_ExpMode_Dual_Reset_Interval           =            2;
const
  MC_ExpMode_Reset_To_Expose_interval      =            3;
const
  MC_ExpDur                                =   542 SHL 14;
const
  MC_LineValCtl                            =   543 SHL 14;
const
  MC_LineValCtl_LOW                        =            1;
const
  MC_LineValCtl_HIGH                       =            2;
const
  MC_LineValCtl_TLOW                       =            3;
const
  MC_LineValCtl_THIGH                      =            4;
const
  MC_FrameValCtl                           =   544 SHL 14;
const
  MC_FrameValCtl_LOW                       =            1;
const
  MC_FrameValCtl_HIGH                      =            2;
const
  MC_FrameValCtl_TLOW                      =            3;
const
  MC_FrameValCtl_THIGH                     =            4;
const
  MC_FrameValFlt                           =   545 SHL 14;
const
  MC_FrameValFlt_0                         =            1;
const
  MC_FrameValFlt_4                         =            2;
const
  MC_FrameValFlt_16                        =            3;
const
  MC_FrameValFlt_64                        =            4;
const
  MC_ExpCtl                                =   546 SHL 14;
const
  MC_ExpCtl_TPLSLOW                        =            1;
const
  MC_ExpCtl_TPLSHIGH                       =            2;
const
  MC_ExpCtl_DPLSLOW                        =            3;
const
  MC_ExpCtl_DPLSHIGH                       =            4;
const
  MC_ClockPhase                            =   547 SHL 14;
const
  MC_ClockPhase_0                          =            1;
const
  MC_ClockPhase_90                         =            2;
const
  MC_ClockPhase_180                        =            3;
const
  MC_ClockPhase_270                        =            4;
const
  MC_DataDelay                             =   548 SHL 14;
const
  MC_DataDelay_NONE                        =            1;
const
  MC_DataDelay_SLIGHT                      =            2;
const
  MC_TestPat                               =   549 SHL 14;
const
  MC_TestPat_OFF                           =            1;
const
  MC_TestPat_ON                            =            2;
const
  MC_TestPat_LaneID                        =            3;
const
  MC_Line3Ctl                              =   550 SHL 14;
const
  MC_Line3Ctl_RESET                        =            1;
const
  MC_Line3Ctl_DLOW                         =            2;
const
  MC_Line3Ctl_DHIGH                        =            3;
const
  MC_Line3Ctl_TLOW                         =            4;
const
  MC_Line3Ctl_THIGH                        =            5;
const
  MC_Line3Ctl_EXPOSE                       =            6;
const
  MC_Line4Ctl                              =   551 SHL 14;
const
  MC_Line4Ctl_LOW                          =            1;
const
  MC_Line4Ctl_HIGH                         =            2;
const
  MC_Line4Ctl_REFCKA                       =            3;
const
  MC_Line5Ctl                              =   552 SHL 14;
const
  MC_Line5Ctl_EXPOSE                       =            1;
const
  MC_Line5Ctl_DLOW                         =            2;
const
  MC_Line5Ctl_DHIGH                        =            3;
const
  MC_Line5Ctl_TLOW                         =            4;
const
  MC_Line5Ctl_THIGH                        =            5;
const
  MC_Line5Ctl_RESET                        =            6;
const
  MC_Line6Ctl                              =   553 SHL 14;
const
  MC_Line6Ctl_LOW                          =            1;
const
  MC_Line6Ctl_HIGH                         =            2;
const
  MC_BitMask                               =   554 SHL 14;
const
  MC_RdoutTrm                              =   555 SHL 14;
const
  MC_SacqLoc                               =   556 SHL 14;
const
  MC_EacqLoc                               =   557 SHL 14;
const
  MC_ExpDurT                               =   558 SHL 14;
const
  MC_ImageSizeXModulo                      =   559 SHL 14;
const
  MC_PerScl                                =   560 SHL 14;
const
  MC_PerCnt                                =   561 SHL 14;
const
  MC_EncScl                                =   562 SHL 14;
const
  MC_RateCode                              =   563 SHL 14;
const
  MC_SensorLength                          =   564 SHL 14;
const
  MC_PageLength                            =   565 SHL 14;
const
  MC_LineForbidPos                         =   566 SHL 14;
const
  MC_LineSkipHold                          =   567 SHL 14;
const
  MC_LineSkipHold_SKIP                     =            1;
const
  MC_LineSkipHold_HOLD                     =            2;
const
  MC_LineRstCtl                            =   568 SHL 14;
const
  MC_LineRstCtl_PLSLOW                     =            1;
const
  MC_LineRstCtl_PLSHIGH                    =            2;
const
  MC_ExpCtl_PLSLOW                         =            1;
const
  MC_ExpCtl_PLSHIGH                        =            2;
const
  MC_FifoDepth                             =   569 SHL 14;
const
  MC_FifoWidth                             =   570 SHL 14;
const
  MC_FifoLineSize                          =   571 SHL 14;
const
  MC_BackendInterruptMask                  =   572 SHL 14;
const
  MC_ColorInputFormat                      =   573 SHL 14;
const
  MC_ColorInputFormat_SerialBGR            =            1;
const
  MC_ColorInputFormat_SerialRGB            =            2;
const
  MC_ColorInputFormat_ParallelRGB          =            3;
const
  MC_ColorOutputFormat                     =   574 SHL 14;
const
  MC_ColorOutputFormat_Packed24            =            1;
const
  MC_ColorOutputFormat_Planar8             =            2;
const
  MC_ColorOutputFormat_Planar16            =            3;
const
  MC_PageTrigMode                          =   575 SHL 14;
const
  MC_PageTrigMode_INT                      =            1;
const
  MC_PageTrigMode_EXT                      =            2;
const
  MC_PageTrigMode_DELAY                    =            3;
const
  MC_PageTrigMode_FVAL                     =            4;
const
  MC_PageTrigMode_SOFT                     =            5;
const
  MC_PageTrigCtl                           =   576 SHL 14;
const
  MC_PageTrigCtl_TGOLOW                    =            1;
const
  MC_PageTrigCtl_TGOHIGH                   =            2;
const
  MC_PageTrigCtl_VGOLOW                    =            3;
const
  MC_PageTrigCtl_VGOHIGH                   =            4;
const
  MC_PageTrigCtl_DGOLOW                    =            5;
const
  MC_PageTrigCtl_DGOHIGH                   =            6;
const
  MC_PageTrigFlt                           =   577 SHL 14;
const
  MC_PageDelay                             =   578 SHL 14;
const
  MC_FrameForbidPos                        =   579 SHL 14;
const
  MC_FrameSkipHold                         =   580 SHL 14;
const
  MC_FrameSkipHold_SKIP                    =            1;
const
  MC_FrameSkipHold_HOLD                    =            2;
const
  MC_PageSkipHold                          =   581 SHL 14;
const
  MC_PageSkipHold_SKIP                     =            1;
const
  MC_PageSkipHold_HOLD                     =            2;
const
  MC_Block                                 =   582 SHL 14;
const
  MC_Atom                                  =   583 SHL 14;
const
  MC_ChannelTopology                       =   584 SHL 14;
const
  MC_ChannelTopology_Single                =            1;
const
  MC_ChannelTopology_DualXPair             =            2;
const
  MC_ChannelTopology_DualXTap              =            3;
const
  MC_ChannelTopology_DualXEnd              =            4;
const
  MC_ChannelTopology_DualYPair             =            5;
const
  MC_ChannelTopology_DualYEnd              =            6;
const
  MC_ChannelTopology_Triple                =            7;
const
  MC_ChannelTopology_QuadX                 =            8;
const
  MC_CameraTimings                         =   585 SHL 14;
const
  MC_CameraTimings_Mono                    =            1;
const
  MC_CameraTimings_Duo                     =            2;
const
  MC_XChannels                             =   586 SHL 14;
const
  MC_YChannels                             =   587 SHL 14;
const
  MC_BlockSize                             =   588 SHL 14;
const
  MC_PixelComponents                       =   589 SHL 14;
const
  MC_BackEndProg                           =   590 SHL 14;
const
  MC_BackEndProg_AB12                      =            1;
const
  MC_BackEndProg_CD12                      =            2;
const
  MC_BackEndProg_AB24                      =            3;
const
  MC_BackEndProg_CD24                      =            4;
const
  MC_BackEndProg_ABCD22                    =            5;
const
  MC_BackEndProg_BGR24                     =            6;
const
  MC_BackEndProg_PLANAR8                   =            7;
const
  MC_BackEndProg_ABCD11                    =            8;
const
  MC_BackEndProg_X                         =            9;
const
  MC_DesiredLinePitch                      =   591 SHL 14;
const
  MC_EncoderPitch                          =   592 SHL 14;
const
  MC_MaxLineFrequency                      =   593 SHL 14;
const
  MC_PixelClockFrequency                   =   594 SHL 14;
const
  MC_LinePitch                             =   595 SHL 14;
const
  MC_MinLineFrequency                      =   596 SHL 14;
const
  MC_DesiredVCLKFrequency                  =   597 SHL 14;
const
  MC_EffectiveVCLKFrequency                =   598 SHL 14;
const
  MC_VCLKFrequencyError                    =   599 SHL 14;
const
  MC_Smin                                  =   600 SHL 14;
const
  MC_FVR                                   =   601 SHL 14;
const
  MC_Rmin                                  =   602 SHL 14;
const
  MC_Rmax                                  =   603 SHL 14;
const
  MC_MinEncoderFrequency                   =   604 SHL 14;
const
  MC_FrameCount                            =   605 SHL 14;
const
  MC_MoleculeSize                          =   606 SHL 14;
const
  MC_ZChannels                             =   607 SHL 14;
const
  MC_Alines                                =   608 SHL 14;
const
  MC_StartReadout                          =   609 SHL 14;
const
  MC_StartReadout_Auto                     =            1;
const
  MC_StartReadout_LineSync                 =            2;
const
  MC_StartReadout_Flex                     =            3;
const
  MC_StartReadout_FlexD                    =            4;
const
  MC_StartReadout_FlexU                    =            5;
const
  MC_FifoCap4                              =   610 SHL 14;
const
  MC_Exposure                              =   611 SHL 14;
const
  MC_MinExpose                             =   612 SHL 14;
const
  MC_ExpPscl                               =   613 SHL 14;
const
  MC_ExpTerm                               =   614 SHL 14;
const
  MC_PageCount                             =   615 SHL 14;
const
  MC_MinLinePeriod                         =   616 SHL 14;
const
  MC_MinResetWidth                         =   617 SHL 14;
const
  MC_ExpWidth                              =   618 SHL 14;
const
  MC_StrWidth                              =   619 SHL 14;
const
  MC_RstWidth                              =   620 SHL 14;
const
  MC_Str2Rst                               =   621 SHL 14;
const
  MC_MinRstWidth                           =   622 SHL 14;
const
  MC_ExpTrim                               =   623 SHL 14;
const
  MC_ExpTrimFactor                         =   624 SHL 14;
const
  MC_Periodic                              =   625 SHL 14;
const
  MC_DacCmd                                =   626 SHL 14;
const
  MC_DacCmd_DAC_A8                         =            1;
const
  MC_DacCmd_DAC_A9                         =            2;
const
  MC_DacCmd_DAC_B8                         =            3;
const
  MC_DacCmd_DAC_B9                         =            4;
const
  MC_DacData                               =   627 SHL 14;
const
  MC_Destination                           =   628 SHL 14;
const
  MC_Destination_PC                        =            1;
const
  MC_Destination_DSP1                      =            2;
const
  MC_Destination_DSP2                      =            3;
const
  MC_REFCKA_Frequency                      =   629 SHL 14;
const
  MC_Gating                                =   630 SHL 14;
const
  MC_Gating_POST                           =            1;
const
  MC_Gating_PRE                            =            2;
const
  MC_DataClockPolarity                     =   631 SHL 14;
const
  MC_DataClockPolarity_POS                 =            1;
const
  MC_DataClockPolarity_NEG                 =            2;
const
  MC_TimingClockSource                     =   632 SHL 14;
const
  MC_TimingClockSource_EXT                 =            1;
const
  MC_TimingClockSource_REFCKA              =            2;
const
  MC_EncSvalue                             =   633 SHL 14;
const
  MC_ReadoutTC                             =   634 SHL 14;
const
  MC_USS                                   =   635 SHL 14;
const
  MC_USOutM                                =   636 SHL 14;
const
  MC_USOutM_ABCD4                          =            1;
const
  MC_USOutM_ABCD2                          =            2;
const
  MC_USOutM_BADC2                          =            3;
const
  MC_USOutM_ACBD2                          =            4;
const
  MC_USOutM_CADB2                          =            5;
const
  MC_USOutM_BADC1                          =            6;
const
  MC_USOutM_DCBA1                          =            7;
const
  MC_USOutM_CBA1                           =            8;
const
  MC_USOutM_CBA3                           =            9;
const
  MC_USOutM_ABC3                           =           10;
const
  MC_USOutM_X                              =           11;
const
  MC_USOutM_ABCD1                          =           12;
const
  MC_ChannelOrder                          =   637 SHL 14;
const
  MC_ChannelOrder_Direct                   =            1;
const
  MC_ChannelOrder_Invert                   =            2;
const
  MC_DataLanes                             =   638 SHL 14;
const
  MC_DataLanes_P                           =            1;
const
  MC_DataLanes_R                           =            2;
const
  MC_DataLanes_PQ                          =            3;
const
  MC_DataLanes_PR                          =            4;
const
  MC_DataLanes_RS                          =            5;
const
  MC_DataLanes_PRS                         =            6;
const
  MC_DataLanes_PQRS                        =            7;
const
  MC_DataLanes_PQR                         =            8;
const
  MC_DataLanes_PRQS                        =            9;
const
  MC_DataLanes_PQS                         =           10;
const
  MC_DataLanes_RSQ                         =           11;
const
  MC_USOutD                                =   639 SHL 14;
const
  MC_USOutD_AB2                            =            1;
const
  MC_USOutD_AB1                            =            2;
const
  MC_USOutD_BA1                            =            3;
const
  MC_USOutD_CD2                            =            4;
const
  MC_USOutD_CD1                            =            5;
const
  MC_USOutD_DC1                            =            6;
const
  MC_USOutD_X                              =            7;
const
  MC_DualLaneComb                          =   640 SHL 14;
const
  MC_DualLaneComb_PQ                       =            1;
const
  MC_DualLaneComb_PR                       =            2;
const
  MC_ModuleID                              =   641 SHL 14;
const
  MC_FifoType                              =   642 SHL 14;
const
  MC_FifoType_Unknown                      =            1;
const
  MC_FifoType_TwoK                         =            2;
const
  MC_FifoType_EightK                       =            3;
const
  MC_ElectricalInterfaceType               =   643 SHL 14;
const
  MC_ElectricalInterfaceType_Unknown       =            1;
const
  MC_ElectricalInterfaceType_422           =            2;
const
  MC_ElectricalInterfaceType_644           =            3;
const
  MC_ElectricalInterfaceType_CameraLink    =            4;
const
  MC_Period                                =   644 SHL 14;
const
  MC_RGBLanes                              =   645 SHL 14;
const
  MC_RGBLanes_PRS                          =            1;
const
  MC_RGBLanes_PQR                          =            2;
const
  MC_RGBLanes_PQS                          =            3;
const
  MC_RGBLanes_RSQ                          =            4;
const
  MC_SWAP16                                =   646 SHL 14;
const
  MC_SWAP16_OFF                            =            1;
const
  MC_SWAP16_ON                             =            2;
const
  MC_Clanes                                =   647 SHL 14;
const
  MC_Clanes_X                              =            1;
const
  MC_Clanes_P                              =            2;
const
  MC_Clanes_R                              =            3;
const
  MC_Clanes_PQ                             =            4;
const
  MC_Clanes_PR                             =            5;
const
  MC_Clanes_RS                             =            6;
const
  MC_Clanes_P_Q                            =            7;
const
  MC_Clanes_P_R                            =            8;
const
  MC_Clanes_R_S                            =            9;
const
  MC_Clanes_PR_QS                          =           10;
const
  MC_Clanes_PQ_RS                          =           11;
const
  MC_Clanes_P_R_S                          =           12;
const
  MC_Clanes_P_Q_R                          =           13;
const
  MC_Clanes_P_Q_S                          =           14;
const
  MC_Clanes_R_S_Q                          =           15;
const
  MC_Clanes_P_Q_R_S                        =           16;
const
  MC_USLanes                               =   648 SHL 14;
const
  MC_USLanes_X                             =            1;
const
  MC_USLanes_P                             =            2;
const
  MC_USLanes_Q                             =            3;
const
  MC_USLanes_R                             =            4;
const
  MC_USLanes_S                             =            5;
const
  MC_USLanes_PQ                            =            6;
const
  MC_USLanes_PR                            =            7;
const
  MC_USLanes_RS                            =            8;
const
  MC_USLanes_PRS                           =            9;
const
  MC_USLanes_PQR                           =           10;
const
  MC_USLanes_PQS                           =           11;
const
  MC_USLanes_RSQ                           =           12;
const
  MC_USLanes_PRQS                          =           13;
const
  MC_USLanes_PQRS                          =           14;
const
  MC_CableAlign                            =   649 SHL 14;
const
  MC_CableAlign_Left                       =            1;
const
  MC_CableAlign_Right                      =            2;
const
  MC_CameraWidth                           =   650 SHL 14;
const
  MC_PortSize                              =   651 SHL 14;
const
  MC_Ubit                                  =   652 SHL 14;
const
  MC_Dbit                                  =   653 SHL 14;
const
  MC_Umask                                 =   654 SHL 14;
const
  MC_Dmask                                 =   655 SHL 14;
const
  MC_MSmask                                =   656 SHL 14;
const
  MC_LSmask                                =   657 SHL 14;
const
  MC_Dwidth                                =   658 SHL 14;
const
  MC_ALIGN                                 =   659 SHL 14;
const
  MC_ImagePixelAlign                       =   660 SHL 14;
const
  MC_ImagePixelAlign_Left                  =            1;
const
  MC_ImagePixelAlign_Right                 =            2;
const
  MC_CWidth                                =   661 SHL 14;
const
  MC_ModType                               =   662 SHL 14;
const
  MC_ModType_Unknown                       =            1;
const
  MC_ModType_NoModule                      =            2;
const
  MC_ModType_D16A                          =            3;
const
  MC_ModType_D32AB                         =            4;
const
  MC_ModType_D32B                          =            5;
const
  MC_ModType_D16C                          =            6;
const
  MC_ModType_D32C                          =            7;
const
  MC_ModType_CameraLink                    =            8;
const
  MC_NextTrigMode                          =   663 SHL 14;
const
  MC_TrigEdge                              =   664 SHL 14;
const
  MC_TrigEdge_GOHIGH                       =            1;
const
  MC_TrigEdge_GOLOW                        =            2;
const
  MC_TrigFilter                            =   665 SHL 14;
const
  MC_TrigFilter_OFF                        =            1;
const
  MC_TrigFilter_ON                         =            2;
const
  MC_TrigLine                              =   666 SHL 14;
const
  MC_TrigLine_NOM                          =            1;
const
  MC_TrigLine_ALT1                         =            2;
const
  MC_TrigLine_ALT2                         =            3;
const
  MC_TrigLine_ALT3                         =            4;
const
  MC_TrigLine_ALT4                         =            5;
const
  MC_MapConTim                             =   667 SHL 14;
const
  MC_MapConTim_XYZ                         =            1;
const
  MC_MapConTim_ZYX                         =            2;
const
  MC_MapConTim_YZX                         =            3;
const
  MC_MapConTim_XZY                         =            4;
const
  MC_MapConTim_ZXY                         =            5;
const
  MC_MapConTim_YXZ                         =            6;
const
  MC_MapDigTim                             =   668 SHL 14;
const
  MC_MapDigTim_ABD                         =            1;
const
  MC_MapDigTim_ACD                         =            2;
const
  MC_MapDigTim_ABC                         =            3;
const
  MC_MapDigTim_BCC                         =            4;
const
  MC_MapDigTim_BBC                         =            5;
const
  MC_MapDigTim_BCD                         =            6;
const
  MC_MapDigTim_BBD                         =            7;
const
  MC_MapTimCon                             =   669 SHL 14;
const
  MC_MapTimCon_TXYZ                        =            1;
const
  MC_MapTimCon_TZYX                        =            2;
const
  MC_MapTimCon_TYZX                        =            3;
const
  MC_MapTimCon_TXZY                        =            4;
const
  MC_MapTimCon_TZXY                        =            5;
const
  MC_MapTimCon_TYXZ                        =            6;
const
  MC_MapTimDig                             =   670 SHL 14;
const
  MC_MapTimDig_TXXZZ                       =            1;
const
  MC_MapTimDig_TXXXZ                       =            2;
const
  MC_MapTimDig_TXZZZ                       =            3;
const
  MC_MapTimDig_TXYZZ                       =            4;
const
  MC_MapTimDig_TXYYZ                       =            5;
const
  MC_MapTimDig_TXXYZ                       =            6;
const
  MC_MapLaneX1                             =   671 SHL 14;
const
  MC_MapLaneX1_OFF                         =            1;
const
  MC_MapLaneX1_A                           =            2;
const
  MC_MapLaneX2                             =   672 SHL 14;
const
  MC_MapLaneX2_OFF                         =            1;
const
  MC_MapLaneX2_B                           =            2;
const
  MC_MapLaneX3                             =   673 SHL 14;
const
  MC_MapLaneX3_OFF                         =            1;
const
  MC_MapLaneX3_A                           =            2;
const
  MC_MapLaneX3_C                           =            3;
const
  MC_MapLaneX3_CLK                         =            4;
const
  MC_MapLaneY1                             =   674 SHL 14;
const
  MC_MapLaneY1_OFF                         =            1;
const
  MC_MapLaneY1_A                           =            2;
const
  MC_MapLaneY1_C                           =            3;
const
  MC_MapLaneY1_D                           =            4;
const
  MC_MapLaneY2                             =   675 SHL 14;
const
  MC_MapLaneY2_OFF                         =            1;
const
  MC_MapLaneY2_B                           =            2;
const
  MC_MapLaneY2_D                           =            3;
const
  MC_MapLaneY3                             =   676 SHL 14;
const
  MC_MapLaneY3_OFF                         =            1;
const
  MC_MapLaneY3_B                           =            2;
const
  MC_MapLaneY3_C                           =            3;
const
  MC_MapLaneY3_D                           =            4;
const
  MC_MapLaneY3_CLK                         =            5;
const
  MC_MapLaneZ1                             =   677 SHL 14;
const
  MC_MapLaneZ1_OFF                         =            1;
const
  MC_MapLaneZ1_A                           =            2;
const
  MC_MapLaneZ1_C                           =            3;
const
  MC_MapLaneZ2                             =   678 SHL 14;
const
  MC_MapLaneZ2_OFF                         =            1;
const
  MC_MapLaneZ2_B                           =            2;
const
  MC_MapLaneZ2_C                           =            3;
const
  MC_MapLaneZ2_D                           =            4;
const
  MC_MapLaneZ3                             =   679 SHL 14;
const
  MC_MapLaneZ3_OFF                         =            1;
const
  MC_MapLaneZ3_CLK                         =            2;
const
  MC_ClkSynth1                             =   680 SHL 14;
const
  MC_ClkSynth2                             =   681 SHL 14;
const
  MC_Connector                             =   682 SHL 14;
const
  MC_Connector_X                           =            1;
const
  MC_Connector_Y                           =            2;
const
  MC_Connector_Z                           =            3;
const
  MC_Connector_XBIS                        =            4;
const
  MC_Connector_YBIS                        =            5;
const
  MC_Connector_ZBIS                        =            6;
const
  MC_GrabWindow                            =   683 SHL 14;
const
  MC_GrabWindow_STD                        =            1;
const
  MC_GrabWindow_NOBLACK                    =            2;
const
  MC_GrabWindow_NOLOSS                     =            3;
const
  MC_GrabWindow_MAN                        =            4;
const
  MC_GrbCount                              =   684 SHL 14;
const
  MC_OffsetX_Tk                            =   685 SHL 14;
const
  MC_OffsetY_Ln                            =   686 SHL 14;
const
  MC_LineDurTrim                           =   687 SHL 14;
const
  MC_CableComp                             =   688 SHL 14;
const
  MC_Filter                                =   689 SHL 14;
const
  MC_Filter_NONE                           =            1;
const
  MC_Filter_10MHZ                          =            2;
const
  MC_Filter_5MHZ                           =            3;
const
  MC_Filter_5MHZ_PAL                       =            4;
const
  MC_Filter_5MHZ_NTSC                      =            5;
const
  MC_CalPat                                =   690 SHL 14;
const
  MC_CalPat_NONE                           =            1;
const
  MC_CalPat_CAL                            =            2;
const
  MC_CalPat_TPG                            =            3;
const
  MC_LutEn                                 =   691 SHL 14;
const
  MC_LutEn_OFF                             =            1;
const
  MC_LutEn_ON                              =            2;
const
  MC_ImageBufLoc                           =   692 SHL 14;
const
  MC_LutBufLoc                             =   693 SHL 14;
const
  MC_ConnectLoc                            =   694 SHL 14;
const
  MC_ConnectLoc_UPPER                      =            1;
const
  MC_ConnectLoc_CENTER                     =            2;
const
  MC_ConnectLoc_LOWER                      =            3;
const
  MC_TimUnit                               =   695 SHL 14;
const
  MC_TimUnit_TX                            =            1;
const
  MC_TimUnit_TY                            =            2;
const
  MC_TimUnit_TZ                            =            3;
const
  MC_DigUnit1                              =   696 SHL 14;
const
  MC_DigUnit1_A                            =            1;
const
  MC_DigUnit1_B                            =            2;
const
  MC_DigUnit1_C                            =            3;
const
  MC_DigUnit1_D                            =            4;
const
  MC_DigUnit2                              =   697 SHL 14;
const
  MC_DigUnit2_NONE                         =            1;
const
  MC_DigUnit2_A                            =            2;
const
  MC_DigUnit2_B                            =            3;
const
  MC_DigUnit2_C                            =            4;
const
  MC_DigUnit2_D                            =            5;
const
  MC_DigUnit3                              =   698 SHL 14;
const
  MC_DigUnit3_NONE                         =            1;
const
  MC_DigUnit3_A                            =            2;
const
  MC_DigUnit3_B                            =            3;
const
  MC_DigUnit3_C                            =            4;
const
  MC_DigUnit3_D                            =            5;
const
  MC_SelClkSynth                           =   699 SHL 14;
const
  MC_SelClkSynth_NONE                      =            1;
const
  MC_SelClkSynth_CLK1                      =            2;
const
  MC_SelClkSynth_CLK2                      =            3;
const
  MC_Camera                                =   700 SHL 14;
const
  MC_Camera_CCIR                           =            1;
const
  MC_Camera_EIA                            =            2;
const
  MC_Camera_CV_M1                          =            3;
const
  MC_Camera_CV_M10C                        =            4;
const
  MC_Camera_CV_M10E                        =            5;
const
  MC_Camera_CV_M50                         =            6;
const
  MC_Camera_XC_55                          =            7;
const
  MC_Camera_SIMUL                          =            8;
const
  MC_Camera_CV_M40                         =            9;
const
  MC_Camera_CUSTOM                         =           10;
const
  MC_Camera_XC_HR300                       =           11;
const
  MC_CamConfig                             =   701 SHL 14;
const
  MC_CamConfig_STD                         =            1;
const
  MC_CamConfig_TEST                        =            2;
const
  MC_CamConfig_I50SA                       =            3;
const
  MC_CamConfig_I60SA                       =            4;
const
  MC_CamConfig_P25SA                       =            5;
const
  MC_CamConfig_P30SA                       =            6;
const
  MC_CamConfig_P50SA                       =            7;
const
  MC_CamConfig_P60SA                       =            8;
const
  MC_CamConfig_P25RA                       =            9;
const
  MC_CamConfig_P30RA                       =           10;
const
  MC_CamConfig_P50RA                       =           11;
const
  MC_CamConfig_P60RA                       =           12;
const
  MC_CamConfig_P12RD                       =           13;
const
  MC_CamConfig_P60RD                       =           14;
const
  MC_CamConfig_P100RA                      =           15;
const
  MC_Scanning                              =   702 SHL 14;
const
  MC_Scanning_PROGRESSIVE                  =            1;
const
  MC_Scanning_INTERLACE                    =            2;
const
  MC_Standard                              =   703 SHL 14;
const
  MC_Standard_CCIR                         =            1;
const
  MC_Standard_EIA                          =            2;
const
  MC_PixelClk_Hz                           =   704 SHL 14;
const
  MC_LineRate_Hz                           =   705 SHL 14;
const
  MC_HCsyncDur_ns                          =   706 SHL 14;
const
  MC_HCsyncBfr_ns                          =   707 SHL 14;
const
  MC_HCSyncAft_ns                          =   708 SHL 14;
const
  MC_Vtotal_Ln                             =   709 SHL 14;
const
  MC_Vactive_Ln                            =   710 SHL 14;
const
  MC_VCsyncAft_Ln                          =   711 SHL 14;
const
  MC_VsyncAft_Ln                           =   712 SHL 14;
const
  MC_HdriveDur_ns                          =   713 SHL 14;
const
  MC_VdriveDur_Ln                          =   714 SHL 14;
const
  MC_HsyncDly_ns                           =   715 SHL 14;
const
  MC_HdriveDly_ns                          =   716 SHL 14;
const
  MC_HVdriveCtl                            =   717 SHL 14;
const
  MC_HVdriveCtl_NONE                       =            1;
const
  MC_HVdriveCtl_TTL                        =            2;
const
  MC_HVdriveCtl_DIFF                       =            3;
const
  MC_HVdriveEdge                           =   718 SHL 14;
const
  MC_HVdriveEdge_GOLOW                     =            1;
const
  MC_HVdriveEdge_GOHIGH                    =            2;
const
  MC_PixelClkCtl                           =   719 SHL 14;
const
  MC_PixelClkCtl_NONE                      =            1;
const
  MC_PixelClkCtl_TTL                       =            2;
const
  MC_PixelClkCtl_DIFF                      =            3;
const
  MC_PixelClkEdge                          =   720 SHL 14;
const
  MC_PixelClkEdge_GOHIGH                   =            1;
const
  MC_PixelClkEdge_GOLOW                    =            2;
const
  MC_VsyncCtl                              =   721 SHL 14;
const
  MC_VsyncCtl_NONE                         =            1;
const
  MC_VsyncCtl_TTL                          =            2;
const
  MC_VsyncCtl_DIFF                         =            3;
const
  MC_HsyncCtl                              =   722 SHL 14;
const
  MC_HsyncCtl_NONE                         =            1;
const
  MC_HsyncCtl_TTL                          =            2;
const
  MC_HsyncCtl_DIFF                         =            3;
const
  MC_HsyncEdge                             =   723 SHL 14;
const
  MC_HsyncEdge_GOLOW                       =            1;
const
  MC_HsyncEdge_GOHIGH                      =            2;
const
  MC_VsyncEdge                             =   724 SHL 14;
const
  MC_VsyncEdge_GOLOW                       =            1;
const
  MC_VsyncEdge_GOHIGH                      =            2;
const
  MC_ICS9161Code                           =   725 SHL 14;
const
  MC_SyncMode                              =   726 SHL 14;
const
  MC_SyncMode_MASTER                       =            1;
const
  MC_SyncMode_ANALOG                       =            2;
const
  MC_SyncMode_DIGITAL                      =            3;
const
  MC_VCgatePos_Ln                          =   727 SHL 14;
const
  MC_Operation                             =   728 SHL 14;
const
  MC_Operation_SYNC                        =            1;
const
  MC_Operation_VCAM                        =            2;
const
  MC_Operation_CTL                         =            3;
const
  MC_Cable                                 =   729 SHL 14;
const
  MC_Cable_A15_C01                         =            1;
const
  MC_Cable_A15_C02                         =            2;
const
  MC_Cable_A15_C03                         =            3;
const
  MC_Cable_A15_C04                         =            4;
const
  MC_Cable_A15_C05                         =            5;
const
  MC_FrameRstEdge                          =   730 SHL 14;
const
  MC_FrameRstEdge_GOLOW                    =            1;
const
  MC_FrameRstEdge_GOHIGH                   =            2;
const
  MC_LineDur_Tk                            =   731 SHL 14;
const
  MC_LineDur_ns                            =   732 SHL 14;
const
  MC_SampleClk_Hz                          =   733 SHL 14;
const
  MC_TCU_ps                                =   734 SHL 14;
const
  MC_Hactive_ns                            =   735 SHL 14;
const
  MC_Hactive_Tk                            =   736 SHL 14;
const
  MC_GrabSizeX_Tk                          =   737 SHL 14;
const
  MC_GrabSizeX_ns                          =   738 SHL 14;
const
  MC_GrabPosX_ns                           =   739 SHL 14;
const
  MC_X_ACQOn                               =   740 SHL 14;
const
  MC_X_ACQOff                              =   741 SHL 14;
const
  MC_ClmDur_ns                             =   742 SHL 14;
const
  MC_ClmPos_ns                             =   743 SHL 14;
const
  MC_X_CLMOn                               =   744 SHL 14;
const
  MC_X_CLMOff                              =   745 SHL 14;
const
  MC_X_HPLL                                =   746 SHL 14;
const
  MC_X_ENDR                                =   747 SHL 14;
const
  MC_X_HOn                                 =   748 SHL 14;
const
  MC_X_HOff                                =   749 SHL 14;
const
  MC_X_MIDX                                =   750 SHL 14;
const
  MC__VActive                              =   751 SHL 14;
const
  MC_GrabSizeY_Ln                          =   752 SHL 14;
const
  MC_GrabPosY_Ln                           =   753 SHL 14;
const
  MC_ADelay1_ns                            =   754 SHL 14;
const
  MC_ADelay2_ns                            =   755 SHL 14;
const
  MC_ADelay3_ns                            =   756 SHL 14;
const
  MC_DDelay2                               =   757 SHL 14;
const
  MC_DDelay3                               =   758 SHL 14;
const
  MC_AcqStep                               =   759 SHL 14;
const
  MC__MIDXQ                                =   760 SHL 14;
const
  MC__ASEL                                 =   761 SHL 14;
const
  MC__BSEL                                 =   762 SHL 14;
const
  MC__CSEL                                 =   763 SHL 14;
const
  MC__DSEL                                 =   764 SHL 14;
const
  MC__PShift1                              =   765 SHL 14;
const
  MC__PShift2                              =   766 SHL 14;
const
  MC__Dig321Mask                           =   767 SHL 14;
const
  MC__VCODIV                               =   768 SHL 14;
const
  MC__SELH                                 =   769 SHL 14;
const
  MC__SELH_NONE                            =            1;
const
  MC__SELH_HDS                             =            2;
const
  MC__SELH_DETS                            =            3;
const
  MC__SELH_QS                              =            4;
const
  MC__SELV                                 =   770 SHL 14;
const
  MC__SELV_NONE                            =            1;
const
  MC__SELV_VDS                             =            2;
const
  MC__SELV_DETV                            =            3;
const
  MC__ASSY11                               =   771 SHL 14;
const
  MC__ASSY12                               =   772 SHL 14;
const
  MC__ASSY13                               =   773 SHL 14;
const
  MC__ASSY14                               =   774 SHL 14;
const
  MC__ASSY21                               =   775 SHL 14;
const
  MC__ASSY22                               =   776 SHL 14;
const
  MC__ASSY23                               =   777 SHL 14;
const
  MC__ASSY24                               =   778 SHL 14;
const
  MC__SIZX                                 =   779 SHL 14;
const
  MC__SIZY                                 =   780 SHL 14;
const
  MC__STARTU1                              =   781 SHL 14;
const
  MC__STARTU2                              =   782 SHL 14;
const
  MC__STARTD1                              =   783 SHL 14;
const
  MC__STARTD2                              =   784 SHL 14;
const
  MC__STEPX                                =   785 SHL 14;
const
  MC__STEPY                                =   786 SHL 14;
const
  MC__OFSU                                 =   787 SHL 14;
const
  MC__OFSD                                 =   788 SHL 14;
const
  MC__SELINC                               =   789 SHL 14;
const
  MC__SELINC_EOL                           =            1;
const
  MC__SELINC_EOF                           =            2;
const
  MC__SELINC_EOL2                          =            3;
const
  MC__SELINC_EOF2                          =            4;
const
  MC__YChannels                            =   790 SHL 14;
const
  MC__TFINC                                =   791 SHL 14;
const
  MC_SWICodeMask                           =   792 SHL 14;
const
  MC_SASCodeMask                           =   793 SHL 14;
const
  MC_EAPCodeMask                           =   794 SHL 14;
const
  MC_NOWCodeMask                           =   795 SHL 14;
const
  MC_Gain1Ctl                              =   796 SHL 14;
const
  MC_Gain1Ctl_LIN                          =            1;
const
  MC_Gain1Ctl_p3DB                         =            2;
const
  MC_Gain1Ctl_p2DB                         =            3;
const
  MC_Gain1Ctl_p1DB                         =            4;
const
  MC_Gain1Ctl_0DB                          =            5;
const
  MC_Gain1Ctl_m1DB                         =            6;
const
  MC_Gain1Ctl_m2DB                         =            7;
const
  MC_Gain1Ctl_m3DB                         =            8;
const
  MC_Gain1                                 =   797 SHL 14;
const
  MC_Offset1                               =   798 SHL 14;
const
  MC_Gain2Ctl                              =   799 SHL 14;
const
  MC_Gain2Ctl_LIN                          =            1;
const
  MC_Gain2Ctl_p3DB                         =            2;
const
  MC_Gain2Ctl_p2DB                         =            3;
const
  MC_Gain2Ctl_p1DB                         =            4;
const
  MC_Gain2Ctl_0DB                          =            5;
const
  MC_Gain2Ctl_m1DB                         =            6;
const
  MC_Gain2Ctl_m2DB                         =            7;
const
  MC_Gain2Ctl_m3DB                         =            8;
const
  MC_Gain2                                 =   800 SHL 14;
const
  MC_Offset2                               =   801 SHL 14;
const
  MC_Gain3Ctl                              =   802 SHL 14;
const
  MC_Gain3Ctl_LIN                          =            1;
const
  MC_Gain3Ctl_p3DB                         =            2;
const
  MC_Gain3Ctl_p2DB                         =            3;
const
  MC_Gain3Ctl_p1DB                         =            4;
const
  MC_Gain3Ctl_0DB                          =            5;
const
  MC_Gain3Ctl_m1DB                         =            6;
const
  MC_Gain3Ctl_m2DB                         =            7;
const
  MC_Gain3Ctl_m3DB                         =            8;
const
  MC_Gain3                                 =   803 SHL 14;
const
  MC_Offset3                               =   804 SHL 14;
const
  MC_NominalGainACode                      =   805 SHL 14;
const
  MC_NominalGainBCode                      =   806 SHL 14;
const
  MC_NominalGainCCode                      =   807 SHL 14;
const
  MC_NominalGainDCode                      =   808 SHL 14;
const
  MC__NominalGain1Code                     =   809 SHL 14;
const
  MC__NominalGain2Code                     =   810 SHL 14;
const
  MC__NominalGain3Code                     =   811 SHL 14;
const
  MC__Gain1Code                            =   812 SHL 14;
const
  MC__Gain2Code                            =   813 SHL 14;
const
  MC__Gain3Code                            =   814 SHL 14;
const
  MC_X_IPLLOn                              =   815 SHL 14;
const
  MC_X_IPLLOff                             =   816 SHL 14;
const
  MC_ModuleType_Unknown                    =            1;
const
  MC_ModuleType_NoModule                   =            2;
const
  MC_ModuleType_D16A                       =            3;
const
  MC_ModuleType_D32AB                      =            4;
const
  MC_ModuleType_D32B                       =            5;
const
  MC_ModuleType_D16C                       =            6;
const
  MC_ModuleType_D32C                       =            7;
const
  MC_NextTrigMode_REPEAT                   =            1;
const
  MC_NextTrigMode_HARD                     =            2;
const
  MC_NextTrigMode_SOFT                     =            3;
const
  MC_NextTrigMode_COMBINED                 =            4;
const
  MC_AcqMode                               =   817 SHL 14;
const
  MC_AcqMode_GRABBER                       =            1;
const
  MC_AcqMode_TIMER                         =            2;
const
  MC_AcqMode_SYSTEM                        =            3;
const
  MC_TrigCtl_TTL                           =            1;
const
  MC_JumperCK                              =   818 SHL 14;
const
  MC_JumperCK_CKDPOS                       =            1;
const
  MC_JumperCK_CKDNEG                       =            2;
const
  MC_JumperCK_CKSPOS                       =            3;
const
  MC_JumperCK_CKSNEG                       =            4;
const
  MC_JumperCK_ZLANE                        =            5;
const
  MC_JumperCK_EMPTY                        =            6;
const
  MC_JumperL1                              =   819 SHL 14;
const
  MC_JumperL1_DT                           =            1;
const
  MC_JumperL1_DU                           =            2;
const
  MC_JumperL1_ST                           =            3;
const
  MC_JumperL1_SU                           =            4;
const
  MC_JumperL2                              =   820 SHL 14;
const
  MC_JumperL2_DT                           =            1;
const
  MC_JumperL2_DU                           =            2;
const
  MC_JumperL2_ST                           =            3;
const
  MC_JumperL2_SU                           =            4;
const
  MC_JumperH                               =   821 SHL 14;
const
  MC_JumperH_TTL                           =            1;
const
  MC_JumperH_DPOS                          =            2;
const
  MC_JumperH_DNEG                          =            3;
const
  MC_JumperV                               =   822 SHL 14;
const
  MC_JumperV_TTL                           =            1;
const
  MC_JumperV_DPOS                          =            2;
const
  MC_JumperV_DNEG                          =            3;
const
  MC_ADresolution                          =   823 SHL 14;
const
  MC_ADresolution_8BIT                     =            1;
const
  MC_ADresolution_10BIT                    =            2;
const
  MC_LineDurTrimOK                         =   824 SHL 14;
const
  MC_LineDurTrimOK_YES                     =            1;
const
  MC_LineDurTrimOK_NO                      =            2;
const
  MC_OffsetX_Px                            =   825 SHL 14;
const
  MC_WindowX_Px                            =   826 SHL 14;
const
  MC_WindowY_Ln                            =   827 SHL 14;
const
  MC_WindowX_Tk                            =   828 SHL 14;
const
  MC_VdriveDly_Ln                          =   829 SHL 14;
const
  MC_Expose_us                             =   830 SHL 14;
const
  MC_ExposeTrim                            =   831 SHL 14;
const
  MC_TrueExp_us                            =   832 SHL 14;
const
  MC_StrobeLevel                           =   833 SHL 14;
const
  MC_StrobeLevel_PLSHIGH                   =            1;
const
  MC_StrobeLevel_PLSLOW                    =            2;
const
  MC_StrobeLevel_HIGH                      =            3;
const
  MC_StrobeLevel_LOW                       =            4;
const
  MC_StrobeDur                             =   834 SHL 14;
const
  MC_StrobePos                             =   835 SHL 14;
const
  MC_StrobeCtl                             =   836 SHL 14;
const
  MC_StrobeCtl_NONE                        =            1;
const
  MC_StrobeCtl_TTL                         =            2;
const
  MC_StrobeLine                            =   837 SHL 14;
const
  MC_StrobeLine_NOM                        =            1;
const
  MC_StrobeLine_ALT1                       =            2;
const
  MC_StrobeLine_ALT2                       =            3;
const
  MC_StrobeLine_ALT3                       =            4;
const
  MC_StrobeLine_ALT4                       =            5;
const
  MC_GainCtl                               =   838 SHL 14;
const
  MC_GainCtl_LIN                           =            1;
const
  MC_GainCtl_p3DB                          =            2;
const
  MC_GainCtl_p2DB                          =            3;
const
  MC_GainCtl_p1DB                          =            4;
const
  MC_GainCtl_0DB                           =            5;
const
  MC_GainCtl_m1DB                          =            6;
const
  MC_GainCtl_m2DB                          =            7;
const
  MC_GainCtl_m3DB                          =            8;
const
  MC_GainTrim1                             =   839 SHL 14;
const
  MC_GainTrim2                             =   840 SHL 14;
const
  MC_GainTrim3                             =   841 SHL 14;
const
  MC_Offset                                =   842 SHL 14;
const
  MC_OffsetTrim1                           =   843 SHL 14;
const
  MC_OffsetTrim2                           =   844 SHL 14;
const
  MC_OffsetTrim3                           =   845 SHL 14;
const
  MC__Offset1Code                          =   846 SHL 14;
const
  MC__Offset2Code                          =   847 SHL 14;
const
  MC__Offset3Code                          =   848 SHL 14;
const
  MC__Tk_Px                                =   849 SHL 14;
const
  MC___MSFBuild                            =   850 SHL 14;
const
  MC___MSFError                            =   851 SHL 14;
const
  MC_PinGATE                               =   852 SHL 14;
const
  MC_PinGATE_UNUSED                        =            1;
const
  MC_PinGATE_VSYNC                         =            2;
const
  MC_PinVIO                                =   853 SHL 14;
const
  MC_PinVIO_UNUSED                         =            1;
const
  MC_PinVIO_VSYNC                          =            2;
const
  MC_Cable_A15_C06                         =            6;
const
  MC_Cable_A15_C07                         =            7;
const
  MC_Premier                               =   854 SHL 14;
const
  MC_Premier_AA                            =            1;
const
  MC_Premier_BB                            =            2;
const
  MC_Premier_CC                            =            3;
const
  MC_Premier_DD                            =            4;
const
  MC_Premier_ZZ                            =            5;
const
  MC_ParamIn2                              =   855 SHL 14;
const
  MC_Auteur                                =   856 SHL 14;
const
  MC_Auteur_TOI                            =            1;
const
  MC_Auteur_MOI                            =            2;
const
  MC_Auteur_EUX                            =            3;
const
  MC_Auteur_NOUS                           =            4;
const
  MC_Auteur_LUI                            =            5;
const
  MC_Menteur                               =   857 SHL 14;
const
  MC_ParamIn8                              =   858 SHL 14;
const
  MC_ParamOut1                             =   859 SHL 14;
const
  MC_ParamOut1_XX                          =            1;
const
  MC_ParamOut1_YY                          =            2;
const
  MC_ParamOut1_ZZ                          =            3;
const
  MC_Carton                                =   860 SHL 14;
const
  MC_Carton_ALPHA                          =            1;
const
  MC_Carton_BETA                           =            2;
const
  MC_Carton_GAMMA                          =            3;
const
  MC_Carton_DELTA                          =            4;
const
  MC_ParamOut4                             =   861 SHL 14;
const
  MC_ParamOut5                             =   862 SHL 14;
const
  MC_Arthur                                =   863 SHL 14;
const
  MC_Arthur_X                              =            1;
const
  MC_Arthur_Y                              =            2;
const
  MC_Arthur_Z                              =            3;
const
  MC_Acteur                                =   864 SHL 14;
const
  MC_Acteur_JOE                            =            1;
const
  MC__CFG                                  =   865 SHL 14;
const
  MC__CFG_MONOCAM                          =            1;
const
  MC__CFG_DUOCAMA                          =            2;
const
  MC__CFG_DUOCAMB                          =            3;
const
  MC_TapCount                              =   866 SHL 14;
const
  MC__Bend16                               =   867 SHL 14;
const
  MC__Bend15                               =   868 SHL 14;
const
  MC__Bend14                               =   869 SHL 14;
const
  MC__Bend13                               =   870 SHL 14;
const
  MC__Bend12                               =   871 SHL 14;
const
  MC__Bend11                               =   872 SHL 14;
const
  MC__Bend10                               =   873 SHL 14;
const
  MC__Bend9                                =   874 SHL 14;
const
  MC__Bend8                                =   875 SHL 14;
const
  MC__Bend7                                =   876 SHL 14;
const
  MC__Bend6                                =   877 SHL 14;
const
  MC__Bend5                                =   878 SHL 14;
const
  MC__Bend4                                =   879 SHL 14;
const
  MC__Bend3                                =   880 SHL 14;
const
  MC__Bend2                                =   881 SHL 14;
const
  MC__Bend1                                =   882 SHL 14;
const
  MC_CamCount                              =   883 SHL 14;
const
  MC_ChannelTopology_QUADXTAP              =            9;
const
  MC_BackEndProg_ABC34                     =           10;
const
  MC_BackEndProg_ABCD44                    =           11;
const
  MC_BackEndOption                         =   884 SHL 14;
const
  MC_TimingClockFrequency                  =   885 SHL 14;
const
  MC_TapCount_ONE                          =            1;
const
  MC_TapCount_TWO                          =            2;
const
  MC_TapCount_THREE                        =            3;
const
  MC_TapCount_FOUR                         =            4;
const
  MC_TapCount_TWO_Y_END                    =            5;
const
  MC_USOutM_ABC1                           =           13;
const
  MC_BlockCount                            =   886 SHL 14;
const
  MC_PlaneTopology                         =   887 SHL 14;
const
  MC_PlaneTopology_SINGLE                  =            1;
const
  MC_PlaneTopology_MULTIPLE                =            2;
const
  MC_Line1Cfg                              =   888 SHL 14;
const
  MC_Line1Cfg_DIFF_IN_T                    =            1;
const
  MC_Line1Cfg_TTL_IN_Z                     =            2;
const
  MC_RX1                                   =   889 SHL 14;
const
  MC_TX1                                   =   890 SHL 14;
const
  MC_Line2Cfg                              =   891 SHL 14;
const
  MC_Line2Cfg_DIFF_IN_T                    =            1;
const
  MC_Line2Cfg_TTL_IN_Z                     =            2;
const
  MC_RX2                                   =   892 SHL 14;
const
  MC_TX2                                   =   893 SHL 14;
const
  MC_SX12                                  =   894 SHL 14;
const
  MC_Line3Cfg                              =   895 SHL 14;
const
  MC_Line3Cfg_DIFF_OUT                     =            1;
const
  MC_Line3Cfg_TTL_OUT                      =            2;
const
  MC_Line4Cfg                              =   896 SHL 14;
const
  MC_Line4Cfg_DIFF_OUT                     =            1;
const
  MC_Line4Cfg_DIFF_IN_T                    =            2;
const
  MC_Line4Cfg_TTL_IN_Z                     =            3;
const
  MC_RX4                                   =   897 SHL 14;
const
  MC_TX4                                   =   898 SHL 14;
const
  MC_SX34                                  =   899 SHL 14;
const
  MC_Line5Cfg                              =   900 SHL 14;
const
  MC_Line5Cfg_DIFF_OUT                     =            1;
const
  MC_Line5Cfg_TTL_OUT                      =            2;
const
  MC_Line6Cfg                              =   901 SHL 14;
const
  MC_Line6Cfg_DIFF_OUT                     =            1;
const
  MC_Line6Cfg_TTL_OUT                      =            2;
const
  MC_SX56                                  =   902 SHL 14;
const
  MC_Line6Ctl_RESET                        =            3;
const
  MC_Line6Ctl_EXPOSE                       =            4;
const
  MC_Line4Ctl_DCLKIN                       =            4;
const
  MC_TPFrequencyRatio                      =   903 SHL 14;
const
  MC__DCGComb                              =   904 SHL 14;
const
  MC__DCGComb_NO                           =            1;
const
  MC__DCGComb_YES                          =            2;
const
  MC_TimUnitN                              =   905 SHL 14;
const
  MC_TimUnitN_UNKNOWN                      =            1;
const
  MC_TimUnitN_FREE                         =            2;
const
  MC_TimUnitN_USEDX                        =            3;
const
  MC_TimUnitN_USEDY                        =            4;
const
  MC_TimUnitN_CONFLICT                     =            5;
const
  MC_MapConTim_XY                          =            7;
const
  MC_MapDigTim_NONE                        =            8;
const
  MC_MapTimCon_TXY                         =            7;
const
  MC_MapTimDig_TXX                         =            7;
const
  MC_MapTimDig_TXY                         =            8;
const
  MC_MapLaneY1_B                           =            5;
const
  MC_MapLaneX1_B                           =            3;
const
  MC_MapLaneX2_A                           =            3;
const
  MC_MapLaneY2_A                           =            4;
const
  MC__BoardType                            =   906 SHL 14;
const
  MC__BoardType__ALPHA                     =            1;
const
  MC__BoardType__GAMMA                     =            2;
const
  MC_MapConTim_YX                          =            8;
const
  MC_MapTimCon_TYX                         =            8;
const
  MC_VCSync                                =   907 SHL 14;
const
  MC_VCSync_NO                             =            1;
const
  MC_VCSync_YES                            =            2;
const
  MC__Integer1                             =   908 SHL 14;
const
  MC__SlowMode                             =   909 SHL 14;
const
  MC__SlowMode_OFF                         =            1;
const
  MC__SlowMode_ON                          =            2;
const
  MC_Expose_Tk                             =   910 SHL 14;
const
  MC__ST_StrxCtl                           =   911 SHL 14;
const
  MC__ST_StrxCtl_High                      =            1;
const
  MC__ST_StrxCtl_Low                       =            2;
const
  MC__ST_StryCtl                           =   912 SHL 14;
const
  MC__ST_StryCtl_High                      =            1;
const
  MC__ST_StryCtl_Low                       =            2;
const
  MC__ST_StrzCtl                           =   913 SHL 14;
const
  MC__ST_StrzCtl_High                      =            1;
const
  MC__ST_StrzCtl_Low                       =            2;
const
  MC__ST_TVxCtl                            =   914 SHL 14;
const
  MC__ST_TVxCtl_High                       =            1;
const
  MC__ST_TVxCtl_Low                        =            2;
const
  MC__ST_TVxCtl_Input                      =            3;
const
  MC__ST_TVyCtl                            =   915 SHL 14;
const
  MC__ST_TVyCtl_High                       =            1;
const
  MC__ST_TVyCtl_Low                        =            2;
const
  MC__ST_TVyCtl_Input                      =            3;
const
  MC__ST_TVzCtl                            =   916 SHL 14;
const
  MC__ST_TVzCtl_High                       =            1;
const
  MC__ST_TVzCtl_Low                        =            2;
const
  MC__ST_TVzCtl_Input                      =            3;
const
  MC__ST_THxCtl                            =   917 SHL 14;
const
  MC__ST_THxCtl_High                       =            1;
const
  MC__ST_THxCtl_Low                        =            2;
const
  MC__ST_THxCtl_Input                      =            3;
const
  MC__ST_THyCtl                            =   918 SHL 14;
const
  MC__ST_THyCtl_High                       =            1;
const
  MC__ST_THyCtl_Low                        =            2;
const
  MC__ST_THyCtl_Input                      =            3;
const
  MC__ST_THzCtl                            =   919 SHL 14;
const
  MC__ST_THzCtl_High                       =            1;
const
  MC__ST_THzCtl_Low                        =            2;
const
  MC__ST_THzCtl_Input                      =            3;
const
  MC__ST_TExCtl                            =   920 SHL 14;
const
  MC__ST_TExCtl_High                       =            1;
const
  MC__ST_TExCtl_Low                        =            2;
const
  MC__ST_TExCtl_Input                      =            3;
const
  MC__ST_TEyCtl                            =   921 SHL 14;
const
  MC__ST_TEyCtl_High                       =            1;
const
  MC__ST_TEyCtl_Low                        =            2;
const
  MC__ST_TEyCtl_Input                      =            3;
const
  MC__ST_TEzCtl                            =   922 SHL 14;
const
  MC__ST_TEzCtl_High                       =            1;
const
  MC__ST_TEzCtl_Low                        =            2;
const
  MC__ST_TEzCtl_Input                      =            3;
const
  MC__ST_TGxCtl                            =   923 SHL 14;
const
  MC__ST_TGxCtl_High                       =            1;
const
  MC__ST_TGxCtl_Low                        =            2;
const
  MC__ST_TGxCtl_Input                      =            3;
const
  MC__ST_TGyCtl                            =   924 SHL 14;
const
  MC__ST_TGyCtl_High                       =            1;
const
  MC__ST_TGyCtl_Low                        =            2;
const
  MC__ST_TGyCtl_Input                      =            3;
const
  MC__ST_TGzCtl                            =   925 SHL 14;
const
  MC__ST_TGzCtl_High                       =            1;
const
  MC__ST_TGzCtl_Low                        =            2;
const
  MC__ST_TGzCtl_Input                      =            3;
const
  MC__ST_TRxCtl                            =   926 SHL 14;
const
  MC__ST_TRxCtl_High                       =            1;
const
  MC__ST_TRxCtl_Low                        =            2;
const
  MC__ST_TRxCtl_Input                      =            3;
const
  MC__ST_TRyCtl                            =   927 SHL 14;
const
  MC__ST_TRyCtl_High                       =            1;
const
  MC__ST_TRyCtl_Low                        =            2;
const
  MC__ST_TRyCtl_Input                      =            3;
const
  MC__ST_TRzCtl                            =   928 SHL 14;
const
  MC__ST_TRzCtl_High                       =            1;
const
  MC__ST_TRzCtl_Low                        =            2;
const
  MC__ST_TRzCtl_Input                      =            3;
const
  MC__ST_Out1Ctl                           =   929 SHL 14;
const
  MC__ST_Out1Ctl_High                      =            1;
const
  MC__ST_Out1Ctl_Low                       =            2;
const
  MC__ST_Out2Ctl                           =   930 SHL 14;
const
  MC__ST_Out2Ctl_High                      =            1;
const
  MC__ST_Out2Ctl_Low                       =            2;
const
  MC__ST_Out3Ctl                           =   931 SHL 14;
const
  MC__ST_Out3Ctl_High                      =            1;
const
  MC__ST_Out3Ctl_Low                       =            2;
const
  MC__ST_Out4Ctl                           =   932 SHL 14;
const
  MC__ST_Out4Ctl_High                      =            1;
const
  MC__ST_Out4Ctl_Low                       =            2;
const
  MC_Destination_DSP12                     =            4;
const
  MC__ST_aFilter                           =   933 SHL 14;
const
  MC__ST_aFilter_NONE                      =            1;
const
  MC__ST_aFilter_10MHZ                     =            2;
const
  MC__ST_aFilter_5MHZ                      =            3;
const
  MC__ST_aFilter_5MHZ_PAL                  =            4;
const
  MC__ST_aFilter_5MHZ_NTSC                 =            5;
const
  MC__ST_bFilter                           =   934 SHL 14;
const
  MC__ST_bFilter_NONE                      =            1;
const
  MC__ST_bFilter_10MHZ                     =            2;
const
  MC__ST_bFilter_5MHZ                      =            3;
const
  MC__ST_bFilter_5MHZ_PAL                  =            4;
const
  MC__ST_bFilter_5MHZ_NTSC                 =            5;
const
  MC_CamConfig_P25RD                       =           16;
const
  MC__TIMATIM                              =   935 SHL 14;
const
  MC__DIGATIM                              =   936 SHL 14;
const
  MC_CamConfig_P30RD                       =           17;
const
  MC_Clanes_qP_QS                          =           17;
const
  MC_Clanes_sR_SQ                          =           18;
const
  MC_MMmask                                =   937 SHL 14;
const
  MC_GrabberConfig_0_3_1                   =            7;
const
  MC__ASSY31                               =   938 SHL 14;
const
  MC__ASSY32                               =   939 SHL 14;
const
  MC__ASSY33                               =   940 SHL 14;
const
  MC__ASSY34                               =   941 SHL 14;
const
  MC__PShiftA                              =   942 SHL 14;
const
  MC__PShiftB                              =   943 SHL 14;
const
  MC__PShiftC                              =   944 SHL 14;
const
  MC__PShiftD                              =   945 SHL 14;
const
  MC__PShift3                              =   946 SHL 14;
const
  MC__CPHASE                               =   947 SHL 14;
const
  MC__CPHASE_INDEPENDENT                   =            1;
const
  MC__CPHASE_GROUPED                       =            2;
const
  MC_Camera_HV_C20AEK                      =           12;
const
  MC_Camera_XC_003                         =           13;
const
  MC__RSTFIFO                              =   948 SHL 14;
const
  MC__RSTFIFO_DISABLED                     =            1;
const
  MC__RSTFIFO_ENABLED                      =            2;
const
  MC__Fields                               =   949 SHL 14;
const
  MC__UpField                              =   950 SHL 14;
const
  MC__STARTU3                              =   951 SHL 14;
const
  MC__STARTD3                              =   952 SHL 14;
const
  MC_Cable_A15_C08                         =            8;
const
  MC_Cable_A15_C09                         =            9;
const
  MC_LutSelect1                            =   953 SHL 14;
const
  MC_LutSelect2                            =   954 SHL 14;
const
  MC_LutSelect3                            =   955 SHL 14;
const
  MC_InputFilter                           =   956 SHL 14;
const
  MC_InputFilter_NONE                      =            1;
const
  MC_InputFilter_10MHZ                     =            2;
const
  MC_InputFilter_5MHZ                      =            3;
const
  MC_InputFilter_5MHZ_PAL                  =            4;
const
  MC_InputFilter_5MHZ_NTSC                 =            5;
const
  MC_VideoFilter                           =   957 SHL 14;
const
  MC_VideoFilter_NONE                      =            1;
const
  MC_VideoFilter_10MHZ                     =            2;
const
  MC_VideoFilter_5MHZ                      =            3;
const
  MC_VideoFilter_5MHZ_PAL                  =            4;
const
  MC_VideoFilter_5MHZ_NTSC                 =            5;
const
  MC_SYNCLoadSet                           =   958 SHL 14;
const
  MC_VCAMLoadSet                           =   959 SHL 14;
const
  MC_SWISet                                =   960 SHL 14;
const
  MC_SASSet                                =   961 SHL 14;
const
  MC_EAPSet                                =   962 SHL 14;
const
  MC_NOWSet                                =   963 SHL 14;
const
  MC___MSFError_Check                      =   964 SHL 14;
const
  MC___MSFError_Check_PASS                 =            1;
const
  MC___MSFError_Check_FAIL                 =            2;
const
  MC___GrabberConfig_Check                 =   965 SHL 14;
const
  MC___GrabberConfig_Check_PASS            =            1;
const
  MC___GrabberConfig_Check_FAIL            =            2;
const
  MC___Alpha_TimUnitN_Check                =   966 SHL 14;
const
  MC___Alpha_TimUnitN_Check_PASS           =            1;
const
  MC___Alpha_TimUnitN_Check_FAIL           =            2;
const
  MC___Alpha_SyncMode_Check                =   967 SHL 14;
const
  MC___Alpha_SyncMode_Check_PASS           =            1;
const
  MC___Alpha_SyncMode_Check_FAIL           =            2;
const
  MC___Alpha_ADresolution_Check            =   968 SHL 14;
const
  MC___Alpha_ADresolution_Check_PASS       =            1;
const
  MC___Alpha_ADresolution_Check_FAIL       =            2;
const
  MC___Alpha_CalPat_Check                  =   969 SHL 14;
const
  MC___Alpha_CalPat_Check_PASS             =            1;
const
  MC___Alpha_CalPat_Check_FAIL             =            2;
const
  MC_GrabberConfig_Filter                  =   970 SHL 14;
const
  MC_TrigMode_Filter                       =   971 SHL 14;
const
  MC_Connector_Filter                      =   972 SHL 14;
const
  MC_ConnectLoc_Filter                     =   973 SHL 14;
const
  MC_ADresolution_Filter                   =   974 SHL 14;
const
  MC_CalPat_Filter                         =   975 SHL 14;
const
  MC_ChannelTopology_Filter                =   976 SHL 14;
const
  MC_SyncMode_Filter                       =   977 SHL 14;
const
  MC_Cable_Filter                          =   978 SHL 14;
const
  MC_Camera_KP_F3                          =           14;
const
  MC_Camera_KP_F3W                         =           15;
const
  MC_Camera_Generic                        =           16;
const
  MC_Camera_Generic_RGB                    =           17;
const
  MC_NextTrigMode_SAME                     =            5;
const
  MC_CamConfig_I50RA                       =           18;
const
  MC_Cable_A15_C10                         =           10;
const
  MC_X_VRSTOn                              =   979 SHL 14;
const
  MC_X_VRSTOff                             =   980 SHL 14;
const
  MC__DeltaX_SIGEOL_RSTOn                  =   981 SHL 14;
const
  MC__DeltaX_SIGEOL_RSTOff                 =   982 SHL 14;
const
  MC_Camera_HV_C20AP                       =           12;
const
  MC_Operation_SPECIAL                     =            4;
const
  MC_HV_C20AP_AsyncLoadSet                 =   983 SHL 14;
const
  MC_CamConfig_P100SA                      =           19;
const
  MC_HReset                                =   984 SHL 14;
const
  MC_HReset_NO                             =            1;
const
  MC_HReset_YES                            =            2;
const
  MC__ETimebase                            =   985 SHL 14;
const
  MC__ETimebase_READOUT_TIMER              =            1;
const
  MC__ETimebase_TIMING_CLOCK               =            2;
const
  MC__E_Tk                                 =   986 SHL 14;
const
  MC__ESpan_us                             =   987 SHL 14;
const
  MC__ESpan_Tk                             =   988 SHL 14;
const
  MC__EXPOn_E                              =   989 SHL 14;
const
  MC__EXPOff_E                             =   990 SHL 14;
const
  MC__ExposeWidth_E                        =   991 SHL 14;
const
  MC__StrobeWidth_E                        =   992 SHL 14;
const
  MC__STROn_E                              =   993 SHL 14;
const
  MC__STROff_E                             =   994 SHL 14;
const
  MC__EXPWidth_E                           =   995 SHL 14;
const
  MC__STRWidth_E                           =   996 SHL 14;
const
  MC__ENDE_E                               =   997 SHL 14;
const
  MC_ExpEdge                               =   998 SHL 14;
const
  MC_ExpEdge_GOLOW                         =            1;
const
  MC_ExpEdge_GOHIGH                        =            2;
const
  MC__TrueExp_Tk                           =   999 SHL 14;
const
  MC__ExposeTrim_pc                        =  1000 SHL 14;
const
  MC_CamConfig_P100RA_G                    =           20;
const
  MC_ExposeOverlap                         =  1001 SHL 14;
const
  MC_ExposeOverlap_FORBID                  =            1;
const
  MC_ExposeOverlap_ALLOW                   =            2;
const
  MC__TrigLine                             =  1002 SHL 14;
const
  MC_D4Input                               =  1003 SHL 14;
const
  MC_D4Input_ON                            =            1;
const
  MC_D4Input_OFF                           =            2;
const
  MC__Category                             =  1004 SHL 14;
const
  MC__Category_Camera_Specification        =            1;
const
  MC__Category_Camera_Timing               =            2;
const
  MC__Category_Camera_Features             =            3;
const
  MC__Category_Line_Scan_Features          =            4;
const
  MC__Category_Trigger_Control             =            5;
const
  MC__Category_Exposure_Control            =            6;
const
  MC__Category_Strobe_Control              =            7;
const
  MC__Category_Board_Linkage               =            8;
const
  MC__Category_Board_Configuration         =            9;
const
  MC__Category_Grabber_Configuration       =           10;
const
  MC__Category_Grabber_Timing              =           11;
const
  MC__Category_Grabber_Conditioning        =           12;
const
  MC__Category_Cluster_Linkage             =           13;
const
  MC_CamConfig_FACTORY                     =           21;
const
  MC_TapStructure                          =  1005 SHL 14;
const
  MC_TapStructure_SINGLE_A                 =            1;
const
  MC_TapStructure_DUAL_A                   =            2;
const
  MC_TapStructure_TRIPLE_A                 =            3;
const
  MC_Manufacturer                          =  1006 SHL 14;
const
  MC_Manufacturer_NONE                     =            1;
const
  MC_Manufacturer_HITACHI                  =            2;
const
  MC_Manufacturer_JAI                      =            3;
const
  MC_Manufacturer_SONY                     =            4;
const
  MC_Imaging                               =  1007 SHL 14;
const
  MC_Imaging_AREA                          =            1;
const
  MC_Spectrum                              =  1008 SHL 14;
const
  MC_Spectrum_BW                           =            1;
const
  MC_Spectrum_COLOR                        =            2;
const
  MC_Spectrum_IR                           =            3;
const
  MC_DataLink                              =  1009 SHL 14;
const
  MC_DataLink_ANALOG                       =            1;
const
  MC_ColorMethod                           =  1010 SHL 14;
const
  MC_ColorMethod_NONE                      =            1;
const
  MC_ColorMethod_PRISM                     =            2;
const
  MC_ColorMethod_RGB                       =            3;
const
  MC_Expose                                =  1011 SHL 14;
const
  MC_Expose_PLSTRG                         =            3;
const
  MC_Expose_PLSCTL                         =            4;
const
  MC_Expose_WIDTH                          =            5;
const
  MC_Expose_INTCTL                         =            6;
const
  MC_Expose_INTPRM                         =            7;
const
  MC_Expose_EXTPRM                         =            8;
const
  MC_Readout                               =  1012 SHL 14;
const
  MC_Readout_PLSTRG                        =            1;
const
  MC_Readout_WIDTH                         =            2;
const
  MC_Readout_INTCTL                        =            3;
const
  MC__Category_Channel_Management          =           14;
const
  MC__Category_Exception_Management        =           15;
const
  MC__Category_Board_Information           =           16;
const
  MC__ScanMode                             =  1013 SHL 14;
const
  MC__ScanMode_PROGRESSIVE                 =            1;
const
  MC__ScanMode_INTERLACE                   =            2;
const
  MC_ENDSet                                =  1014 SHL 14;
const
  MC_EncoderTrim                           =  1015 SHL 14;
const
  MC__BitCalcArg                           =  1016 SHL 14;
const
  MC__XTALTrim                             =  1017 SHL 14;
const
  MC__REFCKATrim                           =  1018 SHL 14;
const
  MC__BoardType__VALUE                     =            3;
const
  MC__BoardType__EXPERT                    =            4;
const
  MC_Camera_Generic_Dual                   =           18;
const
  MC_Camera_1000m                          =           19;
const
  MC_TapStructure_SINGLE_B                 =            4;
const
  MC_TapStructure_SINGLE_W                 =            5;
const
  MC_TapStructure_DUAL_B                   =            6;
const
  MC_TapStructure_DUAL_B2                  =            7;
const
  MC_TapStructure_DUAL_W                   =            8;
const
  MC_TapStructure_DUAL_W2                  =            9;
const
  MC_TapStructure_TRIPLE_B                 =           10;
const
  MC_TapStructure_TRIPLE_W                 =           11;
const
  MC_TapStructure_QUAD_B                   =           12;
const
  MC_TapStructure_QUAD_B2                  =           13;
const
  MC_TapStructure_QUAD_B4                  =           14;
const
  MC_TapStructure_OCTAL_B2                 =           15;
const
  MC_TapStructure_Filter                   =  1019 SHL 14;
const
  MC_Operation_PAGE                        =            5;
const
  MC_Operation_WEB                         =            6;
const
  MC_Manufacturer_ADIMEC                   =            5;
const
  MC_DataLink_CAMERALINK                   =            2;
const
  MC_DataClk_Hz                            =  1020 SHL 14;
const
  MC_Hactive_Px                            =  1021 SHL 14;
const
  MC_HsyncAft_ns                           =  1022 SHL 14;
const
  MC_VsyncPst_Ln                           =  1023 SHL 14;
const
  MC_HsyncPst_ns                           =  1024 SHL 14;
const
  MC_VgatePos_Ln                           =  1025 SHL 14;
const
  MC_CameraDataWidth                       =  1026 SHL 14;
const
  MC_CameraDataWidth_8BIT                  =            1;
const
  MC_CameraDataWidth_10BIT                 =            2;
const
  MC_CameraDataWidth_12BIT                 =            3;
const
  MC_CameraDataWidth_14BIT                 =            4;
const
  MC_CameraDataWidth_16BIT                 =            5;
const
  MC_PixelClkCtl_BUILTIN                   =            4;
const
  MC_PixelClkEdge_BUILTIN                  =            3;
const
  MC_HsyncCtl_BUILTIN                      =            4;
const
  MC_VsyncCtl_BUILTIN                      =            4;
const
  MC_ResetCtl                              =  1027 SHL 14;
const
  MC_ResetCtl_NONE                         =            1;
const
  MC_ResetCtl_TTL                          =            2;
const
  MC_ResetCtl_DIFF                         =            3;
const
  MC_ResetEdge                             =  1028 SHL 14;
const
  MC_ResetEdge_GOHIGH                      =            1;
const
  MC_ResetEdge_GOLOW                       =            2;
const
  MC_AuxResetCtl                           =  1029 SHL 14;
const
  MC_AuxResetCtl_NONE                      =            1;
const
  MC_AuxResetCtl_TTL                       =            2;
const
  MC_AuxResetCtl_DIFF                      =            3;
const
  MC_AuxResetEdge                          =  1030 SHL 14;
const
  MC_AuxResetEdge_GOHIGH                   =            1;
const
  MC_AuxResetEdge_GOLOW                    =            2;
const
  MC_ResetDur                              =  1031 SHL 14;
const
  MC_ResetPos                              =  1032 SHL 14;
const
  MC_ExposeMin_us                          =  1033 SHL 14;
const
  MC_ExposeMax_us                          =  1034 SHL 14;
const
  MC_FvalMode                              =  1035 SHL 14;
const
  MC_FvalMode_FN                           =            1;
const
  MC_FvalMode_FA                           =            2;
const
  MC_FvalMode_FC                           =            3;
const
  MC_FvalMode_PC                           =            4;
const
  MC_LvalMode                              =  1036 SHL 14;
const
  MC_LvalMode_LA                           =            1;
const
  MC_LvalMode_LP                           =            2;
const
  MC_LvalMode_LB                           =            3;
const
  MC_LvalMode_LC                           =            4;
const
  MC_DvalMode                              =  1037 SHL 14;
const
  MC_DvalMode_DN                           =            1;
const
  MC_DvalMode_DG                           =            2;
const
  MC_DvalMode_DC                           =            3;
const
  MC_Cable_CL_C01                          =           11;
const
  MC__Category_Cable_Features              =           17;
const
  MC__Category_Encoder_Control             =           18;
const
  MC_PageDelay_Ln                          =  1038 SHL 14;
const
  MC_PageLength_Ln                         =  1039 SHL 14;
const
  MC_GrabberDataWidth                      =  1040 SHL 14;
const
  MC_GrabberDataWidth_8BIT                 =            1;
const
  MC_GrabberDataWidth_10BIT                =            2;
const
  MC_GrabberDataWidth_12BIT                =            3;
const
  MC_GrabberDataWidth_14BIT                =            4;
const
  MC_GrabberDataWidth_16BIT                =            5;
const
  MC__CDC_SRC                              =  1041 SHL 14;
const
  MC__CDC_SRC_CAMERA                       =            1;
const
  MC__CDC_SRC_TPG                          =            2;
const
  MC__CDC_ISIZE                            =  1042 SHL 14;
const
  MC__CDC_ISIZE_BASE8                      =            1;
const
  MC__CDC_ISIZE_BASE10                     =            2;
const
  MC__CDC_ISIZE_BASE12                     =            3;
const
  MC__CDC_ISIZE_BASE14                     =            4;
const
  MC__CDC_ISIZE_BASE16                     =            5;
const
  MC__CDC_ALIGN                            =  1043 SHL 14;
const
  MC__CDC_ALIGN_BYTE                       =            1;
const
  MC__CDC_ALIGN_WORDMS                     =            2;
const
  MC__CDC_ALIGN_WORDLS                     =            3;
const
  MC__CDC_FALLOC1                          =  1044 SHL 14;
const
  MC__CDC_FALLOC1_256_0                    =            1;
const
  MC__CDC_FALLOC1_128_0                    =            2;
const
  MC__CDC_FALLOC1_128_128                  =            3;
const
  MC__CDC_FALLOC1_64_0                     =            4;
const
  MC__CDC_FALLOC1_64_64                    =            5;
const
  MC__CDC_FALLOC1_64_128                   =            6;
const
  MC__CDC_FALLOC1_64_192                   =            7;
const
  MC__CDC_FALLOC2                          =  1045 SHL 14;
const
  MC__CDC_FALLOC2_256_0                    =            1;
const
  MC__CDC_FALLOC2_128_0                    =            2;
const
  MC__CDC_FALLOC2_128_128                  =            3;
const
  MC__CDC_FALLOC2_64_0                     =            4;
const
  MC__CDC_FALLOC2_64_64                    =            5;
const
  MC__CDC_FALLOC2_64_128                   =            6;
const
  MC__CDC_FALLOC2_64_192                   =            7;
const
  MC__CDC_FALLOC3                          =  1046 SHL 14;
const
  MC__CDC_FALLOC3_256_0                    =            1;
const
  MC__CDC_FALLOC3_128_0                    =            2;
const
  MC__CDC_FALLOC3_128_128                  =            3;
const
  MC__CDC_FALLOC3_64_0                     =            4;
const
  MC__CDC_FALLOC3_64_64                    =            5;
const
  MC__CDC_FALLOC3_64_128                   =            6;
const
  MC__CDC_FALLOC3_64_192                   =            7;
const
  MC__CBA_FALLOC1                          =  1047 SHL 14;
const
  MC__CBA_FALLOC1_256_0                    =            1;
const
  MC__CBA_FALLOC1_128_0                    =            2;
const
  MC__CBA_FALLOC1_128_128                  =            3;
const
  MC__CBA_FALLOC1_64_0                     =            4;
const
  MC__CBA_FALLOC1_64_64                    =            5;
const
  MC__CBA_FALLOC1_64_128                   =            6;
const
  MC__CBA_FALLOC1_64_192                   =            7;
const
  MC__CBA_FALLOC2                          =  1048 SHL 14;
const
  MC__CBA_FALLOC2_256_0                    =            1;
const
  MC__CBA_FALLOC2_128_0                    =            2;
const
  MC__CBA_FALLOC2_128_128                  =            3;
const
  MC__CBA_FALLOC2_64_0                     =            4;
const
  MC__CBA_FALLOC2_64_64                    =            5;
const
  MC__CBA_FALLOC2_64_128                   =            6;
const
  MC__CBA_FALLOC2_64_192                   =            7;
const
  MC__CBA_FALLOC3                          =  1049 SHL 14;
const
  MC__CBA_FALLOC3_256_0                    =            1;
const
  MC__CBA_FALLOC3_128_0                    =            2;
const
  MC__CBA_FALLOC3_128_128                  =            3;
const
  MC__CBA_FALLOC3_64_0                     =            4;
const
  MC__CBA_FALLOC3_64_64                    =            5;
const
  MC__CBA_FALLOC3_64_128                   =            6;
const
  MC__CBA_FALLOC3_64_192                   =            7;
const
  MC__CBA_FALLOC4                          =  1050 SHL 14;
const
  MC__CBA_FALLOC4_256_0                    =            1;
const
  MC__CBA_FALLOC4_128_0                    =            2;
const
  MC__CBA_FALLOC4_128_128                  =            3;
const
  MC__CBA_FALLOC4_64_0                     =            4;
const
  MC__CBA_FALLOC4_64_64                    =            5;
const
  MC__CBA_FALLOC4_64_128                   =            6;
const
  MC__CBA_FALLOC4_64_192                   =            7;
const
  MC__WIC                                  =  1051 SHL 14;
const
  MC__WIC_ONE                              =            1;
const
  MC__WIC_TWO                              =            2;
const
  MC__WIC_THREE                            =            3;
const
  MC__WIC_FOUR                             =            4;
const
  MC__CBA_SHIFT1                           =  1052 SHL 14;
const
  MC__CBA_SHIFT2                           =  1053 SHL 14;
const
  MC__CBA_SHIFT3                           =  1054 SHL 14;
const
  MC__CBA_SHIFT4                           =  1055 SHL 14;
const
  MC_Connector_X_Y                         =            7;
const
  MC__CBA_GROUP1                           =  1056 SHL 14;
const
  MC__ASSY                                 =  1057 SHL 14;
const
  MC__ASSY_ONE                             =            1;
const
  MC__ASSY_TWO                             =            2;
const
  MC__ASSY_THREE                           =            3;
const
  MC__ASSY_FOUR                            =            4;
const
  MC__CBA_GROUP2                           =  1058 SHL 14;
const
  MC__CBA_GROUP3                           =  1059 SHL 14;
const
  MC__CDC_ISIZE_MEDIUM8                    =            6;
const
  MC__CDC_ISIZE_MEDIUM10                   =            7;
const
  MC__CDC_ISIZE_MEDIUM12                   =            8;
const
  MC__CAM                                  =  1060 SHL 14;
const
  MC__CAM_MONOCAM                          =            1;
const
  MC__CAM_DUOCAM                           =            2;
const
  MC__CTA_START01                          =  1061 SHL 14;
const
  MC__CTA_START11                          =  1062 SHL 14;
const
  MC__CTA_START02                          =  1063 SHL 14;
const
  MC__CTA_START12                          =  1064 SHL 14;
const
  MC__BW                                   =  1065 SHL 14;
const
  MC__ISIZX                                =  1066 SHL 14;
const
  MC__ISIZYF                               =  1067 SHL 14;
const
  MC__ISIZY                                =  1068 SHL 14;
const
  MC__WX                                   =  1069 SHL 14;
const
  MC__WY                                   =  1070 SHL 14;
const
  MC__DirX1                                =  1071 SHL 14;
const
  MC__DirX2                                =  1072 SHL 14;
const
  MC__DirX3                                =  1073 SHL 14;
const
  MC__DirY1                                =  1074 SHL 14;
const
  MC__DirY2                                =  1075 SHL 14;
const
  MC__DirY3                                =  1076 SHL 14;
const
  MC_ImagePitch                            =  1077 SHL 14;
const
  MC__PITCH1                               =  1078 SHL 14;
const
  MC__PITCH2                               =  1079 SHL 14;
const
  MC__PITCH3                               =  1080 SHL 14;
const
  MC__InterlaceFactor                      =  1081 SHL 14;
const
  MC__CTA_STEPX1                           =  1082 SHL 14;
const
  MC__CTA_STEPX2                           =  1083 SHL 14;
const
  MC__CTA_STEPX3                           =  1084 SHL 14;
const
  MC__CTA_STEPY1                           =  1085 SHL 14;
const
  MC__CTA_STEPY2                           =  1086 SHL 14;
const
  MC__CTA_STEPY3                           =  1087 SHL 14;
const
  MC__OFSD1                                =  1088 SHL 14;
const
  MC__OFSD2                                =  1089 SHL 14;
const
  MC__OFSD3                                =  1090 SHL 14;
const
  MC__OFSU1                                =  1091 SHL 14;
const
  MC__OFSU2                                =  1092 SHL 14;
const
  MC__OFSU3                                =  1093 SHL 14;
const
  MC__CTA_OFSD1                            =  1094 SHL 14;
const
  MC__CTA_OFSD2                            =  1095 SHL 14;
const
  MC__CTA_OFSD3                            =  1096 SHL 14;
const
  MC__CTA_OFSU1                            =  1097 SHL 14;
const
  MC__CTA_OFSU2                            =  1098 SHL 14;
const
  MC__CTA_OFSU3                            =  1099 SHL 14;
const
  MC__CTA_SELINC                           =  1100 SHL 14;
const
  MC__CTA_SELINC_EOL                       =            1;
const
  MC__CTA_SELINC_EOF                       =            2;
const
  MC__CTA_SELINC_EOL2                      =            3;
const
  MC__CTA_SELINC_EOF2                      =            4;
const
  MC__Xchannels                            =  1101 SHL 14;
const
  MC__CTA_OFS01                            =  1102 SHL 14;
const
  MC__CTA_OFS11                            =  1103 SHL 14;
const
  MC__CTA_OFS02                            =  1104 SHL 14;
const
  MC__CTA_OFS12                            =  1105 SHL 14;
const
  MC__CTA_TFINC                            =  1106 SHL 14;
const
  MC__CBA_PSHIFT1                          =  1107 SHL 14;
const
  MC__CBA_PSHIFT2                          =  1108 SHL 14;
const
  MC__CBA_PSHIFT3                          =  1109 SHL 14;
const
  MC__CBA_PSHIFT4                          =  1110 SHL 14;
const
  MC_CamConfig_P25SC_S8                    =           22;
const
  MC_CamConfig_P25SC_S10                   =           23;
const
  MC_CamConfig_P50SC_D8                    =           24;
const
  MC_CamConfig_P50SC_D10                   =           25;
const
  MC_HsyncAft_Tk                           =  1111 SHL 14;
const
  MC_HsyncPst_Tk                           =  1112 SHL 14;
const
  MC__PITCH1_mw                            =  1113 SHL 14;
const
  MC__PITCH2_mw                            =  1114 SHL 14;
const
  MC__PITCH3_mw                            =  1115 SHL 14;
const
  MC__SIZX_mw                              =  1116 SHL 14;
const
  MC__STARTU1_mw                           =  1117 SHL 14;
const
  MC__STARTU2_mw                           =  1118 SHL 14;
const
  MC__STARTU3_mw                           =  1119 SHL 14;
const
  MC__STARTD1_mw                           =  1120 SHL 14;
const
  MC__STARTD2_mw                           =  1121 SHL 14;
const
  MC__STARTD3_mw                           =  1122 SHL 14;
const
  MC__OFSU1_mw                             =  1123 SHL 14;
const
  MC__OFSU2_mw                             =  1124 SHL 14;
const
  MC__OFSU3_mw                             =  1125 SHL 14;
const
  MC__OFSD1_mw                             =  1126 SHL 14;
const
  MC__OFSD2_mw                             =  1127 SHL 14;
const
  MC__OFSD3_mw                             =  1128 SHL 14;
const
  MC__IPitch_mw                            =  1129 SHL 14;
const
  MC__Pitch_mw                             =  1130 SHL 14;
const
  MC_GrabSizeX_Px                          =  1131 SHL 14;
const
  MC_CamConfig_P50SC                       =           26;
const
  MC_GrabberDataWidth_Filter               =  1132 SHL 14;
const
  MC_GrabSizeXStep_Px                      =  1133 SHL 14;
const
  MC_CamConfig_Filter                      =  1134 SHL 14;
const
  MC__VLC_LCNT                             =  1135 SHL 14;
const
  MC__VLC_LBFR                             =  1136 SHL 14;
const
  MC__VLC_LAFT                             =  1137 SHL 14;
const
  MC__VLC_DCNT                             =  1138 SHL 14;
const
  MC__VLC_DBFR                             =  1139 SHL 14;
const
  MC__VLC_DAFT                             =  1140 SHL 14;
const
  MC__x_INDEX                              =  1141 SHL 14;
const
  MC__D1_INDEX                             =  1142 SHL 14;
const
  MC__D2_INDEX                             =  1143 SHL 14;
const
  MC__D3_INDEX                             =  1144 SHL 14;
const
  MC__D4_INDEX                             =  1145 SHL 14;
const
  MC_FutureUseLoadSet                      =  1146 SHL 14;
const
  MC_DigUnit1_E                            =            5;
const
  MC_DigUnit1_F                            =            6;
const
  MC_DigUnit1_G                            =            7;
const
  MC_DigUnit1_H                            =            8;
const
  MC_Camera_A201b                          =           21;
const
  MC_CamConfig_P30SC                       =           27;
const
  MC_Manufacturer_BASLER                   =            6;
const
  MC_Cable_CL_C02                          =           12;
const
  MC_LinePitch_Filter                      =  1147 SHL 14;
const
  MC_PageDelay_Ln_Filter                   =  1148 SHL 14;
const
  MC_PageLength_Ln_Filter                  =  1149 SHL 14;
const
  MC_EncoderPitch_Filter                   =  1150 SHL 14;
const
  MC_Camera_Filter                         =  1151 SHL 14;
const
  MC_Operation_Filter                      =  1152 SHL 14;
const
  MC___Unsupported_Parameter_Filter        =  1153 SHL 14;
const
  MC_MAN_GrabWindow_Filter                 =  1154 SHL 14;
const
  MC_Camera_A202k                          =           22;
const
  MC_Camera_Manufacturer_Filter            =  1155 SHL 14;
const
  MC_CableName                             =  1156 SHL 14;
const
  MC_CableName_CameraLink_Standard         =            1;
const
  MC_CableName_Basler_Channel_Link         =            2;
const
  MC___CamConfig_Check                     =  1157 SHL 14;
const
  MC___CamConfig_Check_PASS                =            1;
const
  MC___CamConfig_Check_FAIL                =            2;
const
  MC_CamConfig_P48SC                       =           28;
const
  MC_ResetLine                             =  1158 SHL 14;
const
  MC_ResetLine_CC1                         =            1;
const
  MC_ResetLine_CC2                         =            2;
const
  MC_ResetLine_CC3                         =            3;
const
  MC_ResetLine_CC4                         =            4;
const
  MC_AuxresetLine                          =  1159 SHL 14;
const
  MC_AuxresetLine_CC1                      =            1;
const
  MC_AuxresetLine_CC2                      =            2;
const
  MC_AuxresetLine_CC3                      =            3;
const
  MC_AuxresetLine_CC4                      =            4;
const
  MC_CamConfig_P50SM                       =           29;
const
  MC__ClkSynthReq                          =  1160 SHL 14;
const
  MC__ClkSynthReq_NONE                     =            1;
const
  MC__ClkSynthReq_CS1                      =            2;
const
  MC__ClkSynthReq_CS2                      =            3;
const
  MC_ClkSynth1_UNKNOWN                     =            1;
const
  MC_ClkSynth1_FREE                        =            2;
const
  MC_ClkSynth1_USEDX                       =            3;
const
  MC_ClkSynth1_USEDY                       =            4;
const
  MC_ClkSynth1_USEDZ                       =            5;
const
  MC_ClkSynth2_UNKNOWN                     =            1;
const
  MC_ClkSynth2_FREE                        =            2;
const
  MC_ClkSynth2_USEDX                       =            3;
const
  MC_ClkSynth2_USEDY                       =            4;
const
  MC_ClkSynth2_USEDZ                       =            5;
const
  MC_ClkSynth1_XXX                         =            6;
const
  MC_ClkSynth2_XXX                         =            6;
const
  MC___Gamma_ClkSynth_Check                =  1161 SHL 14;
const
  MC___Gamma_ClkSynth_Check_PASS           =            1;
const
  MC___Gamma_ClkSynth_Check_FAIL           =            2;
const
  MC_ClkSynth1_Hz                          =  1162 SHL 14;
const
  MC_ClkSynth2_Hz                          =  1163 SHL 14;
const
  MC__VerticalSyncMode                     =  1164 SHL 14;
const
  MC__VerticalSyncMode_ANALOG              =            1;
const
  MC__VerticalSyncMode_DIGITAL             =            2;
const
  MC__VerticalSyncMode_MASTER              =            3;
const
  MC__SYNC_Line1_Type                      =  1165 SHL 14;
const
  MC_TimUnitN_XXX                          =            6;
const
  MC__SSC                                  =  1166 SHL 14;
const
  MC__SSC_CCIR                             =            1;
const
  MC__SSC_EIA                              =            2;
const
  MC__SSC_CCIR_2                           =            3;
const
  MC__SSC_EIA_2                            =            4;
const
  MC__SSC_OUTOFRANGE                       =            5;
const
  MC__SELH_SSC                             =            5;
const
  MC__SYNC_Line1_Type_BLANK_VRSTOFF        =            1;
const
  MC__SYNC_Line1_Type_BLANK_VRSTON         =            2;
const
  MC__SYNC_Line1_Dur                       =  1167 SHL 14;
const
  MC__SYNC_Line2_Type                      =  1168 SHL 14;
const
  MC__SYNC_Line2_Type_BLANK_VRSTOFF        =            1;
const
  MC__SYNC_Line2_Dur                       =  1169 SHL 14;
const
  MC__SYNC_Line3_Type                      =  1170 SHL 14;
const
  MC__SYNC_Line3_Type_ACQ_VRSTOFF          =            1;
const
  MC__SYNC_Line3_Dur                       =  1171 SHL 14;
const
  MC__SYNC_Line4_Type                      =  1172 SHL 14;
const
  MC__SYNC_Line4_Type_ACQ_VRSTOFF          =            1;
const
  MC__SYNC_Line4_Type_ACQ_VRSTON           =            2;
const
  MC__SYNC_Line4_Dur                       =  1173 SHL 14;
const
  MC__SYNC_Line5_Type                      =  1174 SHL 14;
const
  MC__SYNC_Line5_Type_BLANK_VRSTOFF        =            1;
const
  MC__SYNC_Line5_Type_BLANK_VRSTON         =            2;
const
  MC__SYNC_Line5_Dur                       =  1175 SHL 14;
const
  MC__SYNC_Acq_Dur                         =  1176 SHL 14;
const
  MC__SYNC_Vrst_Dur                        =  1177 SHL 14;
const
  MC__SYNC_RefV2Acq_Gap                    =  1178 SHL 14;
const
  MC__SYNC_Field_Dur                       =  1179 SHL 14;
const
  MC__SYNC_Eacq2Vrst_Gap                   =  1180 SHL 14;
const
  MC__SYNC_Vrst2Bacq_Gap                   =  1181 SHL 14;
const
  MC__SYNC_Vtotal_Check                    =  1182 SHL 14;
const
  MC__SYNC_Eacq2Vrst_Phase                 =  1183 SHL 14;
const
  MC__SYNC_Eacq2Vrst_Phase_BEFORE          =            1;
const
  MC__SYNC_Eacq2Vrst_Phase_SAME            =            2;
const
  MC__SYNC_Eacq2Vrst_Phase_AFTER           =            3;
const
  MC_ClkSynth1_OFF                         =            7;
const
  MC_ClkSynth1_TX                          =            8;
const
  MC_ClkSynth1_TY                          =            9;
const
  MC_ClkSynth1_TZ                          =           10;
const
  MC_ClkSynth2_OFF                         =            7;
const
  MC_ClkSynth2_TX                          =            8;
const
  MC_ClkSynth2_TY                          =            9;
const
  MC_ClkSynth2_TZ                          =           10;
const
  MC__PllControl                           =  1184 SHL 14;
const
  MC__PllControl_YES                       =            1;
const
  MC__PllControl_NO                        =            2;
const
  MC_CamConfig_P50RM_G                     =           30;
const
  MC__DigUnit1                             =  1185 SHL 14;
const
  MC__DigUnit2                             =  1186 SHL 14;
const
  MC__DigUnit3                             =  1187 SHL 14;
const
  MC__TimUnit                              =  1188 SHL 14;
const
  MC_CSTSet                                =  1189 SHL 14;
const
  MC_WSTSet                                =  1190 SHL 14;
const
  MC_PixelClkLine                          =  1191 SHL 14;
const
  MC_PixelClkLine_CK                       =            1;
const
  MC_ResetLine_RST                         =            5;
const
  MC_ResetLine_EXP                         =            6;
const
  MC_ResetLine_GATE                        =            7;
const
  MC_ResetLine_HIO                         =            8;
const
  MC_ResetLine_VIO                         =            9;
const
  MC_ResetLine_DUAL                        =           10;
const
  MC_AuxResetLine_RST                      =            5;
const
  MC_AuxResetLine_EXP                      =            6;
const
  MC_AuxResetLine_GATE                     =            7;
const
  MC_AuxResetLine_HIO                      =            8;
const
  MC_AuxResetLine_VIO                      =            9;
const
  MC_AuxResetLine_DUAL                     =           10;
const
  MC_VsyncLine                             =  1192 SHL 14;
const
  MC_VsyncLine_RST                         =            1;
const
  MC_VsyncLine_EXP                         =            2;
const
  MC_VsyncLine_GATE                        =            3;
const
  MC_VsyncLine_HIO                         =            4;
const
  MC_VsyncLine_VIO                         =            5;
const
  MC_VsyncLine_DUAL                        =            6;
const
  MC_HsyncLine                             =  1193 SHL 14;
const
  MC_HsyncLine_RST                         =            1;
const
  MC_HsyncLine_EXP                         =            2;
const
  MC_HsyncLine_GATE                        =            3;
const
  MC_HsyncLine_HIO                         =            4;
const
  MC_HsyncLine_VIO                         =            5;
const
  MC_HsyncLine_DUAL                        =            6;
const
  MC_CableName_UNKNOWN                     =            3;
const
  MC_CableName_Single_Channel_R            =            4;
const
  MC_CableName_Single_Channel_RC           =            5;
const
  MC_CableName_Single_Channel_RGC_2        =            6;
const
  MC_CableName_Dual_Channel                =            7;
const
  MC_CableName_Dual_Channel_RG             =            8;
const
  MC_CableName_Dual_Channel_RG_2           =            9;
const
  MC_CableName_Triple_Channel_R            =           10;
const
  MC_ColorMethod_Filter                    =  1194 SHL 14;
const
  MC_GCE_Filter                            =  1195 SHL 14;
const
  MC__TrueExp_us                           =  1196 SHL 14;
const
  MC_StrobeMode                            =  1197 SHL 14;
const
  MC_StrobeMode_Filter                     =  1198 SHL 14;
const
  MC_StrobeMode_NONE                       =            1;
const
  MC_StrobeMode_AUTO                       =            2;
const
  MC_StrobeMode_MAN                        =            3;
const
  MC_SampleTrim                            =  1199 SHL 14;
const
  MC_DigUnit2_Filter                       =  1200 SHL 14;
const
  MC_DigUnit3_Filter                       =  1201 SHL 14;
const
  MC_SampleTrim_Filter                     =  1202 SHL 14;
const
  MC_Manufacturer_MY_CAMERAS               =            7;
const
  MC___GrabberTiming_Check                 =  1203 SHL 14;
const
  MC___GrabberTiming_Check_PASS            =            1;
const
  MC___GrabberTiming_Check_FAIL            =            2;
const
  MC__HDC_DCNT                             =  1204 SHL 14;
const
  MC__HBC_HPRE                             =  1205 SHL 14;
const
  MC__HBC_DBFR_Expected                    =  1206 SHL 14;
const
  MC__HBC_DBFR                             =  1207 SHL 14;
const
  MC__HBC_DBFR_Check                       =  1208 SHL 14;
const
  MC__HBC_DBFR_Check_PASS                  =            1;
const
  MC__HBC_DBFR_Check_FAIL                  =            2;
const
  MC__HAC_DAFT                             =  1209 SHL 14;
const
  MC__VBC_LBFR                             =  1210 SHL 14;
const
  MC__VAC_LAFT                             =  1211 SHL 14;
const
  MC__SCC_CC1                              =  1212 SHL 14;
const
  MC__SCC_CC1_CTL1                         =            1;
const
  MC__SCC_CC1_CTL2                         =            2;
const
  MC__SCC_CC1_XCTL2                        =            3;
const
  MC__SCC_CC1_LOW                          =            4;
const
  MC__SCC_CC1_CTL1n                        =            5;
const
  MC__SCC_CC1_CTL2n                        =            6;
const
  MC__SCC_CC1_XCTL2n                       =            7;
const
  MC__SCC_CC1_HIGH                         =            8;
const
  MC__SCC_CC2                              =  1213 SHL 14;
const
  MC__SCC_CC2_CTL1                         =            1;
const
  MC__SCC_CC2_CTL2                         =            2;
const
  MC__SCC_CC2_XCTL2                        =            3;
const
  MC__SCC_CC2_LOW                          =            4;
const
  MC__SCC_CC2_CTL1n                        =            5;
const
  MC__SCC_CC2_CTL2n                        =            6;
const
  MC__SCC_CC2_XCTL2n                       =            7;
const
  MC__SCC_CC2_HIGH                         =            8;
const
  MC__SCC_CC3                              =  1214 SHL 14;
const
  MC__SCC_CC3_CTL1                         =            1;
const
  MC__SCC_CC3_CTL2                         =            2;
const
  MC__SCC_CC3_XCTL2                        =            3;
const
  MC__SCC_CC3_LOW                          =            4;
const
  MC__SCC_CC3_CTL1n                        =            5;
const
  MC__SCC_CC3_CTL2n                        =            6;
const
  MC__SCC_CC3_XCTL2n                       =            7;
const
  MC__SCC_CC3_HIGH                         =            8;
const
  MC__SCC_CC4                              =  1215 SHL 14;
const
  MC__SCC_CC4_CTL1                         =            1;
const
  MC__SCC_CC4_CTL2                         =            2;
const
  MC__SCC_CC4_XCTL2                        =            3;
const
  MC__SCC_CC4_LOW                          =            4;
const
  MC__SCC_CC4_CTL1n                        =            5;
const
  MC__SCC_CC4_CTL2n                        =            6;
const
  MC__SCC_CC4_XCTL2n                       =            7;
const
  MC__SCC_CC4_HIGH                         =            8;
const
  MC_CC1Usage                              =  1216 SHL 14;
const
  MC_CC1Usage_SOFT                         =            1;
const
  MC_CC1Usage_LOW                          =            2;
const
  MC_CC1Usage_HIGH                         =            3;
const
  MC_CC1Usage_RESET                        =            4;
const
  MC_CC1Usage_AUXRESET                     =            5;
const
  MC_CC1Usage_ACQPHASE                     =            6;
const
  MC_CC1Usage_ACQSEQUENCE                  =            7;
const
  MC_CCxUsage_Filter                       =  1217 SHL 14;
const
  MC_CC2Usage                              =  1218 SHL 14;
const
  MC_CC2Usage_SOFT                         =            1;
const
  MC_CC2Usage_LOW                          =            2;
const
  MC_CC2Usage_HIGH                         =            3;
const
  MC_CC2Usage_RESET                        =            4;
const
  MC_CC2Usage_AUXRESET                     =            5;
const
  MC_CC2Usage_ACQPHASE                     =            6;
const
  MC_CC2Usage_ACQSEQUENCE                  =            7;
const
  MC_CC3Usage                              =  1219 SHL 14;
const
  MC_CC3Usage_SOFT                         =            1;
const
  MC_CC3Usage_LOW                          =            2;
const
  MC_CC3Usage_HIGH                         =            3;
const
  MC_CC3Usage_RESET                        =            4;
const
  MC_CC3Usage_AUXRESET                     =            5;
const
  MC_CC3Usage_ACQPHASE                     =            6;
const
  MC_CC3Usage_ACQSEQUENCE                  =            7;
const
  MC_CC4Usage                              =  1220 SHL 14;
const
  MC_CC4Usage_SOFT                         =            1;
const
  MC_CC4Usage_LOW                          =            2;
const
  MC_CC4Usage_HIGH                         =            3;
const
  MC_CC4Usage_RESET                        =            4;
const
  MC_CC4Usage_AUXRESET                     =            5;
const
  MC_CC4Usage_ACQPHASE                     =            6;
const
  MC_CC4Usage_ACQSEQUENCE                  =            7;
const
  MC__STRB                                 =  1221 SHL 14;
const
  MC__CID                                  =  1222 SHL 14;
const
  MC__OUT1                                 =  1223 SHL 14;
const
  MC__OUT2                                 =  1224 SHL 14;
const
  MC__OUT3                                 =  1225 SHL 14;
const
  MC__OUT4                                 =  1226 SHL 14;
const
  MC__VBC_LBFR_Expected                    =  1227 SHL 14;
const
  MC__VBC_LBFR_Check                       =  1228 SHL 14;
const
  MC__VBC_LBFR_Check_PASS                  =            1;
const
  MC__VBC_LBFR_Check_FAIL                  =            2;
const
  MC__VBC_VPRE                             =  1229 SHL 14;
const
  MC__VLC_LCINIT                           =  1230 SHL 14;
const
  MC_Camera_TM_1020_15CL                   =           23;
const
  MC_Camera_TM_1320_15CL                   =           24;
const
  MC_Camera_SVS282CSCL                     =           25;
const
  MC_Camera_SVS285MFCL                     =           26;
const
  MC_Camera_SVS285MSCL                     =           27;
const
  MC_CamConfig_P15SC                       =           31;
const
  MC_CamConfig_I10SC                       =           32;
const
  MC_CamConfig_P22SC                       =           33;
const
  MC_Manufacturer_PULNIX                   =            8;
const
  MC_Manufacturer_VISTEK                   =            9;
const
  MC_ColorMethod_BAYER                     =            4;
const
  MC__DRS_CPAR                             =  1231 SHL 14;
const
  MC__DRS_CSAP                             =  1232 SHL 14;
const
  MC__DRS_CFLD                             =  1233 SHL 14;
const
  MC__TRG_FTPOL_SAS                        =  1234 SHL 14;
const
  MC__TRG_FTPOL_SAS_NONE                   =            1;
const
  MC__TRG_FTPOL_SAS_DIRECT                 =            2;
const
  MC__TRG_FTPOL_SAS_INVERT                 =            3;
const
  MC__TRG_FTPOL_SAP                        =  1235 SHL 14;
const
  MC__TRG_FTPOL_SAP_NONE                   =            1;
const
  MC__TRG_FTPOL_SAP_DIRECT                 =            2;
const
  MC__TRG_FTPOL_SAP_INVERT                 =            3;
const
  MC_TrigFilter_MEDIUM                     =            3;
const
  MC_TrigFilter_STRONG                     =            4;
const
  MC__TRG_FTFLT                            =  1236 SHL 14;
const
  MC__TRG_FTFLT_NONE                       =            1;
const
  MC__TRG_FTFLT_200ns                      =            2;
const
  MC__TRG_FTFLT_3200ns                     =            3;
const
  MC_TrigLine_CAM                          =            6;
const
  MC__TRG_FTSEL_SAS                        =  1237 SHL 14;
const
  MC__TRG_FTSEL_SAS_DA1                    =            1;
const
  MC__TRG_FTSEL_SAS_DA2                    =            2;
const
  MC__TRG_FTSEL_SAS_CAMSIG                 =            3;
const
  MC__TRG_FTSEL_SAS_TRG                    =            4;
const
  MC__TRG_FTSEL_SAS_FORCE                  =            5;
const
  MC__TRG_FTSEL_SAP                        =  1238 SHL 14;
const
  MC__TRG_FTSEL_SAP_KEEP                   =            1;
const
  MC__TRG_FTSEL_SAP_FORCE                  =            2;
const
  MC__STM1_T1CLK                           =  1239 SHL 14;
const
  MC__STM1_T1CLK_PRESCALER                 =            1;
const
  MC__STM1_T1CLK_LTRIGS                    =            2;
const
  MC__STM1_T1CLK_PPLS                      =            3;
const
  MC__STM1_T1SCAL                          =  1240 SHL 14;
const
  MC__STM1_T1SCAL_100ns                    =            1;
const
  MC__STM1_T1SCAL_1us                      =            2;
const
  MC__STM1_T1SCAL_10us                     =            3;
const
  MC__STM1_T1SCAL_100us                    =            4;
const
  MC__STM1_T1SCAL_1ms                      =            5;
const
  MC__PRM1_T1POS_CTL1On                    =  1241 SHL 14;
const
  MC__PRM1_T1POS_CTL1Off                   =  1242 SHL 14;
const
  MC__PRM1_T1POS_PulseSq                   =  1243 SHL 14;
const
  MC__PRM1_T1POS_PulseEnd                  =  1244 SHL 14;
const
  MC___Timer1_Check                        =  1245 SHL 14;
const
  MC___Timer1_Check_PASS                   =            1;
const
  MC___Timer1_Check_FAIL                   =            2;
const
  MC__STM1_T1SCAL_OVER                     =            6;
const
  MC_Camera_SVS084MFCL                     =           28;
const
  MC_Camera_SVS084MSCL                     =           29;
const
  MC_Camera_SVS085MFCL                     =           30;
const
  MC_Camera_SVS085MSCL                     =           31;
const
  MC_Camera_SVS204MFCL                     =           32;
const
  MC_Camera_SVS204MSCL                     =           33;
const
  MC_CamConfig_P21SC                       =           34;
const
  MC_CamConfig_P42SC                       =           35;
const
  MC_CamConfig_P13SC                       =           36;
const
  MC_CamConfig_P25SC                       =           37;
const
  MC_CamConfig_P64SC                       =           38;
const
  MC_CamConfig_P94SC                       =           39;
const
  MC__T1Span_10ns                          =  1246 SHL 14;
const
  MC__T1_10ns                              =  1247 SHL 14;
const
  MC__EXPWidth_10ns                        =  1248 SHL 14;
const
  MC__EXPWidth_T1                          =  1249 SHL 14;
const
  MC__TRG_FTSEL                            =  1250 SHL 14;
const
  MC__TRG_FTSEL_DA1                        =            6;
const
  MC__TRG_FTSEL_DA2                        =            7;
const
  MC__TRG_FTSEL_CAMSIG                     =            8;
const
  MC__TRG_FTSEL_TRG                        =            9;
const
  MC__TRG_FTRIG_SAS                        =  1251 SHL 14;
const
  MC__TRG_FTRIG_SAS_KEEP                   =            1;
const
  MC__TRG_FTRIG_SAS_FORCE                  =            2;
const
  MC__TRG_FTRIG_EAP                        =  1252 SHL 14;
const
  MC__TRG_FTRIG_EAP_KEEP                   =            1;
const
  MC__TRG_FTRIG_EAP_FORCE                  =            2;
const
  MC__TRG_FTPOL_EAP                        =  1253 SHL 14;
const
  MC__TRG_FTPOL_EAP_NONE                   =            1;
const
  MC__TRG_FTPOL_EAP_DIRECT                 =            2;
const
  MC__TRG_FTPOL_EAP_INVERT                 =            3;
const
  MC_Camera_CV_A11                         =           34;
const
  MC_CamConfig_P30SM                       =           40;
const
  MC_CamConfig_P30RM_G                     =           41;
const
  MC_Cable_A15_C11                         =           13;
const
  MC_CableName_Single_Channel_RGC          =           11;
const
  MC_EASQet                                =  1254 SHL 14;
const
  MC_CamConfig_P30RG                       =           42;
const
  MC_CamConfig_P50RG                       =           43;
const
  MC__STM2_T2SCAL                          =  1255 SHL 14;
const
  MC__STM2_T2SCAL_100ns                    =            1;
const
  MC__STM2_T2SCAL_1us                      =            2;
const
  MC__STM2_T2SCAL_10us                     =            3;
const
  MC__STM2_T2SCAL_100us                    =            4;
const
  MC__STM2_T2SCAL_1ms                      =            5;
const
  MC__STM2_T2SCAL_OVER                     =            6;
const
  MC__PRM2_T2POS_CTL2On                    =  1256 SHL 14;
const
  MC__PRM2_T2POS_CTL2Off                   =  1257 SHL 14;
const
  MC__PRM2_T2POS_PulseEnd                  =  1258 SHL 14;
const
  MC__T2Span_10ns                          =  1259 SHL 14;
const
  MC_StrobeCtl_ITTL                        =            3;
const
  MC_StrobeCtl_IOC                         =            4;
const
  MC_StrobeCtl_IOE                         =            5;
const
  MC__EXPWidth_T2                          =  1260 SHL 14;
const
  MC__STRWidth_T2                          =  1261 SHL 14;
const
  MC__STROn_T2                             =  1262 SHL 14;
const
  MC__STROff_T2                            =  1263 SHL 14;
const
  MC_Imaging_LINE                          =            2;
const
  MC_Imaging_TDI                           =            3;
const
  MC_CamConfig_P15RG                       =           44;
const
  MC_Camera_XC_HR50                        =           35;
const
  MC_CamConfig_P60SM                       =           45;
const
  MC_CamConfig_P60RM_G                     =           46;
const
  MC_CamConfig_P60RA_G                     =           47;
const
  MC_CamConfig_P22RG                       =           48;
const
  MC__ACQV_Line1_Dur                       =  1264 SHL 14;
const
  MC__IDLEV_Line2_Type                     =  1265 SHL 14;
const
  MC__IDLEV_Line2_Type_BLANK_VRSTON        =            1;
const
  MC__IDLEV_Line2_Type_BLANK_VRSTOFF       =            2;
const
  MC__IDLEV_Line2_Dur                      =  1266 SHL 14;
const
  MC__ACQV_Line2_Dur                       =  1267 SHL 14;
const
  MC__ACQV_Line3_Dur                       =  1268 SHL 14;
const
  MC__ACQV_Line4_Dur                       =  1269 SHL 14;
const
  MC__ACQV_Acq_Dur                         =  1270 SHL 14;
const
  MC__ACQV_PreAcq_Dur                      =  1271 SHL 14;
const
  MC__ACQV_Total_Dur                       =  1272 SHL 14;
const
  MC_Camera_CS8530                         =           36;
const
  MC_Manufacturer_TELI                     =           10;
const
  MC_CamConfig_P48RG                       =           49;
const
  MC_Camera_CS8531                         =           37;
const
  MC_Camera_CS8531D                        =           38;
const
  MC_CamConfig_P120SM                      =           50;
const
  MC_CamConfig_P120RM_G                    =           51;
const
  MC_CamConfig_P30RA_G                     =           52;
const
  MC_CamConfig_P50RM                       =           53;
const
  MC_CamConfig_P60RM                       =           54;
const
  MC_CamConfig_P120RM                      =           55;
const
  MC_CamConfig_P30RM                       =           56;
const
  MC_ColorRegistration                     =  1273 SHL 14;
const
  MC_ColorRegistration_GB                  =            1;
const
  MC_ColorRegistration_BG                  =            2;
const
  MC_ColorRegistration_RG                  =            3;
const
  MC_ColorRegistration_GR                  =            4;
const
  MC_ImageColorRegistration                =  1274 SHL 14;
const
  MC_ImageColorRegistration_GB             =            1;
const
  MC_ImageColorRegistration_BG             =            2;
const
  MC_ImageColorRegistration_RG             =            3;
const
  MC_ImageColorRegistration_GR             =            4;
const
  MC__OffsetX0                             =  1275 SHL 14;
const
  MC__OffsetY0                             =  1276 SHL 14;
const
  MC_CamConfig_P30SD                       =           57;
const
  MC_VdriveLine                            =  1277 SHL 14;
const
  MC_VdriveLine_RST                        =            1;
const
  MC_VdriveLine_EXP                        =            2;
const
  MC_VdriveLine_GATE                       =            3;
const
  MC_VdriveLine_HIO                        =            4;
const
  MC_VdriveLine_VIO                        =            5;
const
  MC_VdriveLine_DUAL                       =            6;
const
  MC_HdriveLine                            =  1278 SHL 14;
const
  MC_HdriveLine_RST                        =            1;
const
  MC_HdriveLine_EXP                        =            2;
const
  MC_HdriveLine_GATE                       =            3;
const
  MC_HdriveLine_HIO                        =            4;
const
  MC_HdriveLine_VIO                        =            5;
const
  MC_HdriveLine_DUAL                       =            6;
const
  MC__TrimmedExpose_us                     =  1279 SHL 14;
const
  MC_PixelClkLine_NC                       =            2;
const
  MC_ResetLine_NC                          =           11;
const
  MC_AuxResetLine_NC                       =           11;
const
  MC_VsyncLine_NC                          =            7;
const
  MC_HsyncLine_NC                          =            7;
const
  MC_VdriveLine_NC                         =            7;
const
  MC_HdriveLine_NC                         =            7;
const
  MC_Cable_A15_C12                         =           14;
const
  MC_CableName_Triple_Channel_RG           =           12;
const
  MC__CDU_CAL                              =  1280 SHL 14;
const
  MC_Camera_SKCm141TC                      =           39;
const
  MC_CamConfig_P10SA                       =           58;
const
  MC_CamConfig_P10SM                       =           59;
const
  MC_CamConfig_P10RM                       =           60;
const
  MC_CamConfig_P10RA                       =           61;
const
  MC_Manufacturer_IKEGAMI                  =           11;
const
  MC_CableName_Triple_Channel_RGC_3        =           13;
const
  MC__PinUsed                              =  1281 SHL 14;
const
  MC_Camera_SKC_141TC                      =           40;
const
  MC_Camera_CV_M50C                        =           41;
const
  MC_CamConfig_I25SA                       =           62;
const
  MC_CamConfig_P50                         =           63;
const
  MC_CamConfig_P50SD                       =           64;
const
  MC_CamConfig_P50RD                       =           65;
const
  MC_CamConfig_P10SD                       =           66;
const
  MC_CamConfig_P10RD                       =           67;
const
  MC_CamConfig_P25RG                       =           68;
const
  MC_CamConfig_P64RG                       =           69;
const
  MC_CamConfig_P42RG                       =           70;
const
  MC_CamConfig_P94RG                       =           71;
const
  MC_Camera_STC_1000                       =           42;
const
  MC_CamConfig_P60SD                       =           72;
const
  MC_Manufacturer_SENTECH                  =           12;
const
  MC__DIS_FALT                             =  1282 SHL 14;
const
  MC__DIS_FALT_NORMAL                      =            1;
const
  MC__DIS_FALT_ALTERNATE                   =            2;
const
  MC__DIS_SPOL                             =  1283 SHL 14;
const
  MC__DIS_SPOL_DIRECT                      =            1;
const
  MC__DIS_SPOL_INVERT                      =            2;
const
  MC__DIS_FPOL                             =  1284 SHL 14;
const
  MC__DIS_FPOL_DIRECT                      =            1;
const
  MC__DIS_FPOL_INVERT                      =            2;
const
  MC__DIS_LPOL                             =  1285 SHL 14;
const
  MC__DIS_LPOL_DIRECT                      =            1;
const
  MC__DIS_LPOL_INVERT                      =            2;
const
  MC__DIS_DPOL                             =  1286 SHL 14;
const
  MC__DIS_DPOL_DIRECT                      =            1;
const
  MC__DIS_DPOL_INVERT                      =            2;
const
  MC__DRS_CPAR_NONE                        =            1;
const
  MC__DRS_CPAR_LVAL_AFT                    =            2;
const
  MC__DRS_CPAR_LVAL_BFR                    =            3;
const
  MC__DRS_CPAR_SPARE_AFT                   =            4;
const
  MC__DRS_CPAR_SPARE_BFR                   =            5;
const
  MC__DRS_CSAP_ONNEXTFVAL                  =            1;
const
  MC__DRS_CSAP_ONNEXTFVAL_PAR0             =            2;
const
  MC__DRS_CSAP_ONNEXTFVAL_PAR1             =            3;
const
  MC__DRS_CFLD_ONEFIELD                    =            1;
const
  MC__DRS_CFLD_TWOFIELDS                   =            2;
const
  MC__DRS_CACQ                             =  1287 SHL 14;
const
  MC__DRS_CACQ_LINE                        =            1;
const
  MC__DRS_CACQ_LINEandVALD                 =            2;
const
  MC__DRS_CEOL                             =  1288 SHL 14;
const
  MC__DRS_CEOL_DLAST                       =            1;
const
  MC__DRS_CEOL_DSTOP                       =            2;
const
  MC__DRS_CEOL_LVALE                       =            3;
const
  MC__DRS_CEOL_DVALE                       =            4;
const
  MC__DRS_CSOL                             =  1289 SHL 14;
const
  MC__DRS_CSOL_LVALS                       =            1;
const
  MC__DRS_CSOL_FVALSorLVALE                =            2;
const
  MC__DRS_CSOL_FVALSorDLAST                =            3;
const
  MC_Camera_NoCamera                       =           43;
const
  MC_LvalMode_LN                           =            5;
const
  MC_Camera_TMC_1000                       =           44;
const
  MC_Camera_TMC_6700                       =           45;
const
  MC_Camera_A501k                          =           46;
const
  MC_CamConfig_P60SC                       =           73;
const
  MC_CamConfig_P60RG                       =           74;
const
  MC_CamConfig_P74SC                       =           75;
const
  MC_CamConfig_P74RG                       =           76;
const
  MC_Cable_CL_C03                          =           15;
const
  MC_CableName_Pulnix_Adapter              =           14;
const
  MC_Camera_XC_8500CE                      =           47;
const
  MC_Cable_A15_C13                         =           16;
const
  MC_CableName_Dual_Channel_RG_2_A         =           15;
const
  MC_StrobeLine_Filter                     =  1290 SHL 14;
const
  MC_StrobeLine_STZ                        =            6;
const
  MC__CBA_GROUP4                           =  1291 SHL 14;
const
  MC__STB_STB_x                            =  1292 SHL 14;
const
  MC__STB_STB_x_FromCTL1_x                 =            1;
const
  MC__STB_STB_x_FromCTL2_x                 =            2;
const
  MC__STB_STB_x_FromXCTL2_x                =            3;
const
  MC__STB_Qx1SRC                           =  1293 SHL 14;
const
  MC__STB_Qx1SRC_LOW                       =            1;
const
  MC__STB_Qx1SRC_HIGH                      =            2;
const
  MC__STB_Qx1SRC_FromSTB_X                 =            3;
const
  MC__STB_Qx1SRC_FromSTB_X_Inverted        =            4;
const
  MC__STB_x1STYL                           =  1294 SHL 14;
const
  MC__STB_x1STYL_TTLIN                     =            1;
const
  MC__STB_x1STYL_12VIN                     =            2;
const
  MC__STB_x1STYL_TTLOUT                    =            3;
const
  MC__STB_x1STYL_OCOUT                     =            4;
const
  MC__STB_x1STYL_OEOUT                     =            5;
const
  MC__STB_Qx2SRC                           =  1295 SHL 14;
const
  MC__STB_Qx2SRC_LOW                       =            1;
const
  MC__STB_Qx2SRC_HIGH                      =            2;
const
  MC__STB_Qx2SRC_FromSTB_X                 =            3;
const
  MC__STB_Qx2SRC_FromSTB_X_Inverted        =            4;
const
  MC__STB_x2STYL                           =  1296 SHL 14;
const
  MC__STB_x2STYL_TTLIN                     =            1;
const
  MC__STB_x2STYL_12VIN                     =            2;
const
  MC__STB_x2STYL_TTLOUT                    =            3;
const
  MC__STB_x2STYL_OCOUT                     =            4;
const
  MC__STB_x2STYL_OEOUT                     =            5;
const
  MC__STR_STR_X                            =  1297 SHL 14;
const
  MC__STR_STR_X_LOW                        =            1;
const
  MC__STR_STR_X_HIGH                       =            2;
const
  MC__STR_STR_X_FromSTB_X                  =            3;
const
  MC__STR_STR_X_FromSTB_X_Inverted         =            4;
const
  MC___StrobeStyle_Check                   =  1298 SHL 14;
const
  MC___StrobeStyle_Check_PASS              =            1;
const
  MC___StrobeStyle_Check_FAIL              =            2;
const
  MC_STRUsage                              =  1299 SHL 14;
const
  MC_STRUsage_FREE                         =            1;
const
  MC_STRUsage_STROBE                       =            2;
const
  MC_A1Usage                               =  1300 SHL 14;
const
  MC_A1Usage_FREE                          =            1;
const
  MC_A1Usage_STROBE                        =            2;
const
  MC_A2Usage                               =  1301 SHL 14;
const
  MC_A2Usage_FREE                          =            1;
const
  MC_A2Usage_STROBE                        =            2;
const
  MC_DefaultLoadSet                        =  1302 SHL 14;
const
  MC__TRG_FTMOD                            =  1303 SHL 14;
const
  MC__TRG_FTMOD_SKIP                       =            1;
const
  MC__TRG_FTMOD_HOLD                       =            2;
const
  MC__TRG_FTRES_FB                         =  1304 SHL 14;
const
  MC__TRG_FTRES_FB_NO                      =            1;
const
  MC__TRG_FTRES_FB_YES                     =            2;
const
  MC__TRG_FTRES_T1                         =  1305 SHL 14;
const
  MC__TRG_FTRES_T1_NO                      =            1;
const
  MC__TRG_FTRES_T1_YES                     =            2;
const
  MC__TRG_FTRES_T2                         =  1306 SHL 14;
const
  MC__TRG_FTRES_T2_NO                      =            1;
const
  MC__TRG_FTRES_T2_YES                     =            2;
const
  MC__TRG_FTPOL_TE                         =  1307 SHL 14;
const
  MC__TRG_FTPOL_TE_NONE                    =            1;
const
  MC__TRG_FTPOL_TE_DIRECT                  =            2;
const
  MC__TRG_FTPOL_TE_INVERT                  =            3;
const
  MC__TRG_FTRIG_TE                         =  1308 SHL 14;
const
  MC__TRG_FTRIG_TE_KEEP                    =            1;
const
  MC__TRG_FTRIG_TE_FORCE                   =            2;
const
  MC_Camera_STC_1100b                      =           48;
const
  MC__DRS_CSOL_FVALSorEOL                  =            4;
const
  MC_TriggerSkipHold                       =  1309 SHL 14;
const
  MC_TriggerSkipHold_SKIP                  =            1;
const
  MC_TriggerSkipHold_HOLD                  =            2;
const
  MC_LineScanOnly_Filter                   =  1310 SHL 14;
const
  MC_ExposeRecovery_us                     =  1311 SHL 14;
const
  MC_ReadoutRecovery_us                    =  1312 SHL 14;
const
  MC__EXPOffWidthForbid_10ns               =  1313 SHL 14;
const
  MC__EXPOffWidth_T1                       =  1314 SHL 14;
const
  MC__LineDur_ns                           =  1315 SHL 14;
const
  MC__ReadoutDur_10ns                      =  1316 SHL 14;
const
  MC_Cable_A15_C14                         =           17;
const
  MC_CableName_Single_Channel_RGC_A        =           16;
const
  MC__EXPOffWidth_10ns                     =  1317 SHL 14;
const
  MC__MaxReadoutRate_Hz                    =  1318 SHL 14;
const
  MC__MaxTriggerRate_Hz                    =  1319 SHL 14;
const
  MC_CableName_Triple_Channel_RG_3         =           17;
const
  MC___IOLoopBack                          =  1320 SHL 14;
const
  MC___IOLoopBack_DISABLE                  =            1;
const
  MC___IOLoopBack_ENABLE                   =            2;
const
  MC_Camera_ICD_FA41                       =           49;
const
  MC_CableName_Single_Channel_R_A          =           18;
const
  MC_Camera_SKC_131                        =           50;
const
  MC_CamConfig_P12SA                       =           77;
const
  MC_CamConfig_P12SD                       =           78;
const
  MC_CamConfig_P12RA                       =           79;
const
  MC_Operation_LONG_EXPOSURE               =            7;
const
  MC__Vtotal_Ln                            =  1321 SHL 14;
const
  MC_CamConfig_P50SM_L                     =           80;
const
  MC__VLC_LCSNS                            =  1322 SHL 14;
const
  MC__VLC_LCSNS_NORMAL                     =            1;
const
  MC__VLC_LCSNS_SENSE                      =            2;
const
  MC__VAC_VPOST                            =  1323 SHL 14;
const
  MC__VAC_VPOST_FVALE_Post                 =            1;
const
  MC__VAC_VPOST_FVALE_NoPost               =            2;
const
  MC__VAC_VPOST_LVALE_NoPost               =            3;
const
  MC__VAC_VPOST_LLAST_NoPost               =            4;
const
  MC__CTA_SELFLH                           =  1324 SHL 14;
const
  MC__CTA_SELFLH_EOI                       =            1;
const
  MC__CTA_SELFLH_EOL                       =            2;
const
  MC_Camera_CV_A50C                        =           51;
const
  MC_CamConfig_P25SM_L                     =           81;
const
  MC_Camera_iMVS157                        =           52;
const
  MC_Manufacturer_FASTCOM                  =           13;
const
  MC_CC3Usage_READOUTALLOWED               =            8;
const
  MC_CC4Usage_TRIGGERALLOWED               =            8;
const
  MC__SCC_CC3_ACQUIREALLOWED               =            9;
const
  MC__SCC_CC3_ACQUIREALLOWEDn              =           10;
const
  MC__SCC_CC4_TRIGGERALLOWED               =            9;
const
  MC__SCC_CC4_TRIGGERALLOWEDn              =           10;
const
  MC__SCC_CC3_READOUTALLOWED               =           11;
const
  MC__SCC_CC3_READOUTALLOWEDn              =           12;
const
  MC__VactiveMax_Ln                        =  1325 SHL 14;
const
  MC_Camera_TM_6702                        =           53;
const
  MC_Cable_A15_C15                         =           19;
const
  MC_CableName_Single_Ch                   =           19;
const
  MC_CableName_Single_Channel_R_B          =           20;
const
  MC_Camera_VCC_870                        =           54;
const
  MC_CamConfig_P12SM                       =           82;
const
  MC_CamConfig_P12RM                       =           83;
const
  MC_Manufacturer_CIS                      =           14;
const
  MC_AreaScanOnly_Filter                   =  1326 SHL 14;
const
  MC_TrigCtl_ITTL                          =            5;
const
  MC_TrigCtl_I12V                          =            6;
const
  MC_TrigLine_TRG                          =            7;
const
  MC_TrigLine_Filter                       =  1327 SHL 14;
const
  MC_ColorMethod_TRILINEAR                 =            5;
const
  MC_LineRateMode                          =  1328 SHL 14;
const
  MC_LineRateMode_CAMERA                   =            1;
const
  MC_LineRateMode_PERIOD                   =            2;
const
  MC_LineRateMode_PULSE                    =            3;
const
  MC_LineRateMode_CONVERT                  =            4;
const
  MC_Period_us                             =  1329 SHL 14;
const
  MC_PeriodTrim                            =  1330 SHL 14;
const
  MC_LineTrigCtl                           =  1331 SHL 14;
const
  MC_LineTrigCtl_ITTL                      =            1;
const
  MC_LineTrigCtl_I12V                      =            2;
const
  MC_LineTrigCtl_TTL                       =            3;
const
  MC_LineTrigEdge                          =  1332 SHL 14;
const
  MC_LineTrigEdge_GOHIGH                   =            1;
const
  MC_LineTrigEdge_GOLOW                    =            2;
const
  MC_LineTrigFilter                        =  1333 SHL 14;
const
  MC_LineTrigFilter_OFF                    =            1;
const
  MC_LineTrigFilter_MEDIUM                 =            2;
const
  MC_LineTrigFilter_STRONG                 =            3;
const
  MC_LineTrigLine                          =  1334 SHL 14;
const
  MC_LineTrigLine_NOM                      =            1;
const
  MC_LineTrigLine_TRG                      =            2;
const
  MC_LineTrigLine_CAM                      =            3;
const
  MC_ConverterTrim                         =  1335 SHL 14;
const
  MC_MaxSpeed                              =  1336 SHL 14;
const
  MC_MinSpeed                              =  1337 SHL 14;
const
  MC__TRG_FTRES_EOF                        =  1338 SHL 14;
const
  MC__TRG_FTRES_EOF_NO                     =            1;
const
  MC__TRG_FTRES_EOF_YES                    =            2;
const
  MC_MAN_GrabWindowY_Filter                =  1339 SHL 14;
const
  MC_ImageFlipX                            =  1340 SHL 14;
const
  MC_ImageFlipX_OFF                        =            1;
const
  MC_CS3920_AsyncLoadSet                   =  1341 SHL 14;
const
  MC__Expose_us                            =  1342 SHL 14;
const
  MC_Camera_CS3920                         =           55;
const
  MC_CamConfig_I7SA                        =           84;
const
  MC_CamConfig_I7RA                        =           85;
const
  MC_Cable_A15_C16                         =           21;
const
  MC_CableName_Single_Channel_R_C          =           21;
const
  MC__CTA_SELFLH_EOI_S                     =            3;
const
  MC_Camera_CV_M4CL                        =           56;
const
  MC_CamConfig_P24SC                       =           86;
const
  MC_CamConfig_P24RG                       =           87;
const
  MC_CamConfig_I15SA                       =           88;
const
  MC_CamConfig_I15RA                       =           89;
const
  MC__TrimmedExpose_10ns                   =  1343 SHL 14;
const
  MC_Camera_CV_M50E                        =           57;
const
  MC_CamConfig_P60SM_L                     =           90;
const
  MC_CamConfig_I30SA                       =           91;
const
  MC_Camera_CV_A50E                        =           58;
const
  MC_CamConfig_P30SM_L                     =           92;
const
  MC_Camera_CV_M7CL                        =           59;
const
  MC_Camera_ICD_FA41E                      =           60;
const
  MC_CamConfig_P25RA_G                     =           93;
const
  MC_CamConfig_P50RA_G                     =           94;
const
  MC_StrobeCtl_Filter                      =  1344 SHL 14;
const
  MC_CamConfig_I60RA                       =           95;
const
  MC_CamConfig_I120SA                      =           96;
const
  MC_CamConfig_I120RA                      =           97;
const
  MC__HDC_DCADV                            =  1345 SHL 14;
const
  MC__HDC_DCADV_PERMANENT                  =            1;
const
  MC__HDC_DCADV_VALD                       =            2;
const
  MC_ImageFlipX_ON                         =            2;
const
  MC_MaxLineRate_Hz                        =  1346 SHL 14;
const
  MC_LineRateMode_Filter                   =  1347 SHL 14;
const
  MC__T2Span_T2                            =  1348 SHL 14;
const
  MC__PRM2_T2POS_1                         =  1349 SHL 14;
const
  MC__PRM2_T2PLS1_1                        =  1350 SHL 14;
const
  MC__PRM2_T2PLS2_1                        =  1351 SHL 14;
const
  MC__PRM2_T2POS_2                         =  1352 SHL 14;
const
  MC__PRM2_T2PLS1_2                        =  1353 SHL 14;
const
  MC__PRM2_T2PLS2_2                        =  1354 SHL 14;
const
  MC__PRM2_T2POS_3                         =  1355 SHL 14;
const
  MC__PRM2_T2PLS1_3                        =  1356 SHL 14;
const
  MC__PRM2_T2PLS2_3                        =  1357 SHL 14;
const
  MC__PRM2_T2POS_4                         =  1358 SHL 14;
const
  MC__PRM2_T2PLS1_4                        =  1359 SHL 14;
const
  MC__PRM2_T2PLS2_4                        =  1360 SHL 14;
const
  MC__PRM2_T2POS_5                         =  1361 SHL 14;
const
  MC__PRM2_T2PLS1_5                        =  1362 SHL 14;
const
  MC__PRM2_T2PLS2_5                        =  1363 SHL 14;
const
  MC__STM2_T2SEL                           =  1364 SHL 14;
const
  MC__STM2_T2SEL_OFF                       =            1;
const
  MC__STM2_T2SEL_OnLTRIGS                  =            2;
const
  MC__STM2_T2SEL_OnLTRIGE                  =            3;
const
  MC__STM2_T2SEL_OnPPLS                    =            4;
const
  MC__STM2_T2SEL_OnGO1                     =            5;
const
  MC__STM2_T2SEL_OnEND2                    =            6;
const
  MC__T2_10ns                              =  1365 SHL 14;
const
  MC__ResetDur_T2                          =  1366 SHL 14;
const
  MC__ReadoutDur_T2                        =  1367 SHL 14;
const
  MC__ExposureController                   =  1368 SHL 14;
const
  MC__ExposureController_CAMERA            =            1;
const
  MC__ExposureController_GRABBER           =            2;
const
  MC__Category_Timer1_Control              =           19;
const
  MC__Category_Timer2_Control              =           20;
const
  MC__TRG_LTPOL                            =  1369 SHL 14;
const
  MC__TRG_LTPOL_NONE                       =            1;
const
  MC__TRG_LTPOL_DIRECT                     =            2;
const
  MC__TRG_LTPOL_INVERT                     =            3;
const
  MC__TRG_LTFLT                            =  1370 SHL 14;
const
  MC__TRG_LTFLT_NONE                       =            1;
const
  MC__TRG_LTFLT_200ns                      =            2;
const
  MC__TRG_LTFLT_3200ns                     =            3;
const
  MC__TRG_LTSEL                            =  1371 SHL 14;
const
  MC__TRG_LTSEL_DA1                        =            1;
const
  MC__TRG_LTSEL_DA2                        =            2;
const
  MC__TRG_LTSEL_CAMSIG                     =            3;
const
  MC__TRG_LTSEL_TRG                        =            4;
const
  MC_Encoder_Filter                        =  1372 SHL 14;
const
  MC_LineTrigCtl_Filter                    =  1373 SHL 14;
const
  MC_LineTrig_Filter                       =  1374 SHL 14;
const
  MC_Period_Filter                         =  1375 SHL 14;
const
  MC_Perio_Filter                          =  1376 SHL 14;
const
  MC_A1Usage_TRIGGER                       =            3;
const
  MC_A1Usage_LINETRIGGER                   =            4;
const
  MC_A2Usage_TRIGGER                       =            3;
const
  MC_A2Usage_LINETRIGGER                   =            4;
const
  MC__TrigLineNeeded                       =  1377 SHL 14;
const
  MC__TrigLineNeeded_NO                    =            1;
const
  MC__TrigLineNeeded_YES                   =            2;
const
  MC__TrigLine_NONE                        =            3;
const
  MC__TrigLine_DA1                         =            4;
const
  MC__TrigLine_DA2                         =            5;
const
  MC__TrigLine_CAMSIG                      =            6;
const
  MC__TrigLine_TRG                         =            7;
const
  MC__LineTrigLineNeeded                   =  1378 SHL 14;
const
  MC__LineTrigLineNeeded_NO                =            1;
const
  MC__LineTrigLineNeeded_YES               =            2;
const
  MC__LineTrigLine                         =  1379 SHL 14;
const
  MC__LineTrigLine_NONE                    =            3;
const
  MC__LineTrigLine_DA1                     =            4;
const
  MC__LineTrigLine_CAMSIG                  =            5;
const
  MC__LineTrigLine_TRG                     =            6;
const
  MC__StrobeLine                           =  1380 SHL 14;
const
  MC__StrobeLine_NONE                      =            1;
const
  MC__StrobeLine_QA1                       =            2;
const
  MC__StrobeLine_QA2                       =            3;
const
  MC__StrobeLine_STR                       =            4;
const
  MC__Category_System_IO                   =           21;
const
  MC_TRGUsage                              =  1381 SHL 14;
const
  MC_TRGUsage_FREE                         =            1;
const
  MC_TRGUsage_TRIGGER                      =            2;
const
  MC_TRGUsage_LINETRIGGER                  =            3;
const
  MC_TrigCtl_Filter                        =  1382 SHL 14;
const
  MC__TrimmedPeriod_10ns                   =  1383 SHL 14;
const
  MC__PG_10ns                              =  1384 SHL 14;
const
  MC__TrimmedK_1000                        =  1385 SHL 14;
const
  MC__SP_Ideal                             =  1386 SHL 14;
const
  MC_GrabField                             =  1387 SHL 14;
const
  MC_NextGrabField                         =  1388 SHL 14;
const
  MC__PM_Criteria                          =  1389 SHL 14;
const
  MC__PM_Criteria_NORMAL                   =            1;
const
  MC__PM_Criteria_WIDERANGE                =            2;
const
  MC__PM_Criteria_HIGHRESOLUTION           =            3;
const
  MC__K_Criteria                           =  1390 SHL 14;
const
  MC__K_Criteria_NORMAL                    =            1;
const
  MC__K_Criteria_FASTUPDATE                =            2;
const
  MC__K_Criteria_HIGHRESOLUTION            =            3;
const
  MC__Nmin                                 =  1391 SHL 14;
const
  MC__Mmin                                 =  1392 SHL 14;
const
  MC__PSClockFrequency_MHz                 =  1393 SHL 14;
const
  MC__TrimmedPeriod_PSC                    =  1394 SHL 14;
const
  MC__SP_Desired                           =  1395 SHL 14;
const
  MC__TrimmedK_10000                       =  1396 SHL 14;
const
  MC__SEmin_Desired                        =  1397 SHL 14;
const
  MC__Keff_10000                           =  1398 SHL 14;
const
  MC__CPM_PMSDIV_Update                    =  1399 SHL 14;
const
  MC__CPG_PGCNT_Update                     =  1400 SHL 14;
const
  MC__Vactive_Ln                           =  1401 SHL 14;
const
  MC__VCsyncAft_Ln                         =  1402 SHL 14;
const
  MC_GrabField_FLD                         =            1;
const
  MC_GrabField_UP                          =            2;
const
  MC_GrabField_DOWN                        =            3;
const
  MC_GrabField_FRAME                       =            4;
const
  MC_GrabField_UPDW                        =            5;
const
  MC_GrabField_DWUP                        =            6;
const
  MC_GrabField_NONE                        =            7;
const
  MC_NextGrabField_FLD                     =            1;
const
  MC_NextGrabField_UP                      =            2;
const
  MC_NextGrabField_DOWN                    =            3;
const
  MC_NextGrabField_FRAME                   =            4;
const
  MC_NextGrabField_UPDW                    =            5;
const
  MC_NextGrabField_DWUP                    =            6;
const
  MC_NextGrabField_KEEP                    =            7;
const
  MC_NextGrabField_SAME                    =            8;
const
  MC_NextGrabField_CHANGE                  =            9;
const
  MC_INTLoadSet                            =  1403 SHL 14;
const
  MC_MaxSpeed_Max                          =  1404 SHL 14;
const
  MC_MaxSpeed_Min                          =  1405 SHL 14;
const
  MC__RateConverterControl                 =  1406 SHL 14;
const
  MC__RateConverterControl_STANDARD        =            1;
const
  MC__RateConverterControl_EXTENDED        =            2;
const
  MC___Encoder_Check                       =  1407 SHL 14;
const
  MC___Encoder_Check_PASS                  =            1;
const
  MC___Encoder_Check_FAIL                  =            2;
const
  MC__CPG_PGSCAL_Key                       =  1408 SHL 14;
const
  MC__CPG_PGSCAL_Key_Top_Check             =  1409 SHL 14;
const
  MC__CPG_PGSCAL_Key_Top_Check_PASS        =            1;
const
  MC__CPG_PGSCAL_Key_Top_Check_FAIL        =            2;
const
  MC__CPM_PMISCAL_Key                      =  1410 SHL 14;
const
  MC__CPM_PMISCAL_Key_Top_Check            =  1411 SHL 14;
const
  MC__CPM_PMISCAL_Key_Top_Check_PASS       =            1;
const
  MC__CPM_PMISCAL_Key_Top_Check_FAIL       =            2;
const
  MC__CPM_PMSDIV_Top_Check                 =  1412 SHL 14;
const
  MC__CPM_PMSDIV_Top_Check_PASS            =            1;
const
  MC__CPM_PMSDIV_Top_Check_FAIL            =            2;
const
  MC__CPG_PGMOD                            =  1413 SHL 14;
const
  MC__CPG_PGMOD_OFF                        =            1;
const
  MC__CPG_PGMOD_FREE_RUN                   =            2;
const
  MC__CPG_PGMOD_PM_CONTROLLED              =            3;
const
  MC__CPM_PMISCAL                          =  1414 SHL 14;
const
  MC__CPM_PMSDIV                           =  1415 SHL 14;
const
  MC__CPG_PGCNT                            =  1416 SHL 14;
const
  MC__CPG_PGSCAL                           =  1417 SHL 14;
const
  MC__TrimmedK_10000_MAX                   =  1418 SHL 14;
const
  MC__TrimmedK_10000_MIN                   =  1419 SHL 14;
const
  MC__TrimmedKeff_10000                    =  1420 SHL 14;
const
  MC_MaxSpeedEffective                     =  1421 SHL 14;
const
  MC_MaxSpeed_Check_Key                    =  1422 SHL 14;
const
  MC_MaxSpeed_Check                        =  1423 SHL 14;
const
  MC_MaxSpeed_Check_PASS                   =            1;
const
  MC_MaxSpeed_Check_FAIL                   =            2;
const
  MC__TrimmedK_Check_Key                   =  1424 SHL 14;
const
  MC__TrimmedK_Check                       =  1425 SHL 14;
const
  MC__TrimmedK_Check_PASS                  =            1;
const
  MC__TrimmedK_Check_FAIL                  =            2;
const
  MC__SE_Factor_Key                        =  1426 SHL 14;
const
  MC__SE_Factor_Key_Top_Check              =  1427 SHL 14;
const
  MC__SE_Factor_Key_Top_Check_PASS         =            1;
const
  MC__SE_Factor_Key_Top_Check_FAIL         =            2;
const
  MC__SE_Factor                            =  1428 SHL 14;
const
  MC__M_Ratio                              =  1429 SHL 14;
const
  MC__M_Ratio_Top_Check                    =  1430 SHL 14;
const
  MC__M_Ratio_Top_Check_PASS               =            1;
const
  MC__M_Ratio_Top_Check_FAIL               =            2;
const
  MC__SP_Factor_Key                        =  1431 SHL 14;
const
  MC__SP_Factor_Key_Top_Check              =  1432 SHL 14;
const
  MC__SP_Factor_Key_Top_Check_PASS         =            1;
const
  MC__SP_Factor_Key_Top_Check_FAIL         =            2;
const
  MC__SP_Factor                            =  1433 SHL 14;
const
  MC_NextTrigMode_Filter                   =  1434 SHL 14;
const
  MC_MinSpeed_Check                        =  1435 SHL 14;
const
  MC_MinSpeed_Check_PASS                   =            1;
const
  MC_MinSpeed_Check_FAIL                   =            2;
const
  MC___Encoder_Warning_Check               =  1436 SHL 14;
const
  MC___Encoder_Warning_Check_PASS          =            1;
const
  MC___Encoder_Warning_Check_FAIL          =            2;
const
  MC__EncoderMaxSpeed                      =  1437 SHL 14;
const
  MC__EncoderMaxSpeed_Check                =  1438 SHL 14;
const
  MC__EncoderMaxSpeed_Check_PASS           =            1;
const
  MC__EncoderMaxSpeed_Check_FAIL           =            2;
const
  MC__EncoderMinSpeed                      =  1439 SHL 14;
const
  MC__EncoderMinSpeed_Check                =  1440 SHL 14;
const
  MC__EncoderMinSpeed_Check_PASS           =            1;
const
  MC__EncoderMinSpeed_Check_FAIL           =            2;
const
  MC_X_VRSTMID                             =  1441 SHL 14;
const
  MC__SYNC_Line1_Type_BLANK_VRSTMID        =            3;
const
  MC__SYNC_Line4_Type_ACQ_VRSTMID          =            3;
const
  MC__SYNC_Line5_Type_BLANK_VRSTMID        =            3;
const
  MC__SYNC_Line6_Type                      =  1442 SHL 14;
const
  MC__SYNC_Line6_Type_BLANK_VRSTOFF        =            1;
const
  MC__SYNC_Line6_Type_BLANK_VRSTON         =            2;
const
  MC__SYNC_Line6_Type_BLANK_VRSTMID        =            3;
const
  MC__SYNC_Line6_Dur                       =  1443 SHL 14;
const
  MC__SYNC_Line7_Type                      =  1444 SHL 14;
const
  MC__SYNC_Line7_Type_BLANK_VRSTOFF        =            1;
const
  MC__SYNC_Line7_Dur                       =  1445 SHL 14;
const
  MC__SYNC_Line8_Type                      =  1446 SHL 14;
const
  MC__SYNC_Line8_Type_ACQ_VRSTOFF          =            1;
const
  MC__SYNC_Line8_Type_ACQ_VRSTON           =            2;
const
  MC__SYNC_Line8_Type_ACQ_VRSTMID          =            3;
const
  MC__SYNC_Line8_Dur                       =  1447 SHL 14;
const
  MC__SYNC_Line9_Type                      =  1448 SHL 14;
const
  MC__SYNC_Line9_Type_BLANK_VRSTOFF        =            1;
const
  MC__SYNC_Line9_Type_BLANK_VRSTON         =            2;
const
  MC__SYNC_Line9_Type_BLANK_VRSTMID        =            3;
const
  MC__SYNC_Line9_Dur                       =  1449 SHL 14;
const
  MC__MID_Eacq2Vrst_Gap                    =  1450 SHL 14;
const
  MC__MID_Vrst2Bacq_Gap                    =  1451 SHL 14;
const
  MC__SYNC_Line10_Type                     =  1452 SHL 14;
const
  MC__SYNC_Line10_Type_ACQ_VRSTOFF         =            1;
const
  MC__SYNC_Line10_Dur                      =  1453 SHL 14;
const
  MC_MATLoadSet                            =  1454 SHL 14;
const
  MC__K_SP                                 =  1455 SHL 14;
const
  MC__M_SP                                 =  1456 SHL 14;
const
  MC__M_SP_10                              =  1457 SHL 14;
const
  MC__TrimmedK_16384                       =  1458 SHL 14;
const
  MC__K_SP_16384                           =  1459 SHL 14;
const
  MC__TrimmedK_131072                      =  1460 SHL 14;
const
  MC_VCSYNC1                               =  1461 SHL 14;
const
  MC_VCSYNC2                               =  1462 SHL 14;
const
  MC_BACK1                                 =  1463 SHL 14;
const
  MC_BACK2                                 =  1464 SHL 14;
const
  MC__VdriveDur_Ln                         =  1465 SHL 14;
const
  MC__VdriveDly_Ln                         =  1466 SHL 14;
const
  MC__L_16384                              =  1467 SHL 14;
const
  MC__INT_Eacq2Vrst_Gap                    =  1468 SHL 14;
const
  MC__INT_Vrst2Bacq_Gap                    =  1469 SHL 14;
const
  MC__SYNC_Line4_Type_BLANK_VRSTMID        =            4;
const
  MC__INITD1_SELV1                         =  1470 SHL 14;
const
  MC__INT_BEFORE                           =  1471 SHL 14;
const
  MC__INT_CHOIX                            =  1472 SHL 14;
const
  MC__Equalization                         =  1473 SHL 14;
const
  MC_TrigFilter_Filter                     =  1474 SHL 14;
const
  MC__TRG_FTFLT_100ns                      =            4;
const
  MC__TRG_FTFLT_500ns                      =            5;
const
  MC__TRG_FTFLT_2500ns                     =            6;
const
  MC_LineTrigFilter_Filter                 =  1475 SHL 14;
const
  MC__TRG_LTFLT_100ns                      =            4;
const
  MC__TRG_LTFLT_500ns                      =            5;
const
  MC__TRG_LTFLT_2500ns                     =            6;
const
  MC__STM1_T1CLK_EOL                       =            4;
const
  MC__EquaCCIR                             =  1476 SHL 14;
const
  MC_PageModeOnly_Filter                   =  1477 SHL 14;
const
  MC_AllButWebMode_Filter                  =  1478 SHL 14;
const
  MC__IndexField                           =  1479 SHL 14;
const
  MC_Camera_LD3521PGx                      =           61;
const
  MC_Camera_LD3522PGx                      =           62;
const
  MC_Camera_LD3523PGx                      =           63;
const
  MC_Camera_LD3541PGx                      =           64;
const
  MC_Camera_LD3542PGx                      =           65;
const
  MC_Camera_LD3543PGx                      =           66;
const
  MC_Camera_L101k                          =           67;
const
  MC_Camera_L103k                          =           68;
const
  MC_Camera_L104k                          =           69;
const
  MC_Camera_A301bc                         =           70;
const
  MC_CamConfig_L512SP                      =           98;
const
  MC_CamConfig_L1024SP                     =           99;
const
  MC_CamConfig_L2048SP                     =          100;
const
  MC_CamConfig_L1024RC                     =          101;
const
  MC_CamConfig_L1024RG                     =          102;
const
  MC_CamConfig_L2048RG                     =          103;
const
  MC_CamConfig_L2048RC                     =          104;
const
  MC_CamConfig_P80SC                       =          105;
const
  MC_CamConfig_P80RG                       =          106;
const
  MC_Manufacturer_PERKINELMER              =           15;
const
  MC_Camera_L301bc                         =           71;
const
  MC_CamConfig_L2098SP                     =          107;
const
  MC_CamConfig_L2098RC                     =          108;
const
  MC_CamConfig_L2098RG                     =          109;
const
  MC_Camera_L401k                          =           72;
const
  MC_Camera_L402k                          =           73;
const
  MC_Camera_L403k                          =           74;
const
  MC_CamConfig_L4096SP                     =          110;
const
  MC_CamConfig_L4096RC                     =          111;
const
  MC_CamConfig_L4096RG                     =          112;
const
  MC_Camera_P2_2x_06k40                    =           75;
const
  MC_Camera_P2_2x_08k40                    =           76;
const
  MC_CamConfig_L6144SP                     =          113;
const
  MC_CamConfig_L6144RC                     =          114;
const
  MC_CamConfig_L6144RG                     =          115;
const
  MC_CamConfig_L8192SP                     =          116;
const
  MC_CamConfig_L8192RC                     =          117;
const
  MC_CamConfig_L8192RG                     =          118;
const
  MC_Manufacturer_DALSA                    =           16;
const
  MC_CamConfig_L512RG                      =          119;
const
  MC_Camera_AVIIVA                         =           77;
const
  MC_CamConfig_L512RC                      =          120;
const
  MC_Manufacturer_ATMEL                    =           17;
const
  MC_Camera_P2_2x_01k40                    =           78;
const
  MC_Camera_P2_2x_02k40                    =           79;
const
  MC_Camera_P2_2x_04k40                    =           80;
const
  MC_Camera_AVIIVA0514                     =           81;
const
  MC_Camera_AVIIVA1014                     =           82;
const
  MC_Camera_AVIIVA2014                     =           83;
const
  MC_Camera_AVIIVA4010                     =           84;
const
  MC_ChannelTopology_DUALXMID              =           10;
const
  MC_FvalMode_LA                           =            5;
const
  MC_LvalMode_DG                           =            6;
const
  MC__DIS_LALT                             =  1480 SHL 14;
const
  MC__DIS_LALT_NORMAL                      =            1;
const
  MC__DIS_LALT_ALTERNATE                   =            2;
const
  MC__DIS_DALT                             =  1481 SHL 14;
const
  MC__DIS_DALT_NORMAL                      =            1;
const
  MC__DIS_DALT_ALTERNATE                   =            2;
const
  MC_Camera_TI_324A                        =           85;
const
  MC_CamConfig_I60SM                       =          121;
const
  MC_Manufacturer_NEC                      =           18;
const
  MC_CamConfig_P400SM                      =          122;
const
  MC_Camera_CV_A1                          =           86;
const
  MC_CamConfig_P16SA                       =          123;
const
  MC_CamConfig_P16RA                       =          124;
const
  MC_CamConfig_P16RA_G                     =          125;
const
  MC_CamConfig_P16SM                       =          126;
const
  MC_CamConfig_P16RM                       =          127;
const
  MC_CamConfig_P16RM_G                     =          128;
const
  MC_CamConfig_P16SD                       =          129;
const
  MC_CamConfig_P16RD                       =          130;
const
  MC_CamConfig_P16RD_G                     =          131;
const
  MC_Camera_CV_M77                         =           87;
const
  MC_Cable_A15_C17                         =           22;
const
  MC_CableName_Triple_Channel_RG_2         =           22;
const
  MC_CamConfig_P10RG                       =          132;
const
  MC_CamConfig_P10RC                       =          133;
const
  MC__CDC_ISIZE_8BIT                       =            9;
const
  MC__CDC_ISIZE_10BIT                      =           10;
const
  MC__CDC_ISIZE_12BIT                      =           11;
const
  MC__CDC_ISIZE_14BIT                      =           12;
const
  MC__CDC_ISIZE_16BIT                      =           13;
const
  MC__CDC_CLCFG                            =  1482 SHL 14;
const
  MC__CDC_CLCFG_BASE                       =            1;
const
  MC__CDC_CLCFG_MEDIUM                     =            2;
const
  MC__CDC_MTAP                             =  1483 SHL 14;
const
  MC__CDC_MTAP_ONETAP                      =            1;
const
  MC__CDC_MTAP_TWOTAPS                     =            2;
const
  MC__CDC_FSLIC                            =  1484 SHL 14;
const
  MC__CBA_DCEN1                            =  1485 SHL 14;
const
  MC__CBA_DCEN1_ENABLED                    =            1;
const
  MC__CBA_DCEN1_DISABLED                   =            2;
const
  MC__CBA_DCEN2                            =  1486 SHL 14;
const
  MC__CBA_DCEN2_ENABLED                    =            1;
const
  MC__CBA_DCEN2_DISABLED                   =            2;
const
  MC__CBA_DCEN3                            =  1487 SHL 14;
const
  MC__CBA_DCEN3_ENABLED                    =            1;
const
  MC__CBA_DCEN3_DISABLED                   =            2;
const
  MC__CDC_FSLIC_ONE256                     =            1;
const
  MC__CDC_FSLIC_TWO128                     =            2;
const
  MC__CDC_FSLIC_FOUR64                     =            3;
const
  MC__CDC_FSLIC_EIGHT32                    =            4;
const
  MC_TapStructure_TRIPLE_W2                =           16;
const
  MC__W1_INDEX                             =  1488 SHL 14;
const
  MC__W2_INDEX                             =  1489 SHL 14;
const
  MC__W3_INDEX                             =  1490 SHL 14;
const
  MC__W4_INDEX                             =  1491 SHL 14;
const
  MC__GCL_CLCFG                            =  1492 SHL 14;
const
  MC__GCL_CLCFG_BASE                       =            1;
const
  MC__GCL_CLCFG_MEDIUM                     =            2;
const
  MC__AllAssyMask                          =  1493 SHL 14;
const
  MC__UsedAssyMask                         =  1494 SHL 14;
const
  MC_TrigLine_TRX                          =            8;
const
  MC_TrigLine_TRY                          =            9;
const
  MC_TrigLine_TRZ                          =           10;
const
  MC__StrobeLine_QB1                       =            5;
const
  MC__StrobeLine_QB2                       =            6;
const
  MC__StrobeLine_STX                       =            7;
const
  MC__StrobeLine_STY                       =            8;
const
  MC__StrobeLine_STZ                       =            9;
const
  MC_LineTrigLine_TRX                      =            4;
const
  MC_LineTrigLine_TRY                      =            5;
const
  MC_LineTrigLine_TRZ                      =            6;
const
  MC__LineTrigLine_DB1                     =            7;
const
  MC__LineTrigLine_TRX                     =            8;
const
  MC__LineTrigLine_TRY                     =            9;
const
  MC__LineTrigLine_TRZ                     =           10;
const
  MC__TRG_LTSEL_DB1                        =            5;
const
  MC__TRG_LTSEL_TRX                        =            6;
const
  MC__TRG_LTSEL_TRY                        =            7;
const
  MC__TRG_LTSEL_TRZ                        =            8;
const
  MC_TRXUsage                              =  1495 SHL 14;
const
  MC_TRXUsage_FREE                         =            1;
const
  MC_TRXUsage_TRIGGER                      =            2;
const
  MC_TRXUsage_LINETRIGGER                  =            3;
const
  MC_TRYUsage                              =  1496 SHL 14;
const
  MC_TRYUsage_FREE                         =            1;
const
  MC_TRYUsage_TRIGGER                      =            2;
const
  MC_TRYUsage_LINETRIGGER                  =            3;
const
  MC_TRZUsage                              =  1497 SHL 14;
const
  MC_TRZUsage_FREE                         =            1;
const
  MC_TRZUsage_TRIGGER                      =            2;
const
  MC_TRZUsage_LINETRIGGER                  =            3;
const
  MC_STXUsage                              =  1498 SHL 14;
const
  MC_STXUsage_FREE                         =            1;
const
  MC_STXUsage_STROBEX                      =            2;
const
  MC_STXUsage_STROBEY                      =            3;
const
  MC_STYUsage                              =  1499 SHL 14;
const
  MC_STYUsage_FREE                         =            1;
const
  MC_STYUsage_STROBEX                      =            2;
const
  MC_STYUsage_STROBEY                      =            3;
const
  MC_STZUsage                              =  1500 SHL 14;
const
  MC_STZUsage_FREE                         =            1;
const
  MC_STZUsage_STROBEX                      =            2;
const
  MC_STZUsage_STROBEY                      =            3;
const
  MC_B1Usage                               =  1501 SHL 14;
const
  MC_B1Usage_FREE                          =            1;
const
  MC_B1Usage_STROBE                        =            2;
const
  MC_B2Usage                               =  1502 SHL 14;
const
  MC_B2Usage_FREE                          =            1;
const
  MC_B2Usage_STROBE                        =            2;
const
  MC__STR_STR_X_FromSTB_Y                  =            5;
const
  MC__STR_STR_X_FromSTB_Y_Inverted         =            6;
const
  MC__STR_STR_Y                            =  1503 SHL 14;
const
  MC__STR_STR_Y_LOW                        =            1;
const
  MC__STR_STR_Y_HIGH                       =            2;
const
  MC__STR_STR_Y_FromSTB_X                  =            3;
const
  MC__STR_STR_Y_FromSTB_X_Inverted         =            4;
const
  MC__STR_STR_Y_FromSTB_Y                  =            5;
const
  MC__STR_STR_Y_FromSTB_Y_Inverted         =            6;
const
  MC__STR_STR_Z                            =  1504 SHL 14;
const
  MC__STR_STR_Z_LOW                        =            1;
const
  MC__STR_STR_Z_HIGH                       =            2;
const
  MC__STR_STR_Z_FromSTB_X                  =            3;
const
  MC__STR_STR_Z_FromSTB_X_Inverted         =            4;
const
  MC__STR_STR_Z_FromSTB_Y                  =            5;
const
  MC__STR_STR_Z_FromSTB_Y_Inverted         =            6;
const
  MC__TrigLine_CAMSIGA                     =            8;
const
  MC__TrigLine_DB1                         =            9;
const
  MC__TrigLine_DB2                         =           10;
const
  MC__TrigLine_CAMSIGB                     =           11;
const
  MC__TrigLine_TRGX                        =           12;
const
  MC__TrigLine_TRGY                        =           13;
const
  MC__TrigLine_TRGZ                        =           14;
const
  MC__TrigLine_TRX                         =           15;
const
  MC__TrigLine_TRY                         =           16;
const
  MC__TrigLine_TRZ                         =           17;
const
  MC__TRG_FTSEL_D1                         =           10;
const
  MC__TRG_FTSEL_D2                         =           11;
const
  MC__TRG_FTSEL_TRX                        =           12;
const
  MC__TRG_FTSEL_TRY                        =           13;
const
  MC__TRG_FTSEL_TRZ                        =           14;
const
  MC__LineTrigLine_CAMSIGA                 =           11;
const
  MC__LineTrigLine_CAMSIGB                 =           12;
const
  MC__TRG_LTSEL_D1                         =            9;
const
  MC__TRG_LTSEL_D2                         =           10;
const
  MC__CWR_SFA01                            =  1505 SHL 14;
const
  MC__CWR_SFA11                            =  1506 SHL 14;
const
  MC__CWR_SFA02                            =  1507 SHL 14;
const
  MC__CWR_SFA12                            =  1508 SHL 14;
const
  MC__CWR_SFA03                            =  1509 SHL 14;
const
  MC__CWR_SFA13                            =  1510 SHL 14;
const
  MC__CWR_SFA04                            =  1511 SHL 14;
const
  MC__CWR_SFA14                            =  1512 SHL 14;
const
  MC__STARTU4_mw                           =  1513 SHL 14;
const
  MC__STARTD4_mw                           =  1514 SHL 14;
const
  MC__DirX4                                =  1515 SHL 14;
const
  MC__DirY4                                =  1516 SHL 14;
const
  MC__CTA_STEPX4                           =  1517 SHL 14;
const
  MC__CTA_STEPY4                           =  1518 SHL 14;
const
  MC__CWR_WXP1                             =  1519 SHL 14;
const
  MC__CWR_WXP2                             =  1520 SHL 14;
const
  MC__CWR_WXP3                             =  1521 SHL 14;
const
  MC__CWR_WXP4                             =  1522 SHL 14;
const
  MC__CWR_NLA01                            =  1523 SHL 14;
const
  MC__CWR_NLA11                            =  1524 SHL 14;
const
  MC__CWR_NLA02                            =  1525 SHL 14;
const
  MC__CWR_NLA12                            =  1526 SHL 14;
const
  MC__CWR_NLA03                            =  1527 SHL 14;
const
  MC__CWR_NLA13                            =  1528 SHL 14;
const
  MC__CWR_NLA04                            =  1529 SHL 14;
const
  MC__CWR_NLA14                            =  1530 SHL 14;
const
  MC__CWR_NPA01                            =  1531 SHL 14;
const
  MC__CWR_NPA11                            =  1532 SHL 14;
const
  MC__CWR_NPA02                            =  1533 SHL 14;
const
  MC__CWR_NPA12                            =  1534 SHL 14;
const
  MC__CWR_NPA03                            =  1535 SHL 14;
const
  MC__CWR_NPA13                            =  1536 SHL 14;
const
  MC__CWR_NPA04                            =  1537 SHL 14;
const
  MC__CWR_NPA14                            =  1538 SHL 14;
const
  MC__CWR_WYP1                             =  1539 SHL 14;
const
  MC__CWR_WYP2                             =  1540 SHL 14;
const
  MC__CWR_WYP3                             =  1541 SHL 14;
const
  MC__CWR_WYP4                             =  1542 SHL 14;
const
  MC__PITCH4_mw                            =  1543 SHL 14;
const
  MC_Connector_M                           =            8;
const
  MC_Connector_A                           =            9;
const
  MC_Connector_B                           =           10;
const
  MC_ConnectLoc_BOTH                       =            4;
const
  MC___Connector_Check                     =  1544 SHL 14;
const
  MC___Connector_Check_PASS                =            1;
const
  MC___Connector_Check_FAIL                =            2;
const
  MC__CDC_TPG                              =  1545 SHL 14;
const
  MC__CDC_TPG_ENABLE                       =            1;
const
  MC__CDC_TPG_DISABLE                      =            2;
const
  MC__ASSYE11                              =  1546 SHL 14;
const
  MC__ASSYE12                              =  1547 SHL 14;
const
  MC__ASSYE13                              =  1548 SHL 14;
const
  MC__ASSYE14                              =  1549 SHL 14;
const
  MC__ASSYE15                              =  1550 SHL 14;
const
  MC__ASSYE16                              =  1551 SHL 14;
const
  MC__ASSYE17                              =  1552 SHL 14;
const
  MC__ASSYE18                              =  1553 SHL 14;
const
  MC__ASSYE21                              =  1554 SHL 14;
const
  MC__ASSYE22                              =  1555 SHL 14;
const
  MC__ASSYE23                              =  1556 SHL 14;
const
  MC__ASSYE24                              =  1557 SHL 14;
const
  MC__ASSYE25                              =  1558 SHL 14;
const
  MC__ASSYE26                              =  1559 SHL 14;
const
  MC__ASSYE27                              =  1560 SHL 14;
const
  MC__ASSYE28                              =  1561 SHL 14;
const
  MC__ASSYE31                              =  1562 SHL 14;
const
  MC__ASSYE32                              =  1563 SHL 14;
const
  MC__ASSYE33                              =  1564 SHL 14;
const
  MC__ASSYE34                              =  1565 SHL 14;
const
  MC__ASSYE35                              =  1566 SHL 14;
const
  MC__ASSYE36                              =  1567 SHL 14;
const
  MC__ASSYE37                              =  1568 SHL 14;
const
  MC__ASSYE38                              =  1569 SHL 14;
const
  MC__ASSYE41                              =  1570 SHL 14;
const
  MC__ASSYE42                              =  1571 SHL 14;
const
  MC__ASSYE43                              =  1572 SHL 14;
const
  MC__ASSYE44                              =  1573 SHL 14;
const
  MC__ASSYE45                              =  1574 SHL 14;
const
  MC__ASSYE46                              =  1575 SHL 14;
const
  MC__ASSYE47                              =  1576 SHL 14;
const
  MC__ASSYE48                              =  1577 SHL 14;
const
  MC__ASSY41                               =  1578 SHL 14;
const
  MC__ASSY42                               =  1579 SHL 14;
const
  MC__ASSY43                               =  1580 SHL 14;
const
  MC__ASSY44                               =  1581 SHL 14;
const
  MC__ASSYE51                              =  1582 SHL 14;
const
  MC__ASSYE52                              =  1583 SHL 14;
const
  MC__ASSYE53                              =  1584 SHL 14;
const
  MC__ASSYE54                              =  1585 SHL 14;
const
  MC__ASSYE55                              =  1586 SHL 14;
const
  MC__ASSYE56                              =  1587 SHL 14;
const
  MC__ASSYE57                              =  1588 SHL 14;
const
  MC__ASSYE58                              =  1589 SHL 14;
const
  MC__ASSYE61                              =  1590 SHL 14;
const
  MC__ASSYE62                              =  1591 SHL 14;
const
  MC__ASSYE63                              =  1592 SHL 14;
const
  MC__ASSYE64                              =  1593 SHL 14;
const
  MC__ASSYE65                              =  1594 SHL 14;
const
  MC__ASSYE66                              =  1595 SHL 14;
const
  MC__ASSYE67                              =  1596 SHL 14;
const
  MC__ASSYE68                              =  1597 SHL 14;
const
  MC__ASSYE71                              =  1598 SHL 14;
const
  MC__ASSYE72                              =  1599 SHL 14;
const
  MC__ASSYE73                              =  1600 SHL 14;
const
  MC__ASSYE74                              =  1601 SHL 14;
const
  MC__ASSYE75                              =  1602 SHL 14;
const
  MC__ASSYE76                              =  1603 SHL 14;
const
  MC__ASSYE77                              =  1604 SHL 14;
const
  MC__ASSYE78                              =  1605 SHL 14;
const
  MC__ASSYE81                              =  1606 SHL 14;
const
  MC__ASSYE82                              =  1607 SHL 14;
const
  MC__ASSYE83                              =  1608 SHL 14;
const
  MC__ASSYE84                              =  1609 SHL 14;
const
  MC__ASSYE85                              =  1610 SHL 14;
const
  MC__ASSYE86                              =  1611 SHL 14;
const
  MC__ASSYE87                              =  1612 SHL 14;
const
  MC__ASSYE88                              =  1613 SHL 14;
const
  MC__AllMyAssyMask                        =  1614 SHL 14;
const
  MC__c_INDEX                              =  1615 SHL 14;
const
  MC__D5_INDEX                             =  1616 SHL 14;
const
  MC__D6_INDEX                             =  1617 SHL 14;
const
  MC__D7_INDEX                             =  1618 SHL 14;
const
  MC__D8_INDEX                             =  1619 SHL 14;
const
  MC__W5_INDEX                             =  1620 SHL 14;
const
  MC__W6_INDEX                             =  1621 SHL 14;
const
  MC__W7_INDEX                             =  1622 SHL 14;
const
  MC__W8_INDEX                             =  1623 SHL 14;
const
  MC__CWR_SFA05                            =  1624 SHL 14;
const
  MC__CWR_SFA06                            =  1625 SHL 14;
const
  MC__CWR_SFA07                            =  1626 SHL 14;
const
  MC__CWR_SFA08                            =  1627 SHL 14;
const
  MC__CWR_NLA05                            =  1628 SHL 14;
const
  MC__CWR_NLA06                            =  1629 SHL 14;
const
  MC__CWR_NLA07                            =  1630 SHL 14;
const
  MC__CWR_NLA08                            =  1631 SHL 14;
const
  MC__CWR_WYP5                             =  1632 SHL 14;
const
  MC__CWR_WYP6                             =  1633 SHL 14;
const
  MC__CWR_WYP7                             =  1634 SHL 14;
const
  MC__CWR_WYP8                             =  1635 SHL 14;
const
  MC__PITCH5_mw                            =  1636 SHL 14;
const
  MC__PITCH6_mw                            =  1637 SHL 14;
const
  MC__PITCH7_mw                            =  1638 SHL 14;
const
  MC__PITCH8_mw                            =  1639 SHL 14;
const
  MC__STARTU5_mw                           =  1640 SHL 14;
const
  MC__STARTU6_mw                           =  1641 SHL 14;
const
  MC__STARTU7_mw                           =  1642 SHL 14;
const
  MC__STARTU8_mw                           =  1643 SHL 14;
const
  MC__DirX5                                =  1644 SHL 14;
const
  MC__DirX6                                =  1645 SHL 14;
const
  MC__DirX7                                =  1646 SHL 14;
const
  MC__DirX8                                =  1647 SHL 14;
const
  MC__DirY5                                =  1648 SHL 14;
const
  MC__DirY6                                =  1649 SHL 14;
const
  MC__DirY7                                =  1650 SHL 14;
const
  MC__DirY8                                =  1651 SHL 14;
const
  MC__CWR_NPA05                            =  1652 SHL 14;
const
  MC__CWR_NPA06                            =  1653 SHL 14;
const
  MC__CWR_NPA07                            =  1654 SHL 14;
const
  MC__CWR_NPA08                            =  1655 SHL 14;
const
  MC__CWR_WXP5                             =  1656 SHL 14;
const
  MC__CWR_WXP6                             =  1657 SHL 14;
const
  MC__CWR_WXP7                             =  1658 SHL 14;
const
  MC__CWR_WXP8                             =  1659 SHL 14;
const
  MC__CBA_PSHIFT5                          =  1660 SHL 14;
const
  MC__CBA_PSHIFT6                          =  1661 SHL 14;
const
  MC__CBA_PSHIFT7                          =  1662 SHL 14;
const
  MC__CBA_PSHIFT8                          =  1663 SHL 14;
const
  MC__PSHIFT                               =  1664 SHL 14;
const
  MC__MTAP                                 =  1665 SHL 14;
const
  MC_ChannelTopology_OCTALXTAP             =           11;
const
  MC__ASSY_EIGHT                           =            5;
const
  MC__WIC_EIGHT                            =            5;
const
  MC_Camera_XC_ST50CE                      =           88;
const
  MC_CamConfig_I50SM                       =          134;
const
  MC_Camera_CS8550D                        =           89;
const
  MC_CamConfig_I120SM                      =          135;
const
  MC_Cable_A15_C18                         =           23;
const
  MC_CableName_Single_Channel_RGC_B        =           23;
const
  MC__W_STEP                               =  1666 SHL 14;
const
  MC__WSTEP                                =  1667 SHL 14;
const
  MC__FBL_FBLIMIT                          =  1668 SHL 14;
const
  MC__FBSIZE                               =  1669 SHL 14;
const
  MC_Camera_L301kc                         =           90;
const
  MC_Camera_XC_ST70CE                      =           91;
const
  MC_ChannelTopology_QUADXPAIRTAP          =           12;
const
  MC_ChannelTopology_QUADXPAIREND          =           13;
const
  MC_ChannelTopology_QUADXPAIRMID          =           14;
const
  MC__Live                                 =  1670 SHL 14;
const
  MC__CPHASE1                              =  1671 SHL 14;
const
  MC__CPHASE2                              =  1672 SHL 14;
const
  MC__CPHASE3                              =  1673 SHL 14;
const
  MC__CPHASE4                              =  1674 SHL 14;
const
  MC__CPHASE5                              =  1675 SHL 14;
const
  MC__CPHASE6                              =  1676 SHL 14;
const
  MC__CPHASE7                              =  1677 SHL 14;
const
  MC__CPHASE8                              =  1678 SHL 14;
const
  MC_TapStructure_QUAD_W2                  =           17;
const
  MC__WMAX                                 =  1679 SHL 14;
const
  MC__D1_WINDEX                            =  1680 SHL 14;
const
  MC__D2_WINDEX                            =  1681 SHL 14;
const
  MC__D3_WINDEX                            =  1682 SHL 14;
const
  MC__D4_WINDEX                            =  1683 SHL 14;
const
  MC__D5_WINDEX                            =  1684 SHL 14;
const
  MC__D6_WINDEX                            =  1685 SHL 14;
const
  MC__D7_WINDEX                            =  1686 SHL 14;
const
  MC__D8_XINDEX                            =  1687 SHL 14;
const
  MC__D8_WINDEX                            =  1688 SHL 14;
const
  MC__VLC_OVRALIGN                         =  1689 SHL 14;
const
  MC__VLC_OVRALIGN_ONELINE                 =            1;
const
  MC__VLC_OVRALIGN_SIXTEENLINES            =            2;
const
  MC_Camera_P2_4x_06k40                    =           92;
const
  MC_Camera_P2_4x_04k40                    =           93;
const
  MC_Camera_P2_4x_08k40                    =           94;
const
  MC__Category_Board_Selection             =           22;
const
  MC__Category_Input_Output_Control        =           23;
const
  MC_InputConfig___17                      =  1690 SHL 14;
const
  MC_InputFunction___17                    =  1691 SHL 14;
const
  MC_InputState___17                       =  1692 SHL 14;
const
  MC_InputStyle___17                       =  1693 SHL 14;
const
  MC_OutputConfig___17                     =  1694 SHL 14;
const
  MC_OutputFunction___17                   =  1695 SHL 14;
const
  MC_OutputState___17                      =  1696 SHL 14;
const
  MC_OutputStyle___17                      =  1697 SHL 14;
const
  MC_InputOwner___17                       =  1698 SHL 14;
const
  MC_OutputOwner___17                      =  1699 SHL 14;
const
  MC_Camera_A102k                          =           95;
const
  MC_TimUnitN_PLL                          =  1700 SHL 14;
const
  MC_TimUnitN_PLL_NONE                     =            1;
const
  MC_TimUnitN_PLL_NEEDED                   =            2;
const
  MC_TimUnitN_DetV                         =  1701 SHL 14;
const
  MC_TimUnitN_DetV_NONE                    =            1;
const
  MC_TimUnitN_DetV_NEEDED                  =            2;
const
  MC_TimUnitN_DetP                         =  1702 SHL 14;
const
  MC_TimUnitN_DetP_NONE                    =            1;
const
  MC_TimUnitN_DetP_NEEDED                  =            2;
const
  MC_TimUnitN_ClockSynth                   =  1703 SHL 14;
const
  MC_TimUnitN_ClockSynth_NONE              =            1;
const
  MC_TimUnitN_ClockSynth_NEEDED            =            2;
const
  MC_TimUnitNUsage                         =  1704 SHL 14;
const
  MC_TimUnitNUsage_UNUSED                  =            1;
const
  MC_TimUnitNUsage_EXCLUSIVE               =            2;
const
  MC_TimUnitNUsage_SHARED                  =            3;
const
  MC__TRG_FTPOL                            =  1705 SHL 14;
const
  MC__TRG_FTPOL_DIRECT                     =            4;
const
  MC__TRG_FTPOL_INVERT                     =            5;
const
  MC__TRG_FFTA                             =  1706 SHL 14;
const
  MC__TRG_FFTA_YES                         =            1;
const
  MC__TRG_FFTA_NO                          =            2;
const
  MC__TRG_NFTA                             =  1707 SHL 14;
const
  MC__TRG_NFTA_YES                         =            1;
const
  MC__TRG_NFTA_NO                          =            2;
const
  MC__TRG_FTSS                             =  1708 SHL 14;
const
  MC__TRG_FTSS_YES                         =            1;
const
  MC__TRG_FTSS_NO                          =            2;
const
  MC_CamConfig_P60RD_G                     =          136;
const
  MC__BoardType__STREAM                    =            5;
const
  MC__BoardType__CLASSIC                   =            6;
const
  MC_MY_PARAMETER                          =  1709 SHL 14;
const
  MC_MY_PARAMETER_YES                      =            1;
const
  MC_MY_PARAMETER_NO                       =            2;
const
  MC_Camera_TM_9701                        =           96;
const
  MC_Cable_A15_C19                         =           24;
const
  MC_CableName_Single_Channel_R_D          =           24;
const
  MC_Camera_KP_F2B                         =           97;
const
  MC_Camera_DT4100                         =           98;
const
  MC_CamConfig_P10SC                       =          137;
const
  MC_Manufacturer_DUNCANTECH               =           19;
const
  MC_Camera_SKC_141                        =           99;
const
  MC_CamConfig_P15SA                       =          138;
const
  MC_CamConfig_P15SM                       =          139;
const
  MC_CamConfig_P15RA                       =          140;
const
  MC_CamConfig_P15RM                       =          141;
const
  MC_CamConfig_P15SD                       =          142;
const
  MC_CamConfig_P15RD                       =          143;
const
  MC_Camera_XC_7500                        =          100;
const
  MC__VerticalSyncMode_MASTER_V            =            4;
const
  MC__VerticalSyncMode_MASTER_R            =            5;
const
  MC__VerticalSyncMode_MASTER_A            =            6;
const
  MC__VerticalSyncMode_FAIL                =            7;
const
  MC___VerticalSyncMode_Check              =  1710 SHL 14;
const
  MC___VerticalSyncMode_Check_PASS         =            1;
const
  MC___VerticalSyncMode_Check_FAIL         =            2;
const
  MC_CamConfig_P60RM_R                     =          144;
const
  MC_Camera_Std_BW_CCIR                    =          101;
const
  MC_Camera_Std_BW_EIA                     =          102;
const
  MC_Camera_Std_RGB_CCIR                   =          103;
const
  MC_Camera_Std_RGB_EIA                    =          104;
const
  MC_Manufacturer_STANDARD_CAMERAS         =           20;
const
  MC_Camera_KP_M32P                        =          105;
const
  MC_Camera_CV_M7CLp                       =          106;
const
  MC__MSP                                  =  1711 SHL 14;
const
  MC__MSP_100                              =  1712 SHL 14;
const
  MC_Camera_XC_ST50                        =          107;
const
  MC_ColorStorage                          =  1713 SHL 14;
const
  MC_ColorStorage_PACKED                   =            1;
const
  MC_Expose_Fld                            =  1714 SHL 14;
const
  MC__STR_STR_X_HOLD                       =            7;
const
  MC__STR_STR_Y_HOLD                       =            7;
const
  MC__STR_STR_Z_HOLD                       =            7;
const
  MC_Camera_InterlaceFR                    =          108;
const
  MC_Camera_ProgressiveFR                  =          109;
const
  MC_Camera_LongExposeFR                   =          110;
const
  MC_Camera_GrabberExposeAR                =          111;
const
  MC_Camera_CameraExposeAR                 =          112;
const
  MC_CamConfig_IxxSA                       =          145;
const
  MC_CamConfig_IxxSM                       =          146;
const
  MC_CamConfig_PxxSA                       =          147;
const
  MC_CamConfig_PxxSD                       =          148;
const
  MC_CamConfig_PxxSM                       =          149;
const
  MC_CamConfig_IxxSM_L                     =          150;
const
  MC_CamConfig_PxxSM_L                     =          151;
const
  MC_CamConfig_PxxRA                       =          152;
const
  MC_CamConfig_PxxRA_D                     =          153;
const
  MC_CamConfig_PxxRA_M                     =          154;
const
  MC_CamConfig_PxxRD                       =          155;
const
  MC_CamConfig_PxxRM_A                     =          156;
const
  MC_CamConfig_PxxRM_D                     =          157;
const
  MC_CamConfig_PxxRM_1                     =          158;
const
  MC_CamConfig_PxxRM_2                     =          159;
const
  MC_Cable_A15_C00                         =           25;
const
  MC_CableName_My_Cable                    =           25;
const
  MC_VSyncMode                             =  1715 SHL 14;
const
  MC_VSyncMode_UNKNOWN                     =            1;
const
  MC_VSyncMode_MASTER                      =            2;
const
  MC_VSyncMode_ANALOG                      =            3;
const
  MC_VSyncMode_DIGITAL                     =            4;
const
  MC___Individual_Check                    =  1716 SHL 14;
const
  MC___Individual_Check_PASS               =            1;
const
  MC___Individual_Check_FAIL               =            2;
const
  MC_Camera_1600m                          =          113;
const
  MC_CamConfig_P33SC                       =          160;
const
  MC_CamConfig_P33RG                       =          161;
const
  MC__DRS_PPOL                             =  1717 SHL 14;
const
  MC__DRS_PPOL_DIRECT                      =            1;
const
  MC__DRS_PPOL_INVERT                      =            2;
const
  MC_ColorStorage_PLANAR                   =            2;
const
  MC_ImagePlaneCount                       =  1718 SHL 14;
const
  MC_FifoOrdering                          =  1719 SHL 14;
const
  MC_FifoOrdering_PROGRESSIVE              =            1;
const
  MC_FifoOrdering_INTERLACEDFIELD          =            2;
const
  MC_FifoOrdering_DUALYEND                 =            3;
const
  MC__DRS_PSRC                             =  1720 SHL 14;
const
  MC__DRS_PSRC_SPARE                       =            1;
const
  MC__DRS_PSRC_LVAL                        =            2;
const
  MC__DRS_PSRC_DVAL                        =            3;
const
  MC__DRS_PPOL_NONE                        =            3;
const
  MC_ParityDetection                       =  1721 SHL 14;
const
  MC_ParityDetection_NONE                  =            1;
const
  MC_ParityDetection_FI_SPARE              =            2;
const
  MC_ParityDetection_FI_SPARE_INV          =            3;
const
  MC_ParityDetection_FIXEDFRAME            =            4;
const
  MC_ParityDetection_FIXEDFRAME_INV        =            5;
const
  MC__DRS_PSRC_NONE                        =            4;
const
  MC_ParityDetection_FI_LVAL               =            6;
const
  MC_ParityDetection_FI_LVAL_INV           =            7;
const
  MC_ParityDetection_FI_DVAL               =            8;
const
  MC_ParityDetection_FI_DVAL_INV           =            9;
const
  MC__Category_Cluster                     =           24;
const
  MC_GrabField_Filter                      =  1722 SHL 14;
const
  MC__SSC_HR70                             =            6;
const
  MC_Camera_XC_HR70                        =          114;
const
  MC_CamConfig_P30RM_2                     =          162;
const
  MC_CamConfig_P30RA_D                     =          163;
const
  MC_PixelBurst                            =  1723 SHL 14;
const
  MC_FifoSizeX                             =  1724 SHL 14;
const
  MC_FifoSizeY                             =  1725 SHL 14;
const
  MC_ImageSizingX                          =  1726 SHL 14;
const
  MC_ImageSizingX_FIXED                    =            1;
const
  MC_ImageSizingY                          =  1727 SHL 14;
const
  MC_ImageSizingY_FIXED                    =            1;
const
  MC_ImageSizingY_VARIABLE                 =            2;
const
  MC_CamConfig_P60RA_D                     =          164;
const
  MC_CamConfig_P60RM_D                     =          165;
const
  MC_CamConfig_P120RM_D                    =          166;
const
  MC_CamConfig_P106RM_D                    =          167;
const
  MC_CableName_Single_Channel_RG           =           26;
const
  MC__CWI_CWI                              =  1728 SHL 14;
const
  MC_CamConfig_P106SM                      =          168;
const
  MC__BoardType__ALPHA_cPCI                =            7;
const
  MC__BoardType__ALPHA_EV                  =            8;
const
  MC__AssyType                             =  1729 SHL 14;
const
  MC__AssyType__ALPHA                      =            1;
const
  MC__AssyType__GAMMA                      =            2;
const
  MC_GrabberConfig_0_0_1_1                 =            8;
const
  MC_GrabberConfig_0_1_1_0                 =            9;
const
  MC_GrabberConfig_1_0_0_1                 =           10;
const
  MC_GrabberConfig_1_1_0_0                 =           11;
const
  MC_MapTimCon_TXYXY                       =            9;
const
  MC_Connector_CAM0                        =           11;
const
  MC_Connector_CAM1                        =           12;
const
  MC_Connector_CAM2                        =           13;
const
  MC_Connector_CAM3                        =           14;
const
  MC_ConnectLoc_RIGHTMOST                  =            5;
const
  MC_ConnectLoc_MIDDLERIGHT                =            6;
const
  MC_ConnectLoc_MIDDLELEFT                 =            7;
const
  MC_ConnectLoc_LEFTMOST                   =            8;
const
  MC_TimUnit_DetP                          =  1730 SHL 14;
const
  MC_TimUnit_DetP_NONE                     =            1;
const
  MC_TimUnit_DetP_NEEDED                   =            2;
const
  MC_TimUnit_PLL                           =  1731 SHL 14;
const
  MC_TimUnit_PLL_NONE                      =            1;
const
  MC_TimUnit_PLL_NEEDED                    =            2;
const
  MC_TimUnit_DetV                          =  1732 SHL 14;
const
  MC_TimUnit_DetV_NONE                     =            1;
const
  MC_TimUnit_DetV_NEEDED                   =            2;
const
  MC_Camera_TM_6710CL                      =          115;
const
  MC_CamConfig_P120SC                      =          169;
const
  MC_CamConfig_P120RG                      =          170;
const
  MC_InputConfig                           =  1733 SHL 14;
const
  MC_InputConfig_SOFT                      =            1;
const
  MC_InputConfig_FREE                      =            2;
const
  MC_InputFunction                         =  1734 SHL 14;
const
  MC_InputState                            =  1735 SHL 14;
const
  MC_InputStyle                            =  1736 SHL 14;
const
  MC_NullSet_Enum_Filter                   =  1737 SHL 14;
const
  MC_InputStyle_TTL_Only_Filter            =  1738 SHL 14;
const
  MC_InputStyle_InsulatedIO_Filter         =  1739 SHL 14;
const
  MC_OutputConfig                          =  1740 SHL 14;
const
  MC_OutputFunction                        =  1741 SHL 14;
const
  MC_OutputState                           =  1742 SHL 14;
const
  MC_OutputState_NONE_Only_Filter          =  1743 SHL 14;
const
  MC_FullSet_Enum_Filter                   =  1744 SHL 14;
const
  MC_OutputState_STX                       =  1745 SHL 14;
const
  MC_OutputState_STX_HOLD                  =            1;
const
  MC_OutputState_STX_LOW                   =            2;
const
  MC_OutputState_STX_HIGH                  =            3;
const
  MC_OutputState_STY                       =  1746 SHL 14;
const
  MC_OutputState_STY_HOLD                  =            1;
const
  MC_OutputState_STY_LOW                   =            2;
const
  MC_OutputState_STY_HIGH                  =            3;
const
  MC_OutputState_STZ                       =  1747 SHL 14;
const
  MC_OutputState_STZ_HOLD                  =            1;
const
  MC_OutputState_STZ_LOW                   =            2;
const
  MC_OutputState_STZ_HIGH                  =            3;
const
  MC_OutputStyle                           =  1748 SHL 14;
const
  MC_OutputStyle_TTL_Only_Filter           =  1749 SHL 14;
const
  MC_OutputStyle_InsulatedIO_Filter        =  1750 SHL 14;
const
  MC_OutputState_OUT1                      =  1751 SHL 14;
const
  MC_OutputState_OUT1_HOLD                 =            1;
const
  MC_OutputState_OUT1_LOW                  =            2;
const
  MC_OutputState_OUT1_HIGH                 =            3;
const
  MC_OutputState_OUT2                      =  1752 SHL 14;
const
  MC_OutputState_OUT2_HOLD                 =            1;
const
  MC_OutputState_OUT2_LOW                  =            2;
const
  MC_OutputState_OUT2_HIGH                 =            3;
const
  MC_OutputState_OUT3                      =  1753 SHL 14;
const
  MC_OutputState_OUT3_HOLD                 =            1;
const
  MC_OutputState_OUT3_LOW                  =            2;
const
  MC_OutputState_OUT3_HIGH                 =            3;
const
  MC_OutputState_OUT4                      =  1754 SHL 14;
const
  MC_OutputState_OUT4_HOLD                 =            1;
const
  MC_OutputState_OUT4_LOW                  =            2;
const
  MC_OutputState_OUT4_HIGH                 =            3;
const
  MC_OutputState_STR_X                     =  1755 SHL 14;
const
  MC_OutputState_STR_X_HOLD                =            1;
const
  MC_OutputState_STR_X_LOW                 =            2;
const
  MC_OutputState_STR_X_HIGH                =            3;
const
  MC_OutputState_InsulatedIO_Filter        =  1756 SHL 14;
const
  MC_OutputState_A1                        =  1757 SHL 14;
const
  MC_OutputState_A1_HOLD                   =            1;
const
  MC_OutputState_A1_LOW                    =            2;
const
  MC_OutputState_A1_HIGH                   =            3;
const
  MC_OutputState_A2                        =  1758 SHL 14;
const
  MC_OutputState_A2_HOLD                   =            1;
const
  MC_OutputState_A2_LOW                    =            2;
const
  MC_OutputState_A2_HIGH                   =            3;
const
  MC_Camera_TM_2016_8CL                    =          116;
const
  MC_CamConfig_P08SC                       =          171;
const
  MC_CamConfig_P08RG                       =          172;
const
  MC_CamConfig_P8SC                        =          173;
const
  MC_CamConfig_P8RG                        =          174;
const
  MC__INITD2_SELV2                         =  1759 SHL 14;
const
  MC__INITD3_SELV3                         =  1760 SHL 14;
const
  MC_GrabberConfig_2_00                    =           12;
const
  MC_GrabberConfig_10_10                   =           13;
const
  MC_GrabberConfig_10_01                   =           14;
const
  MC_GrabberConfig_01_10                   =           15;
const
  MC_GrabberConfig_11_00                   =           16;
const
  MC_GrabberConfig_0_11                    =           17;
const
  MC_GrabberConfig_00_11                   =           18;
const
  MC_GrabberConfig_01_01                   =           19;
const
  MC_NextInputState                        =  1761 SHL 14;
const
  MC_NextInputState_LOW                    =            1;
const
  MC_NextInputState_HIGH                   =            2;
const
  MC_Camera_KP_F120CL                      =          117;
const
  MC_Camera_KP120CL                        =          118;
const
  MC_InputStyle_CMOS_Only_Filter           =  1762 SHL 14;
const
  MC_InputStyle_CHANNELLINK_Filter         =  1763 SHL 14;
const
  MC_OutputStyle_OC_Only_Filter            =  1764 SHL 14;
const
  MC_OutputState_1                         =  1765 SHL 14;
const
  MC_OutputState_1_HOLD                    =            1;
const
  MC_OutputState_1_LOW                     =            2;
const
  MC_OutputState_1_HIGH                    =            3;
const
  MC_OutputState_2                         =  1766 SHL 14;
const
  MC_OutputState_2_HOLD                    =            1;
const
  MC_OutputState_2_LOW                     =            2;
const
  MC_OutputState_2_HIGH                    =            3;
const
  MC_OutputState_3                         =  1767 SHL 14;
const
  MC_OutputState_3_HOLD                    =            1;
const
  MC_OutputState_3_LOW                     =            2;
const
  MC_OutputState_3_HIGH                    =            3;
const
  MC_OutputState_4                         =  1768 SHL 14;
const
  MC_OutputState_4_HOLD                    =            1;
const
  MC_OutputState_4_LOW                     =            2;
const
  MC_OutputState_4_HIGH                    =            3;
const
  MC_OutputState_5                         =  1769 SHL 14;
const
  MC_OutputState_5_HOLD                    =            1;
const
  MC_OutputState_5_LOW                     =            2;
const
  MC_OutputState_5_HIGH                    =            3;
const
  MC_OutputState_6                         =  1770 SHL 14;
const
  MC_OutputState_6_HOLD                    =            1;
const
  MC_OutputState_6_LOW                     =            2;
const
  MC_OutputState_6_HIGH                    =            3;
const
  MC_OutputState_7                         =  1771 SHL 14;
const
  MC_OutputState_7_HOLD                    =            1;
const
  MC_OutputState_7_LOW                     =            2;
const
  MC_OutputState_7_HIGH                    =            3;
const
  MC_OutputState_8                         =  1772 SHL 14;
const
  MC_OutputState_8_HOLD                    =            1;
const
  MC_OutputState_8_LOW                     =            2;
const
  MC_OutputState_8_HIGH                    =            3;
const
  MC_OutputState_9                         =  1773 SHL 14;
const
  MC_OutputState_9_HOLD                    =            1;
const
  MC_OutputState_9_LOW                     =            2;
const
  MC_OutputState_9_HIGH                    =            3;
const
  MC_OutputState_10                        =  1774 SHL 14;
const
  MC_OutputState_10_HOLD                   =            1;
const
  MC_OutputState_10_LOW                    =            2;
const
  MC_OutputState_10_HIGH                   =            3;
const
  MC_OutputState_11                        =  1775 SHL 14;
const
  MC_OutputState_11_HOLD                   =            1;
const
  MC_OutputState_11_LOW                    =            2;
const
  MC_OutputState_11_HIGH                   =            3;
const
  MC_OutputState_12                        =  1776 SHL 14;
const
  MC_OutputState_12_HOLD                   =            1;
const
  MC_OutputState_12_LOW                    =            2;
const
  MC_OutputState_12_HIGH                   =            3;
const
  MC_OutputState_13                        =  1777 SHL 14;
const
  MC_OutputState_13_HOLD                   =            1;
const
  MC_OutputState_13_LOW                    =            2;
const
  MC_OutputState_13_HIGH                   =            3;
const
  MC_OutputState_14                        =  1778 SHL 14;
const
  MC_OutputState_14_HOLD                   =            1;
const
  MC_OutputState_14_LOW                    =            2;
const
  MC_OutputState_14_HIGH                   =            3;
const
  MC_OutputState_15                        =  1779 SHL 14;
const
  MC_OutputState_15_HOLD                   =            1;
const
  MC_OutputState_15_LOW                    =            2;
const
  MC_OutputState_15_HIGH                   =            3;
const
  MC_OutputState_16                        =  1780 SHL 14;
const
  MC_OutputState_16_HOLD                   =            1;
const
  MC_OutputState_16_LOW                    =            2;
const
  MC_OutputState_16_HIGH                   =            3;
const
  MC_OutputState_17                        =  1781 SHL 14;
const
  MC_OutputState_17_HOLD                   =            1;
const
  MC_OutputState_17_LOW                    =            2;
const
  MC_OutputState_17_HIGH                   =            3;
const
  MC_OutputState_18                        =  1782 SHL 14;
const
  MC_OutputState_18_HOLD                   =            1;
const
  MC_OutputState_18_LOW                    =            2;
const
  MC_OutputState_18_HIGH                   =            3;
const
  MC_OutputState_19                        =  1783 SHL 14;
const
  MC_OutputState_19_HOLD                   =            1;
const
  MC_OutputState_19_LOW                    =            2;
const
  MC_OutputState_19_HIGH                   =            3;
const
  MC_OutputState_28                        =  1784 SHL 14;
const
  MC_OutputState_28_HOLD                   =            1;
const
  MC_OutputState_28_LOW                    =            2;
const
  MC_OutputState_28_HIGH                   =            3;
const
  MC_OutputState_29                        =  1785 SHL 14;
const
  MC_OutputState_29_HOLD                   =            1;
const
  MC_OutputState_29_LOW                    =            2;
const
  MC_OutputState_29_HIGH                   =            3;
const
  MC_OutputState_38                        =  1786 SHL 14;
const
  MC_OutputState_38_HOLD                   =            1;
const
  MC_OutputState_38_LOW                    =            2;
const
  MC_OutputState_38_HIGH                   =            3;
const
  MC_OutputState_39                        =  1787 SHL 14;
const
  MC_OutputState_39_HOLD                   =            1;
const
  MC_OutputState_39_LOW                    =            2;
const
  MC_OutputState_39_HIGH                   =            3;
const
  MC_Camera_PAL                            =          119;
const
  MC_Camera_NTSC                           =          120;
const
  MC_TapStructure_SINGLE_C                 =           18;
const
  MC_TapStructure_SINGLE_S                 =           19;
const
  MC_DataLink_COMPOSITE                    =            3;
const
  MC_Standard_PAL                          =            3;
const
  MC_Standard_NTSC                         =            4;
const
  MC_Standard_SECAM                        =            5;
const
  MC_Hsquare_Px                            =  1788 SHL 14;
const
  MC_TrigMode_PAUSE                        =            9;
const
  MC_NextTrigMode_IMMEDIATE                =            6;
const
  MC_NextTrigMode_PAUSE                    =            7;
const
  MC_NextTrigMode_TIMER                    =            8;
const
  MC_Delay_ms                              =  1789 SHL 14;
const
  MC_NextDelay_ms                          =  1790 SHL 14;
const
  MC_TrigEdge_HIGH                         =            3;
const
  MC_TrigEdge_LOW                          =            4;
const
  MC_TrigLine_IO                           =           11;
const
  MC_TrigIO                                =  1791 SHL 14;
const
  MC_StrobeLine_IO                         =            7;
const
  MC_StrobeIO                              =  1792 SHL 14;
const
  MC_Connector_VID1_COMP                   =           15;
const
  MC_Connector_VID2_COMP                   =           16;
const
  MC_Connector_VID3_COMP                   =           17;
const
  MC_Connector_VID4_COMP                   =           18;
const
  MC_PixelFormat                           =  1793 SHL 14;
const
  MC_PixelFormat_RGB32                     =            1;
const
  MC_PixelFormat_RGB24                     =            2;
const
  MC_PixelFormat_RGB16                     =            3;
const
  MC_PixelFormat_RGB15                     =            4;
const
  MC_PixelFormat_YUV2                      =            5;
const
  MC_PixelFormat_Y8                        =            6;
const
  MC_PixelFormat_TGB8                      =            7;
const
  MC_PixelFormat_RAW8                      =            8;
const
  MC_OutputState__xx_                      =  1794 SHL 14;
const
  MC_OutputState__xx__HOLD                 =            1;
const
  MC_OutputState__xx__LOW                  =            2;
const
  MC_OutputState__xx__HIGH                 =            3;
const
  MC_InputStyle_InsulatedIO_Only_Filter    =  1795 SHL 14;
const
  MC_InputPinName                          =  1796 SHL 14;
const
  MC_InputPinName_UNKNOWN                  =            1;
const
  MC_InputPinName_IN1                      =            2;
const
  MC_InputPinName_IN2                      =            3;
const
  MC_InputPinName_IN3                      =            4;
const
  MC_InputPinName_IN4                      =            5;
const
  MC_InputPinName_TRX                      =            6;
const
  MC_InputPinName_TRY                      =            7;
const
  MC_InputPinName_TRZ                      =            8;
const
  MC_InputPinName_CK                       =            9;
const
  MC_InputPinName_RST                      =           10;
const
  MC_InputPinName_HIO                      =           11;
const
  MC_InputPinName_GATE                     =           12;
const
  MC_InputPinName_VIO                      =           13;
const
  MC_InputPinName_EXP                      =           14;
const
  MC_InputConnectorName                    =  1797 SHL 14;
const
  MC_InputConnectorName_UNKNOWN            =            1;
const
  MC_InputConnectorName_TR_ST              =            2;
const
  MC_InputConnectorName_CAMX               =            3;
const
  MC_InputConnectorName_CAMY               =            4;
const
  MC_InputConnectorName_CAMZ               =            5;
const
  MC_InputConnectorName_PIO                =            6;
const
  MC_OutputPinName                         =  1798 SHL 14;
const
  MC_OutputPinName_UNKNOWN                 =            1;
const
  MC_OutputPinName_OUT1                    =            2;
const
  MC_OutputPinName_OUT2                    =            3;
const
  MC_OutputPinName_OUT3                    =            4;
const
  MC_OutputPinName_OUT4                    =            5;
const
  MC_OutputPinName_STX                     =            6;
const
  MC_OutputPinName_STY                     =            7;
const
  MC_OutputPinName_STZ                     =            8;
const
  MC_OutputConnectorName                   =  1799 SHL 14;
const
  MC_OutputConnectorName_UNKNOWN           =            1;
const
  MC_OutputConnectorName_TR_ST             =            2;
const
  MC_OutputConnectorName_CAMX              =            3;
const
  MC_OutputConnectorName_CAMY              =            4;
const
  MC_OutputConnectorName_CAMZ              =            5;
const
  MC_OutputConnectorName_PIO               =            6;
const
  MC_InputPinName_IO1                      =           15;
const
  MC_InputPinName_IO2                      =           16;
const
  MC_InputPinName_IO3                      =           17;
const
  MC_InputPinName_IO4                      =           18;
const
  MC_InputPinName_IO5                      =           19;
const
  MC_InputPinName_IO6                      =           20;
const
  MC_InputPinName_IO7                      =           21;
const
  MC_InputPinName_IO8                      =           22;
const
  MC_InputPinName_IO9                      =           23;
const
  MC_InputPinName_IO10                     =           24;
const
  MC_InputPinName_IO11                     =           25;
const
  MC_InputPinName_IO12                     =           26;
const
  MC_InputPinName_IO13                     =           27;
const
  MC_InputPinName_IO14                     =           28;
const
  MC_InputPinName_IO15                     =           29;
const
  MC_InputPinName_IO16                     =           30;
const
  MC_InputPinName_TRG                      =           31;
const
  MC_InputPinName_A1                       =           32;
const
  MC_InputPinName_B1                       =           33;
const
  MC_InputPinName_A2                       =           34;
const
  MC_InputPinName_B2                       =           35;
const
  MC_InputPinName_FVAL                     =           36;
const
  MC_InputPinName_LVAL                     =           37;
const
  MC_InputPinName_DVAL                     =           38;
const
  MC_InputPinName_SPARE                    =           39;
const
  MC_InputConnectorName_SYSTEM             =            7;
const
  MC_InputConnectorName_IO                 =            8;
const
  MC_InputConnectorName_CAMERA             =            9;
const
  MC_InputConnectorName_CAMERA_A           =           10;
const
  MC_InputConnectorName_CAMERA_B           =           11;
const
  MC_OutputPinName_OUT5                    =            9;
const
  MC_OutputPinName_OUT6                    =           10;
const
  MC_OutputPinName_OUT7                    =           11;
const
  MC_OutputPinName_OUT8                    =           12;
const
  MC_OutputPinName_OUT9                    =           13;
const
  MC_OutputPinName_OUT10                   =           14;
const
  MC_OutputPinName_OUT11                   =           15;
const
  MC_OutputPinName_OUT12                   =           16;
const
  MC_OutputPinName_OUT13                   =           17;
const
  MC_OutputPinName_OUT14                   =           18;
const
  MC_OutputPinName_OUT15                   =           19;
const
  MC_OutputPinName_OUT16                   =           20;
const
  MC_OutputPinName_STR                     =           21;
const
  MC_OutputPinName_A1                      =           22;
const
  MC_OutputPinName_B1                      =           23;
const
  MC_OutputPinName_A2                      =           24;
const
  MC_OutputPinName_B2                      =           25;
const
  MC_OutputPinName_CC1                     =           26;
const
  MC_OutputPinName_CC2                     =           27;
const
  MC_OutputPinName_CC3                     =           28;
const
  MC_OutputPinName_CC4                     =           29;
const
  MC_OutputConnectorName_SYSTEM            =            7;
const
  MC_OutputConnectorName_IO                =            8;
const
  MC_OutputConnectorName_CAMERA            =            9;
const
  MC_OutputConnectorName_CAMERA_A          =           10;
const
  MC_OutputConnectorName_CAMERA_B          =           11;
const
  MC_OutputPinName_IO1                     =           30;
const
  MC_OutputPinName_IO2                     =           31;
const
  MC_OutputPinName_IO3                     =           32;
const
  MC_OutputPinName_IO4                     =           33;
const
  MC_OutputPinName_IO5                     =           34;
const
  MC_OutputPinName_IO6                     =           35;
const
  MC_OutputPinName_IO7                     =           36;
const
  MC_OutputPinName_IO8                     =           37;
const
  MC_OutputPinName_IO9                     =           38;
const
  MC_OutputPinName_IO10                    =           39;
const
  MC_OutputPinName_IO11                    =           40;
const
  MC_OutputPinName_IO12                    =           41;
const
  MC_OutputPinName_IO13                    =           42;
const
  MC_OutputPinName_IO14                    =           43;
const
  MC_OutputPinName_IO15                    =           44;
const
  MC_OutputPinName_IO16                    =           45;
const
  MC___CAMLoopBack                         =  1800 SHL 14;
const
  MC___CAMLoopBack_DISABLE                 =            1;
const
  MC___CAMLoopBack_ENABLE                  =            2;
const
  MC_GrabberConfig_00_2                    =           20;
const
  MC_GrabberConfig_10_00                   =           21;
const
  MC_GrabberConfig_01_00                   =           22;
const
  MC_GrabberConfig_00_10                   =           23;
const
  MC_GrabberConfig_00_01                   =           24;
const
  MC_GrabberConfig_00_00                   =           25;
const
  MC_MapTimDig_TYX                         =            9;
const
  MC_MapTimDig_TYY                         =           10;
const
  MC__BitMask                              =  1801 SHL 14;
const
  MC_ConnectLoc_SECOND                     =            9;
const
  MC_ConnectLoc_THIRD                      =           10;
const
  MC_ConnectLoc_FOURTH                     =           11;
const
  MC_Camera_CSB4000CL                      =          121;
const
  MC_Cable_S15_C00                         =           27;
const
  MC_Cable_S15_C01                         =           28;
const
  MC_Cable_S15_C02                         =           29;
const
  MC_CamConfig_P8RC                        =          175;
const
  MC_STOPASMode                            =  1802 SHL 14;
const
  MC_STOPASMode_AUTO                       =            1;
const
  MC_STOPASMode_MANUAL                     =            2;
const
  MC_OutputPinName_RED                     =           46;
const
  MC_OutputPinName_GREEN                   =           47;
const
  MC_OutputConnectorName_LEDX              =           12;
const
  MC_OutputConnectorName_LEDY              =           13;
const
  MC_OutputConnectorName_LEDZ              =           14;
const
  MC_OutputState_51                        =  1803 SHL 14;
const
  MC_OutputState_51_HOLD                   =            1;
const
  MC_OutputState_51_LOW                    =            2;
const
  MC_OutputState_51_HIGH                   =            3;
const
  MC_OutputStyle_LED_Filter                =  1804 SHL 14;
const
  MC_OutputState_52                        =  1805 SHL 14;
const
  MC_OutputState_52_HOLD                   =            1;
const
  MC_OutputState_52_LOW                    =            2;
const
  MC_OutputState_52_HIGH                   =            3;
const
  MC_OutputState_53                        =  1806 SHL 14;
const
  MC_OutputState_53_HOLD                   =            1;
const
  MC_OutputState_53_LOW                    =            2;
const
  MC_OutputState_53_HIGH                   =            3;
const
  MC_OutputState_54                        =  1807 SHL 14;
const
  MC_OutputState_54_HOLD                   =            1;
const
  MC_OutputState_54_LOW                    =            2;
const
  MC_OutputState_54_HIGH                   =            3;
const
  MC_OutputState_55                        =  1808 SHL 14;
const
  MC_OutputState_55_HOLD                   =            1;
const
  MC_OutputState_55_LOW                    =            2;
const
  MC_OutputState_55_HIGH                   =            3;
const
  MC_OutputState_56                        =  1809 SHL 14;
const
  MC_OutputState_56_HOLD                   =            1;
const
  MC_OutputState_56_LOW                    =            2;
const
  MC_OutputState_56_HIGH                   =            3;
const
  MC_OutputConnectorName_LED               =           15;
const
  MC_OutputConnectorName_LEDA              =           16;
const
  MC_OutputConnectorName_LEDB              =           17;
const
  MC_BoardTopology_1_11                    =           21;
const
  MC_ConfigGrabber                         =  1810 SHL 14;
const
  MC_ConfigGrabber_pX                      =            1;
const
  MC_ConfigGrabber_pXBIS                   =            2;
const
  MC_ConfigGrabber_pY                      =            3;
const
  MC_ConfigGrabber_pYBIS                   =            4;
const
  MC_ConfigGrabber_pZ                      =            5;
const
  MC_ConfigGrabber_pZBIS                   =            6;
const
  MC_ConfigGrabber_mX                      =            7;
const
  MC_ConfigGrabber_mXBIS                   =            8;
const
  MC_ConfigGrabber_mY                      =            9;
const
  MC_ConfigGrabber_mYBIS                   =           10;
const
  MC_ConfigGrabber_mZ                      =           11;
const
  MC_ConfigGrabber_mZBIS                   =           12;
const
  MC_ConfigGrabber_PASS                    =           13;
const
  MC_ConfigGrabber_FAIL                    =           14;
const
  MC_NextGrabberConfig                     =  1811 SHL 14;
const
  MC_NextGrabberConfig_FAIL                =            1;
const
  MC_NextGrabberConfig_00_00               =            2;
const
  MC_NextGrabberConfig_2_00                =            3;
const
  MC_NextGrabberConfig_00_2                =            4;
const
  MC_NextGrabberConfig_10_00               =            5;
const
  MC_NextGrabberConfig_01_00               =            6;
const
  MC_NextGrabberConfig_00_10               =            7;
const
  MC_NextGrabberConfig_00_01               =            8;
const
  MC_NextGrabberConfig_10_10               =            9;
const
  MC_NextGrabberConfig_01_10               =           10;
const
  MC_NextGrabberConfig_10_01               =           11;
const
  MC_NextGrabberConfig_01_01               =           12;
const
  MC_NextGrabberConfig_2_0                 =           13;
const
  MC_NextGrabberConfig_0_2                 =           14;
const
  MC_NextGrabberConfig_1_1                 =           15;
const
  MC_ConfigGrabber_Filter                  =  1812 SHL 14;
const
  MC_BoardTopology_Filter                  =  1813 SHL 14;
const
  MC_InputConfig_Filter                    =  1814 SHL 14;
const
  MC_ConnectorName                         =  1815 SHL 14;
const
  MC_ConnectorName_UNKNOWN                 =            1;
const
  MC_ConnectorName_SYSTEM                  =            2;
const
  MC_ConnectorName_IO                      =            3;
const
  MC_ConnectorName_CAMERA                  =            4;
const
  MC_ConnectorName_CAMERA_A                =            5;
const
  MC_ConnectorName_CAMERA_B                =            6;
const
  MC_ConnectorName_LED                     =            7;
const
  MC_ConnectorName_LEDA                    =            8;
const
  MC_ConnectorName_LEDB                    =            9;
const
  MC_OutputConfig_Filter                   =  1816 SHL 14;
const
  MC_InputConfig_Filter_17                 =  1817 SHL 14;
const
  MC_InputConfig_Filter_21                 =  1818 SHL 14;
const
  MC_InputConfig_Filter_22                 =  1819 SHL 14;
const
  MC_InputConfig_Filter_23                 =  1820 SHL 14;
const
  MC_InputConfig_Filter_24                 =  1821 SHL 14;
const
  MC_InputConfig_Filter_27                 =  1822 SHL 14;
const
  MC_InputConfig_Filter_28                 =  1823 SHL 14;
const
  MC_InputConfig_Filter_29                 =  1824 SHL 14;
const
  MC_OutputConfig_Filter_17                =  1825 SHL 14;
const
  MC_OutputConfig_Filter_28                =  1826 SHL 14;
const
  MC_OutputConfig_Filter_29                =  1827 SHL 14;
const
  MC_OutputConfig_Filter_51                =  1828 SHL 14;
const
  MC_OutputConfig_Filter_52                =  1829 SHL 14;
const
  MC_InputConfig_Filter_1                  =  1830 SHL 14;
const
  MC_InputConfig_Filter_2                  =  1831 SHL 14;
const
  MC_InputConfig_Filter_3                  =  1832 SHL 14;
const
  MC_InputConfig_Filter_4                  =  1833 SHL 14;
const
  MC_InputConfig_Filter_5                  =  1834 SHL 14;
const
  MC_InputConfig_Filter_6                  =  1835 SHL 14;
const
  MC_InputConfig_Filter_7                  =  1836 SHL 14;
const
  MC_InputConfig_Filter_8                  =  1837 SHL 14;
const
  MC_InputConfig_Filter_9                  =  1838 SHL 14;
const
  MC_InputConfig_Filter_10                 =  1839 SHL 14;
const
  MC_InputConfig_Filter_11                 =  1840 SHL 14;
const
  MC_InputConfig_Filter_12                 =  1841 SHL 14;
const
  MC_InputConfig_Filter_13                 =  1842 SHL 14;
const
  MC_InputConfig_Filter_14                 =  1843 SHL 14;
const
  MC_InputConfig_Filter_15                 =  1844 SHL 14;
const
  MC_InputConfig_Filter_16                 =  1845 SHL 14;
const
  MC_InputConfig_Filter_18                 =  1846 SHL 14;
const
  MC_InputConfig_Filter_19                 =  1847 SHL 14;
const
  MC_InputConfig_Filter_31                 =  1848 SHL 14;
const
  MC_InputConfig_Filter_32                 =  1849 SHL 14;
const
  MC_InputConfig_Filter_33                 =  1850 SHL 14;
const
  MC_InputConfig_Filter_34                 =  1851 SHL 14;
const
  MC_InputConfig_Filter_37                 =  1852 SHL 14;
const
  MC_InputConfig_Filter_38                 =  1853 SHL 14;
const
  MC_InputConfig_Filter_39                 =  1854 SHL 14;
const
  MC_OutputConfig_Filter_1                 =  1855 SHL 14;
const
  MC_OutputConfig_Filter_2                 =  1856 SHL 14;
const
  MC_OutputConfig_Filter_3                 =  1857 SHL 14;
const
  MC_OutputConfig_Filter_4                 =  1858 SHL 14;
const
  MC_OutputConfig_Filter_5                 =  1859 SHL 14;
const
  MC_OutputConfig_Filter_6                 =  1860 SHL 14;
const
  MC_OutputConfig_Filter_7                 =  1861 SHL 14;
const
  MC_OutputConfig_Filter_8                 =  1862 SHL 14;
const
  MC_OutputConfig_Filter_9                 =  1863 SHL 14;
const
  MC_OutputConfig_Filter_10                =  1864 SHL 14;
const
  MC_OutputConfig_Filter_11                =  1865 SHL 14;
const
  MC_OutputConfig_Filter_12                =  1866 SHL 14;
const
  MC_OutputConfig_Filter_13                =  1867 SHL 14;
const
  MC_OutputConfig_Filter_14                =  1868 SHL 14;
const
  MC_OutputConfig_Filter_15                =  1869 SHL 14;
const
  MC_OutputConfig_Filter_16                =  1870 SHL 14;
const
  MC_OutputConfig_Filter_18                =  1871 SHL 14;
const
  MC_OutputConfig_Filter_19                =  1872 SHL 14;
const
  MC_OutputConfig_Filter_38                =  1873 SHL 14;
const
  MC_OutputConfig_Filter_39                =  1874 SHL 14;
const
  MC_OutputConfig_Filter_53                =  1875 SHL 14;
const
  MC_OutputConfig_Filter_54                =  1876 SHL 14;
const
  MC_ConnectorName_TR_ST                   =           10;
const
  MC_ConnectorName_CAMX                    =           11;
const
  MC_ConnectorName_CAMY                    =           12;
const
  MC_ConnectorName_CAMZ                    =           13;
const
  MC_ConnectorName_PIO                     =           14;
const
  MC_ConnectorName_LEDX                    =           15;
const
  MC_ConnectorName_LEDY                    =           16;
const
  MC_ConnectorName_LEDZ                    =           17;
const
  MC_InputConfig_Filter_25                 =  1877 SHL 14;
const
  MC_InputConfig_Filter_26                 =  1878 SHL 14;
const
  MC_InputConfig_Filter_35                 =  1879 SHL 14;
const
  MC_InputConfig_Filter_36                 =  1880 SHL 14;
const
  MC_InputConfig_Filter_42                 =  1881 SHL 14;
const
  MC_InputConfig_Filter_43                 =  1882 SHL 14;
const
  MC_InputConfig_Filter_44                 =  1883 SHL 14;
const
  MC_InputConfig_Filter_45                 =  1884 SHL 14;
const
  MC_InputConfig_Filter_46                 =  1885 SHL 14;
const
  MC_InputConfig_Filter_47                 =  1886 SHL 14;
const
  MC_OutputConfig_Filter_55                =  1887 SHL 14;
const
  MC_OutputConfig_Filter_56                =  1888 SHL 14;
const
  MC_InputFunction_UNKNOWN                 =            1;
const
  MC_InputFunction_SOFT                    =            2;
const
  MC_InputFunction_OUTPUT                  =            3;
const
  MC_InputFunction_TRIG                    =            4;
const
  MC_InputFunction_LINETRIG                =            5;
const
  MC_InputFunction_HSYNC                   =            6;
const
  MC_InputFunction_VSYNC                   =            7;
const
  MC_InputFunction_CLOCK                   =            8;
const
  MC_InputFunction_NONE                    =            9;
const
  MC_InputFunction_CAMERA                  =           10;
const
  MC_InputState_NONE                       =            1;
const
  MC_InputState_LOW                        =            2;
const
  MC_InputState_HIGH                       =            3;
const
  MC_InputState_WENTLOW                    =            4;
const
  MC_InputState_WENTHIGH                   =            5;
const
  MC_InputStyle_TTL                        =            1;
const
  MC_InputStyle_ITTL                       =            2;
const
  MC_InputStyle_I12V                       =            3;
const
  MC_InputStyle_RS422                      =            4;
const
  MC_InputStyle_LVDS                       =            5;
const
  MC_InputStyle_DIFF                       =            6;
const
  MC_OutputConfig_SOFT                     =            1;
const
  MC_OutputConfig_FREE                     =            2;
const
  MC_OutputFunction_UNKNOWN                =            1;
const
  MC_OutputFunction_SOFT                   =            2;
const
  MC_OutputFunction_INPUT                  =            3;
const
  MC_OutputFunction_WATCHDOG               =            4;
const
  MC_OutputFunction_ALARM                  =            5;
const
  MC_OutputFunction_SYSTEM                 =            6;
const
  MC_OutputFunction_TIED                   =            7;
const
  MC_OutputFunction_STROBE                 =            8;
const
  MC_OutputFunction_RESET                  =            9;
const
  MC_OutputFunction_AUXRESET               =           10;
const
  MC_OutputFunction_HDRIVE                 =           11;
const
  MC_OutputFunction_VDRIVE                 =           12;
const
  MC_OutputFunction_CLOCK                  =           13;
const
  MC_OutputFunction_NONE                   =           14;
const
  MC_OutputState_NONE                      =            4;
const
  MC_OutputState_LOW                       =            5;
const
  MC_OutputState_HIGH                      =            6;
const
  MC_OutputState_TOGGLE                    =            7;
const
  MC_OutputStyle_TTL                       =            1;
const
  MC_OutputStyle_ITTL                      =            2;
const
  MC_OutputStyle_IOC                       =            3;
const
  MC_OutputStyle_IOE                       =            4;
const
  MC_OutputStyle_RELAY                     =            5;
const
  MC_OutputStyle_LED                       =            6;
const
  MC_InputFunction_FVAL                    =           11;
const
  MC_InputFunction_LVAL                    =           12;
const
  MC_InputFunction_DVAL                    =           13;
const
  MC_InputFunction_SPARE                   =           14;
const
  MC_InputStyle_CHANNELLINK                =            7;
const
  MC_InputStyle_CMOS                       =            8;
const
  MC_OutputStyle_OC                        =            7;
const
  MC_InputStyle_Filter17                   =  1889 SHL 14;
const
  MC_InputStyle_Filter_17                  =  1890 SHL 14;
const
  MC_InputStyle_Filter18                   =  1891 SHL 14;
const
  MC_InputStyle_Filter_18                  =  1892 SHL 14;
const
  MC_InputStyle_Filter19                   =  1893 SHL 14;
const
  MC_InputStyle_Filter_19                  =  1894 SHL 14;
const
  MC_OutputStyle_Filter17                  =  1895 SHL 14;
const
  MC_OutputStyle_Filter_17                 =  1896 SHL 14;
const
  MC_OutputStyle_Filter18                  =  1897 SHL 14;
const
  MC_OutputStyle_Filter_18                 =  1898 SHL 14;
const
  MC_OutputStyle_Filter19                  =  1899 SHL 14;
const
  MC_OutputStyle_Filter_19                 =  1900 SHL 14;
const
  MC_InputStyle_Filter_1                   =  1901 SHL 14;
const
  MC_InputStyle_Filter_2                   =  1902 SHL 14;
const
  MC_InputStyle_Filter_3                   =  1903 SHL 14;
const
  MC_InputStyle_Filter_4                   =  1904 SHL 14;
const
  MC_OutputStyle_Filter_1                  =  1905 SHL 14;
const
  MC_OutputStyle_Filter_2                  =  1906 SHL 14;
const
  MC_OutputStyle_Filter_3                  =  1907 SHL 14;
const
  MC_OutputStyle_Filter_4                  =  1908 SHL 14;
const
  MC_InputStyle_Filter_28                  =  1909 SHL 14;
const
  MC_InputStyle_Filter_29                  =  1910 SHL 14;
const
  MC_OutputStyle_Filter_28                 =  1911 SHL 14;
const
  MC_OutputStyle_Filter_29                 =  1912 SHL 14;
const
  MC_InputStyle_Filter_5                   =  1913 SHL 14;
const
  MC_InputStyle_Filter_6                   =  1914 SHL 14;
const
  MC_InputStyle_Filter_7                   =  1915 SHL 14;
const
  MC_InputStyle_Filter_8                   =  1916 SHL 14;
const
  MC_InputStyle_Filter_9                   =  1917 SHL 14;
const
  MC_InputStyle_Filter_10                  =  1918 SHL 14;
const
  MC_InputStyle_Filter_11                  =  1919 SHL 14;
const
  MC_InputStyle_Filter_12                  =  1920 SHL 14;
const
  MC_InputStyle_Filter_13                  =  1921 SHL 14;
const
  MC_InputStyle_Filter_14                  =  1922 SHL 14;
const
  MC_InputStyle_Filter_15                  =  1923 SHL 14;
const
  MC_InputStyle_Filter_16                  =  1924 SHL 14;
const
  MC_InputStyle_Filter_38                  =  1925 SHL 14;
const
  MC_InputStyle_Filter_39                  =  1926 SHL 14;
const
  MC_OutputStyle_Filter_5                  =  1927 SHL 14;
const
  MC_OutputStyle_Filter_6                  =  1928 SHL 14;
const
  MC_OutputStyle_Filter_7                  =  1929 SHL 14;
const
  MC_OutputStyle_Filter_8                  =  1930 SHL 14;
const
  MC_OutputStyle_Filter_9                  =  1931 SHL 14;
const
  MC_OutputStyle_Filter_10                 =  1932 SHL 14;
const
  MC_OutputStyle_Filter_11                 =  1933 SHL 14;
const
  MC_OutputStyle_Filter_12                 =  1934 SHL 14;
const
  MC_OutputStyle_Filter_13                 =  1935 SHL 14;
const
  MC_OutputStyle_Filter_14                 =  1936 SHL 14;
const
  MC_OutputStyle_Filter_15                 =  1937 SHL 14;
const
  MC_OutputStyle_Filter_16                 =  1938 SHL 14;
const
  MC_OutputStyle_Filter_38                 =  1939 SHL 14;
const
  MC_OutputStyle_Filter_39                 =  1940 SHL 14;
const
  MC_TimUnitN_USEDXBIS                     =            7;
const
  MC_TimUnitN_USEDYBIS                     =            8;
const
  MC_GrabberConfig_1_1_0                   =           26;
const
  MC_GrabberConfig_1_0_1                   =           27;
const
  MC_GrabberConfig_0_1_1                   =           28;
const
  MC_GrabberConfig_1_0_0                   =           29;
const
  MC_GrabberConfig_0_1_0                   =           30;
const
  MC_GrabberConfig_0_0_1                   =           31;
const
  MC_GrabberConfig_2_0_2                   =           32;
const
  MC_GrabberConfig_0_2_2                   =           33;
const
  MC_GrabberConfig_2_0_0                   =           34;
const
  MC_GrabberConfig_0_2_0                   =           35;
const
  MC_GrabberConfig_0_0_2                   =           36;
const
  MC_GrabberConfig_3_0_0                   =           37;
const
  MC_GrabberConfig_0_3_0                   =           38;
const
  MC_GrabberConfig_1_0_2                   =           39;
const
  MC_GrabberConfig_0_1_2                   =           40;
const
  MC_GrabberConfig_2_0_1                   =           41;
const
  MC_GrabberConfig_0_2_1                   =           42;
const
  MC_GrabberConfig_1_3_0                   =           43;
const
  MC_NextGrabberConfig_00_00_00            =           16;
const
  MC_NextGrabberConfig_1_1_1               =           17;
const
  MC_NextGrabberConfig_1_1_2               =           18;
const
  MC_NextGrabberConfig_2_2_0               =           19;
const
  MC_NextGrabberConfig_0_3_1               =           20;
const
  MC_OutputState_Filter_17                 =  1941 SHL 14;
const
  MC_OutputState_Filter_18                 =  1942 SHL 14;
const
  MC_OutputState_Filter_19                 =  1943 SHL 14;
const
  MC_OutputState_Filter_51                 =  1944 SHL 14;
const
  MC_OutputState_Filter_52                 =  1945 SHL 14;
const
  MC_OutputState_Filter_53                 =  1946 SHL 14;
const
  MC_OutputState_Filter_54                 =  1947 SHL 14;
const
  MC_OutputState_Filter_28                 =  1948 SHL 14;
const
  MC_OutputState_Filter_29                 =  1949 SHL 14;
const
  MC_OutputState_Filter_1                  =  1950 SHL 14;
const
  MC_OutputState_Filter_2                  =  1951 SHL 14;
const
  MC_OutputState_Filter_3                  =  1952 SHL 14;
const
  MC_OutputState_Filter_4                  =  1953 SHL 14;
const
  MC_OutputState_Filter_5                  =  1954 SHL 14;
const
  MC_OutputState_Filter_6                  =  1955 SHL 14;
const
  MC_OutputState_Filter_7                  =  1956 SHL 14;
const
  MC_OutputState_Filter_8                  =  1957 SHL 14;
const
  MC_OutputState_Filter_9                  =  1958 SHL 14;
const
  MC_OutputState_Filter_10                 =  1959 SHL 14;
const
  MC_OutputState_Filter_11                 =  1960 SHL 14;
const
  MC_OutputState_Filter_12                 =  1961 SHL 14;
const
  MC_OutputState_Filter_13                 =  1962 SHL 14;
const
  MC_OutputState_Filter_14                 =  1963 SHL 14;
const
  MC_OutputState_Filter_15                 =  1964 SHL 14;
const
  MC_OutputState_Filter_16                 =  1965 SHL 14;
const
  MC_OutputState_Filter_38                 =  1966 SHL 14;
const
  MC_OutputState_Filter_39                 =  1967 SHL 14;
const
  MC_NextGrabberConfig_1_1_0               =           21;
const
  MC_NextGrabberConfig_1_0_1               =           22;
const
  MC_NextGrabberConfig_0_1_1               =           23;
const
  MC_NextGrabberConfig_1_0_0               =           24;
const
  MC_NextGrabberConfig_0_1_0               =           25;
const
  MC_NextGrabberConfig_0_0_1               =           26;
const
  MC_NextGrabberConfig_2_0_2               =           27;
const
  MC_NextGrabberConfig_0_2_2               =           28;
const
  MC_NextGrabberConfig_2_0_0               =           29;
const
  MC_NextGrabberConfig_0_2_0               =           30;
const
  MC_NextGrabberConfig_0_0_2               =           31;
const
  MC_NextGrabberConfig_3_0_0               =           32;
const
  MC_NextGrabberConfig_0_3_0               =           33;
const
  MC_NextGrabberConfig_1_0_2               =           34;
const
  MC_NextGrabberConfig_0_1_2               =           35;
const
  MC_NextGrabberConfig_2_0_1               =           36;
const
  MC_NextGrabberConfig_0_2_1               =           37;
const
  MC_NextGrabberConfig_1_3_0               =           38;
const
  MC_GrabberConfig_00_00_00                =           44;
const
  MC_OutputState_Filter_55                 =  1968 SHL 14;
const
  MC_OutputState_Filter_56                 =  1969 SHL 14;
const
  MC_BoardTopology_2_0                     =           22;
const
  MC_GrabberConfig_11_10_00                =           45;
const
  MC_GrabberConfig_11_01_00                =           46;
const
  MC_GrabberConfig_11_00_10                =           47;
const
  MC_GrabberConfig_11_00_01                =           48;
const
  MC_GrabberConfig_10_11_00                =           49;
const
  MC_GrabberConfig_10_10_10                =           50;
const
  MC_GrabberConfig_10_10_01                =           51;
const
  MC_GrabberConfig_10_01_10                =           52;
const
  MC_GrabberConfig_10_O1_01                =           53;
const
  MC_GrabberConfig_10_00_11                =           54;
const
  MC_GrabberConfig_01_11_00                =           55;
const
  MC_GrabberConfig_01_10_10                =           56;
const
  MC_GrabberConfig_01_10_01                =           57;
const
  MC_GrabberConfig_01_01_10                =           58;
const
  MC_GrabberConfig_01_01_01                =           59;
const
  MC_GrabberConfig_01_00_11                =           60;
const
  MC_GrabberConfig_00_11_10                =           61;
const
  MC_GrabberConfig_00_11_01                =           62;
const
  MC_GrabberConfig_00_10_11                =           63;
const
  MC_GrabberConfig_00_01_11                =           64;
const
  MC_GrabberConfig_11_00_00                =           65;
const
  MC_GrabberConfig_10_10_00                =           66;
const
  MC_GrabberConfig_10_01_00                =           67;
const
  MC_GrabberConfig_10_00_10                =           68;
const
  MC_GrabberConfig_10_00_01                =           69;
const
  MC_GrabberConfig_01_10_00                =           70;
const
  MC_GrabberConfig_01_01_00                =           71;
const
  MC_GrabberConfig_01_00_10                =           72;
const
  MC_GrabberConfig_01_00_01                =           73;
const
  MC_GrabberConfig_00_11_00                =           74;
const
  MC_GrabberConfig_00_10_10                =           75;
const
  MC_GrabberConfig_00_10_01                =           76;
const
  MC_GrabberConfig_00_01_10                =           77;
const
  MC_GrabberConfig_00_01_01                =           78;
const
  MC_GrabberConfig_00_00_11                =           79;
const
  MC_GrabberConfig_10_00_00                =           80;
const
  MC_GrabberConfig_01_00_00                =           81;
const
  MC_GrabberConfig_00_01_00                =           82;
const
  MC_GrabberConfig_00_00_10                =           83;
const
  MC_GrabberConfig_00_00_01                =           84;
const
  MC_GrabberConfig_10_01_01                =           85;
const
  MC_GrabberConfig_00_10_00                =           86;
const
  MC_NextGrabberConfig_11_10_00            =           39;
const
  MC_NextGrabberConfig_11_01_00            =           40;
const
  MC_NextGrabberConfig_11_00_10            =           41;
const
  MC_NextGrabberConfig_11_00_01            =           42;
const
  MC_NextGrabberConfig_10_11_00            =           43;
const
  MC_NextGrabberConfig_10_10_10            =           44;
const
  MC_NextGrabberConfig_10_10_01            =           45;
const
  MC_NextGrabberConfig_10_01_10            =           46;
const
  MC_NextGrabberConfig_10_01_01            =           47;
const
  MC_NextGrabberConfig_10_00_11            =           48;
const
  MC_NextGrabberConfig_01_11_00            =           49;
const
  MC_NextGrabberConfig_01_10_10            =           50;
const
  MC_NextGrabberConfig_01_10_01            =           51;
const
  MC_NextGrabberConfig_01_01_10            =           52;
const
  MC_NextGrabberConfig_01_01_01            =           53;
const
  MC_NextGrabberConfig_01_00_11            =           54;
const
  MC_NextGrabberConfig_00_11_10            =           55;
const
  MC_NextGrabberConfig_00_11_01            =           56;
const
  MC_NextGrabberConfig_00_10_11            =           57;
const
  MC_NextGrabberConfig_00_01_11            =           58;
const
  MC_NextGrabberConfig_11_00_00            =           59;
const
  MC_NextGrabberConfig_10_10_00            =           60;
const
  MC_NextGrabberConfig_10_01_00            =           61;
const
  MC_NextGrabberConfig_10_00_10            =           62;
const
  MC_NextGrabberConfig_10_00_01            =           63;
const
  MC_NextGrabberConfig_01_10_00            =           64;
const
  MC_NextGrabberConfig_01_01_00            =           65;
const
  MC_NextGrabberConfig_01_00_10            =           66;
const
  MC_NextGrabberConfig_01_00_01            =           67;
const
  MC_NextGrabberConfig_00_11_00            =           68;
const
  MC_NextGrabberConfig_00_10_10            =           69;
const
  MC_NextGrabberConfig_00_10_01            =           70;
const
  MC_NextGrabberConfig_00_01_10            =           71;
const
  MC_NextGrabberConfig_00_01_01            =           72;
const
  MC_NextGrabberConfig_00_00_11            =           73;
const
  MC_NextGrabberConfig_10_00_00            =           74;
const
  MC_NextGrabberConfig_01_00_00            =           75;
const
  MC_NextGrabberConfig_00_10_00            =           76;
const
  MC_NextGrabberConfig_00_01_00            =           77;
const
  MC_NextGrabberConfig_00_00_10            =           78;
const
  MC_NextGrabberConfig_00_00_01            =           79;
const
  MC_MapDigTim_AA                          =            9;
const
  MC_MapDigTim_AB                          =           10;
const
  MC_MapDigTim_BA                          =           11;
const
  MC_MapDigTim_BB                          =           12;
const
  MC_DesignNumber                          =  1970 SHL 14;
const
  MC_DesignNumber_A                        =            1;
const
  MC_DesignNumber_B                        =            2;
const
  MC__Board_Type                           =  1971 SHL 14;
const
  MC__Board_Type__ALPHA                    =            1;
const
  MC__Board_Type__GAMMA                    =            2;
const
  MC__Board_Type__ALPHA_cPCI               =            3;
const
  MC_TimUnitNUsage_SHARE                   =            4;
const
  MC__BoardType__ALPHA_A                   =            9;
const
  MC__BoardType__ALPHA_B                   =           10;
const
  MC__DIGTIM                               =  1972 SHL 14;
const
  MC_BoardTopologyRead                     =  1973 SHL 14;
const
  MC_BoardTopologyRead_1_1                 =            1;
const
  MC_BoardTopologyRead_2_1                 =            2;
const
  MC_BoardTopologyRead_2_2                 =            3;
const
  MC_BoardTopologyRead_1_11                =            4;
const
  MC_BoardTopologyRead_2_11                =            5;
const
  MC_BoardTopologyRead_11_11               =            6;
const
  MC_BoardTopologyRead_0_2                 =            7;
const
  MC_BoardTopologyRead_2_0                 =            8;
const
  MC_ChannelIndex                          =  1974 SHL 14;
const
  MC_BoardIndex                            =  1975 SHL 14;
const
  MC_GrabberIndex                          =  1976 SHL 14;
const
  MC_ConnectorIndex                        =  1977 SHL 14;
const
  MC_BayerOnly_Filter                      =  1978 SHL 14;
const
  MC__Board_Type__IOTA                     =            4;
const
  MC_Spectrum_Filter                       =  1979 SHL 14;
const
  MC__BoardType__IOTA                      =           11;
const
  MC___SyncMode_Check                      =  1980 SHL 14;
const
  MC___SyncMode_Check_PASS                 =            1;
const
  MC___SyncMode_Check_FAIL                 =            2;
const
  MC___ADresolution_Check                  =  1981 SHL 14;
const
  MC___ADresolution_Check_PASS             =            1;
const
  MC___ADresolution_Check_FAIL             =            2;
const
  MC___CalPat_Check                        =  1982 SHL 14;
const
  MC___CalPat_Check_PASS                   =            1;
const
  MC___CalPat_Check_FAIL                   =            2;
const
  MC_BoardTopology_1_                      =           23;
const
  MC__PRM2_T2OVR                           =  1983 SHL 14;
const
  MC__PRM2_T2OVR_PROTECT                   =            1;
const
  MC__PRM2_T2OVR_NOPROTECT                 =            2;
const
  MC__HBC_POST                             =  1984 SHL 14;
const
  MC__HBC_HPOST                            =  1985 SHL 14;
const
  MC__DRS_CSOL_FVALS                       =            5;
const
  MC__HDC_DCINIT                           =  1986 SHL 14;
const
  MC__HDC_DCINIT_SOL                       =            1;
const
  MC__HDC_DCINIT_LOOP                      =            2;
const
  MC_Camera_PC_640CL                       =          122;
const
  MC_CamConfig_P60RC                       =          176;
const
  MC_Camera_1M28_SA                        =          123;
const
  MC_CamConfig_P27SC                       =          177;
const
  MC_CamConfig_P27RC                       =          178;
const
  MC__TrueExp_T2                           =  1987 SHL 14;
const
  MC__Upstream                             =  1988 SHL 14;
const
  MC__Upstream_ON                          =            1;
const
  MC__Upstream_OFF                         =            2;
const
  MC__DTC_VUS_CST                          =  1989 SHL 14;
const
  MC__DTC_VUS_CST_INPUT                    =            1;
const
  MC__DTC_VUS_CST_CUS2                     =            2;
const
  MC__DTC_VUS_CST_CUS2INV                  =            3;
const
  MC__DTC_VUS_CST_SUS2                     =            4;
const
  MC__DTC_VUS_CST_SUS2INV                  =            5;
const
  MC__DTC_VUS_CST_LOW                      =            6;
const
  MC__DTC_VUS_CST_HIGH                     =            7;
const
  MC__DTC_VUS_CST_KEEP                     =            8;
const
  MC__DTC_VUS_END                          =  1990 SHL 14;
const
  MC__DTC_VUS_END_INPUT                    =            1;
const
  MC__DTC_VUS_END_CUS2                     =            2;
const
  MC__DTC_VUS_END_CUS2INV                  =            3;
const
  MC__DTC_VUS_END_SUS2                     =            4;
const
  MC__DTC_VUS_END_SUS2INV                  =            5;
const
  MC__DTC_VUS_END_LOW                      =            6;
const
  MC__DTC_VUS_END_HIGH                     =            7;
const
  MC__DTC_VUS_END_KEEP                     =            8;
const
  MC__DTC_RUS_CST                          =  1991 SHL 14;
const
  MC__DTC_RUS_CST_INPUT                    =            1;
const
  MC__DTC_RUS_CST_CUS2                     =            2;
const
  MC__DTC_RUS_CST_CUS2INV                  =            3;
const
  MC__DTC_RUS_CST_SUS2                     =            4;
const
  MC__DTC_RUS_CST_SUS2INV                  =            5;
const
  MC__DTC_RUS_CST_LOW                      =            6;
const
  MC__DTC_RUS_CST_HIGH                     =            7;
const
  MC__DTC_RUS_CST_KEEP                     =            8;
const
  MC__DTC_RUS_END                          =  1992 SHL 14;
const
  MC__DTC_RUS_END_INPUT                    =            1;
const
  MC__DTC_RUS_END_CUS2                     =            2;
const
  MC__DTC_RUS_END_CUS2INV                  =            3;
const
  MC__DTC_RUS_END_SUS2                     =            4;
const
  MC__DTC_RUS_END_SUS2INV                  =            5;
const
  MC__DTC_RUS_END_LOW                      =            6;
const
  MC__DTC_RUS_END_HIGH                     =            7;
const
  MC__DTC_RUS_END_KEEP                     =            8;
const
  MC_Camera_2M30_SA                        =          124;
const
  MC_RequiredGrabbers                      =  1993 SHL 14;
const
  MC_RequiredGrabber                       =  1994 SHL 14;
const
  MC_RequiredGrabber_ONE                   =            1;
const
  MC_RequiredGrabber_TWO                   =            2;
const
  MC_RequiredGrabber_THREE                 =            3;
const
  MC_RequiredGrabber_FOUR                  =            4;
const
  MC_NextConfigGrabber                     =  1995 SHL 14;
const
  MC_NextConfigGrabber_NONE                =            1;
const
  MC_NextConfigGrabber_mX                  =            2;
const
  MC_NextConfigGrabber_mXBIS               =            3;
const
  MC_NextConfigGrabber_mY                  =            4;
const
  MC_NextConfigGrabber_mYBIS               =            5;
const
  MC_NextConfigGrabber_mZ                  =            6;
const
  MC_NextConfigGrabber_mZBIS               =            7;
const
  MC__NCGKey                               =  1996 SHL 14;
const
  MC__NCGKey_STD                           =            1;
const
  MC__NCGKey_ALT                           =            2;
const
  MC_TimUnitNConfig                        =  1997 SHL 14;
const
  MC_TimUnitNConfig_FREE                   =            1;
const
  MC_TimUnitNConfig_A0_00                  =            2;
const
  MC_TimUnitNConfig_0A_00                  =            3;
const
  MC_TimUnitNConfig_00_A0                  =            4;
const
  MC_TimUnitNConfig_00_0A                  =            5;
const
  MC_TimUnitNConfig_C0_00                  =            6;
const
  MC_TimUnitNConfig_C0_M0                  =            7;
const
  MC_TimUnitNConfig_00_C0                  =            8;
const
  MC_TimUnitNConfig_M0_C0                  =            9;
const
  MC_ConfigTimUnitN                        =  1998 SHL 14;
const
  MC_ConfigTimUnitN_UNUSED                 =            1;
const
  MC_ConfigTimUnitN_ANALOG                 =            2;
const
  MC_ConfigTimUnitN_MASTER                 =            3;
const
  MC_NextTimUnitNConfig                    =  1999 SHL 14;
const
  MC_NextTimUnitNConfig_FAIL               =            1;
const
  MC_NextTimUnitNConfig_FREE               =            2;
const
  MC_NextTimUnitNConfig_A0_00              =            3;
const
  MC_NextTimUnitNConfig_0A_00              =            4;
const
  MC_NextTimUnitNConfig_00_A0              =            5;
const
  MC_NextTimUnitNConfig_00_0A              =            6;
const
  MC_NextTimUnitNConfig_C0_00              =            7;
const
  MC_NextTimUnitNConfig_C0_M0              =            8;
const
  MC_NextTimUnitNConfig_00_C0              =            9;
const
  MC_NextTimUnitNConfig_M0_C0              =           10;
const
  MC_TimUnitNCheck                         =  2000 SHL 14;
const
  MC_TimUnitNCheck_PASS                    =            1;
const
  MC_TimUnitNCheck_FAIL                    =            2;
const
  MC_ConfigClkSynthFreq                    =  2001 SHL 14;
const
  MC_ClkSynthFreq                          =  2002 SHL 14;
const
  MC_ChannelResourcesTimeout               =  2003 SHL 14;
const
  MC_BoardTopology_MONO                    =           24;
const
  MC_BoardTopology_DUO                     =           25;
const
  MC_ConfigGrabberFailure                  =  2004 SHL 14;
const
  MC_ConfigGrabberFailure_NONE             =            1;
const
  MC_ConfigGrabberFailure_Connector_InUse  =            2;
const
  MC_ConfigGrabberFailure_TUN_InUse        =            3;
const
  MC_ConfigGrabberFailure_TUN_ShareMaster  =            4;
const
  MC_ConfigGrabberFailure_Out_of_ADC_resource =            5;
const
  MC_ConfigGrabberFailure_Invalid_Config_PS =            6;
const
  MC_ConfigGrabberFailure_Invalid_Config   =            7;
const
  MC_NextGrabberConfig_0_0_0_0             =           80;
const
  MC_NextGrabberConfig_1_0_0_0             =           81;
const
  MC_NextGrabberConfig_0_1_0_0             =           82;
const
  MC_NextGrabberConfig_0_0_1_0             =           83;
const
  MC_NextGrabberConfig_0_0_0_1             =           84;
const
  MC_NextGrabberConfig_1_1_0_0             =           85;
const
  MC_NextGrabberConfig_1_0_0_1             =           86;
const
  MC_NextGrabberConfig_0_1_1_0             =           87;
const
  MC_NextGrabberConfig_0_0_1_1             =           88;
const
  MC_GrabberConfig_0_0_0_0                 =           87;
const
  MC_GrabberConfig_1_0_0_0                 =           88;
const
  MC_GrabberConfig_0_1_0_0                 =           89;
const
  MC_GrabberConfig_0_0_1_0                 =           90;
const
  MC_GrabberConfig_0_0_0_1                 =           91;
const
  MC_SequencesR1_JumpNEXTACQ               =  2005 SHL 14;
const
  MC_SequencesR1_JumpNEXTACQ_ACQR2         =            1;
const
  MC_SequencesR1_JumpNEXTACQ_IDLER2        =            2;
const
  MC_Camera_A302b                          =          125;
const
  MC_INITC_GPTCOUNT                        =  2006 SHL 14;
const
  MC__GrabMode                             =  2007 SHL 14;
const
  MC__GrabMode_RAW                         =            1;
const
  MC__GrabMode_XY                          =            2;
const
  MC__RawGrabSizeX_Px                      =  2008 SHL 14;
const
  MC__NotLive                              =  2009 SHL 14;
const
  MC__nLive                                =  2010 SHL 14;
const
  MC__STB_Qx1SRC_FromSTB_Y                 =            5;
const
  MC__STB_Qx1SRC_FromSTB_Y_Inverted        =            6;
const
  MC__STB_Qx2SRC_FromSTB_Y                 =            5;
const
  MC__STB_Qx2SRC_FromSTB_Y_Inverted        =            6;
const
  MC_B1Usage_TRIGGER                       =            3;
const
  MC_B1Usage_LINETRIGGER                   =            4;
const
  MC__BoardType__PICOLO_PRO2               =           12;
const
  MC__BoardType__PICOLO                    =           13;
const
  MC_BreakEffect                           =  2011 SHL 14;
const
  MC_BreakEffect_ABORT                     =            1;
const
  MC_BreakEffect_FINISH                    =            2;
const
  MC_INITC_GPTCOUNT_ms                     =  2012 SHL 14;
const
  MC_GrabberPartition                      =  2013 SHL 14;
const
  MC_GrabberPartition_A                    =            1;
const
  MC_GrabberPartition_B                    =            2;
const
  MC_GrabberPartition_C                    =            3;
const
  MC_GrabberPartition_D                    =            4;
const
  MC_GrabberPartition_E                    =            5;
const
  MC_GrabberPartition_F                    =            6;
const
  MC_GrabberPartition_G                    =            7;
const
  MC_GrabberPartition_H                    =            8;
const
  MC_GrabberPartition_I                    =            9;
const
  MC_NextGrabberPartition                  =  2014 SHL 14;
const
  MC_NextGrabberPartition_A                =            1;
const
  MC_NextGrabberPartition_B                =            2;
const
  MC_NextGrabberPartition_C                =            3;
const
  MC_NextGrabberPartition_D                =            4;
const
  MC_NextGrabberPartition_E                =            5;
const
  MC_NextGrabberPartition_F                =            6;
const
  MC_NextGrabberPartition_G                =            7;
const
  MC_NextGrabberPartition_H                =            8;
const
  MC_NextGrabberPartition_I                =            9;
const
  MC_NextGrabberPartition_HOLD             =           10;
const
  MC_ConfigGrabberFailure_InvalidPartition =            8;
const
  MC_NextGrabberPartition_A111             =           11;
const
  MC_NextGrabberPartition_B222             =           12;
const
  MC_NextGrabberPartition_C222             =           13;
const
  MC_NextGrabberPartition_D222             =           14;
const
  MC_GrabberPartition_A111                 =           10;
const
  MC_GrabberPartition_B222                 =           11;
const
  MC_GrabberPartition_C222                 =           12;
const
  MC_GrabberPartition_D222                 =           13;
const
  MC_NextGrabberPartition_A112             =           15;
const
  MC_NextGrabberPartition_B221             =           16;
const
  MC_NextGrabberPartition_C221             =           17;
const
  MC_NextGrabberPartition_D221             =           18;
const
  MC_NextGrabberPartition_E330             =           19;
const
  MC_NextGrabberPartition_F330             =           20;
const
  MC_GrabberPartition_A112                 =           14;
const
  MC_GrabberPartition_B221                 =           15;
const
  MC_GrabberPartition_C221                 =           16;
const
  MC_GrabberPartition_D221                 =           17;
const
  MC_GrabberPartition_E330                 =           18;
const
  MC_GrabberPartition_F330                 =           19;
const
  MC_GrabberPartition_A131                 =           20;
const
  MC_GrabberPartition_F131                 =           21;
const
  MC_GrabberPartition_G131                 =           22;
const
  MC_GrabberPartition_C231                 =           23;
const
  MC_GrabberPartition_F231                 =           24;
const
  MC_GrabberPartition_H111111              =           25;
const
  MC_GrabberPartition_I111111              =           26;
const
  MC_NextGrabberPartition_A131             =           21;
const
  MC_NextGrabberPartition_F131             =           22;
const
  MC_NextGrabberPartition_G131             =           23;
const
  MC_NextGrabberPartition_C231             =           24;
const
  MC_NextGrabberPartition_F231             =           25;
const
  MC_NextGrabberPartition_H111111          =           26;
const
  MC_NextGrabberPartition_I111111          =           27;
const
  MC___BISConnector_Check                  =  2015 SHL 14;
const
  MC___BISConnector_Check_PASS             =            1;
const
  MC___BISConnector_Check_FAIL             =            2;
const
  MC___TAG_Check                           =  2016 SHL 14;
const
  MC___TAG_Check_PASS                      =            1;
const
  MC___TAG_Check_FAIL                      =            2;
const
  MC__HBC_HPHAS                            =  2017 SHL 14;
const
  MC__Category_Sequence_Control            =           25;
const
  MC___SequenceLoad_Check                  =  2018 SHL 14;
const
  MC___SequenceLoad_Check_PASS             =            1;
const
  MC___SequenceLoad_Check_FAIL             =            2;
const
  MC___WaitCamSync                         =  2019 SHL 14;
const
  MC___WaitCamSync_OFF                     =            1;
const
  MC___WaitCamSync_ON                      =            2;
const
  MC_TXState                               =  2020 SHL 14;
const
  MC_TXState_STOPPED                       =            1;
const
  MC_TXState_RUNNING                       =            2;
const
  MC_TYState                               =  2021 SHL 14;
const
  MC_TYState_STOPPED                       =            1;
const
  MC_TYState_RUNNING                       =            2;
const
  MC_TUState                               =  2022 SHL 14;
const
  MC_TUState_STOPPED                       =            1;
const
  MC_TUState_RUNNING                       =            2;
const
  MC__CamConfigX                           =  2023 SHL 14;
const
  MC__CamConfigY                           =  2024 SHL 14;
const
  MC__CamConfig                            =  2025 SHL 14;
const
  MC_PartialPage                           =  2026 SHL 14;
const
  MC_LineCount                             =  2027 SHL 14;
const
  MC__VLC_LCSNS_PARTIALPAGE                =            3;
const
  MC__VLC_PartialLCNT                      =  2028 SHL 14;
const
  MC__STM1_T1SCAL_200ns                    =            7;
const
  MC__PRM1_T1POS_SIG1On                    =  2029 SHL 14;
const
  MC__PRM1_T1POS_SIG1Off                   =  2030 SHL 14;
const
  MC__SCC_CC1_T1SIG1                       =            9;
const
  MC__SCC_CC1_T1SIG2                       =           10;
const
  MC__SCC_CC1_T1SIG1n                      =           11;
const
  MC__SCC_CC1_T1SIG2n                      =           12;
const
  MC__SCC_CC2_T1SIG1                       =            9;
const
  MC__SCC_CC2_T1SIG2                       =           10;
const
  MC__SCC_CC2_T1SIG1n                      =           11;
const
  MC__SCC_CC2_T1SIG2n                      =           12;
const
  MC__SCC_CC3_T1SIG1                       =           13;
const
  MC__SCC_CC3_T1SIG2                       =           14;
const
  MC__SCC_CC3_T1SIG1n                      =           15;
const
  MC__SCC_CC3_T1SIG2n                      =           16;
const
  MC__SCC_CC4_T1SIG1                       =           11;
const
  MC__SCC_CC4_T1SIG2                       =           12;
const
  MC__SCC_CC4_T1SIG1n                      =           13;
const
  MC__SCC_CC4_T1SIG2n                      =           14;
const
  MC__PRM1_T1POS_xx                        =  2031 SHL 14;
const
  MC__PRM1_T1DEF_xx                        =  2032 SHL 14;
const
  MC__PRM1_T1DEF_01                        =  2033 SHL 14;
const
  MC__PRM1_T1POS_01                        =  2034 SHL 14;
const
  MC__PRM1_T1DEF_02                        =  2035 SHL 14;
const
  MC__PRM1_T1POS_02                        =  2036 SHL 14;
const
  MC__PRM1_T1DEF_03                        =  2037 SHL 14;
const
  MC__PRM1_T1POS_03                        =  2038 SHL 14;
const
  MC__PRM1_T1DEF_04                        =  2039 SHL 14;
const
  MC__PRM1_T1POS_04                        =  2040 SHL 14;
const
  MC__PRM1_T1DEF_05                        =  2041 SHL 14;
const
  MC__PRM1_T1POS_05                        =  2042 SHL 14;
const
  MC__PRM1_T1DEF_06                        =  2043 SHL 14;
const
  MC__PRM1_T1POS_06                        =  2044 SHL 14;
const
  MC__PRM1_T1DEF_07                        =  2045 SHL 14;
const
  MC__PRM1_T1POS_07                        =  2046 SHL 14;
const
  MC__PRM1_T1DEF_08                        =  2047 SHL 14;
const
  MC__PRM1_T1POS_08                        =  2048 SHL 14;
const
  MC__PRM1_T1DEF_09                        =  2049 SHL 14;
const
  MC__PRM1_T1POS_09                        =  2050 SHL 14;
const
  MC__PRM1_T1DEF_10                        =  2051 SHL 14;
const
  MC__PRM1_T1POS_10                        =  2052 SHL 14;
const
  MC__PRM1_T1DEF_11                        =  2053 SHL 14;
const
  MC__PRM1_T1POS_11                        =  2054 SHL 14;
const
  MC__PRM1_T1DEF_12                        =  2055 SHL 14;
const
  MC__PRM1_T1POS_12                        =  2056 SHL 14;
const
  MC__PRM1_T1DEF_13                        =  2057 SHL 14;
const
  MC__PRM1_T1POS_13                        =  2058 SHL 14;
const
  MC__PRM1_T1DEF_14                        =  2059 SHL 14;
const
  MC__PRM1_T1POS_14                        =  2060 SHL 14;
const
  MC__PRM1_T1DEF_15                        =  2061 SHL 14;
const
  MC__PRM1_T1POS_15                        =  2062 SHL 14;
const
  MC__PRM1_T1DEF_16                        =  2063 SHL 14;
const
  MC__PRM1_T1POS_16                        =  2064 SHL 14;
const
  MC__RESETOn_T1                           =  2065 SHL 14;
const
  MC__RESETOff_T1                          =  2066 SHL 14;
const
  MC__AUXRESETOn_T1                        =  2067 SHL 14;
const
  MC__AUXRESETOff_T1                       =  2068 SHL 14;
const
  MC__STROBEOn_T1                          =  2069 SHL 14;
const
  MC__STROBEOff_T1                         =  2070 SHL 14;
const
  MC__USEROn_T1                            =  2071 SHL 14;
const
  MC__USEROff_T1                           =  2072 SHL 14;
const
  MC__SQ1_T1                               =  2073 SHL 14;
const
  MC__T1Avail_T1                           =  2074 SHL 14;
const
  MC__STROBEWidth_T1                       =  2075 SHL 14;
const
  MC__TrueExp_T1                           =  2076 SHL 14;
const
  MC__Category_Timers_Control              =           26;
const
  MC__ResetDur_T1                          =  2077 SHL 14;
const
  MC__T1Span_T1                            =  2078 SHL 14;
const
  MC__ReadoutDur_T1                        =  2079 SHL 14;
const
  MC_LUT0                                  =  2080 SHL 14;
const
  MC_TOTOa                                 =  2081 SHL 14;
const
  MC_TOTOa_NO_VALUE                        =            1;
const
  MC_TOTOa_NO_VALUE2                       =            2;
const
  MC_TOTOb                                 =  2082 SHL 14;
const
  MC_TOTOb_NO_VALUE                        =            1;
const
  MC_TOTOb_NO_VALUE2                       =            2;
const
  MC_TOTOc                                 =  2083 SHL 14;
const
  MC_TOTOc_NO_VALUE                        =            1;
const
  MC_TOTOc_NO_VALUE2                       =            2;
const
  MC__LUT0                                 =  2084 SHL 14;
const
  MC__LUT1                                 =  2085 SHL 14;
const
  MC__LUT2                                 =  2086 SHL 14;
const
  MC__LUTMODE                              =  2087 SHL 14;
const
  MC__LUTMODE_BYPASS                       =            1;
const
  MC__LUTMODE_SINGLE                       =            2;
const
  MC__LUTMODE_TRIPLE                       =            3;
const
  MC__LUT0_0                               =            1;
const
  MC__LUT0_1                               =            2;
const
  MC__LUT0_2                               =            3;
const
  MC__LUT0_3                               =            4;
const
  MC__LUT0_4                               =            5;
const
  MC__LUT0_titi                            =            6;
const
  MC__LUT0_tutu                            =            7;
const
  MC__LUT1_titi                            =            1;
const
  MC__LUT1_tutu                            =            2;
const
  MC__LUT2_titi                            =            1;
const
  MC__LUT2_tutu                            =            2;
const
  MC__LUTAVAILABLE                         =  2088 SHL 14;
const
  MC__LUTAVAILABLE_NONE                    =            1;
const
  MC__LUTAVAILABLE_SINGLE8                 =            2;
const
  MC__LUTAVAILABLE_TRIPLE8                 =            3;
const
  MC__LUTAVAILABLE_SINGLE10                =            4;
const
  MC__LUTAVAILABLE_TRIPLE10                =            5;
const
  MC__T2POS                                =  2089 SHL 14;
const
  MC__PRM2_T2POS                           =  2090 SHL 14;
const
  MC__STM2_T2CLK                           =  2091 SHL 14;
const
  MC__STM2_T2CLK_T1CLK                     =            1;
const
  MC__STM2_T2CLK_LTRIG                     =            2;
const
  MC__STM2_T2CLK_PPLS                      =            3;
const
  MC__STM2_T2SEL_FTRIGS                    =            7;
const
  MC__STM2_T2SEL_SAP                       =            8;
const
  MC__STM2_T2SEL_EAP                       =            9;
const
  MC__STB_Qx1SRC_T1SIG3                    =            7;
const
  MC__STB_Qx1SRC_T1SIG4                    =            8;
const
  MC__STB_Qx1POL                           =  2092 SHL 14;
const
  MC__STB_Qx1POL_DIRECT                    =            1;
const
  MC__STB_Qx1POL_INVERT                    =            2;
const
  MC__STB_Qx2SRC_T1SIG3                    =            7;
const
  MC__STB_Qx2SRC_T1SIG4                    =            8;
const
  MC__STB_Qx2POL                           =  2093 SHL 14;
const
  MC__STB_Qx2POL_DIRECT                    =            1;
const
  MC__STB_Qx2POL_INVERT                    =            2;
const
  MC__STB_Qx1POL_HOLD                      =            3;
const
  MC__STB_Qx2POL_HOLD                      =            3;
const
  MC__STR_STXPOL                           =  2094 SHL 14;
const
  MC__STR_STXPOL_DIRECT                    =            1;
const
  MC__STR_STXPOL_INVERT                    =            2;
const
  MC__STR_STXPOL_HOLD                      =            3;
const
  MC__STR_STXSRC                           =  2095 SHL 14;
const
  MC__STR_STXSRC_LOW                       =            1;
const
  MC__STR_STXSRC_T1SIG3_X                  =            2;
const
  MC__STR_STXSRC_T1SIG4_X                  =            3;
const
  MC__STR_STXSRC_HOLD                      =            4;
const
  MC__STM1_T1SEL                           =  2096 SHL 14;
const
  MC__STM1_T1SEL_FTRIGS                    =            1;
const
  MC__STM1_T1SEL_LTRIGS                    =            2;
const
  MC__STM1_T1SEL_PPLS                      =            3;
const
  MC__STM1_T1SEL_OFF                       =            4;
const
  MC__STR_STXSPOL                          =  2097 SHL 14;
const
  MC__STR_STXSPOL_DIRECT                   =            1;
const
  MC__STR_STXSPOL_INVERT                   =            2;
const
  MC__STR_STXSPOL_HOLD                     =            3;
const
  MC__STR_STXSRC_T1SIG3_Y                  =            5;
const
  MC__STR_STXSRC_T1SIG4_Y                  =            6;
const
  MC__STR_STYSPOL                          =  2098 SHL 14;
const
  MC__STR_STYSPOL_DIRECT                   =            1;
const
  MC__STR_STYSPOL_INVERT                   =            2;
const
  MC__STR_STYSPOL_HOLD                     =            3;
const
  MC__STR_STZSPOL                          =  2099 SHL 14;
const
  MC__STR_STZSPOL_DIRECT                   =            1;
const
  MC__STR_STZSPOL_INVERT                   =            2;
const
  MC__STR_STZSPOL_HOLD                     =            3;
const
  MC__STR_STYPOL                           =  2100 SHL 14;
const
  MC__STR_STYPOL_DIRECT                    =            1;
const
  MC__STR_STYPOL_INVERT                    =            2;
const
  MC__STR_STYPOL_HOLD                      =            3;
const
  MC__STR_STZPOL                           =  2101 SHL 14;
const
  MC__STR_STZPOL_DIRECT                    =            1;
const
  MC__STR_STZPOL_INVERT                    =            2;
const
  MC__STR_STZPOL_HOLD                      =            3;
const
  MC__STR_STYSRC                           =  2102 SHL 14;
const
  MC__STR_STYSRC_LOW                       =            1;
const
  MC__STR_STYSRC_T1SIG3_X                  =            2;
const
  MC__STR_STYSRC_T1SIG4_X                  =            3;
const
  MC__STR_STYSRC_T1SIG3_Y                  =            4;
const
  MC__STR_STYSRC_T1SIG4_Y                  =            5;
const
  MC__STR_STYSRC_HOLD                      =            6;
const
  MC__STR_STZSRC                           =  2103 SHL 14;
const
  MC__STR_STZSRC_LOW                       =            1;
const
  MC__STR_STZSRC_T1SIG3_X                  =            2;
const
  MC__STR_STZSRC_T1SIG4_X                  =            3;
const
  MC__STR_STZSRC_T1SIG3_Y                  =            4;
const
  MC__STR_STZSRC_T1SIG4_Y                  =            5;
const
  MC__STR_STZSRC_HOLD                      =            6;
const
  MC__STB_Qx1SRC_T1SIG3_Inverted           =            9;
const
  MC__STB_Qx1SRC_T1SIG4_Inverted           =           10;
const
  MC__STB_Qx1SRC_HOLD                      =           11;
const
  MC__STB_Qx2SRC_T1SIG3_Inverted           =            9;
const
  MC__STB_Qx2SRC_T1SIG4_Inverted           =           10;
const
  MC__STB_Qx2SRC_HOLD                      =           11;
const
  MC__INITC_USY                            =  2104 SHL 14;
const
  MC__INITC_USY_TY2Y                       =            1;
const
  MC__INITC_USY_TX2Y                       =            2;
const
  MC__4xFsc_Color_kHz                      =  2105 SHL 14;
const
  MC__SampledPixels_Ln                     =  2106 SHL 14;
const
  MC__STEPX1                               =  2107 SHL 14;
const
  MC__STEPX2                               =  2108 SHL 14;
const
  MC__STEPX3                               =  2109 SHL 14;
const
  MC__STEPY1                               =  2110 SHL 14;
const
  MC__STEPY2                               =  2111 SHL 14;
const
  MC__STEPY3                               =  2112 SHL 14;
const
  MC_Connector_STEREOXY                    =           19;
const
  MC_NextConfigGrabber_mSTEREOXY           =            8;
const
  MC_ConfigGrabber_pSTEREOXY               =           15;
const
  MC_ConfigGrabber_mSTEREOXY               =           16;
const
  MC__Cameras                              =  2113 SHL 14;
const
  MC__TkPx                                 =  2114 SHL 14;
const
  MC__Images                               =  2115 SHL 14;
const
  MC_NextGrabberConfig_STEREOXY            =           89;
const
  MC_GrabberConfig_STEREOXY                =           92;
const
  MC_OutputConfig_Filter_21                =  2116 SHL 14;
const
  MC_OutputState_Filter_21                 =  2117 SHL 14;
const
  MC_OutputState_21                        =  2118 SHL 14;
const
  MC_OutputState_21_HOLD                   =            1;
const
  MC_OutputState_21_LOW                    =            2;
const
  MC_OutputState_21_HIGH                   =            3;
const
  MC_OutputStyle_Filter_21                 =  2119 SHL 14;
const
  MC_OutputConfig_Filter_22                =  2120 SHL 14;
const
  MC_OutputState_Filter_22                 =  2121 SHL 14;
const
  MC_OutputState_22                        =  2122 SHL 14;
const
  MC_OutputState_22_HOLD                   =            1;
const
  MC_OutputState_22_LOW                    =            2;
const
  MC_OutputState_22_HIGH                   =            3;
const
  MC_OutputStyle_Filter_22                 =  2123 SHL 14;
const
  MC_OutputConfig_Filter_23                =  2124 SHL 14;
const
  MC_OutputState_Filter_23                 =  2125 SHL 14;
const
  MC_OutputState_23                        =  2126 SHL 14;
const
  MC_OutputState_23_HOLD                   =            1;
const
  MC_OutputState_23_LOW                    =            2;
const
  MC_OutputState_23_HIGH                   =            3;
const
  MC_OutputStyle_Filter_23                 =  2127 SHL 14;
const
  MC_OutputConfig_Filter_24                =  2128 SHL 14;
const
  MC_OutputState_Filter_24                 =  2129 SHL 14;
const
  MC_OutputState_24                        =  2130 SHL 14;
const
  MC_OutputState_24_HOLD                   =            1;
const
  MC_OutputState_24_LOW                    =            2;
const
  MC_OutputState_24_HIGH                   =            3;
const
  MC_OutputStyle_Filter_24                 =  2131 SHL 14;
const
  MC_OutputConfig_Filter_31                =  2132 SHL 14;
const
  MC_OutputState_Filter_31                 =  2133 SHL 14;
const
  MC_OutputState_31                        =  2134 SHL 14;
const
  MC_OutputState_31_HOLD                   =            1;
const
  MC_OutputState_31_LOW                    =            2;
const
  MC_OutputState_31_HIGH                   =            3;
const
  MC_OutputStyle_Filter_31                 =  2135 SHL 14;
const
  MC_OutputConfig_Filter_32                =  2136 SHL 14;
const
  MC_OutputState_Filter_32                 =  2137 SHL 14;
const
  MC_OutputState_32                        =  2138 SHL 14;
const
  MC_OutputState_32_HOLD                   =            1;
const
  MC_OutputState_32_LOW                    =            2;
const
  MC_OutputState_32_HIGH                   =            3;
const
  MC_OutputStyle_Filter_32                 =  2139 SHL 14;
const
  MC_OutputConfig_Filter_33                =  2140 SHL 14;
const
  MC_OutputState_Filter_33                 =  2141 SHL 14;
const
  MC_OutputState_33                        =  2142 SHL 14;
const
  MC_OutputState_33_HOLD                   =            1;
const
  MC_OutputState_33_LOW                    =            2;
const
  MC_OutputState_33_HIGH                   =            3;
const
  MC_OutputStyle_Filter_33                 =  2143 SHL 14;
const
  MC_OutputConfig_Filter_34                =  2144 SHL 14;
const
  MC_OutputState_Filter_34                 =  2145 SHL 14;
const
  MC_OutputState_34                        =  2146 SHL 14;
const
  MC_OutputState_34_HOLD                   =            1;
const
  MC_OutputState_34_LOW                    =            2;
const
  MC_OutputState_34_HIGH                   =            3;
const
  MC_OutputStyle_Filter_34                 =  2147 SHL 14;
const
  MC_OutputStyle_LVDS                      =            8;
const
  MC_OffsetD1WaitAft                       =  2148 SHL 14;
const
  MC_INITD1State                           =  2149 SHL 14;
const
  MC_INITD1Signature1                      =  2150 SHL 14;
const
  MC_INITD1Signature2                      =  2151 SHL 14;
const
  MC_INITD1Condition                       =  2152 SHL 14;
const
  MC_TrigDelay_us                          =  2153 SHL 14;
const
  MC_TriggerDelay_Tk                       =  2154 SHL 14;
const
  MC_TrigDelay_Tk                          =  2155 SHL 14;
const
  MC_TrigDelay_E                           =  2156 SHL 14;
const
  MC_TrueTrigDelay_Tk                      =  2157 SHL 14;
const
  MC_TrueTrigDelay_us                      =  2158 SHL 14;
const
  MC__SampleClk_KHz                        =  2159 SHL 14;
const
  MC_TrigDelay_T1                          =  2160 SHL 14;
const
  MC_INITCrecord                           =  2161 SHL 14;
const
  MC_INITCsignature                        =  2162 SHL 14;
const
  MC_INITCcondition                        =  2163 SHL 14;
const
  MC_OUTPUTrecord                          =  2164 SHL 14;
const
  MC_OUT17index                            =  2165 SHL 14;
const
  MC_OUT17signature                        =  2166 SHL 14;
const
  MC_OUT17condition                        =  2167 SHL 14;
const
  MC_OUT18index                            =  2168 SHL 14;
const
  MC_OUT18signature                        =  2169 SHL 14;
const
  MC_OUT18condition                        =  2170 SHL 14;
const
  MC_OUT19index                            =  2171 SHL 14;
const
  MC_OUT19signature                        =  2172 SHL 14;
const
  MC_OUT19condition                        =  2173 SHL 14;
const
  MC_MANTRIGcondition                      =  2174 SHL 14;
const
  MC__HactiveMax_Px                        =  2175 SHL 14;
const
  MC_ImageXStep_Px                         =  2176 SHL 14;
const
  MC_ImageYStep_Ln                         =  2177 SHL 14;
const
  MC_RoundedOffsetX_Px                     =  2178 SHL 14;
const
  MC_RoundedOffsetY_Ln                     =  2179 SHL 14;
const
  MC_FifoOffsetX                           =  2180 SHL 14;
const
  MC_FifoOffsetY                           =  2181 SHL 14;
const
  MC_HTotal_Px                             =  2182 SHL 14;
const
  MC_ImageSizingX_VARIABLE                 =            2;
const
  MC_ImageOffset_X                         =  2183 SHL 14;
const
  MC_ImageOffset_Y                         =  2184 SHL 14;
const
  MC_ImageOffsetX                          =  2185 SHL 14;
const
  MC_ImageOffsetY                          =  2186 SHL 14;
const
  MC__Category__Grabber_LUT                =           27;
const
  MC__Category_zGrabber_LUT                =           28;
const
  MC__STM1_T1SEL_OnLTRIGS                  =            5;
const
  MC__STM1_T1SEL_OnLTRIGE                  =            6;
const
  MC__STM1_T1SEL_OnPPLS                    =            7;
const
  MC__STM1_T1SEL_OnGO1                     =            8;
const
  MC__STM1_T1SEL_OnEND2                    =            9;
const
  MC__STM2_T2CLK_EOL                       =            4;
const
  MC__STROBEWidth_us                       =  2187 SHL 14;
const
  MC__StrobeStart_us                       =  2188 SHL 14;
const
  MC__EXPOSEStart_T1                       =  2189 SHL 14;
const
  MC_Camera_VCC_810                        =          126;
const
  MC_PreStrobe_us                          =  2190 SHL 14;
const
  MC_ImagePlaneSize                        =  2191 SHL 14;
const
  MC__EXPOn2STROBEOff_T1                   =  2192 SHL 14;
const
  MC__PREEXPWidth_T1                       =  2193 SHL 14;
const
  MC__DRS_CSOL_LTriggeredLVALS             =            6;
const
  MC__SrobeWidth_us                        =  2194 SHL 14;
const
  MC__ExposeRecovery_T1                    =  2195 SHL 14;
const
  MC__MaxTimer1TriggerRate_Hz              =  2196 SHL 14;
const
  MC__EXPOn_T1                             =  2197 SHL 14;
const
  MC__EXPOff_T1                            =  2198 SHL 14;
const
  MC__HactiveRef_Px                        =  2199 SHL 14;
const
  MC__VactiveRef_Ln                        =  2200 SHL 14;
const
  MC__RoundedActiveSizeX                   =  2201 SHL 14;
const
  MC__RoundedActiveSizeY                   =  2202 SHL 14;
const
  MC_ActiveXStep_Px                        =  2203 SHL 14;
const
  MC__PREEXPWidth_us                       =  2204 SHL 14;
const
  MC__StrobeStop_us                        =  2205 SHL 14;
const
  MC___MAXIMUM_T1                          =  2206 SHL 14;
const
  MC_Camera_VCC_850A                       =          127;
const
  MC_Camera_VCC_870A                       =          128;
const
  MC__CTD_TDSCAL                           =  2207 SHL 14;
const
  MC__CTD_TDSCAL_1us                       =            1;
const
  MC__CTD_TDSCAL_10us                      =            2;
const
  MC__CTD_TDSCAL_100us                     =            3;
const
  MC__CTD_TDSCAL_1ms                       =            4;
const
  MC__TD_us                                =  2208 SHL 14;
const
  MC_TrigDelay_TD                          =  2209 SHL 14;
const
  MC__CTD_TDCLK                            =  2210 SHL 14;
const
  MC__CTD_TDCLK_PRESCAL                    =            1;
const
  MC__CTD_TDCLK_LTRIG                      =            2;
const
  MC__CTD_TDCLK_PPLS                       =            3;
const
  MC__CTD_TDCLK_EOL                        =            4;
const
  MC__CTD_TDMOD                            =  2211 SHL 14;
const
  MC__CTD_TDMOD_Bypass                     =            1;
const
  MC__CTD_TDMOD_Enable                     =            2;
const
  MC__CTD_TDCNT                            =  2212 SHL 14;
const
  MC__CTD_TDSCAL_ns                        =  2213 SHL 14;
const
  MC_TrueTrigDelay_ns                      =  2214 SHL 14;
const
  MC_Connector_VID1                        =           20;
const
  MC_Connector_VID2                        =           21;
const
  MC_Connector_VID3                        =           22;
const
  MC_Connector_VID4                        =           23;
const
  MC_Connector_VID5                        =           24;
const
  MC_Connector_VID6                        =           25;
const
  MC_Connector_VID7                        =           26;
const
  MC_Connector_VID8                        =           27;
const
  MC_Connector_VID9                        =           28;
const
  MC_Connector_VID10                       =           29;
const
  MC_Connector_VID11                       =           30;
const
  MC_Connector_VID12                       =           31;
const
  MC_Connector_VID13                       =           32;
const
  MC_Connector_VID14                       =           33;
const
  MC_Connector_VID15                       =           34;
const
  MC_Connector_VID16                       =           35;
const
  MC_TrigLine_PG                           =           12;
const
  MC_TrigLine_LTACT                        =           13;
const
  MC__TrigLine_PG                          =           18;
const
  MC__TrigLine_LTACT                       =           19;
const
  MC__TRG_FTSEL_PG                         =           15;
const
  MC__TRG_FTSEL_LTACT                      =           16;
const
  MC_PGRCUsage                             =  2215 SHL 14;
const
  MC_PGRCUsage_Unused                      =            1;
const
  MC_PGRCUsage_PG_FT                       =            2;
const
  MC_PGRCUsage_LTActFT                     =            3;
const
  MC_PGRCUsage_PG_LT                       =            4;
const
  MC_PGRCUsage_PG_PT                       =            5;
const
  MC_PGRCUsage_RC_LTActPT                  =            6;
const
  MC__PG_Check                             =  2216 SHL 14;
const
  MC__PG_Check_PASS                        =            1;
const
  MC__PG_Check_FAIL                        =            2;
const
  MC__LTACT_Check                          =  2217 SHL 14;
const
  MC__LTACT_Check_PASS                     =            1;
const
  MC__LTACT_Check_FAIL                     =            2;
const
  MC__TrigLine_PGA                         =           20;
const
  MC__TrigLine_LTACTA                      =           21;
const
  MC__TrigLine_PGB                         =           22;
const
  MC__TrigLine_LTACTB                      =           23;
const
  MC__PGRCUsage_Check                      =  2218 SHL 14;
const
  MC__PGRCUsage_Check_PASS                 =            1;
const
  MC__PGRCUsage_Check_FAIL                 =            2;
const
  MC_PostReadoutRecovery_us                =  2219 SHL 14;
const
  MC__EAP2EXPOn_us                         =  2220 SHL 14;
const
  MC__EAP2EXPOn_T1                         =  2221 SHL 14;
const
  MC__Category_Grabber_LUT                 =           29;
const
  MC__DRS_CSOL_PickedOutLVALS              =            7;
const
  MC_FrameRate_mHz                         =  2222 SHL 14;
const
  MC_FrameDur_us                           =  2223 SHL 14;
const
  MC_STXUsage_PPLS                         =            4;
const
  MC_STYUsage_PPLS                         =            4;
const
  MC__STR_STXSRC_PPLS_X                    =            7;
const
  MC__STR_STYSRC_PPLS_Y                    =            7;
const
  MC_STRUsage_PPLS                         =            3;
const
  MC_ColorFormat                           =  2224 SHL 14;
const
  MC_ColorFormat_RGB24                     =            1;
const
  MC_ColorFormat_BGR24                     =            2;
const
  MC_ColorFormat_RGB32                     =            3;
const
  MC_ColorFormat_BGR32                     =            4;
const
  MC_ColorFormat_RGB16                     =            5;
const
  MC_ColorFormat_RGB15                     =            6;
const
  MC_ColorFormat_Y8                        =            7;
const
  MC_ColorFormat_YUV422                    =            8;
const
  MC_ColorGain                             =  2225 SHL 14;
const
  MC_ColorGainTrimU                        =  2226 SHL 14;
const
  MC_ColorGainTrimV                        =  2227 SHL 14;
const
  MC_ColorGainTrimHue                      =  2228 SHL 14;
const
  MC__Contrast                             =  2229 SHL 14;
const
  MC__Brightness                           =  2230 SHL 14;
const
  MC__SaturationU                          =  2231 SHL 14;
const
  MC__SaturationV                          =  2232 SHL 14;
const
  MC__Hue                                  =  2233 SHL 14;
const
  MC_Camera_COLIBRI2048CL                  =          129;
const
  MC_CamConfig_L2048RGM                    =          179;
const
  MC_Manufacturer_TVI                      =           21;
const
  MC_Camera_CAMERA_CCIR                    =          130;
const
  MC_Camera_CAMERA_EIA                     =          131;
const
  MC_Camera_CAMERA_PAL                     =          132;
const
  MC_Camera_CAMERA_NTSC                    =          133;
const
  MC____Camera                             =  2234 SHL 14;
const
  MC____Camera_CCIR                        =            1;
const
  MC____Camera_EIA                         =            2;
const
  MC____Camera_PAL                         =            3;
const
  MC____Camera_NTSC                        =            4;
const
  MC__NormalSizeX_px                       =  2235 SHL 14;
const
  MC__NormalOffsetX_Px                     =  2236 SHL 14;
const
  MC__SamplingScaleX                       =  2237 SHL 14;
const
  MC__UserScaleX                           =  2238 SHL 14;
const
  MC__FullScaleX                           =  2239 SHL 14;
const
  MC__FullOffsetX_Px                       =  2240 SHL 14;
const
  MC_ColorGainTrimHue_Filter               =  2241 SHL 14;
const
  MC_Camera_COLIBRI1024CL                  =          134;
const
  MC_Camera_MyCameraLink                   =          135;
const
  MC_CamConfig_L1024RGM                    =          180;
const
  MC_CamConfig_PxxSC                       =          181;
const
  MC_CamConfig_PxxRC                       =          182;
const
  MC_CamConfig_PxxRG                       =          183;
const
  MC_CamConfig_IxxSC                       =          184;
const
  MC_CamConfig_LxxxxSP                     =          185;
const
  MC_CamConfig_LxxxxRC                     =          186;
const
  MC_CamConfig_LxxxxRG                     =          187;
const
  MC__FullOffsetY_Ln                       =  2242 SHL 14;
const
  MC__NormalSizeY_Ln                       =  2243 SHL 14;
const
  MC__FullScaleY                           =  2244 SHL 14;
const
  MC__FullFrameSizeY_Ln                    =  2245 SHL 14;
const
  MC_Camera_PRICOLOR1024C                  =          136;
const
  MC_Camera_PRICOLOR2048C                  =          137;
const
  MC_dummydhfjsdhk                         =  2246 SHL 14;
const
  MC_Camera_AViiVA_C2CL4010                =          138;
const
  MC_CamConfig_L1365RG                     =          188;
const
  MC_CamConfig_L4096RGS                    =          189;
const
  MC_OutputState_WENTLOW                   =            8;
const
  MC_OutputState_WENTHIGH                  =            9;
const
  MC_OutputState_PULSE                     =           10;
const
  MC_Camera_CV_M4CLp                       =          139;
const
  MC_Camera_VCC_8350                       =          140;
const
  MC_Camera_VCC_8550                       =          141;
const
  MC_CamConfig_P60RM_A                     =          190;
const
  MC_OutputConfig_Filter_41                =  2247 SHL 14;
const
  MC_OutputState_Filter_41                 =  2248 SHL 14;
const
  MC_OutputState_41                        =  2249 SHL 14;
const
  MC_OutputState_41_HOLD                   =            1;
const
  MC_OutputState_41_LOW                    =            2;
const
  MC_OutputState_41_HIGH                   =            3;
const
  MC_OutputConfig_Filter_42                =  2250 SHL 14;
const
  MC_OutputState_Filter_42                 =  2251 SHL 14;
const
  MC_OutputState_42                        =  2252 SHL 14;
const
  MC_OutputState_42_HOLD                   =            1;
const
  MC_OutputState_42_LOW                    =            2;
const
  MC_OutputState_42_HIGH                   =            3;
const
  MC_ColorStorage_WORD                     =            3;
const
  MC_ColorStorage_Filter                   =  2253 SHL 14;
const
  MC_ImagePixelAlign_Filter                =  2254 SHL 14;
const
  MC__CameraColorFormat                    =  2255 SHL 14;
const
  MC__CameraColorFormat_MONOCHROME         =            1;
const
  MC__CameraColorFormat_BAYER              =            2;
const
  MC__CameraColorFormat_ParallelRGB        =            3;
const
  MC__CameraColorFormat_UNKNOWN            =            4;
const
  MC_ColorFormat_GRABBER                   =            9;
const
  MC_ColorFormat_Y10                       =           10;
const
  MC_ColorFormat_Y12                       =           11;
const
  MC_ColorFormat_Y14                       =           12;
const
  MC_ColorFormat_Y16                       =           13;
const
  MC_ColorFormat_BAYER8                    =           14;
const
  MC_ColorFormat_BAYER10                   =           15;
const
  MC_ColorFormat_BAYER12                   =           16;
const
  MC_ColorFormat_BAYER14                   =           17;
const
  MC_ColorFormat_BAYER16                   =           18;
const
  MC_ColorFormat_RGB30                     =           19;
const
  MC_ColorFormat_RGB36                     =           20;
const
  MC_ColorFormat_RGB42                     =           21;
const
  MC_ColorFormat_RGB48                     =           22;
const
  MC_ColorFormat_ARGB32                    =           23;
const
  MC_ColorFormat_RAW8                      =           24;
const
  MC_ColorFormat_RAW10                     =           25;
const
  MC_ColorFormat_RAW12                     =           26;
const
  MC_ColorFormat_RAW14                     =           27;
const
  MC_ColorFormat_RAW16                     =           28;
const
  MC_ColorFormat_Filter                    =  2256 SHL 14;
const
  MC___ColorFormat_Check                   =  2257 SHL 14;
const
  MC___ColorFormat_Check_PASS              =            1;
const
  MC___ColorFormat_Check_FAIL              =            2;
const
  MC__BoardType__PICOLO_PRO3I              =           14;
const
  MC_ConnectorCount                        =  2258 SHL 14;
const
  MC_ColorFormat_RGB24PL                   =           29;
const
  MC_ColorFormat_RGB30PL                   =           30;
const
  MC_ColorFormat_RGB36PL                   =           31;
const
  MC_ColorFormat_RGB42PL                   =           32;
const
  MC_ColorFormat_RGB48PL                   =           33;
const
  MC_ColorFormat_                          =  2259 SHL 14;
const
  MC_ColorFormat__Y8                       =           34;
const
  MC_ColorFormat__Y10                      =           35;
const
  MC_ColorFormat__Y12                      =           36;
const
  MC_ColorFormat__Y14                      =           37;
const
  MC_ColorFormat__Y16                      =           38;
const
  MC_ColorFormat__BAYER8                   =           39;
const
  MC_ColorFormat__BAYER10                  =           40;
const
  MC_ColorFormat__BAYER12                  =           41;
const
  MC_ColorFormat__BAYER14                  =           42;
const
  MC_ColorFormat__BAYER16                  =           43;
const
  MC_ColorFormat__RGB24                    =           44;
const
  MC_ColorFormat__ARGB32                   =           45;
const
  MC_ColorFormat__RGB24PL                  =           46;
const
  MC_ColorFormat__RGB30PL                  =           47;
const
  MC_ColorFormat__RGB36PL                  =           48;
const
  MC_ColorFormat__RGB42PL                  =           49;
const
  MC_ColorFormat__RGB48PL                  =           50;
const
  MC_ColorFormat__RAW8                     =           51;
const
  MC_ColorFormat__RAW10                    =           52;
const
  MC_ColorFormat__RAW12                    =           53;
const
  MC_ColorFormat__RAW14                    =           54;
const
  MC_ColorFormat__RAW16                    =           55;
const
  MC_ColorFormat__GRABBER                  =           56;
const
  MC_InputConfig_Filter_20                 =  2260 SHL 14;
const
  MC_InputStyle_Filter_20                  =  2261 SHL 14;
const
  MC_InputPinName_IO17                     =           40;
const
  MC_InputPinName_IO18                     =           41;
const
  MC_InputPinName_IO19                     =           42;
const
  MC_InputPinName_IO20                     =           43;
const
  MC_OutputPinName_IO17                    =           48;
const
  MC_OutputPinName_IO18                    =           49;
const
  MC_OutputPinName_IO19                    =           50;
const
  MC_OutputPinName_IO20                    =           51;
const
  MC_InputMaxId_1                          =  2262 SHL 14;
const
  MC_InputMaxId_2                          =  2263 SHL 14;
const
  MC_InputMaxId_3                          =  2264 SHL 14;
const
  MC_InputMaxId_4                          =  2265 SHL 14;
const
  MC_InputMaxId_5                          =  2266 SHL 14;
const
  MC_InputMaxId_6                          =  2267 SHL 14;
const
  MC_InputMaxId_7                          =  2268 SHL 14;
const
  MC_InputMaxId_8                          =  2269 SHL 14;
const
  MC_InputMaxId_9                          =  2270 SHL 14;
const
  MC_InputMaxId_10                         =  2271 SHL 14;
const
  MC_InputMaxId_11                         =  2272 SHL 14;
const
  MC_InputMaxId_12                         =  2273 SHL 14;
const
  MC_InputMaxId_13                         =  2274 SHL 14;
const
  MC_InputMaxId_14                         =  2275 SHL 14;
const
  MC_InputMaxId_15                         =  2276 SHL 14;
const
  MC_InputMaxId_16                         =  2277 SHL 14;
const
  MC_InputMaxId_17                         =  2278 SHL 14;
const
  MC_InputMaxId_18                         =  2279 SHL 14;
const
  MC_InputMaxId_19                         =  2280 SHL 14;
const
  MC_InputMaxId_20                         =  2281 SHL 14;
const
  MC_OutputConfig_Filter_20                =  2282 SHL 14;
const
  MC_OutputState_Filter_20                 =  2283 SHL 14;
const
  MC_OutputStyle_Filter_20                 =  2284 SHL 14;
const
  MC_OutputState_20                        =  2285 SHL 14;
const
  MC_OutputState_20_HOLD                   =            1;
const
  MC_OutputState_20_LOW                    =            2;
const
  MC_OutputState_20_HIGH                   =            3;
const
  MC_MIO_0_Present                         =  2286 SHL 14;
const
  MC_MIO_1_Present                         =  2287 SHL 14;
const
  MC_MIO_2_Present                         =  2288 SHL 14;
const
  MC_MIO_3_Present                         =  2289 SHL 14;
const
  MC_MIO_4_Present                         =  2290 SHL 14;
const
  MC___InputId_1                           =  2291 SHL 14;
const
  MC___InputId_2                           =  2292 SHL 14;
const
  MC___InputId_3                           =  2293 SHL 14;
const
  MC___InputId_4                           =  2294 SHL 14;
const
  MC___InputId_5                           =  2295 SHL 14;
const
  MC___InputId_6                           =  2296 SHL 14;
const
  MC___InputId_7                           =  2297 SHL 14;
const
  MC___InputId_8                           =  2298 SHL 14;
const
  MC___InputId_9                           =  2299 SHL 14;
const
  MC___InputId_10                          =  2300 SHL 14;
const
  MC___InputId_11                          =  2301 SHL 14;
const
  MC___InputId_12                          =  2302 SHL 14;
const
  MC___InputId_13                          =  2303 SHL 14;
const
  MC___InputId_14                          =  2304 SHL 14;
const
  MC___InputId_15                          =  2305 SHL 14;
const
  MC___InputId_16                          =  2306 SHL 14;
const
  MC___InputId_17                          =  2307 SHL 14;
const
  MC___InputId_18                          =  2308 SHL 14;
const
  MC___InputId_19                          =  2309 SHL 14;
const
  MC___InputId_20                          =  2310 SHL 14;
const
  MC___OutputId_1                          =  2311 SHL 14;
const
  MC_OutputMaxId_1                         =  2312 SHL 14;
const
  MC___OutputId_2                          =  2313 SHL 14;
const
  MC_OutputMaxId_2                         =  2314 SHL 14;
const
  MC___OutputId_3                          =  2315 SHL 14;
const
  MC_OutputMaxId_3                         =  2316 SHL 14;
const
  MC___OutputId_4                          =  2317 SHL 14;
const
  MC_OutputMaxId_4                         =  2318 SHL 14;
const
  MC___OutputId_5                          =  2319 SHL 14;
const
  MC_OutputMaxId_5                         =  2320 SHL 14;
const
  MC___OutputId_6                          =  2321 SHL 14;
const
  MC_OutputMaxId_6                         =  2322 SHL 14;
const
  MC___OutputId_7                          =  2323 SHL 14;
const
  MC_OutputMaxId_7                         =  2324 SHL 14;
const
  MC___OutputId_8                          =  2325 SHL 14;
const
  MC_OutputMaxId_8                         =  2326 SHL 14;
const
  MC___OutputId_9                          =  2327 SHL 14;
const
  MC_OutputMaxId_9                         =  2328 SHL 14;
const
  MC___OutputId_10                         =  2329 SHL 14;
const
  MC_OutputMaxId_10                        =  2330 SHL 14;
const
  MC___OutputId_11                         =  2331 SHL 14;
const
  MC_OutputMaxId_11                        =  2332 SHL 14;
const
  MC___OutputId_12                         =  2333 SHL 14;
const
  MC_OutputMaxId_12                        =  2334 SHL 14;
const
  MC___OutputId_13                         =  2335 SHL 14;
const
  MC_OutputMaxId_13                        =  2336 SHL 14;
const
  MC___OutputId_14                         =  2337 SHL 14;
const
  MC_OutputMaxId_14                        =  2338 SHL 14;
const
  MC___OutputId_15                         =  2339 SHL 14;
const
  MC_OutputMaxId_15                        =  2340 SHL 14;
const
  MC___OutputId_16                         =  2341 SHL 14;
const
  MC_OutputMaxId_16                        =  2342 SHL 14;
const
  MC___OutputId_17                         =  2343 SHL 14;
const
  MC_OutputMaxId_17                        =  2344 SHL 14;
const
  MC___OutputId_18                         =  2345 SHL 14;
const
  MC_OutputMaxId_18                        =  2346 SHL 14;
const
  MC___OutputId_19                         =  2347 SHL 14;
const
  MC_OutputMaxId_19                        =  2348 SHL 14;
const
  MC___OutputId_20                         =  2349 SHL 14;
const
  MC_OutputMaxId_20                        =  2350 SHL 14;
const
  MC___InputId_21                          =  2351 SHL 14;
const
  MC_InputMaxId_21                         =  2352 SHL 14;
const
  MC_InputStyle_Filter_21                  =  2353 SHL 14;
const
  MC___InputId_22                          =  2354 SHL 14;
const
  MC_InputMaxId_22                         =  2355 SHL 14;
const
  MC_InputStyle_Filter_22                  =  2356 SHL 14;
const
  MC___InputId_23                          =  2357 SHL 14;
const
  MC_InputMaxId_23                         =  2358 SHL 14;
const
  MC_InputStyle_Filter_23                  =  2359 SHL 14;
const
  MC___InputId_24                          =  2360 SHL 14;
const
  MC_InputMaxId_24                         =  2361 SHL 14;
const
  MC_InputStyle_Filter_24                  =  2362 SHL 14;
const
  MC___InputId_25                          =  2363 SHL 14;
const
  MC_InputMaxId_25                         =  2364 SHL 14;
const
  MC_InputStyle_Filter_25                  =  2365 SHL 14;
const
  MC___InputId_26                          =  2366 SHL 14;
const
  MC_InputMaxId_26                         =  2367 SHL 14;
const
  MC_InputStyle_Filter_26                  =  2368 SHL 14;
const
  MC___InputId_27                          =  2369 SHL 14;
const
  MC_InputMaxId_27                         =  2370 SHL 14;
const
  MC_InputStyle_Filter_27                  =  2371 SHL 14;
const
  MC___InputId_28                          =  2372 SHL 14;
const
  MC_InputMaxId_28                         =  2373 SHL 14;
const
  MC___InputId_29                          =  2374 SHL 14;
const
  MC_InputMaxId_29                         =  2375 SHL 14;
const
  MC_InputConfig_Filter_30                 =  2376 SHL 14;
const
  MC___InputId_30                          =  2377 SHL 14;
const
  MC_InputMaxId_30                         =  2378 SHL 14;
const
  MC_InputStyle_Filter_30                  =  2379 SHL 14;
const
  MC___InputId_31                          =  2380 SHL 14;
const
  MC_InputMaxId_31                         =  2381 SHL 14;
const
  MC_InputStyle_Filter_31                  =  2382 SHL 14;
const
  MC___InputId_32                          =  2383 SHL 14;
const
  MC_InputMaxId_32                         =  2384 SHL 14;
const
  MC_InputStyle_Filter_32                  =  2385 SHL 14;
const
  MC___InputId_33                          =  2386 SHL 14;
const
  MC_InputMaxId_33                         =  2387 SHL 14;
const
  MC_InputStyle_Filter_33                  =  2388 SHL 14;
const
  MC___InputId_34                          =  2389 SHL 14;
const
  MC_InputMaxId_34                         =  2390 SHL 14;
const
  MC_InputStyle_Filter_34                  =  2391 SHL 14;
const
  MC___InputId_35                          =  2392 SHL 14;
const
  MC_InputMaxId_35                         =  2393 SHL 14;
const
  MC_InputStyle_Filter_35                  =  2394 SHL 14;
const
  MC___InputId_36                          =  2395 SHL 14;
const
  MC_InputMaxId_36                         =  2396 SHL 14;
const
  MC_InputStyle_Filter_36                  =  2397 SHL 14;
const
  MC___InputId_37                          =  2398 SHL 14;
const
  MC_InputMaxId_37                         =  2399 SHL 14;
const
  MC_InputStyle_Filter_37                  =  2400 SHL 14;
const
  MC___InputId_38                          =  2401 SHL 14;
const
  MC_InputMaxId_38                         =  2402 SHL 14;
const
  MC___InputId_39                          =  2403 SHL 14;
const
  MC_InputMaxId_39                         =  2404 SHL 14;
const
  MC_InputConfig_Filter_40                 =  2405 SHL 14;
const
  MC___InputId_40                          =  2406 SHL 14;
const
  MC_InputMaxId_40                         =  2407 SHL 14;
const
  MC_InputStyle_Filter_40                  =  2408 SHL 14;
const
  MC_InputPinName_I1_0                     =           44;
const
  MC_InputPinName_I2_0                     =           45;
const
  MC_InputPinName_I3_0                     =           46;
const
  MC_InputPinName_I4_0                     =           47;
const
  MC_InputPinName_I1_1                     =           48;
const
  MC_InputPinName_I2_1                     =           49;
const
  MC_InputPinName_I3_1                     =           50;
const
  MC_InputPinName_I4_1                     =           51;
const
  MC_InputPinName_I1_2                     =           52;
const
  MC_InputPinName_I2_2                     =           53;
const
  MC_InputPinName_I3_2                     =           54;
const
  MC_InputPinName_I4_2                     =           55;
const
  MC_InputPinName_I1_3                     =           56;
const
  MC_InputPinName_I2_3                     =           57;
const
  MC_InputPinName_I3_3                     =           58;
const
  MC_InputPinName_I4_3                     =           59;
const
  MC_InputPinName_I1_4                     =           60;
const
  MC_InputPinName_I2_4                     =           61;
const
  MC_InputPinName_I3_4                     =           62;
const
  MC_InputPinName_I4_4                     =           63;
const
  MC___OutputId_21                         =  2409 SHL 14;
const
  MC_OutputMaxId_21                        =  2410 SHL 14;
const
  MC___OutputId_22                         =  2411 SHL 14;
const
  MC_OutputMaxId_22                        =  2412 SHL 14;
const
  MC___OutputId_23                         =  2413 SHL 14;
const
  MC_OutputMaxId_23                        =  2414 SHL 14;
const
  MC___OutputId_24                         =  2415 SHL 14;
const
  MC_OutputMaxId_24                        =  2416 SHL 14;
const
  MC_OutputConfig_Filter_25                =  2417 SHL 14;
const
  MC___OutputId_25                         =  2418 SHL 14;
const
  MC_OutputMaxId_25                        =  2419 SHL 14;
const
  MC_OutputState_Filter_25                 =  2420 SHL 14;
const
  MC_OutputStyle_Filter_25                 =  2421 SHL 14;
const
  MC_OutputState_25                        =  2422 SHL 14;
const
  MC_OutputState_25_HOLD                   =            1;
const
  MC_OutputState_25_LOW                    =            2;
const
  MC_OutputState_25_HIGH                   =            3;
const
  MC_OutputConfig_Filter_26                =  2423 SHL 14;
const
  MC___OutputId_26                         =  2424 SHL 14;
const
  MC_OutputMaxId_26                        =  2425 SHL 14;
const
  MC_OutputState_Filter_26                 =  2426 SHL 14;
const
  MC_OutputStyle_Filter_26                 =  2427 SHL 14;
const
  MC_OutputState_26                        =  2428 SHL 14;
const
  MC_OutputState_26_HOLD                   =            1;
const
  MC_OutputState_26_LOW                    =            2;
const
  MC_OutputState_26_HIGH                   =            3;
const
  MC_OutputConfig_Filter_27                =  2429 SHL 14;
const
  MC___OutputId_27                         =  2430 SHL 14;
const
  MC_OutputMaxId_27                        =  2431 SHL 14;
const
  MC_OutputState_Filter_27                 =  2432 SHL 14;
const
  MC_OutputStyle_Filter_27                 =  2433 SHL 14;
const
  MC_OutputState_27                        =  2434 SHL 14;
const
  MC_OutputState_27_HOLD                   =            1;
const
  MC_OutputState_27_LOW                    =            2;
const
  MC_OutputState_27_HIGH                   =            3;
const
  MC___OutputId_28                         =  2435 SHL 14;
const
  MC_OutputMaxId_28                        =  2436 SHL 14;
const
  MC___OutputId_29                         =  2437 SHL 14;
const
  MC_OutputMaxId_29                        =  2438 SHL 14;
const
  MC_OutputConfig_Filter_30                =  2439 SHL 14;
const
  MC___OutputId_30                         =  2440 SHL 14;
const
  MC_OutputMaxId_30                        =  2441 SHL 14;
const
  MC_OutputState_Filter_30                 =  2442 SHL 14;
const
  MC_OutputStyle_Filter_30                 =  2443 SHL 14;
const
  MC_OutputState_30                        =  2444 SHL 14;
const
  MC_OutputState_30_HOLD                   =            1;
const
  MC_OutputState_30_LOW                    =            2;
const
  MC_OutputState_30_HIGH                   =            3;
const
  MC___OutputId_31                         =  2445 SHL 14;
const
  MC_OutputMaxId_31                        =  2446 SHL 14;
const
  MC___OutputId_32                         =  2447 SHL 14;
const
  MC_OutputMaxId_32                        =  2448 SHL 14;
const
  MC___OutputId_33                         =  2449 SHL 14;
const
  MC_OutputMaxId_33                        =  2450 SHL 14;
const
  MC___OutputId_34                         =  2451 SHL 14;
const
  MC_OutputMaxId_34                        =  2452 SHL 14;
const
  MC_OutputConfig_Filter_35                =  2453 SHL 14;
const
  MC___OutputId_35                         =  2454 SHL 14;
const
  MC_OutputMaxId_35                        =  2455 SHL 14;
const
  MC_OutputState_Filter_35                 =  2456 SHL 14;
const
  MC_OutputStyle_Filter_35                 =  2457 SHL 14;
const
  MC_OutputState_35                        =  2458 SHL 14;
const
  MC_OutputState_35_HOLD                   =            1;
const
  MC_OutputState_35_LOW                    =            2;
const
  MC_OutputState_35_HIGH                   =            3;
const
  MC_OutputConfig_Filter_36                =  2459 SHL 14;
const
  MC___OutputId_36                         =  2460 SHL 14;
const
  MC_OutputMaxId_36                        =  2461 SHL 14;
const
  MC_OutputState_Filter_36                 =  2462 SHL 14;
const
  MC_OutputStyle_Filter_36                 =  2463 SHL 14;
const
  MC_OutputState_36                        =  2464 SHL 14;
const
  MC_OutputState_36_HOLD                   =            1;
const
  MC_OutputState_36_LOW                    =            2;
const
  MC_OutputState_36_HIGH                   =            3;
const
  MC_OutputConfig_Filter_37                =  2465 SHL 14;
const
  MC___OutputId_37                         =  2466 SHL 14;
const
  MC_OutputMaxId_37                        =  2467 SHL 14;
const
  MC_OutputState_Filter_37                 =  2468 SHL 14;
const
  MC_OutputStyle_Filter_37                 =  2469 SHL 14;
const
  MC_OutputState_37                        =  2470 SHL 14;
const
  MC_OutputState_37_HOLD                   =            1;
const
  MC_OutputState_37_LOW                    =            2;
const
  MC_OutputState_37_HIGH                   =            3;
const
  MC___OutputId_38                         =  2471 SHL 14;
const
  MC_OutputMaxId_38                        =  2472 SHL 14;
const
  MC___OutputId_39                         =  2473 SHL 14;
const
  MC_OutputMaxId_39                        =  2474 SHL 14;
const
  MC_OutputConfig_Filter_40                =  2475 SHL 14;
const
  MC___OutputId_40                         =  2476 SHL 14;
const
  MC_OutputMaxId_40                        =  2477 SHL 14;
const
  MC_OutputState_Filter_40                 =  2478 SHL 14;
const
  MC_OutputStyle_Filter_40                 =  2479 SHL 14;
const
  MC_OutputState_40                        =  2480 SHL 14;
const
  MC_OutputState_40_HOLD                   =            1;
const
  MC_OutputState_40_LOW                    =            2;
const
  MC_OutputState_40_HIGH                   =            3;
const
  MC_OutputPinName_O1_0                    =           52;
const
  MC_OutputPinName_O2_0                    =           53;
const
  MC_OutputPinName_O3_0                    =           54;
const
  MC_OutputPinName_O4_0                    =           55;
const
  MC_OutputPinName_O1_1                    =           56;
const
  MC_OutputPinName_O2_1                    =           57;
const
  MC_OutputPinName_O3_1                    =           58;
const
  MC_OutputPinName_O4_1                    =           59;
const
  MC_OutputPinName_O1_2                    =           60;
const
  MC_OutputPinName_O2_2                    =           61;
const
  MC_OutputPinName_O3_2                    =           62;
const
  MC_OutputPinName_O4_2                    =           63;
const
  MC_OutputPinName_O1_3                    =           64;
const
  MC_OutputPinName_O2_3                    =           65;
const
  MC_OutputPinName_O3_3                    =           66;
const
  MC_OutputPinName_O4_3                    =           67;
const
  MC_OutputPinName_O1_4                    =           68;
const
  MC_OutputPinName_O2_4                    =           69;
const
  MC_OutputPinName_O3_4                    =           70;
const
  MC_OutputPinName_O4_4                    =           71;
const
  MC_ColorTrap                             =  2481 SHL 14;
const
  MC_ColorTrap_ENABLE                      =            1;
const
  MC_ColorTrap_DISABLE                     =            2;
const
  MC_ColorKiller                           =  2482 SHL 14;
const
  MC_ColorKiller_ENABLE                    =            1;
const
  MC_ColorKiller_DISABLE                   =            2;
const
  MC_DataCoring                            =  2483 SHL 14;
const
  MC_DataCoring_NONE                       =            1;
const
  MC_DataCoring_CORING8                    =            2;
const
  MC_DataCoring_CORING16                   =            3;
const
  MC_DataCoring_CORING32                   =            4;
const
  MC_DataRange                             =  2484 SHL 14;
const
  MC_DataRange_FULL                        =            1;
const
  MC_DataRange_RESTRICT                    =            2;
const
  MC_GammaRemoval                          =  2485 SHL 14;
const
  MC_GammaRemoval_ENABLE                   =            1;
const
  MC_GammaRemoval_DISABLE                  =            2;
const
  MC_MaxInputIndex                         =  2486 SHL 14;
const
  MC_MaxOutputIndex                        =  2487 SHL 14;
const
  MC_BoardTopology_1_11_0                  =           26;
const
  MC_BoardTopology_1_01_2                  =           27;
const
  MC_BoardTopology_1_2_0                   =           28;
const
  MC_Connector_YC                          =           36;
const
  MC_InputPinName_I1                       =           64;
const
  MC_InputPinName_I2                       =           65;
const
  MC_InputPinName_I3                       =           66;
const
  MC_InputPinName_I4                       =           67;
const
  MC_OutputPinName_O1                      =           72;
const
  MC_OutputPinName_O2                      =           73;
const
  MC_OutputPinName_O3                      =           74;
const
  MC_OutputPinName_O4                      =           75;
const
  MC_InputConfig_Filter_MC_MV0_IN1         =  2488 SHL 14;
const
  MC___InputId_MC_MV0_IN1                  =  2489 SHL 14;
const
  MC_InputMaxId_MC_MV0_IN1                 =  2490 SHL 14;
const
  MC_InputStyle_Filter_MC_MV0_IN1          =  2491 SHL 14;
const
  MC_InputConfig_Filter_MC_MV0_IN2         =  2492 SHL 14;
const
  MC___InputId_MC_MV0_IN2                  =  2493 SHL 14;
const
  MC_InputMaxId_MC_MV0_IN2                 =  2494 SHL 14;
const
  MC_InputStyle_Filter_MC_MV0_IN2          =  2495 SHL 14;
const
  MC_InputConfig_Filter_MC_MV0_IN3         =  2496 SHL 14;
const
  MC___InputId_MC_MV0_IN3                  =  2497 SHL 14;
const
  MC_InputMaxId_MC_MV0_IN3                 =  2498 SHL 14;
const
  MC_InputStyle_Filter_MC_MV0_IN3          =  2499 SHL 14;
const
  MC_InputConfig_Filter_MC_MV0_IN4         =  2500 SHL 14;
const
  MC___InputId_MC_MV0_IN4                  =  2501 SHL 14;
const
  MC_InputMaxId_MC_MV0_IN4                 =  2502 SHL 14;
const
  MC_InputStyle_Filter_MC_MV0_IN4          =  2503 SHL 14;
const
  MC_InputConfig_Filter_MC_MV0_IN5         =  2504 SHL 14;
const
  MC___InputId_MC_MV0_IN5                  =  2505 SHL 14;
const
  MC_InputMaxId_MC_MV0_IN5                 =  2506 SHL 14;
const
  MC_InputStyle_Filter_MC_MV0_IN5          =  2507 SHL 14;
const
  MC_InputConfig_Filter_MC_MV1_IN1         =  2508 SHL 14;
const
  MC___InputId_MC_MV1_IN1                  =  2509 SHL 14;
const
  MC_InputMaxId_MC_MV1_IN1                 =  2510 SHL 14;
const
  MC_InputStyle_Filter_MC_MV1_IN1          =  2511 SHL 14;
const
  MC_InputConfig_Filter_MC_MV1_IN2         =  2512 SHL 14;
const
  MC___InputId_MC_MV1_IN2                  =  2513 SHL 14;
const
  MC_InputMaxId_MC_MV1_IN2                 =  2514 SHL 14;
const
  MC_InputStyle_Filter_MC_MV1_IN2          =  2515 SHL 14;
const
  MC_InputConfig_Filter_MC_MV1_IN3         =  2516 SHL 14;
const
  MC___InputId_MC_MV1_IN3                  =  2517 SHL 14;
const
  MC_InputMaxId_MC_MV1_IN3                 =  2518 SHL 14;
const
  MC_InputStyle_Filter_MC_MV1_IN3          =  2519 SHL 14;
const
  MC_InputConfig_Filter_MC_MV1_IN4         =  2520 SHL 14;
const
  MC___InputId_MC_MV1_IN4                  =  2521 SHL 14;
const
  MC_InputMaxId_MC_MV1_IN4                 =  2522 SHL 14;
const
  MC_InputStyle_Filter_MC_MV1_IN4          =  2523 SHL 14;
const
  MC_InputConfig_Filter_MC_MV1_IN5         =  2524 SHL 14;
const
  MC___InputId_MC_MV1_IN5                  =  2525 SHL 14;
const
  MC_InputMaxId_MC_MV1_IN5                 =  2526 SHL 14;
const
  MC_InputStyle_Filter_MC_MV1_IN5          =  2527 SHL 14;
const
  MC_InputConfig_Filter_MC_MV2_IN1         =  2528 SHL 14;
const
  MC___InputId_MC_MV2_IN1                  =  2529 SHL 14;
const
  MC_InputMaxId_MC_MV2_IN1                 =  2530 SHL 14;
const
  MC_InputStyle_Filter_MC_MV2_IN1          =  2531 SHL 14;
const
  MC_InputConfig_Filter_MC_MV2_IN2         =  2532 SHL 14;
const
  MC___InputId_MC_MV2_IN2                  =  2533 SHL 14;
const
  MC_InputMaxId_MC_MV2_IN2                 =  2534 SHL 14;
const
  MC_InputStyle_Filter_MC_MV2_IN2          =  2535 SHL 14;
const
  MC_InputConfig_Filter_MC_MV2_IN3         =  2536 SHL 14;
const
  MC___InputId_MC_MV2_IN3                  =  2537 SHL 14;
const
  MC_InputMaxId_MC_MV2_IN3                 =  2538 SHL 14;
const
  MC_InputStyle_Filter_MC_MV2_IN3          =  2539 SHL 14;
const
  MC_InputConfig_Filter_MC_MV2_IN4         =  2540 SHL 14;
const
  MC___InputId_MC_MV2_IN4                  =  2541 SHL 14;
const
  MC_InputMaxId_MC_MV2_IN4                 =  2542 SHL 14;
const
  MC_InputStyle_Filter_MC_MV2_IN4          =  2543 SHL 14;
const
  MC_InputConfig_Filter_MC_MV2_IN5         =  2544 SHL 14;
const
  MC___InputId_MC_MV2_IN5                  =  2545 SHL 14;
const
  MC_InputMaxId_MC_MV2_IN5                 =  2546 SHL 14;
const
  MC_InputStyle_Filter_MC_MV2_IN5          =  2547 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO0_IN1        =  2548 SHL 14;
const
  MC___InputId_MC_MIO0_IN1                 =  2549 SHL 14;
const
  MC_InputMaxId_MC_MIO0_IN1                =  2550 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO0_IN1         =  2551 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO0_IN2        =  2552 SHL 14;
const
  MC___InputId_MC_MIO0_IN2                 =  2553 SHL 14;
const
  MC_InputMaxId_MC_MIO0_IN2                =  2554 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO0_IN2         =  2555 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO0_IN3        =  2556 SHL 14;
const
  MC___InputId_MC_MIO0_IN3                 =  2557 SHL 14;
const
  MC_InputMaxId_MC_MIO0_IN3                =  2558 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO0_IN3         =  2559 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO0_IN4        =  2560 SHL 14;
const
  MC___InputId_MC_MIO0_IN4                 =  2561 SHL 14;
const
  MC_InputMaxId_MC_MIO0_IN4                =  2562 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO0_IN4         =  2563 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO1_IN1        =  2564 SHL 14;
const
  MC___InputId_MC_MIO1_IN1                 =  2565 SHL 14;
const
  MC_InputMaxId_MC_MIO1_IN1                =  2566 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO1_IN1         =  2567 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO1_IN2        =  2568 SHL 14;
const
  MC___InputId_MC_MIO1_IN2                 =  2569 SHL 14;
const
  MC_InputMaxId_MC_MIO1_IN2                =  2570 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO1_IN2         =  2571 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO1_IN3        =  2572 SHL 14;
const
  MC___InputId_MC_MIO1_IN3                 =  2573 SHL 14;
const
  MC_InputMaxId_MC_MIO1_IN3                =  2574 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO1_IN3         =  2575 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO1_IN4        =  2576 SHL 14;
const
  MC___InputId_MC_MIO1_IN4                 =  2577 SHL 14;
const
  MC_InputMaxId_MC_MIO1_IN4                =  2578 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO1_IN4         =  2579 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO2_IN1        =  2580 SHL 14;
const
  MC___InputId_MC_MIO2_IN1                 =  2581 SHL 14;
const
  MC_InputMaxId_MC_MIO2_IN1                =  2582 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO2_IN1         =  2583 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO2_IN2        =  2584 SHL 14;
const
  MC___InputId_MC_MIO2_IN2                 =  2585 SHL 14;
const
  MC_InputMaxId_MC_MIO2_IN2                =  2586 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO2_IN2         =  2587 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO2_IN3        =  2588 SHL 14;
const
  MC___InputId_MC_MIO2_IN3                 =  2589 SHL 14;
const
  MC_InputMaxId_MC_MIO2_IN3                =  2590 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO2_IN3         =  2591 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO2_IN4        =  2592 SHL 14;
const
  MC___InputId_MC_MIO2_IN4                 =  2593 SHL 14;
const
  MC_InputMaxId_MC_MIO2_IN4                =  2594 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO2_IN4         =  2595 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO3_IN1        =  2596 SHL 14;
const
  MC___InputId_MC_MIO3_IN1                 =  2597 SHL 14;
const
  MC_InputMaxId_MC_MIO3_IN1                =  2598 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO3_IN1         =  2599 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO3_IN2        =  2600 SHL 14;
const
  MC___InputId_MC_MIO3_IN2                 =  2601 SHL 14;
const
  MC_InputMaxId_MC_MIO3_IN2                =  2602 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO3_IN2         =  2603 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO3_IN3        =  2604 SHL 14;
const
  MC___InputId_MC_MIO3_IN3                 =  2605 SHL 14;
const
  MC_InputMaxId_MC_MIO3_IN3                =  2606 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO3_IN3         =  2607 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO3_IN4        =  2608 SHL 14;
const
  MC___InputId_MC_MIO3_IN4                 =  2609 SHL 14;
const
  MC_InputMaxId_MC_MIO3_IN4                =  2610 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO3_IN4         =  2611 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO4_IN1        =  2612 SHL 14;
const
  MC___InputId_MC_MIO4_IN1                 =  2613 SHL 14;
const
  MC_InputMaxId_MC_MIO4_IN1                =  2614 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO4_IN1         =  2615 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO4_IN2        =  2616 SHL 14;
const
  MC___InputId_MC_MIO4_IN2                 =  2617 SHL 14;
const
  MC_InputMaxId_MC_MIO4_IN2                =  2618 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO4_IN2         =  2619 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO4_IN3        =  2620 SHL 14;
const
  MC___InputId_MC_MIO4_IN3                 =  2621 SHL 14;
const
  MC_InputMaxId_MC_MIO4_IN3                =  2622 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO4_IN3         =  2623 SHL 14;
const
  MC_InputConfig_Filter_MC_MIO4_IN4        =  2624 SHL 14;
const
  MC___InputId_MC_MIO4_IN4                 =  2625 SHL 14;
const
  MC_InputMaxId_MC_MIO4_IN4                =  2626 SHL 14;
const
  MC_InputStyle_Filter_MC_MIO4_IN4         =  2627 SHL 14;
const
  MC_OutputConfig_Filter_MC_MV0_OUT1       =  2628 SHL 14;
const
  MC___OutputId_MC_MV0_OUT1                =  2629 SHL 14;
const
  MC_OutputMaxId_MC_MV0_OUT1               =  2630 SHL 14;
const
  MC_OutputState_Filter_MC_MV0_OUT1        =  2631 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV0_OUT1        =  2632 SHL 14;
const
  MC_OutputState_MC_MV0_OUT1               =  2633 SHL 14;
const
  MC_OutputState_MC_MV0_OUT1_HOLD          =            1;
const
  MC_OutputState_MC_MV0_OUT1_LOW           =            2;
const
  MC_OutputState_MC_MV0_OUT1_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV0_OUT2       =  2634 SHL 14;
const
  MC___OutputId_MC_MV0_OUT2                =  2635 SHL 14;
const
  MC_OutputMaxId_MC_MV0_OUT2               =  2636 SHL 14;
const
  MC_OutputState_Filter_MC_MV0_OUT2        =  2637 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV0_OUT2        =  2638 SHL 14;
const
  MC_OutputState_MC_MV0_OUT2               =  2639 SHL 14;
const
  MC_OutputState_MC_MV0_OUT2_HOLD          =            1;
const
  MC_OutputState_MC_MV0_OUT2_LOW           =            2;
const
  MC_OutputState_MC_MV0_OUT2_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV0_OUT3       =  2640 SHL 14;
const
  MC___OutputId_MC_MV0_OUT3                =  2641 SHL 14;
const
  MC_OutputMaxId_MC_MV0_OUT3               =  2642 SHL 14;
const
  MC_OutputState_Filter_MC_MV0_OUT3        =  2643 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV0_OUT3        =  2644 SHL 14;
const
  MC_OutputState_MC_MV0_OUT3               =  2645 SHL 14;
const
  MC_OutputState_MC_MV0_OUT3_HOLD          =            1;
const
  MC_OutputState_MC_MV0_OUT3_LOW           =            2;
const
  MC_OutputState_MC_MV0_OUT3_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV0_OUT4       =  2646 SHL 14;
const
  MC___OutputId_MC_MV0_OUT4                =  2647 SHL 14;
const
  MC_OutputMaxId_MC_MV0_OUT4               =  2648 SHL 14;
const
  MC_OutputState_Filter_MC_MV0_OUT4        =  2649 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV0_OUT4        =  2650 SHL 14;
const
  MC_OutputState_MC_MV0_OUT4               =  2651 SHL 14;
const
  MC_OutputState_MC_MV0_OUT4_HOLD          =            1;
const
  MC_OutputState_MC_MV0_OUT4_LOW           =            2;
const
  MC_OutputState_MC_MV0_OUT4_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV0_OUT5       =  2652 SHL 14;
const
  MC___OutputId_MC_MV0_OUT5                =  2653 SHL 14;
const
  MC_OutputMaxId_MC_MV0_OUT5               =  2654 SHL 14;
const
  MC_OutputState_Filter_MC_MV0_OUT5        =  2655 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV0_OUT5        =  2656 SHL 14;
const
  MC_OutputState_MC_MV0_OUT5               =  2657 SHL 14;
const
  MC_OutputState_MC_MV0_OUT5_HOLD          =            1;
const
  MC_OutputState_MC_MV0_OUT5_LOW           =            2;
const
  MC_OutputState_MC_MV0_OUT5_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV1_OUT1       =  2658 SHL 14;
const
  MC___OutputId_MC_MV1_OUT1                =  2659 SHL 14;
const
  MC_OutputMaxId_MC_MV1_OUT1               =  2660 SHL 14;
const
  MC_OutputState_Filter_MC_MV1_OUT1        =  2661 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV1_OUT1        =  2662 SHL 14;
const
  MC_OutputState_MC_MV1_OUT1               =  2663 SHL 14;
const
  MC_OutputState_MC_MV1_OUT1_HOLD          =            1;
const
  MC_OutputState_MC_MV1_OUT1_LOW           =            2;
const
  MC_OutputState_MC_MV1_OUT1_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV1_OUT2       =  2664 SHL 14;
const
  MC___OutputId_MC_MV1_OUT2                =  2665 SHL 14;
const
  MC_OutputMaxId_MC_MV1_OUT2               =  2666 SHL 14;
const
  MC_OutputState_Filter_MC_MV1_OUT2        =  2667 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV1_OUT2        =  2668 SHL 14;
const
  MC_OutputState_MC_MV1_OUT2               =  2669 SHL 14;
const
  MC_OutputState_MC_MV1_OUT2_HOLD          =            1;
const
  MC_OutputState_MC_MV1_OUT2_LOW           =            2;
const
  MC_OutputState_MC_MV1_OUT2_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV1_OUT3       =  2670 SHL 14;
const
  MC___OutputId_MC_MV1_OUT3                =  2671 SHL 14;
const
  MC_OutputMaxId_MC_MV1_OUT3               =  2672 SHL 14;
const
  MC_OutputState_Filter_MC_MV1_OUT3        =  2673 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV1_OUT3        =  2674 SHL 14;
const
  MC_OutputState_MC_MV1_OUT3               =  2675 SHL 14;
const
  MC_OutputState_MC_MV1_OUT3_HOLD          =            1;
const
  MC_OutputState_MC_MV1_OUT3_LOW           =            2;
const
  MC_OutputState_MC_MV1_OUT3_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV1_OUT4       =  2676 SHL 14;
const
  MC___OutputId_MC_MV1_OUT4                =  2677 SHL 14;
const
  MC_OutputMaxId_MC_MV1_OUT4               =  2678 SHL 14;
const
  MC_OutputState_Filter_MC_MV1_OUT4        =  2679 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV1_OUT4        =  2680 SHL 14;
const
  MC_OutputState_MC_MV1_OUT4               =  2681 SHL 14;
const
  MC_OutputState_MC_MV1_OUT4_HOLD          =            1;
const
  MC_OutputState_MC_MV1_OUT4_LOW           =            2;
const
  MC_OutputState_MC_MV1_OUT4_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV1_OUT5       =  2682 SHL 14;
const
  MC___OutputId_MC_MV1_OUT5                =  2683 SHL 14;
const
  MC_OutputMaxId_MC_MV1_OUT5               =  2684 SHL 14;
const
  MC_OutputState_Filter_MC_MV1_OUT5        =  2685 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV1_OUT5        =  2686 SHL 14;
const
  MC_OutputState_MC_MV1_OUT5               =  2687 SHL 14;
const
  MC_OutputState_MC_MV1_OUT5_HOLD          =            1;
const
  MC_OutputState_MC_MV1_OUT5_LOW           =            2;
const
  MC_OutputState_MC_MV1_OUT5_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV2_OUT1       =  2688 SHL 14;
const
  MC___OutputId_MC_MV2_OUT1                =  2689 SHL 14;
const
  MC_OutputMaxId_MC_MV2_OUT1               =  2690 SHL 14;
const
  MC_OutputState_Filter_MC_MV2_OUT1        =  2691 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV2_OUT1        =  2692 SHL 14;
const
  MC_OutputState_MC_MV2_OUT1               =  2693 SHL 14;
const
  MC_OutputState_MC_MV2_OUT1_HOLD          =            1;
const
  MC_OutputState_MC_MV2_OUT1_LOW           =            2;
const
  MC_OutputState_MC_MV2_OUT1_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV2_OUT2       =  2694 SHL 14;
const
  MC___OutputId_MC_MV2_OUT2                =  2695 SHL 14;
const
  MC_OutputMaxId_MC_MV2_OUT2               =  2696 SHL 14;
const
  MC_OutputState_Filter_MC_MV2_OUT2        =  2697 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV2_OUT2        =  2698 SHL 14;
const
  MC_OutputState_MC_MV2_OUT2               =  2699 SHL 14;
const
  MC_OutputState_MC_MV2_OUT2_HOLD          =            1;
const
  MC_OutputState_MC_MV2_OUT2_LOW           =            2;
const
  MC_OutputState_MC_MV2_OUT2_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV2_OUT3       =  2700 SHL 14;
const
  MC___OutputId_MC_MV2_OUT3                =  2701 SHL 14;
const
  MC_OutputMaxId_MC_MV2_OUT3               =  2702 SHL 14;
const
  MC_OutputState_Filter_MC_MV2_OUT3        =  2703 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV2_OUT3        =  2704 SHL 14;
const
  MC_OutputState_MC_MV2_OUT3               =  2705 SHL 14;
const
  MC_OutputState_MC_MV2_OUT3_HOLD          =            1;
const
  MC_OutputState_MC_MV2_OUT3_LOW           =            2;
const
  MC_OutputState_MC_MV2_OUT3_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV2_OUT4       =  2706 SHL 14;
const
  MC___OutputId_MC_MV2_OUT4                =  2707 SHL 14;
const
  MC_OutputMaxId_MC_MV2_OUT4               =  2708 SHL 14;
const
  MC_OutputState_Filter_MC_MV2_OUT4        =  2709 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV2_OUT4        =  2710 SHL 14;
const
  MC_OutputState_MC_MV2_OUT4               =  2711 SHL 14;
const
  MC_OutputState_MC_MV2_OUT4_HOLD          =            1;
const
  MC_OutputState_MC_MV2_OUT4_LOW           =            2;
const
  MC_OutputState_MC_MV2_OUT4_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MV2_OUT5       =  2712 SHL 14;
const
  MC___OutputId_MC_MV2_OUT5                =  2713 SHL 14;
const
  MC_OutputMaxId_MC_MV2_OUT5               =  2714 SHL 14;
const
  MC_OutputState_Filter_MC_MV2_OUT5        =  2715 SHL 14;
const
  MC_OutputStyle_Filter_MC_MV2_OUT5        =  2716 SHL 14;
const
  MC_OutputState_MC_MV2_OUT5               =  2717 SHL 14;
const
  MC_OutputState_MC_MV2_OUT5_HOLD          =            1;
const
  MC_OutputState_MC_MV2_OUT5_LOW           =            2;
const
  MC_OutputState_MC_MV2_OUT5_HIGH          =            3;
const
  MC_OutputConfig_Filter_MC_MIO0_OUT1      =  2718 SHL 14;
const
  MC___OutputId_MC_MIO0_OUT1               =  2719 SHL 14;
const
  MC_OutputMaxId_MC_MIO0_OUT1              =  2720 SHL 14;
const
  MC_OutputState_Filter_MC_MIO0_OUT1       =  2721 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO0_OUT1       =  2722 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT1              =  2723 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT1_HOLD         =            1;
const
  MC_OutputState_MC_MIO0_OUT1_LOW          =            2;
const
  MC_OutputState_MC_MIO0_OUT1_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO0_OUT2      =  2724 SHL 14;
const
  MC___OutputId_MC_MIO0_OUT2               =  2725 SHL 14;
const
  MC_OutputMaxId_MC_MIO0_OUT2              =  2726 SHL 14;
const
  MC_OutputState_Filter_MC_MIO0_OUT2       =  2727 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO0_OUT2       =  2728 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT2              =  2729 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT2_HOLD         =            1;
const
  MC_OutputState_MC_MIO0_OUT2_LOW          =            2;
const
  MC_OutputState_MC_MIO0_OUT2_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO0_OUT3      =  2730 SHL 14;
const
  MC___OutputId_MC_MIO0_OUT3               =  2731 SHL 14;
const
  MC_OutputMaxId_MC_MIO0_OUT3              =  2732 SHL 14;
const
  MC_OutputState_Filter_MC_MIO0_OUT3       =  2733 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO0_OUT3       =  2734 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT3              =  2735 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT3_HOLD         =            1;
const
  MC_OutputState_MC_MIO0_OUT3_LOW          =            2;
const
  MC_OutputState_MC_MIO0_OUT3_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO0_OUT4      =  2736 SHL 14;
const
  MC___OutputId_MC_MIO0_OUT4               =  2737 SHL 14;
const
  MC_OutputMaxId_MC_MIO0_OUT4              =  2738 SHL 14;
const
  MC_OutputState_Filter_MC_MIO0_OUT4       =  2739 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO0_OUT4       =  2740 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT4              =  2741 SHL 14;
const
  MC_OutputState_MC_MIO0_OUT4_HOLD         =            1;
const
  MC_OutputState_MC_MIO0_OUT4_LOW          =            2;
const
  MC_OutputState_MC_MIO0_OUT4_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO1_OUT1      =  2742 SHL 14;
const
  MC___OutputId_MC_MIO1_OUT1               =  2743 SHL 14;
const
  MC_OutputMaxId_MC_MIO1_OUT1              =  2744 SHL 14;
const
  MC_OutputState_Filter_MC_MIO1_OUT1       =  2745 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO1_OUT1       =  2746 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT1              =  2747 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT1_HOLD         =            1;
const
  MC_OutputState_MC_MIO1_OUT1_LOW          =            2;
const
  MC_OutputState_MC_MIO1_OUT1_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO1_OUT2      =  2748 SHL 14;
const
  MC___OutputId_MC_MIO1_OUT2               =  2749 SHL 14;
const
  MC_OutputMaxId_MC_MIO1_OUT2              =  2750 SHL 14;
const
  MC_OutputState_Filter_MC_MIO1_OUT2       =  2751 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO1_OUT2       =  2752 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT2              =  2753 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT2_HOLD         =            1;
const
  MC_OutputState_MC_MIO1_OUT2_LOW          =            2;
const
  MC_OutputState_MC_MIO1_OUT2_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO1_OUT3      =  2754 SHL 14;
const
  MC___OutputId_MC_MIO1_OUT3               =  2755 SHL 14;
const
  MC_OutputMaxId_MC_MIO1_OUT3              =  2756 SHL 14;
const
  MC_OutputState_Filter_MC_MIO1_OUT3       =  2757 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO1_OUT3       =  2758 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT3              =  2759 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT3_HOLD         =            1;
const
  MC_OutputState_MC_MIO1_OUT3_LOW          =            2;
const
  MC_OutputState_MC_MIO1_OUT3_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO1_OUT4      =  2760 SHL 14;
const
  MC___OutputId_MC_MIO1_OUT4               =  2761 SHL 14;
const
  MC_OutputMaxId_MC_MIO1_OUT4              =  2762 SHL 14;
const
  MC_OutputState_Filter_MC_MIO1_OUT4       =  2763 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO1_OUT4       =  2764 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT4              =  2765 SHL 14;
const
  MC_OutputState_MC_MIO1_OUT4_HOLD         =            1;
const
  MC_OutputState_MC_MIO1_OUT4_LOW          =            2;
const
  MC_OutputState_MC_MIO1_OUT4_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO2_OUT1      =  2766 SHL 14;
const
  MC___OutputId_MC_MIO2_OUT1               =  2767 SHL 14;
const
  MC_OutputMaxId_MC_MIO2_OUT1              =  2768 SHL 14;
const
  MC_OutputState_Filter_MC_MIO2_OUT1       =  2769 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO2_OUT1       =  2770 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT1              =  2771 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT1_HOLD         =            1;
const
  MC_OutputState_MC_MIO2_OUT1_LOW          =            2;
const
  MC_OutputState_MC_MIO2_OUT1_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO2_OUT2      =  2772 SHL 14;
const
  MC___OutputId_MC_MIO2_OUT2               =  2773 SHL 14;
const
  MC_OutputMaxId_MC_MIO2_OUT2              =  2774 SHL 14;
const
  MC_OutputState_Filter_MC_MIO2_OUT2       =  2775 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO2_OUT2       =  2776 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT2              =  2777 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT2_HOLD         =            1;
const
  MC_OutputState_MC_MIO2_OUT2_LOW          =            2;
const
  MC_OutputState_MC_MIO2_OUT2_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO2_OUT3      =  2778 SHL 14;
const
  MC___OutputId_MC_MIO2_OUT3               =  2779 SHL 14;
const
  MC_OutputMaxId_MC_MIO2_OUT3              =  2780 SHL 14;
const
  MC_OutputState_Filter_MC_MIO2_OUT3       =  2781 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO2_OUT3       =  2782 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT3              =  2783 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT3_HOLD         =            1;
const
  MC_OutputState_MC_MIO2_OUT3_LOW          =            2;
const
  MC_OutputState_MC_MIO2_OUT3_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO2_OUT4      =  2784 SHL 14;
const
  MC___OutputId_MC_MIO2_OUT4               =  2785 SHL 14;
const
  MC_OutputMaxId_MC_MIO2_OUT4              =  2786 SHL 14;
const
  MC_OutputState_Filter_MC_MIO2_OUT4       =  2787 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO2_OUT4       =  2788 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT4              =  2789 SHL 14;
const
  MC_OutputState_MC_MIO2_OUT4_HOLD         =            1;
const
  MC_OutputState_MC_MIO2_OUT4_LOW          =            2;
const
  MC_OutputState_MC_MIO2_OUT4_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO3_OUT1      =  2790 SHL 14;
const
  MC___OutputId_MC_MIO3_OUT1               =  2791 SHL 14;
const
  MC_OutputMaxId_MC_MIO3_OUT1              =  2792 SHL 14;
const
  MC_OutputState_Filter_MC_MIO3_OUT1       =  2793 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO3_OUT1       =  2794 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT1              =  2795 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT1_HOLD         =            1;
const
  MC_OutputState_MC_MIO3_OUT1_LOW          =            2;
const
  MC_OutputState_MC_MIO3_OUT1_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO3_OUT2      =  2796 SHL 14;
const
  MC___OutputId_MC_MIO3_OUT2               =  2797 SHL 14;
const
  MC_OutputMaxId_MC_MIO3_OUT2              =  2798 SHL 14;
const
  MC_OutputState_Filter_MC_MIO3_OUT2       =  2799 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO3_OUT2       =  2800 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT2              =  2801 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT2_HOLD         =            1;
const
  MC_OutputState_MC_MIO3_OUT2_LOW          =            2;
const
  MC_OutputState_MC_MIO3_OUT2_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO3_OUT3      =  2802 SHL 14;
const
  MC___OutputId_MC_MIO3_OUT3               =  2803 SHL 14;
const
  MC_OutputMaxId_MC_MIO3_OUT3              =  2804 SHL 14;
const
  MC_OutputState_Filter_MC_MIO3_OUT3       =  2805 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO3_OUT3       =  2806 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT3              =  2807 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT3_HOLD         =            1;
const
  MC_OutputState_MC_MIO3_OUT3_LOW          =            2;
const
  MC_OutputState_MC_MIO3_OUT3_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO3_OUT4      =  2808 SHL 14;
const
  MC___OutputId_MC_MIO3_OUT4               =  2809 SHL 14;
const
  MC_OutputMaxId_MC_MIO3_OUT4              =  2810 SHL 14;
const
  MC_OutputState_Filter_MC_MIO3_OUT4       =  2811 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO3_OUT4       =  2812 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT4              =  2813 SHL 14;
const
  MC_OutputState_MC_MIO3_OUT4_HOLD         =            1;
const
  MC_OutputState_MC_MIO3_OUT4_LOW          =            2;
const
  MC_OutputState_MC_MIO3_OUT4_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO4_OUT1      =  2814 SHL 14;
const
  MC___OutputId_MC_MIO4_OUT1               =  2815 SHL 14;
const
  MC_OutputMaxId_MC_MIO4_OUT1              =  2816 SHL 14;
const
  MC_OutputState_Filter_MC_MIO4_OUT1       =  2817 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO4_OUT1       =  2818 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT1              =  2819 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT1_HOLD         =            1;
const
  MC_OutputState_MC_MIO4_OUT1_LOW          =            2;
const
  MC_OutputState_MC_MIO4_OUT1_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO4_OUT2      =  2820 SHL 14;
const
  MC___OutputId_MC_MIO4_OUT2               =  2821 SHL 14;
const
  MC_OutputMaxId_MC_MIO4_OUT2              =  2822 SHL 14;
const
  MC_OutputState_Filter_MC_MIO4_OUT2       =  2823 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO4_OUT2       =  2824 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT2              =  2825 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT2_HOLD         =            1;
const
  MC_OutputState_MC_MIO4_OUT2_LOW          =            2;
const
  MC_OutputState_MC_MIO4_OUT2_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO4_OUT3      =  2826 SHL 14;
const
  MC___OutputId_MC_MIO4_OUT3               =  2827 SHL 14;
const
  MC_OutputMaxId_MC_MIO4_OUT3              =  2828 SHL 14;
const
  MC_OutputState_Filter_MC_MIO4_OUT3       =  2829 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO4_OUT3       =  2830 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT3              =  2831 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT3_HOLD         =            1;
const
  MC_OutputState_MC_MIO4_OUT3_LOW          =            2;
const
  MC_OutputState_MC_MIO4_OUT3_HIGH         =            3;
const
  MC_OutputConfig_Filter_MC_MIO4_OUT4      =  2832 SHL 14;
const
  MC___OutputId_MC_MIO4_OUT4               =  2833 SHL 14;
const
  MC_OutputMaxId_MC_MIO4_OUT4              =  2834 SHL 14;
const
  MC_OutputState_Filter_MC_MIO4_OUT4       =  2835 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIO4_OUT4       =  2836 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT4              =  2837 SHL 14;
const
  MC_OutputState_MC_MIO4_OUT4_HOLD         =            1;
const
  MC_OutputState_MC_MIO4_OUT4_LOW          =            2;
const
  MC_OutputState_MC_MIO4_OUT4_HIGH         =            3;
const
  MC_PreStrobe_Tk                          =  2838 SHL 14;
const
  MC__STRWidth_Tk                          =  2839 SHL 14;
const
  MC__EXPOn2STROBEOff_E                    =  2840 SHL 14;
const
  MC__PREEXPWidth_E                        =  2841 SHL 14;
const
  MC_PinHIO_Usage                          =  2842 SHL 14;
const
  MC_PinHIO_Usage_NONE                     =            1;
const
  MC_PinHIO_Usage_INPUT                    =            2;
const
  MC_PinHIO_Usage_LOW                      =            3;
const
  MC_PinHIO_Usage_HIGH                     =            4;
const
  MC_PinHIO_Usage_HDRIVE                   =            5;
const
  MC_PinHIO_Usage_HSYNC                    =            6;
const
  MC_PinVIO_Usage                          =  2843 SHL 14;
const
  MC_PinVIO_Usage_NONE                     =            1;
const
  MC_PinVIO_Usage_INPUT                    =            2;
const
  MC_PinVIO_Usage_LOW                      =            3;
const
  MC_PinVIO_Usage_HIGH                     =            4;
const
  MC_PinVIO_Usage_VDRIVE                   =            5;
const
  MC_PinVIO_Usage_RESET                    =            6;
const
  MC_PinVIO_Usage_AUXRESET                 =            7;
const
  MC_PinVIO_Usage_VSYNC                    =            8;
const
  MC_PinGATE_Usage                         =  2844 SHL 14;
const
  MC_PinGATE_Usage_NONE                    =            1;
const
  MC_PinGATE_Usage_INPUT                   =            2;
const
  MC_PinGATE_Usage_LOW                     =            3;
const
  MC_PinGATE_Usage_HIGH                    =            4;
const
  MC_PinGATE_Usage_HSYNC                   =            5;
const
  MC_PinGATE_Usage_VSYNC                   =            6;
const
  MC_PinEXP_Usage                          =  2845 SHL 14;
const
  MC_PinEXP_Usage_NONE                     =            1;
const
  MC_PinEXP_Usage_INPUT                    =            2;
const
  MC_PinEXP_Usage_LOW                      =            3;
const
  MC_PinEXP_Usage_HIGH                     =            4;
const
  MC_PinEXP_Usage_HDRIVE                   =            5;
const
  MC_PinEXP_Usage_HSYNC                    =            6;
const
  MC_PinRST_Usage                          =  2846 SHL 14;
const
  MC_PinRST_Usage_NONE                     =            1;
const
  MC_PinRST_Usage_INPUT                    =            2;
const
  MC_PinRST_Usage_LOW                      =            3;
const
  MC_PinRST_Usage_HIGH                     =            4;
const
  MC_PinRST_Usage_VDRIVE                   =            5;
const
  MC_PinRST_Usage_RESET                    =            6;
const
  MC_PinRST_Usage_AUXRESET                 =            7;
const
  MC_PinRST_Usage_VSYNC                    =            8;
const
  MC_CameraControlSignalSet                =  2847 SHL 14;
const
  MC_CameraControlSignalSet_NONE           =            1;
const
  MC_CameraControlSignalSet_RESET          =            2;
const
  MC_CameraControlSignalSet_RESET_VSYNC    =            3;
const
  MC_CameraControlSignalSet_HDRIVE_VDRIVE  =            4;
const
  MC_CameraControlSignalSet_HDRIVE_RESET   =            5;
const
  MC_CameraControlSignalSet_HDRIVE_RESET_VSYNC =            6;
const
  MC_CameraControlSignalSet_HDRIVE_RESET_AUXRESET =            7;
const
  MC_CameraControlSignalSet_CLK_HSYNC_VSYNC =            8;
const
  MC_CameraControlSignalSet_RESET_CLK_HSYNC_VSYNC =            9;
const
  MC_CameraControlSignalSet_INVALID        =           10;
const
  MC_CameraSignalSet                       =  2848 SHL 14;
const
  MC_CameraSignalSet_A1                    =            1;
const
  MC_CameraSignalSet_B1                    =            2;
const
  MC_CameraSignalSet_C1                    =            3;
const
  MC_CameraSignalSet_D1                    =            4;
const
  MC_CameraSignalSet_E1                    =            5;
const
  MC_CameraSignalSet_F1                    =            6;
const
  MC_CameraSignalSet_G1                    =            7;
const
  MC_CameraSignalSet_H1                    =            8;
const
  MC_CameraSignalSet_I1                    =            9;
const
  MC_CameraSignalSet_A2                    =           10;
const
  MC_CameraSignalSet_B2                    =           11;
const
  MC_CameraSignalSet_C2                    =           12;
const
  MC_CameraSignalSet_D2                    =           13;
const
  MC_CameraSignalSet_E2                    =           14;
const
  MC_CameraSignalSet_F2                    =           15;
const
  MC_CameraSignalSet_G2                    =           16;
const
  MC_CameraSignalSet_H2                    =           17;
const
  MC_CameraSignalSet_I2                    =           18;
const
  MC_CameraSignalSet_A3                    =           19;
const
  MC_CameraSignalSet_B3                    =           20;
const
  MC_CameraSignalSet_C3                    =           21;
const
  MC_CameraSignalSet_D3                    =           22;
const
  MC_CameraSignalSet_E3                    =           23;
const
  MC_CameraSignalSet_F3                    =           24;
const
  MC_CameraSignalSet_G3                    =           25;
const
  MC_CameraSignalSet_INVALID               =           26;
const
  MC_ConnectorConfigX                      =  2849 SHL 14;
const
  MC_ConnectorConfigX_FREE                 =            1;
const
  MC_ConnectorConfigX_A1                   =            2;
const
  MC_ConnectorConfigX_B1                   =            3;
const
  MC_ConnectorConfigX_C1                   =            4;
const
  MC_ConnectorConfigX_D1                   =            5;
const
  MC_ConnectorConfigX_E1                   =            6;
const
  MC_ConnectorConfigX_F1                   =            7;
const
  MC_ConnectorConfigX_G1                   =            8;
const
  MC_ConnectorConfigX_H1                   =            9;
const
  MC_ConnectorConfigX_I1                   =           10;
const
  MC_ConnectorConfigX_A2                   =           11;
const
  MC_ConnectorConfigX_B2                   =           12;
const
  MC_ConnectorConfigX_C2                   =           13;
const
  MC_ConnectorConfigX_D2                   =           14;
const
  MC_ConnectorConfigX_E2                   =           15;
const
  MC_ConnectorConfigX_F2                   =           16;
const
  MC_ConnectorConfigX_G2                   =           17;
const
  MC_ConnectorConfigX_H2                   =           18;
const
  MC_ConnectorConfigX_I2                   =           19;
const
  MC_ConnectorConfigX_A3                   =           20;
const
  MC_ConnectorConfigX_B3                   =           21;
const
  MC_ConnectorConfigX_C3                   =           22;
const
  MC_ConnectorConfigX_D3                   =           23;
const
  MC_ConnectorConfigX_E3                   =           24;
const
  MC_ConnectorConfigX_F3                   =           25;
const
  MC_ConnectorConfigX_G3                   =           26;
const
  MC_ConnectorConfigX_A1_A1                =           27;
const
  MC_ConnectorConfigX_B1_A1                =           28;
const
  MC_ConnectorConfigX_B1_B1                =           29;
const
  MC_ConnectorConfigX_C1_A1                =           30;
const
  MC_ConnectorConfigX_C1_B1                =           31;
const
  MC_ConnectorConfigX_C1_C1                =           32;
const
  MC_ConnectorConfigX_D1_A1                =           33;
const
  MC_ConnectorConfigX_D1_B1                =           34;
const
  MC_ConnectorConfigX_D1_C1                =           35;
const
  MC_ConnectorConfigX_D1_D1                =           36;
const
  MC_ConnectorConfigX_E1_A1                =           37;
const
  MC_ConnectorConfigX_E1_B1                =           38;
const
  MC_ConnectorConfigX_E1_C1                =           39;
const
  MC_ConnectorConfigX_E1_D1                =           40;
const
  MC_ConnectorConfigX_E1_E1                =           41;
const
  MC_ConnectorConfigX_F1_A1                =           42;
const
  MC_ConnectorConfigX_F1_B1                =           43;
const
  MC_ConnectorConfigX_F1_D1                =           44;
const
  MC_ConnectorConfigX_F1_E1                =           45;
const
  MC_ConnectorConfigX_F1_F1                =           46;
const
  MC_ConnectorConfigX_G1_A1                =           47;
const
  MC_ConnectorConfigX_G1_G1                =           48;
const
  MC_ConnectorConfigX_H1_A1                =           49;
const
  MC_ConnectorConfigX_H1_B1                =           50;
const
  MC_ConnectorConfigX_H1_C1                =           51;
const
  MC_ConnectorConfigX_H1_D1                =           52;
const
  MC_ConnectorConfigX_H1_E1                =           53;
const
  MC_ConnectorConfigX_H1_F1                =           54;
const
  MC_ConnectorConfigX_H1_G1                =           55;
const
  MC_ConnectorConfigX_I1_A1                =           56;
const
  MC_ConnectorConfigX_I1_B1                =           57;
const
  MC_ConnectorConfigX_I1_D1                =           58;
const
  MC_ConnectorConfigX_I1_E1                =           59;
const
  MC_ConnectorConfigX_Filter               =  2850 SHL 14;
const
  MC_ConnectorConfigY                      =  2851 SHL 14;
const
  MC_ConnectorConfigY_FREE                 =            1;
const
  MC_ConnectorConfigY_A1                   =            2;
const
  MC_ConnectorConfigY_B1                   =            3;
const
  MC_ConnectorConfigY_C1                   =            4;
const
  MC_ConnectorConfigY_D1                   =            5;
const
  MC_ConnectorConfigY_E1                   =            6;
const
  MC_ConnectorConfigY_F1                   =            7;
const
  MC_ConnectorConfigY_G1                   =            8;
const
  MC_ConnectorConfigY_H1                   =            9;
const
  MC_ConnectorConfigY_I1                   =           10;
const
  MC_ConnectorConfigY_A2                   =           11;
const
  MC_ConnectorConfigY_B2                   =           12;
const
  MC_ConnectorConfigY_C2                   =           13;
const
  MC_ConnectorConfigY_D2                   =           14;
const
  MC_ConnectorConfigY_E2                   =           15;
const
  MC_ConnectorConfigY_F2                   =           16;
const
  MC_ConnectorConfigY_G2                   =           17;
const
  MC_ConnectorConfigY_H2                   =           18;
const
  MC_ConnectorConfigY_I2                   =           19;
const
  MC_ConnectorConfigY_A1_A1                =           20;
const
  MC_ConnectorConfigY_B1_A1                =           21;
const
  MC_ConnectorConfigY_B1_B1                =           22;
const
  MC_ConnectorConfigY_C1_A1                =           23;
const
  MC_ConnectorConfigY_C1_B1                =           24;
const
  MC_ConnectorConfigY_C1_C1                =           25;
const
  MC_ConnectorConfigY_D1_A1                =           26;
const
  MC_ConnectorConfigY_D1_B1                =           27;
const
  MC_ConnectorConfigY_D1_C1                =           28;
const
  MC_ConnectorConfigY_D1_D1                =           29;
const
  MC_ConnectorConfigY_E1_A1                =           30;
const
  MC_ConnectorConfigY_E1_B1                =           31;
const
  MC_ConnectorConfigY_E1_C1                =           32;
const
  MC_ConnectorConfigY_E1_D1                =           33;
const
  MC_ConnectorConfigY_E1_E1                =           34;
const
  MC_ConnectorConfigY_F1_A1                =           35;
const
  MC_ConnectorConfigY_F1_B1                =           36;
const
  MC_ConnectorConfigY_F1_D1                =           37;
const
  MC_ConnectorConfigY_F1_E1                =           38;
const
  MC_ConnectorConfigY_F1_F1                =           39;
const
  MC_ConnectorConfigY_G1_A1                =           40;
const
  MC_ConnectorConfigY_G1_G1                =           41;
const
  MC_ConnectorConfigY_H1_A1                =           42;
const
  MC_ConnectorConfigY_H1_B1                =           43;
const
  MC_ConnectorConfigY_H1_C1                =           44;
const
  MC_ConnectorConfigY_H1_D1                =           45;
const
  MC_ConnectorConfigY_H1_E1                =           46;
const
  MC_ConnectorConfigY_H1_F1                =           47;
const
  MC_ConnectorConfigY_H1_G1                =           48;
const
  MC_ConnectorConfigY_I1_A1                =           49;
const
  MC_ConnectorConfigY_I1_B1                =           50;
const
  MC_ConnectorConfigY_I1_D1                =           51;
const
  MC_ConnectorConfigY_I1_E1                =           52;
const
  MC_ConnectorConfigY_Filter               =  2852 SHL 14;
const
  MC_ConnectorConfigY_A3                   =           53;
const
  MC_ConnectorConfigY_B3                   =           54;
const
  MC_ConnectorConfigY_C3                   =           55;
const
  MC_ConnectorConfigY_D3                   =           56;
const
  MC_ConnectorConfigY_E3                   =           57;
const
  MC_ConnectorConfigY_F3                   =           58;
const
  MC_ConnectorConfigY_G3                   =           59;
const
  MC_ConnectorConfigZ                      =  2853 SHL 14;
const
  MC_ConnectorConfigZ_FREE                 =            1;
const
  MC_ConnectorConfigZ_A1                   =            2;
const
  MC_ConnectorConfigZ_B1                   =            3;
const
  MC_ConnectorConfigZ_C1                   =            4;
const
  MC_ConnectorConfigZ_D1                   =            5;
const
  MC_ConnectorConfigZ_E1                   =            6;
const
  MC_ConnectorConfigZ_F1                   =            7;
const
  MC_ConnectorConfigZ_G1                   =            8;
const
  MC_ConnectorConfigZ_H1                   =            9;
const
  MC_ConnectorConfigZ_I1                   =           10;
const
  MC_ConnectorConfigZ_A2                   =           11;
const
  MC_ConnectorConfigZ_B2                   =           12;
const
  MC_ConnectorConfigZ_C2                   =           13;
const
  MC_ConnectorConfigZ_D2                   =           14;
const
  MC_ConnectorConfigZ_E2                   =           15;
const
  MC_ConnectorConfigZ_F2                   =           16;
const
  MC_ConnectorConfigZ_G2                   =           17;
const
  MC_ConnectorConfigZ_H2                   =           18;
const
  MC_ConnectorConfigZ_I2                   =           19;
const
  MC_ConnectorConfigZ_A1_A1                =           20;
const
  MC_ConnectorConfigZ_B1_A1                =           21;
const
  MC_ConnectorConfigZ_B1_B1                =           22;
const
  MC_ConnectorConfigZ_C1_A1                =           23;
const
  MC_ConnectorConfigZ_C1_B1                =           24;
const
  MC_ConnectorConfigZ_C1_C1                =           25;
const
  MC_ConnectorConfigZ_D1_A1                =           26;
const
  MC_ConnectorConfigZ_D1_B1                =           27;
const
  MC_ConnectorConfigZ_D1_C1                =           28;
const
  MC_ConnectorConfigZ_D1_D1                =           29;
const
  MC_ConnectorConfigZ_E1_A1                =           30;
const
  MC_ConnectorConfigZ_E1_B1                =           31;
const
  MC_ConnectorConfigZ_E1_C1                =           32;
const
  MC_ConnectorConfigZ_E1_D1                =           33;
const
  MC_ConnectorConfigZ_E1_E1                =           34;
const
  MC_ConnectorConfigZ_F1_A1                =           35;
const
  MC_ConnectorConfigZ_F1_B1                =           36;
const
  MC_ConnectorConfigZ_F1_D1                =           37;
const
  MC_ConnectorConfigZ_F1_E1                =           38;
const
  MC_ConnectorConfigZ_F1_F1                =           39;
const
  MC_ConnectorConfigZ_G1_A1                =           40;
const
  MC_ConnectorConfigZ_G1_G1                =           41;
const
  MC_ConnectorConfigZ_H1_A1                =           42;
const
  MC_ConnectorConfigZ_H1_B1                =           43;
const
  MC_ConnectorConfigZ_H1_C1                =           44;
const
  MC_ConnectorConfigZ_H1_D1                =           45;
const
  MC_ConnectorConfigZ_H1_E1                =           46;
const
  MC_ConnectorConfigZ_H1_F1                =           47;
const
  MC_ConnectorConfigZ_H1_G1                =           48;
const
  MC_ConnectorConfigZ_I1_A1                =           49;
const
  MC_ConnectorConfigZ_I1_B1                =           50;
const
  MC_ConnectorConfigZ_I1_D1                =           51;
const
  MC_ConnectorConfigZ_I1_E1                =           52;
const
  MC_ConnectorConfigZ_Filter               =  2854 SHL 14;
const
  MC_ConnectorConfig                       =  2855 SHL 14;
const
  MC_ConnectorConfig_FREE                  =           60;
const
  MC_ConnectorConfig_A1                    =           61;
const
  MC_ConnectorConfig_B1                    =           62;
const
  MC_ConnectorConfig_C1                    =           63;
const
  MC_ConnectorConfig_D1                    =           64;
const
  MC_ConnectorConfig_E1                    =           65;
const
  MC_ConnectorConfig_F1                    =           66;
const
  MC_ConnectorConfig_G1                    =           67;
const
  MC_ConnectorConfig_H1                    =           68;
const
  MC_ConnectorConfig_I1                    =           69;
const
  MC_ConnectorConfig_A2                    =           70;
const
  MC_ConnectorConfig_B2                    =           71;
const
  MC_ConnectorConfig_C2                    =           72;
const
  MC_ConnectorConfig_D2                    =           73;
const
  MC_ConnectorConfig_E2                    =           74;
const
  MC_ConnectorConfig_F2                    =           75;
const
  MC_ConnectorConfig_G2                    =           76;
const
  MC_ConnectorConfig_H2                    =           77;
const
  MC_ConnectorConfig_I2                    =           78;
const
  MC_ConnectorConfig_A3                    =           79;
const
  MC_ConnectorConfig_B3                    =           80;
const
  MC_ConnectorConfig_C3                    =           81;
const
  MC_ConnectorConfig_D3                    =           82;
const
  MC_ConnectorConfig_E3                    =           83;
const
  MC_ConnectorConfig_F3                    =           84;
const
  MC_ConnectorConfig_G3                    =           85;
const
  MC_ConnectorConfig_A1_A1                 =           86;
const
  MC_ConnectorConfig_B1_A1                 =           87;
const
  MC_ConnectorConfig_B1_B1                 =           88;
const
  MC_ConnectorConfig_C1_A1                 =           89;
const
  MC_ConnectorConfig_C1_B1                 =           90;
const
  MC_ConnectorConfig_C1_C1                 =           91;
const
  MC_ConnectorConfig_D1_A1                 =           92;
const
  MC_ConnectorConfig_D1_B1                 =           93;
const
  MC_ConnectorConfig_D1_C1                 =           94;
const
  MC_ConnectorConfig_D1_D1                 =           95;
const
  MC_ConnectorConfig_E1_A1                 =           96;
const
  MC_ConnectorConfig_E1_B1                 =           97;
const
  MC_ConnectorConfig_E1_C1                 =           98;
const
  MC_ConnectorConfig_E1_D1                 =           99;
const
  MC_ConnectorConfig_E1_E1                 =          100;
const
  MC_ConnectorConfig_F1_A1                 =          101;
const
  MC_ConnectorConfig_F1_B1                 =          102;
const
  MC_ConnectorConfig_F1_D1                 =          103;
const
  MC_ConnectorConfig_F1_E1                 =          104;
const
  MC_ConnectorConfig_F1_F1                 =          105;
const
  MC_ConnectorConfig_G1_A1                 =          106;
const
  MC_ConnectorConfig_G1_G1                 =          107;
const
  MC_ConnectorConfig_H1_A1                 =          108;
const
  MC_ConnectorConfig_H1_B1                 =          109;
const
  MC_ConnectorConfig_H1_C1                 =          110;
const
  MC_ConnectorConfig_H1_D1                 =          111;
const
  MC_ConnectorConfig_H1_E1                 =          112;
const
  MC_ConnectorConfig_H1_F1                 =          113;
const
  MC_ConnectorConfig_H1_G1                 =          114;
const
  MC_ConnectorConfig_I1_A1                 =          115;
const
  MC_ConnectorConfig_I1_B1                 =          116;
const
  MC_ConnectorConfig_I1_D1                 =          117;
const
  MC_ConnectorConfig_I1_E1                 =          118;
const
  MC_CameraSignalSetX                      =  2856 SHL 14;
const
  MC_CameraSignalSetXBIS                   =  2857 SHL 14;
const
  MC_CameraSignalSetY                      =  2858 SHL 14;
const
  MC_CameraSignalSetYBIS                   =  2859 SHL 14;
const
  MC_ConnectorXTopology                    =  2860 SHL 14;
const
  MC_ConnectorYTopology                    =  2861 SHL 14;
const
  MC_CameraSignalSetZ                      =  2862 SHL 14;
const
  MC_CameraSignalSetZBIS                   =  2863 SHL 14;
const
  MC_ConnectorZTopology                    =  2864 SHL 14;
const
  MC_ConnectorPort                         =  2865 SHL 14;
const
  MC_ConnectorPort_PRIMARY                 =            1;
const
  MC_ConnectorPort_SECONDARY               =            2;
const
  MC_ConnectorTopology                     =  2866 SHL 14;
const
  MC_ConnectorCameraCount                  =  2867 SHL 14;
const
  MC_RCable                                =  2868 SHL 14;
const
  MC_RCable_NONE                           =            1;
const
  MC_RCable_A15_C01                        =            2;
const
  MC_RCable_A15_C02                        =            3;
const
  MC_RCable_A15_C03                        =            4;
const
  MC_RCable_A15_C04                        =            5;
const
  MC_RCable_A15_C05                        =            6;
const
  MC_RCable_A15_C06                        =            7;
const
  MC_RCable_A15_C07                        =            8;
const
  MC_RCable_A15_C08                        =            9;
const
  MC_RCable_A15_C09                        =           10;
const
  MC_RCable_A15_C10                        =           11;
const
  MC_RCable_A15_C11                        =           12;
const
  MC_RCable_A15_C12                        =           13;
const
  MC_RCable_A15_C13                        =           14;
const
  MC_RCable_A15_C14                        =           15;
const
  MC_RCable_A15_C15                        =           16;
const
  MC_RCable_A15_C16                        =           17;
const
  MC_RCable_A15_C17                        =           18;
const
  MC_RCable_A15_C18                        =           19;
const
  MC_RCable_A15_C19                        =           20;
const
  MC_CamCable_Check                        =  2869 SHL 14;
const
  MC_CamCable_Check_PASS                   =            1;
const
  MC_CamCable_Check_FAIL                   =            2;
const
  MC_Cable_A15_C110000000                  =           30;
const
  MC_Cable_A15_C110010000                  =           31;
const
  MC_Cable_A15_C110210000                  =           32;
const
  MC_Cable_A15_C111100000                  =           33;
const
  MC_Cable_A15_C111010000                  =           34;
const
  MC_Cable_A15_C111210000                  =           35;
const
  MC_Cable_A15_C111020000                  =           36;
const
  MC_Cable_A15_C112200000                  =           37;
const
  MC_Cable_A15_C112210000                  =           38;
const
  MC_Cable_A15_C210000000                  =           39;
const
  MC_Cable_A15_C210010000                  =           40;
const
  MC_Cable_A15_C210210000                  =           41;
const
  MC_Cable_A15_C211100000                  =           42;
const
  MC_Cable_A15_C211010000                  =           43;
const
  MC_Cable_A15_C211210000                  =           44;
const
  MC_Cable_A15_C211020000                  =           45;
const
  MC_Cable_A15_C212200000                  =           46;
const
  MC_Cable_A15_C212210000                  =           47;
const
  MC_Cable_A15_C310000000                  =           48;
const
  MC_Cable_A15_C310010000                  =           49;
const
  MC_Cable_A15_C310210000                  =           50;
const
  MC_Cable_A15_C311100000                  =           51;
const
  MC_Cable_A15_C311010000                  =           52;
const
  MC_Cable_A15_C311210000                  =           53;
const
  MC_Cable_A15_C311020000                  =           54;
const
  MC_Cable_A15_C110001000                  =           55;
const
  MC_Cable_A15_C110011000                  =           56;
const
  MC_Cable_A15_C110211000                  =           57;
const
  MC_Cable_A15_C111101000                  =           58;
const
  MC_Cable_A15_C111011000                  =           59;
const
  MC_Cable_A15_C111211000                  =           60;
const
  MC_Cable_A15_C111021000                  =           61;
const
  MC_Cable_A15_C112201000                  =           62;
const
  MC_Cable_A15_C112211000                  =           63;
const
  MC_Cable_A15_C110011001                  =           64;
const
  MC_Cable_A15_C110211001                  =           65;
const
  MC_Cable_A15_C111101001                  =           66;
const
  MC_Cable_A15_C111011001                  =           67;
const
  MC_Cable_A15_C111211001                  =           68;
const
  MC_Cable_A15_C112201001                  =           69;
const
  MC_Cable_A15_C112211001                  =           70;
const
  MC_Cable_A15_C110211021                  =           71;
const
  MC_Cable_A15_C111101021                  =           72;
const
  MC_Cable_A15_C111011021                  =           73;
const
  MC_Cable_A15_C112201021                  =           74;
const
  MC_Cable_A15_C111101110                  =           75;
const
  MC_Cable_A15_C111011110                  =           76;
const
  MC_Cable_A15_C111211110                  =           77;
const
  MC_Cable_A15_C112201110                  =           78;
const
  MC_Cable_A15_C112211110                  =           79;
const
  MC_Cable_A15_C111011101                  =           80;
const
  MC_Cable_A15_C111211101                  =           81;
const
  MC_Cable_A15_C112201101                  =           82;
const
  MC_Cable_A15_C112211101                  =           83;
const
  MC_Cable_A15_C111211121                  =           84;
const
  MC_Cable_A15_C112201121                  =           85;
const
  MC_Cable_A15_C111021102                  =           86;
const
  MC_Cable_A15_C112201102                  =           87;
const
  MC_CableName_One_Camera_Single_Channel_A =           27;
const
  MC_CableName_One_Camera_Single_Channel_B =           28;
const
  MC_CableName_One_Camera_Single_Channel_C =           29;
const
  MC_CableName_One_Camera_Single_Channel_D =           30;
const
  MC_CableName_One_Camera_Single_Channel_E =           31;
const
  MC_CableName_One_Camera_Single_Channel_F =           32;
const
  MC_CableName_One_Camera_Single_Channel_G =           33;
const
  MC_CableName_One_Camera_Single_Channel_H =           34;
const
  MC_CableName_One_Camera_Single_Channel_I =           35;
const
  MC_CableName_One_Camera_Dual_Channel_A   =           36;
const
  MC_CableName_One_Camera_Dual_Channel_B   =           37;
const
  MC_CableName_One_Camera_Dual_Channel_C   =           38;
const
  MC_CableName_One_Camera_Dual_Channel_D   =           39;
const
  MC_CableName_One_Camera_Dual_Channel_E   =           40;
const
  MC_CableName_One_Camera_Dual_Channel_F   =           41;
const
  MC_CableName_One_Camera_Dual_Channel_G   =           42;
const
  MC_CableName_One_Camera_Dual_Channel_H   =           43;
const
  MC_CableName_One_Camera_Dual_Channel_I   =           44;
const
  MC_CableName_One_Camera_Triple_Channel_A =           45;
const
  MC_CableName_One_Camera_Triple_Channel_B =           46;
const
  MC_CableName_One_Camera_Triple_Channel_C =           47;
const
  MC_CableName_One_Camera_Triple_Channel_D =           48;
const
  MC_CableName_One_Camera_Triple_Channel_E =           49;
const
  MC_CableName_One_Camera_Triple_Channel_F =           50;
const
  MC_CableName_One_Camera_Triple_Channel_G =           51;
const
  MC_CableName_Two_Cameras_Single_Channel_AA =           52;
const
  MC_CableName_Two_Cameras_Single_Channel_BA =           53;
const
  MC_CableName_Two_Cameras_Single_Channel_CA =           54;
const
  MC_CableName_Two_Cameras_Single_Channel_DA =           55;
const
  MC_CableName_Two_Cameras_Single_Channel_EA =           56;
const
  MC_CableName_Two_Cameras_Single_Channel_FA =           57;
const
  MC_CableName_Two_Cameras_Single_Channel_GA =           58;
const
  MC_CableName_Two_Cameras_Single_Channel_HA =           59;
const
  MC_CableName_Two_Cameras_Single_Channel_IA =           60;
const
  MC_CableName_Two_Cameras_Single_Channel_BB =           61;
const
  MC_CableName_Two_Cameras_Single_Channel_CB =           62;
const
  MC_CableName_Two_Cameras_Single_Channel_DB =           63;
const
  MC_CableName_Two_Cameras_Single_Channel_EB =           64;
const
  MC_CableName_Two_Cameras_Single_Channel_FB =           65;
const
  MC_CableName_Two_Cameras_Single_Channel_HB =           66;
const
  MC_CableName_Two_Cameras_Single_Channel_IB =           67;
const
  MC_CableName_Two_Cameras_Single_Channel_CC =           68;
const
  MC_CableName_Two_Cameras_Single_Channel_DC =           69;
const
  MC_CableName_Two_Cameras_Single_Channel_EC =           70;
const
  MC_CableName_Two_Cameras_Single_Channel_HC =           71;
const
  MC_CableName_Two_Cameras_Single_Channel_DD =           72;
const
  MC_CableName_Two_Cameras_Single_Channel_ED =           73;
const
  MC_CableName_Two_Cameras_Single_Channel_FD =           74;
const
  MC_CableName_Two_Cameras_Single_Channel_HD =           75;
const
  MC_CableName_Two_Cameras_Single_Channel_ID =           76;
const
  MC_CableName_Two_Cameras_Single_Ehannel_EE =           77;
const
  MC_CableName_Two_Cameras_Single_Ehannel_FE =           78;
const
  MC_CableName_Two_Cameras_Single_Ehannel_HE =           79;
const
  MC_CableName_Two_Cameras_Single_Ehannel_IE =           80;
const
  MC_CableName_Two_Cameras_Single_Channel_FF =           81;
const
  MC_CableName_Two_Cameras_Single_Channel_HF =           82;
const
  MC_CableName_Two_Cameras_Single_Ehannel_GG =           83;
const
  MC_CableName_Two_Cameras_Single_Ehannel_HG =           84;
const
  MC_CCCount                               =  2870 SHL 14;
const
  MC_CCCount_ONE                           =            1;
const
  MC_CCCount_TWO                           =            2;
const
  MC_CableType                             =  2871 SHL 14;
const
  MC_Cable_A15_T2A                         =           88;
const
  MC_Cable_A15_T2B                         =           89;
const
  MC_Cable_A15_T2C                         =           90;
const
  MC_Cable_A15_T2D                         =           91;
const
  MC_Cable_A15_T2E                         =           92;
const
  MC_Cable_A15_T2F                         =           93;
const
  MC_Cable_A15_T2G                         =           94;
const
  MC_Cable_A15_T2H                         =           95;
const
  MC_Cable_A15_T2I                         =           96;
const
  MC_Cable_A15_T1A                         =           97;
const
  MC_Cable_A15_T1B                         =           98;
const
  MC_Cable_A15_T1C                         =           99;
const
  MC_Cable_A15_T1D                         =          100;
const
  MC_Cable_A15_T1E                         =          101;
const
  MC_Cable_A15_T1F                         =          102;
const
  MC_Cable_A15_T1G                         =          103;
const
  MC_Cable_A15_T1H                         =          104;
const
  MC_Cable_A15_T1I                         =          105;
const
  MC_Cable_A15_T3A                         =          106;
const
  MC_Cable_A15_T3B                         =          107;
const
  MC_Cable_A15_T3C                         =          108;
const
  MC_Cable_A15_T3D                         =          109;
const
  MC_Cable_A15_T3E                         =          110;
const
  MC_Cable_A15_T3F                         =          111;
const
  MC_Cable_A15_T3G                         =          112;
const
  MC_Cable_A15_T11AA                       =          113;
const
  MC_Cable_A15_T11BA                       =          114;
const
  MC_Cable_A15_T11BB                       =          115;
const
  MC_Cable_A15_T11CA                       =          116;
const
  MC_Cable_A15_T11CB                       =          117;
const
  MC_Cable_A15_T11CC                       =          118;
const
  MC_Cable_A15_T11DA                       =          119;
const
  MC_Cable_A15_T11DB                       =          120;
const
  MC_Cable_A15_T11DC                       =          121;
const
  MC_Cable_A15_T11DD                       =          122;
const
  MC_Cable_A15_T11EA                       =          123;
const
  MC_Cable_A15_T11EB                       =          124;
const
  MC_Cable_A15_T11EC                       =          125;
const
  MC_Cable_A15_T11ED                       =          126;
const
  MC_Cable_A15_T11EE                       =          127;
const
  MC_Cable_A15_T11FA                       =          128;
const
  MC_Cable_A15_T11FB                       =          129;
const
  MC_Cable_A15_T11FD                       =          130;
const
  MC_Cable_A15_T11FE                       =          131;
const
  MC_Cable_A15_T11FF                       =          132;
const
  MC_Cable_A15_T11GA                       =          133;
const
  MC_Cable_A15_T11GG                       =          134;
const
  MC_Cable_A15_T11HA                       =          135;
const
  MC_Cable_A15_T11HB                       =          136;
const
  MC_Cable_A15_T11HC                       =          137;
const
  MC_Cable_A15_T11HD                       =          138;
const
  MC_Cable_A15_T11HE                       =          139;
const
  MC_Cable_A15_T11HF                       =          140;
const
  MC_Cable_A15_T11HG                       =          141;
const
  MC_Cable_A15_T11IA                       =          142;
const
  MC_Cable_A15_T11IB                       =          143;
const
  MC_Cable_A15_T11ID                       =          144;
const
  MC_Cable_A15_T11IE                       =          145;
const
  MC_CableName_Two_Cameras_Single_Channel_EE =           85;
const
  MC_CableName_Two_Cameras_Single_Channel_FE =           86;
const
  MC_CableName_Two_Cameras_Single_Channel_GG =           87;
const
  MC_CableName_Two_Cameras_Single_Channel_HE =           88;
const
  MC_CableName_Two_Cameras_Single_Channel_HG =           89;
const
  MC_CableName_Two_Cameras_Single_Channel_IE =           90;
const
  MC_CableXTopology                        =  2872 SHL 14;
const
  MC_CableYTopology                        =  2873 SHL 14;
const
  MC_CableTopology                         =  2874 SHL 14;
const
  MC_CableZTopology                        =  2875 SHL 14;
const
  MC_Camera_CV_M30                         =          142;
const
  MC_CamConfig_P120SA                      =          191;
const
  MC_CamConfig_P120RA                      =          192;
const
  MC_CableModel                            =  2876 SHL 14;
const
  MC_CableModel_SPECIFIC                   =            1;
const
  MC_CableModel_GENERIC                    =            2;
const
  MC__PrimaryTopology                      =  2877 SHL 14;
const
  MC__SecondaryTopology                    =  2878 SHL 14;
const
  MC__MyTopology                           =  2879 SHL 14;
const
  MC_CableTopology_CSS_Check               =  2880 SHL 14;
const
  MC_CableTopology_CSS_Check_PASS          =            1;
const
  MC_CableTopology_CSS_Check_FAIL          =            2;
const
  MC_CableTopology_Swap_Check              =  2881 SHL 14;
const
  MC_CableTopology_Swap_Check_PASS         =            1;
const
  MC_CableTopology_Swap_Check_FAIL         =            2;
const
  MC_CableTopology_Validity_Check          =  2882 SHL 14;
const
  MC_CableTopology_Validity_Check_PASS     =            1;
const
  MC_CableTopology_Validity_Check_FAIL     =            2;
const
  MC___CableTopology_Check                 =  2883 SHL 14;
const
  MC___CableTopology_Check_PASS            =            1;
const
  MC___CableTopology_Check_FAIL            =            2;
const
  MC___CamCable_Check                      =  2884 SHL 14;
const
  MC___CamCable_Check_PASS                 =            1;
const
  MC___CamCable_Check_FAIL                 =            2;
const
  MC_RCableV                               =  2885 SHL 14;
const
  MC_RCableV_A                             =            1;
const
  MC_RCableV_B                             =            2;
const
  MC_CorrectedCableTopology                =  2886 SHL 14;
const
  MC__CableTopology                        =  2887 SHL 14;
const
  MC_INITD1Signature                       =  2888 SHL 14;
const
  MC_INITD2Signature                       =  2889 SHL 14;
const
  MC_DigUnitRecord                         =  2890 SHL 14;
const
  MC_INITD2Condition                       =  2891 SHL 14;
const
  MC_GainCtl_p6DB                          =            9;
const
  MC_GainCtl_p5DB                          =           10;
const
  MC_GainCtl_p4DB                          =           11;
const
  MC_GainCtl_Filter                        =  2892 SHL 14;
const
  MC__NominalGain                          =  2893 SHL 14;
const
  MC_GainLinMin                            =  2894 SHL 14;
const
  MC_GainLinMax                            =  2895 SHL 14;
const
  MC_GainDBMin                             =  2896 SHL 14;
const
  MC_GainDBMax                             =  2897 SHL 14;
const
  MC_CamConfig_P240RA                      =          193;
const
  MC__PhaseLength                          =  2898 SHL 14;
const
  MC_SceneLength                           =  2899 SHL 14;
const
  MC__BoardType__PICOLO_TETRA              =           15;
const
  MC__BoardType__PICOLO_JETSTREAM          =           16;
const
  MC_InputMaxId_                           =  2900 SHL 14;
const
  MC_OutputMaxId_                          =  2901 SHL 14;
const
  MC_Operation_LONGPAGE                    =            8;
const
  MC_SGASet                                =  2902 SHL 14;
const
  MC__GAP_MODE                             =  2903 SHL 14;
const
  MC__GAP_MODE_SINGLE_SEQ                  =            1;
const
  MC__GAP_MODE_MULTIPLE_SEQ                =            2;
const
  MC__COVER_MODE                           =  2904 SHL 14;
const
  MC__COVER_MODE_ON                        =            1;
const
  MC__COVER_MODE_OFF                       =            2;
const
  MC_STZUsage_COVERX                       =            4;
const
  MC_STZUsage_COVERY                       =            5;
const
  MC__STR_STZSRC_COVER_X                   =            7;
const
  MC__STR_STZSRC_COVER_Y                   =            8;
const
  MC_STZUsage_TRIGX                        =            6;
const
  MC_STZUsage_TRIGY                        =            7;
const
  MC__STR_STZSRC_TRIG_X                    =            9;
const
  MC__STR_STZSRC_TRIG_Y                    =           10;
const
  MC_EndTrigEdge                           =  2905 SHL 14;
const
  MC_EndTrigEdge_GOHIGH                    =            1;
const
  MC_EndTrigEdge_GOLOW                     =            2;
const
  MC_EndTrigLine                           =  2906 SHL 14;
const
  MC_EndTrigLine_NOM                       =            1;
const
  MC_EndTrigLine_ALT1                      =            2;
const
  MC_EndTrigLine_ALT2                      =            3;
const
  MC_EndTrigLine_PG                        =            4;
const
  MC_EndTrigLine_LTACT                     =            5;
const
  MC_EndTrigLine_TRX                       =            6;
const
  MC_EndTrigLine_TRY                       =            7;
const
  MC_EndTrigLine_TRZ                       =            8;
const
  MC_EndTrigLine_NONE                      =            9;
const
  MC_Camera_YD5040                         =          143;
const
  MC_EndTrigLine_TRG                       =           10;
const
  MC__SP_Factor_Min_1                      =  2907 SHL 14;
const
  MC__SP_Factor_AMin_PG                    =  2908 SHL 14;
const
  MC__SP_Factor_AMin_RC                    =  2909 SHL 14;
const
  MC__SP_Factor_RMAx_RC                    =  2910 SHL 14;
const
  MC_CamConfig_L4096RP                     =          194;
const
  MC_PCIDeviceID                           =  2911 SHL 14;
const
  MC_PCIVendorID                           =  2912 SHL 14;
const
  MC_PCISubDeviceID                        =  2913 SHL 14;
const
  MC_PCISubVendorID                        =  2914 SHL 14;
const
  MC___TrigLine_Check                      =  2915 SHL 14;
const
  MC___TrigLine_Check_PASS                 =            1;
const
  MC___TrigLine_Check_FAIL                 =            2;
const
  MC_EndTrigMode                           =  2916 SHL 14;
const
  MC_EndTrigMode_AUTO                      =            1;
const
  MC_EndTrigMode_HARD                      =            2;
const
  MC_HFRModeOnly_Filter                    =  2917 SHL 14;
const
  MC__FrameCountModulo                     =  2918 SHL 14;
const
  MC_SetLength_Fr                          =  2919 SHL 14;
const
  MC__HFR_MODE                             =  2920 SHL 14;
const
  MC__HFR_MODE_ON                          =            1;
const
  MC__HFR_MODE_OFF                         =            2;
const
  MC__TotalSetLength                       =  2921 SHL 14;
const
  MC_FrameGrabSizeY_Ln                     =  2922 SHL 14;
const
  MC_AsyncOverlapLoadSet                   =  2923 SHL 14;
const
  MC__SequenceLoadSet                      =  2924 SHL 14;
const
  MC__SequenceLoadSet_NONE                 =            1;
const
  MC__SequenceLoadSet_S1                   =            2;
const
  MC__SequenceLoadSet_S2                   =            3;
const
  MC__SequenceLoadSet_I1                   =            4;
const
  MC__SequenceLoadSet_I2                   =            5;
const
  MC__SequenceLoadSet_M                    =            6;
const
  MC__SequenceLoadSet_V                    =            7;
const
  MC__SequenceLoadSet_O                    =            8;
const
  MC__SequenceLoadSet_Z                    =            9;
const
  MC__SequenceLoadSet_X1                   =           10;
const
  MC__SequenceLoadSet_X2                   =           11;
const
  MC_NONELoadSet                           =  2925 SHL 14;
const
  MC_CamConfig_P60RM_O                     =          195;
const
  MC__TotalFrameCount                      =  2926 SHL 14;
const
  MC__SequenceLoadSet_W                    =           12;
const
  MC__ACQW_Line1_Dur                       =  2927 SHL 14;
const
  MC__ACQW_Acq_Dur                         =  2928 SHL 14;
const
  MC__ACQW_Line3_Dur                       =  2929 SHL 14;
const
  MC__ACQW_Line5_Dur                       =  2930 SHL 14;
const
  MC_ASYNCI2LoadSet                        =  2931 SHL 14;
const
  MC_FieldParityOrder                      =  2932 SHL 14;
const
  MC_FieldParityOrder_UNDEFINED            =            1;
const
  MC_FieldParityOrder_DWUP                 =            2;
const
  MC_FieldParityOrder_UPDW                 =            3;
const
  MC_AnalogGrabPosY_Ln                     =  2933 SHL 14;
const
  MC_FrameSetLength_Fr                     =  2934 SHL 14;
const
  MC_ACReset                               =  2935 SHL 14;
const
  MC_ACReset_NO                            =            1;
const
  MC_ACReset_YES                           =            2;
const
  MC_ACResetWidth_us                       =  2936 SHL 14;
const
  MC_ACResetPostDelay_us                   =  2937 SHL 14;
const
  MC__PLL_LOCK_TIME_ms                     =  2938 SHL 14;
const
  MC_INITC1_GPTCOUNT_us                    =  2939 SHL 14;
const
  MC_INITC1_GPTCOUNT                       =  2940 SHL 14;
const
  MC_INITC2_GPTCOUNT_us                    =  2941 SHL 14;
const
  MC_INITC2_GPTCOUNT                       =  2942 SHL 14;
const
  MC_Light                                 =  2943 SHL 14;
const
  MC_Camera_AViiVA_M4CL6007                =          144;
const
  MC__BoardType__COLORSCAN                 =           17;
const
  MC_Strobe_Filter                         =  2944 SHL 14;
const
  MC_SHC_DarkBackground                    =  2945 SHL 14;
const
  MC_SHC_LightBackground                   =  2946 SHL 14;
const
  MC_SHC_Dark                              =  2947 SHL 14;
const
  MC_SHC_Light                             =  2948 SHL 14;
const
  MC_SHC_UseIndex                          =  2949 SHL 14;
const
  MC_SHC_StoreIndex                        =  2950 SHL 14;
const
  MC_LUT_Table                             =  2951 SHL 14;
const
  MC_LUT_Contrast                          =  2952 SHL 14;
const
  MC_LUT_Brightness                        =  2953 SHL 14;
const
  MC_LUT_Visibility                        =  2954 SHL 14;
const
  MC_LUT_Negative                          =  2955 SHL 14;
const
  MC_LUT_Negative_TRUE                     =            1;
const
  MC_LUT_Negative_FALSE                    =            2;
const
  MC_LUT_UseIndex                          =  2956 SHL 14;
const
  MC_LUT_StoreIndex                        =  2957 SHL 14;
const
  MC_SHC_UsePhysicalIndex                  =  2958 SHL 14;
const
  MC_LUT_UsePhysicalIndex                  =  2959 SHL 14;
const
  MC_SHC_OffsetAdjust                      =  2960 SHL 14;
const
  MC_CamConfig_LxxxxRP                     =          196;
const
  MC_CamConfig_L2098RP                     =          197;
const
  MC_CamConfig_L2048RP                     =          198;
const
  MC_CamConfig_L7500SP                     =          199;
const
  MC_CamConfig_L7500RC                     =          200;
const
  MC_CamConfig_L7500RG                     =          201;
const
  MC_CamConfig_L7500RP                     =          202;
const
  MC_CamConfig_L8192RP                     =          203;
const
  MC_Camera_NUCL4096D                      =          145;
const
  MC_Camera_NUCL7500D                      =          146;
const
  MC_Camera_YD5060                         =          147;
const
  MC_CamConfig_L6144RP                     =          204;
const
  MC_Manufacturer_NED                      =           22;
const
  MC_ColorRegistration_RGB                 =            5;
const
  MC_ColorRegistration_GBR                 =            6;
const
  MC_ColorRegistration_BRG                 =            7;
const
  MC_ColorGap                              =  2961 SHL 14;
const
  MC_STARTR_GPTCOUNT_us                    =  2962 SHL 14;
const
  MC_STARTR_GPTCOUNT                       =  2963 SHL 14;
const
  MC__SEQE_E                               =  2964 SHL 14;
const
  MC_PostExpose_us                         =  2965 SHL 14;
const
  MC_PostExpose_Tk                         =  2966 SHL 14;
const
  MC_PostExpose_E                          =  2967 SHL 14;
const
  MC__CSC_NROT                             =  2968 SHL 14;
const
  MC__CSC_LNCPT                            =  2969 SHL 14;
const
  MC__LCA_R1                               =  2970 SHL 14;
const
  MC__LCA_R2                               =  2971 SHL 14;
const
  MC__LCA_R3                               =  2972 SHL 14;
const
  MC__LCA_R4                               =  2973 SHL 14;
const
  MC__LCA_G1                               =  2974 SHL 14;
const
  MC__LCA_G2                               =  2975 SHL 14;
const
  MC__LCA_G3                               =  2976 SHL 14;
const
  MC__LCA_G4                               =  2977 SHL 14;
const
  MC__LCA_B1                               =  2978 SHL 14;
const
  MC__LCA_B2                               =  2979 SHL 14;
const
  MC__LCA_B3                               =  2980 SHL 14;
const
  MC__LCA_B4                               =  2981 SHL 14;
const
  MC__CSC_FMT                              =  2982 SHL 14;
const
  MC__TilesX                               =  2983 SHL 14;
const
  MC__TilesY                               =  2984 SHL 14;
const
  MC_ScanDirection                         =  2985 SHL 14;
const
  MC_ScanDirection_FORWARD                 =            1;
const
  MC_ScanDirection_REVERSE                 =            2;
const
  MC__ScanDelayR_Ln                        =  2986 SHL 14;
const
  MC__ScanDelayG_Ln                        =  2987 SHL 14;
const
  MC__ScanDelayB_Ln                        =  2988 SHL 14;
const
  MC__RBT_DAV                              =  2989 SHL 14;
const
  MC__RBT_OVF                              =  2990 SHL 14;
const
  MC__BAD_LBAD                             =  2991 SHL 14;
const
  MC__BAD_CBAD                             =  2992 SHL 14;
const
  MC_CreationModel                         =  2993 SHL 14;
const
  MC_CreationModel_COLORSCAN_M             =            1;
const
  MC_CreationModel_VALUE_M                 =            2;
const
  MC_CreationModel_EXPERT_M                =            3;
const
  MC_CreationModel_EXPERT_A                =            4;
const
  MC_CreationModel_EXPERT_B                =            5;
const
  MC_CreationModel_ALPHA_X                 =            6;
const
  MC_CreationModel_ALPHA_XBIS              =            7;
const
  MC_CreationModel_ALPHA_Y                 =            8;
const
  MC_CreationModel_ALPHA_YBIS              =            9;
const
  MC_CreationModel_IOTA_X                  =           10;
const
  MC_CreationModel_GAMMA_X                 =           11;
const
  MC_CreationModel_GAMMA_XBIS              =           12;
const
  MC_CreationModel_GAMMA_Y                 =           13;
const
  MC_CreationModel_GAMMA_YBIS              =           14;
const
  MC_CreationModel_GAMMA_Z                 =           15;
const
  MC_CreationModel_GAMMA_ZBIS              =           16;
const
  MC_CreationModel_FAIL                    =           17;
const
  MC_TileSizeX_Px                          =  2994 SHL 14;
const
  MC_TileCountX                            =  2995 SHL 14;
const
  MC_TileSizeY_Ln                          =  2996 SHL 14;
const
  MC_TileCountY                            =  2997 SHL 14;
const
  MC_ImageFlipX_Filter                     =  2998 SHL 14;
const
  MC_ImageFlipY_Filter                     =  2999 SHL 14;
const
  MC__BoardType__PICOLO_JETX               =           18;
const
  MC_Camera_MyColorScanCameraLink          =          148;
const
  MC_CamConfig_LxxxxSC                     =          205;
const
  MC_CamConfig_LxxxxRG2                    =          206;
const
  MC_CamConfig_L1024SC                     =          207;
const
  MC_CamConfig_L2048SC                     =          208;
const
  MC_CamConfig_L2098SC                     =          209;
const
  MC_CamConfig_L4096SC                     =          210;
const
  MC_CamConfig_L6144SC                     =          211;
const
  MC_CamConfig_L7500SC                     =          212;
const
  MC_CamConfig_L8192SC                     =          213;
const
  MC_CameraRateMode                        =  3000 SHL 14;
const
  MC_CameraRateMode_FREERUNNING            =            1;
const
  MC_CameraRateMode_CONTROLLED             =            2;
const
  MC_CameraRateMode_UNKNOWN                =            3;
const
  MC_LineCaptureMode                       =  3001 SHL 14;
const
  MC_LineCaptureMode_ALL                   =            1;
const
  MC_LineCaptureMode_PICK                  =            2;
const
  MC___CameraRateMode_Check                =  3002 SHL 14;
const
  MC___CameraRateMode_Check_PASS           =            1;
const
  MC___CameraRateMode_Check_FAIL           =            2;
const
  MC___LineRateMode_Check                  =  3003 SHL 14;
const
  MC___LineRateMode_Check_PASS             =            1;
const
  MC___LineRateMode_Check_FAIL             =            2;
const
  MC_CrossPitch                            =  3004 SHL 14;
const
  MC_CrossPitch_Filter                     =  3005 SHL 14;
const
  MC_ScanDelayCompensation                 =  3006 SHL 14;
const
  MC_ScanDelayCompensation_DISABLED        =            1;
const
  MC_ScanDelayCompensation_ENABLED         =            2;
const
  MC__ScanDelay_Ln                         =  3007 SHL 14;
const
  MC__GrabberOffset                        =  3008 SHL 14;
const
  MC_ColorFormat_JPEG                      =           57;
const
  MC__CamConfig_INVALID                    =            1;
const
  MC__CamConfig_AREA_SP                    =            2;
const
  MC__CamConfig_AREA_RP                    =            3;
const
  MC__CamConfig_AREA_SC                    =            4;
const
  MC__CamConfig_AREA_RC                    =            5;
const
  MC__CamConfig_AREA_RG                    =            6;
const
  MC__CamConfig_AREA_RG2                   =            7;
const
  MC__CamConfig_LINE_SP                    =            8;
const
  MC__CamConfig_LINE_RP                    =            9;
const
  MC__CamConfig_LINE_SC                    =           10;
const
  MC__CamConfig_LINE_RC                    =           11;
const
  MC__CamConfig_LINE_RG                    =           12;
const
  MC__CamConfig_LINE_RG2                   =           13;
const
  MC__CamConfig_TDI_SP                     =           14;
const
  MC__CamConfig_TDI_RP                     =           15;
const
  MC___CameraConfig_Check                  =  3009 SHL 14;
const
  MC___CameraConfig_Check_PASS             =            1;
const
  MC___CameraConfig_Check_FAIL             =            2;
const
  MC__CSC_SEQ                              =  3010 SHL 14;
const
  MC_ColorScanBypass                       =  3011 SHL 14;
const
  MC_ColorScanBypass_OFF                   =            1;
const
  MC_ColorScanBypass_ON                    =            2;
const
  MC__CSC_BYP                              =  3012 SHL 14;
const
  MC__CSC_SQM                              =  3013 SHL 14;
const
  MC__STM1_T1SEL_T1END                     =           10;
const
  MC__STM1_LRSEL                           =  3014 SHL 14;
const
  MC__STM1_LRSEL_FTRIGS                    =            1;
const
  MC__STM1_LRSEL_LTRIGS                    =            2;
const
  MC__STM1_LRSEL_PPLS                      =            3;
const
  MC__STM1_LRSEL_OFF                       =            4;
const
  MC_SHC_InDataWidth                       =  3015 SHL 14;
const
  MC_SHC_OutDataWidth                      =  3016 SHL 14;
const
  MC_LUT_InDataWidth                       =  3017 SHL 14;
const
  MC_LUT_OutDataWidth                      =  3018 SHL 14;
const
  MC_Camera_AViiVA_M4CL8007                =          149;
const
  MC_BoardTopology_UNIFORM                 =           29;
const
  MC_BoardTopology_1_2                     =           30;
const
  MC_BoardTopology_3_0                     =           31;
const
  MC_BoardTopology_0_3                     =           32;
const
  MC_CreationModel_COLORSCAN               =           18;
const
  MC_CreationModel_0x801DFFFF              =           19;
const
  MC_CreationModel_0                       =           20;
const
  MC_CreationModel_0x8009FFFF              =           21;
const
  MC_CreationModel_0x800AFFFF              =           22;
const
  MC_CreationModel_0x800BFFFF              =           23;
const
  MC_CreationModel_0x800CFFFF              =           24;
const
  MC_CreationModel_MC_CHANNEL_GAMMA_X      =           25;
const
  MC_CreationModel_MC_CHANNEL_GAMMA_XBIS   =           26;
const
  MC_CreationModel_MC_CHANNEL_GAMMA_Y      =           27;
const
  MC_CreationModel_MC_CHANNEL_GAMMA_YBIS   =           28;
const
  MC_CreationModel_MC_CHANNEL_GAMMA_Z      =           29;
const
  MC_CreationModel_MC_CHANNEL_GAMMA_ZBIS   =           30;
const
  MC_BoardInUse                            =  3019 SHL 14;
const
  MC__NormalOffsetXParity                  =  3020 SHL 14;
const
  MC_ChannelCount                          =  3021 SHL 14;
const
  MC_Camera_CV_A33                         =          150;
const
  MC_CamConfig_P117SC                      =          214;
const
  MC_CamConfig_P117RG                      =          215;
const
  MC___PCIID_Check                         =  3022 SHL 14;
const
  MC___PCIID_Check_PASS                    =            1;
const
  MC___PCIID_Check_FAIL                    =            2;
const
  MC__PCIBridge                            =  3023 SHL 14;
const
  MC__PCIBridge_PLX9054                    =            1;
const
  MC__PCIBridge_PLX9656                    =            2;
const
  MC__PCIBridge_UNKNOWN                    =            3;
const
  MC_Camera_A402k                          =          151;
const
  MC__Category_Signaling                   =           30;
const
  MC_AcquisitionCleanup                    =  3024 SHL 14;
const
  MC_AcquisitionCleanup_DISABLED           =            1;
const
  MC_AcquisitionCleanup_ENABLED            =            2;
const
  MC_RecycleIfNecessary                    =  3025 SHL 14;
const
  MC_RecycleIfNecessary_YES                =            1;
const
  MC_RecycleIfNecessary_NO                 =            2;
const
  MC_Camera_CS6910CL                       =          152;
const
  MC___FieldPeriod                         =  3026 SHL 14;
const
  MC___SwitchingGrabDelay                  =  3027 SHL 14;
const
  MC_HardTrigOnly_Filter                   =  3028 SHL 14;
const
  MC_NextGrabField_Filter                  =  3029 SHL 14;
const
  MC_GrabFld_Filter                        =  3030 SHL 14;
const
  MC__NextGrabFieldParity                  =  3031 SHL 14;
const
  MC__NextGrabFieldParity_ANY              =            1;
const
  MC__NextGrabFieldParity_UP               =            2;
const
  MC__NextGrabFieldParity_DOWN             =            3;
const
  MC__NextGrabFieldParity_KEEP             =            4;
const
  MC__NextGrabFieldParity_CHANGE           =            5;
const
  MC__R1FieldNumber                        =  3032 SHL 14;
const
  MC__R1Parity                             =  3033 SHL 14;
const
  MC__R1Parity_UP                          =            1;
const
  MC__R1Parity_DOWN                        =            2;
const
  MC__Category_Sequence_Interlace_Master   =           31;
const
  MC__Vref_BACQR1_H                        =  3034 SHL 14;
const
  MC__Vref_BACQR2_H                        =  3035 SHL 14;
const
  MC__BACQR1_EACQR1_H                      =  3036 SHL 14;
const
  MC__BACQR2_EACQR2_H                      =  3037 SHL 14;
const
  MC__Vref_EACQR1_H                        =  3038 SHL 14;
const
  MC__Vref_EACQR2_H                        =  3039 SHL 14;
const
  MC__EACQR1_BACQR2_H                      =  3040 SHL 14;
const
  MC__VDRIVEDur_H                          =  3041 SHL 14;
const
  MC__SYNC_IM_VRSTOn_Pos                   =  3042 SHL 14;
const
  MC__SYNC_IM_VRSTOff_Pos                  =  3043 SHL 14;
const
  MC__SYNC_IM_ACQR1On_Pos                  =  3044 SHL 14;
const
  MC__SYNC_IM_ACQR1Off_Pos                 =  3045 SHL 14;
const
  MC__SYNC_IM_VRSTMIDOn_Pos                =  3046 SHL 14;
const
  MC__SYNC_IM_VRSTMIDOff_Pos               =  3047 SHL 14;
const
  MC__SYNC_IM_ACQR2On_Pos                  =  3048 SHL 14;
const
  MC__SYNC_IM_ACQR2Off_Pos                 =  3049 SHL 14;
const
  MC__SYNC_IM_R1_Line1_RPT                 =  3050 SHL 14;
const
  MC__SYNC_IM_R1_Line2_RPT                 =  3051 SHL 14;
const
  MC__SYNC_IM_R1_Line3_RPT                 =  3052 SHL 14;
const
  MC__SYNC_IM_R1_Line4_RPT                 =  3053 SHL 14;
const
  MC__SYNC_IM_R2_Line1_RPT                 =  3054 SHL 14;
const
  MC__SYNC_IM_R2_Line2_RPT                 =  3055 SHL 14;
const
  MC__SYNC_IM_R2_Line3_RPT                 =  3056 SHL 14;
const
  MC__SYNC_IM_R2_Line4_RPT                 =  3057 SHL 14;
const
  MC__SYNC_IM_IDLER1_Line1_RPT             =  3058 SHL 14;
const
  MC__SYNC_IM_IDLER1_Line2_RPT             =  3059 SHL 14;
const
  MC__SYNC_IM_IDLER1_Line3_RPT             =  3060 SHL 14;
const
  MC__SYNC_IM_IDLER2_Line1_RPT             =  3061 SHL 14;
const
  MC__SYNC_IM_IDLER2_Line2_RPT             =  3062 SHL 14;
const
  MC__SYNC_IM_IDLER2_Line3_RPT             =  3063 SHL 14;
const
  MC__SYNC_IM_ACQR_Line1_RPT               =  3064 SHL 14;
const
  MC__SYNC_IM_ACQR1_Line2_RPT              =  3065 SHL 14;
const
  MC__SYNC_IM_ACQR1_Line3_RPT              =  3066 SHL 14;
const
  MC__SYNC_IM_ACQR1_Line4_RPT              =  3067 SHL 14;
const
  MC__SYNC_IM_ACQR1_Line5_RPT              =  3068 SHL 14;
const
  MC__SYNC_IM_ACQR2_Line2_RPT              =  3069 SHL 14;
const
  MC__SYNC_IM_ACQR2_Line3_RPT              =  3070 SHL 14;
const
  MC__SYNC_IM_ACQR2_Line4_RPT              =  3071 SHL 14;
const
  MC__SYNC_IM_ACQR2_Line5_RPT              =  3072 SHL 14;
const
  MC_F0                                    =  3073 SHL 14;
const
  MC_F1                                    =  3074 SHL 14;
const
  MC_F2                                    =  3075 SHL 14;
const
  MC_I0                                    =  3076 SHL 14;
const
  MC__Period_Min_us                        =  3077 SHL 14;
const
  MC__Period_Min_PG                        =  3078 SHL 14;
const
  MC__STB_x1STYL_HOLD                      =            6;
const
  MC__STB_x2STYL_HOLD                      =            6;
const
  MC___MSFWarning_Check                    =  3079 SHL 14;
const
  MC___MSFWarning_Check_PASS               =            1;
const
  MC___MSFWarning_Check_FAIL               =            2;
const
  MC___TrigFilter_Check                    =  3080 SHL 14;
const
  MC___TrigFilter_Check_PASS               =            1;
const
  MC___TrigFilter_Check_FAIL               =            2;
const
  MC___LineTrigFilter_Check                =  3081 SHL 14;
const
  MC___LineTrigFilter_Check_PASS           =            1;
const
  MC___LineTrigFilter_Check_FAIL           =            2;
const
  MC_DecimationFactorY                     =  3082 SHL 14;
const
  MC_InputConfig_Filter_MC_IN1             =  3083 SHL 14;
const
  MC___InputId_MC_IN1                      =  3084 SHL 14;
const
  MC_OutputConfig_Filter_MC_OUT1           =  3085 SHL 14;
const
  MC___OutputId_MC_OUT1                    =  3086 SHL 14;
const
  MC_OutputState_Filter_MC_OUT1            =  3087 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT1            =  3088 SHL 14;
const
  MC_OutputState_MC_OUT1                   =  3089 SHL 14;
const
  MC_OutputState_MC_OUT1_HOLD              =            1;
const
  MC_OutputState_MC_OUT1_LOW               =            2;
const
  MC_OutputState_MC_OUT1_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT2           =  3090 SHL 14;
const
  MC___OutputId_MC_OUT2                    =  3091 SHL 14;
const
  MC_OutputState_Filter_MC_OUT2            =  3092 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT2            =  3093 SHL 14;
const
  MC_OutputState_MC_OUT2                   =  3094 SHL 14;
const
  MC_OutputState_MC_OUT2_HOLD              =            1;
const
  MC_OutputState_MC_OUT2_LOW               =            2;
const
  MC_OutputState_MC_OUT2_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT3           =  3095 SHL 14;
const
  MC___OutputId_MC_OUT3                    =  3096 SHL 14;
const
  MC_OutputState_Filter_MC_OUT3            =  3097 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT3            =  3098 SHL 14;
const
  MC_OutputState_MC_OUT3                   =  3099 SHL 14;
const
  MC_OutputState_MC_OUT3_HOLD              =            1;
const
  MC_OutputState_MC_OUT3_LOW               =            2;
const
  MC_OutputState_MC_OUT3_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT4           =  3100 SHL 14;
const
  MC___OutputId_MC_OUT4                    =  3101 SHL 14;
const
  MC_OutputState_Filter_MC_OUT4            =  3102 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT4            =  3103 SHL 14;
const
  MC_OutputState_MC_OUT4                   =  3104 SHL 14;
const
  MC_OutputState_MC_OUT4_HOLD              =            1;
const
  MC_OutputState_MC_OUT4_LOW               =            2;
const
  MC_OutputState_MC_OUT4_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT5           =  3105 SHL 14;
const
  MC___OutputId_MC_OUT5                    =  3106 SHL 14;
const
  MC_OutputState_Filter_MC_OUT5            =  3107 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT5            =  3108 SHL 14;
const
  MC_OutputState_MC_OUT5                   =  3109 SHL 14;
const
  MC_OutputState_MC_OUT5_HOLD              =            1;
const
  MC_OutputState_MC_OUT5_LOW               =            2;
const
  MC_OutputState_MC_OUT5_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT6           =  3110 SHL 14;
const
  MC___OutputId_MC_OUT6                    =  3111 SHL 14;
const
  MC_OutputState_Filter_MC_OUT6            =  3112 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT6            =  3113 SHL 14;
const
  MC_OutputState_MC_OUT6                   =  3114 SHL 14;
const
  MC_OutputState_MC_OUT6_HOLD              =            1;
const
  MC_OutputState_MC_OUT6_LOW               =            2;
const
  MC_OutputState_MC_OUT6_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT7           =  3115 SHL 14;
const
  MC___OutputId_MC_OUT7                    =  3116 SHL 14;
const
  MC_OutputState_Filter_MC_OUT7            =  3117 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT7            =  3118 SHL 14;
const
  MC_OutputState_MC_OUT7                   =  3119 SHL 14;
const
  MC_OutputState_MC_OUT7_HOLD              =            1;
const
  MC_OutputState_MC_OUT7_LOW               =            2;
const
  MC_OutputState_MC_OUT7_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT8           =  3120 SHL 14;
const
  MC___OutputId_MC_OUT8                    =  3121 SHL 14;
const
  MC_OutputState_Filter_MC_OUT8            =  3122 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT8            =  3123 SHL 14;
const
  MC_OutputState_MC_OUT8                   =  3124 SHL 14;
const
  MC_OutputState_MC_OUT8_HOLD              =            1;
const
  MC_OutputState_MC_OUT8_LOW               =            2;
const
  MC_OutputState_MC_OUT8_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT9           =  3125 SHL 14;
const
  MC___OutputId_MC_OUT9                    =  3126 SHL 14;
const
  MC_OutputState_Filter_MC_OUT9            =  3127 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT9            =  3128 SHL 14;
const
  MC_OutputState_MC_OUT9                   =  3129 SHL 14;
const
  MC_OutputState_MC_OUT9_HOLD              =            1;
const
  MC_OutputState_MC_OUT9_LOW               =            2;
const
  MC_OutputState_MC_OUT9_HIGH              =            3;
const
  MC_OutputConfig_Filter_MC_OUT10          =  3130 SHL 14;
const
  MC___OutputId_MC_OUT10                   =  3131 SHL 14;
const
  MC_OutputState_Filter_MC_OUT10           =  3132 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT10           =  3133 SHL 14;
const
  MC_OutputState_MC_OUT10                  =  3134 SHL 14;
const
  MC_OutputState_MC_OUT10_HOLD             =            1;
const
  MC_OutputState_MC_OUT10_LOW              =            2;
const
  MC_OutputState_MC_OUT10_HIGH             =            3;
const
  MC_OutputConfig_Filter_MC_OUT11          =  3135 SHL 14;
const
  MC___OutputId_MC_OUT11                   =  3136 SHL 14;
const
  MC_OutputState_Filter_MC_OUT11           =  3137 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT11           =  3138 SHL 14;
const
  MC_OutputState_MC_OUT11                  =  3139 SHL 14;
const
  MC_OutputState_MC_OUT11_HOLD             =            1;
const
  MC_OutputState_MC_OUT11_LOW              =            2;
const
  MC_OutputState_MC_OUT11_HIGH             =            3;
const
  MC_OutputConfig_Filter_MC_OUT12          =  3140 SHL 14;
const
  MC___OutputId_MC_OUT12                   =  3141 SHL 14;
const
  MC_OutputState_Filter_MC_OUT12           =  3142 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT12           =  3143 SHL 14;
const
  MC_OutputState_MC_OUT12                  =  3144 SHL 14;
const
  MC_OutputState_MC_OUT12_HOLD             =            1;
const
  MC_OutputState_MC_OUT12_LOW              =            2;
const
  MC_OutputState_MC_OUT12_HIGH             =            3;
const
  MC_OutputConfig_Filter_MC_OUT13          =  3145 SHL 14;
const
  MC___OutputId_MC_OUT13                   =  3146 SHL 14;
const
  MC_OutputState_Filter_MC_OUT13           =  3147 SHL 14;
const
  MC_OutputStyle_Filter_MC_OUT13           =  3148 SHL 14;
const
  MC_OutputState_MC_OUT13                  =  3149 SHL 14;
const
  MC_OutputState_MC_OUT13_HOLD             =            1;
const
  MC_OutputState_MC_OUT13_LOW              =            2;
const
  MC_OutputState_MC_OUT13_HIGH             =            3;
const
  MC_INTERLACERR4LoadSet                   =  3150 SHL 14;
const
  MC__ASYNC_IRR4_VRST1Off_Pos              =  3151 SHL 14;
const
  MC__ASYNC_IRR4_VRST2MIDOn_Pos            =  3152 SHL 14;
const
  MC__ASYNC_IRR4_VRST2MIDOff_Pos           =  3153 SHL 14;
const
  MC__ASYNC_IRR4_VRST3On_Pos               =  3154 SHL 14;
const
  MC__ASYNC_IRR4_VRST3Off_Pos              =  3155 SHL 14;
const
  MC__ASYNC_IRR4_ACQR1On_Pos               =  3156 SHL 14;
const
  MC__ASYNC_IRR4_ACQR1Off_Pos              =  3157 SHL 14;
const
  MC__ASYNC_IRR4_VRST4MIDOn_Pos            =  3158 SHL 14;
const
  MC__ASYNC_IRR4_VRSTMIDOff_Pos            =  3159 SHL 14;
const
  MC__ASYNC_IRR4_ACQR2On_Pos               =  3160 SHL 14;
const
  MC__ASYNC_IRR4_ACQR2Off_Pos              =  3161 SHL 14;
const
  MC__ASYNC_IRR4_Field1_Line1_RPT          =  3162 SHL 14;
const
  MC__ASYNC_IRR4_Field1_Line2_RPT          =  3163 SHL 14;
const
  MC__ASYNC_IRR4_Field2_Line1_RPT          =  3164 SHL 14;
const
  MC__ASYNC_IRR4_Field2_Line3_RPT          =  3165 SHL 14;
const
  MC__ASYNC_IRR4_Field3_Line1_RPT          =  3166 SHL 14;
const
  MC__ASYNC_IRR4_Field3_Line2_RPT          =  3167 SHL 14;
const
  MC__ASYNC_IRR4_Field3_Line3_RPT          =  3168 SHL 14;
const
  MC__ASYNC_IRR4_Field3_Line4_RPT          =  3169 SHL 14;
const
  MC__ASYNC_IRR4_Field4_Line1_RPT          =  3170 SHL 14;
const
  MC__ASYNC_IRR4_Field4_Line2_RPT          =  3171 SHL 14;
const
  MC__ASYNC_IRR4_Field4_Line3_RPT          =  3172 SHL 14;
const
  MC__SequenceLoadSet_RR4                  =           13;
const
  MC__Category_Sequence_Interlace_RR4      =           32;
const
  MC__ASYNC_IRR4_VRST4MIDOff_Pos           =  3173 SHL 14;
const
  MC__ASYNC_IRR4_Field2_Line2_RPT          =  3174 SHL 14;
const
  MC__ASYNC_IRR4_Field4_Line4_RPT          =  3175 SHL 14;
const
  MC_CamConfig_IxxRM_4                     =          216;
const
  MC_ChannelTopology_QUADXQUAD             =           15;
const
  MC_Camera_A403k                          =          153;
const
  MC___ExposeReadout_Check                 =  3176 SHL 14;
const
  MC___ExposeReadout_Check_PASS            =            1;
const
  MC___ExposeReadout_Check_FAIL            =            2;
const
  MC__CamConfig_AREA_RG1                   =           16;
const
  MC__ExposeReadout                        =  3177 SHL 14;
const
  MC__ExposeReadout_INVALID                =            1;
const
  MC__ExposeReadout_AREA_SP                =            2;
const
  MC__ExposeReadout_AREA_RP                =            3;
const
  MC__ExposeReadout_AREA_SC                =            4;
const
  MC__ExposeReadout_AREA_RC                =            5;
const
  MC__ExposeReadout_AREA_RG                =            6;
const
  MC__ExposeReadout_AREA_RG1               =            7;
const
  MC__ExposeReadout_AREA_RG2               =            8;
const
  MC__RESETSource                          =  3178 SHL 14;
const
  MC__RESETSource_CUS2                     =            1;
const
  MC__RESETSource_SUS2                     =            2;
const
  MC_ExposureController                    =  3179 SHL 14;
const
  MC_ExposureController_GRABBER            =            1;
const
  MC_ExposureController_CAMERA             =            2;
const
  MC_ExposureController_NONE               =            3;
const
  MC_Camera_InterlaceRR                    =          154;
const
  MC_CamConfig_IxxRM                       =          217;
const
  MC_Camera_4000m                          =          155;
const
  MC_CamConfig_P16SC                       =          218;
const
  MC_CamConfig_P16RG                       =          219;
const
  MC_CamConfig_I50SM_R                     =          220;
const
  MC_CamConfig_I60SM_R                     =          221;
const
  MC_CamConfig_IxxSM_R                     =          222;
const
  MC__ExposeReadout_AREA_SL                =            9;
const
  MC___LongPage_Check                      =  3180 SHL 14;
const
  MC___LongPage_Check_PASS                 =            1;
const
  MC___LongPage_Check_FAIL                 =            2;
const
  MC___LongPage_BoardCheck                 =  3181 SHL 14;
const
  MC___LongPage_BoardCheck_PASS            =            1;
const
  MC___LongPage_BoardCheck_FAIL            =            2;
const
  MC___LongPage_ParamCoherencyCheck        =  3182 SHL 14;
const
  MC___LongPage_ParamCoherencyCheck_PASS   =            1;
const
  MC___LongPage_ParamCoherencyCheck_FAIL   =            2;
const
  MC__CSC_LNCPT_RESIDUE                    =  3183 SHL 14;
const
  MC_ResidualTileCountY                    =  3184 SHL 14;
const
  MC_Camera_KP_F100BCL                     =          156;
const
  MC_B2Usage_TRIGGER                       =            3;
const
  MC_Camera_XC_ES30                        =          157;
const
  MC_Camera_XC_ES30CE                      =          158;
const
  MC_Camera_2000m                          =          159;
const
  MC_Camera_TM_4000CL                      =          160;
const
  MC_CamConfig_P32SC                       =          223;
const
  MC_CamConfig_P32RG                       =          224;
const
  MC__BoardType__PICOLO_TETRAX             =           19;
const
  MC__BoardType__JUNIOR_4                  =           20;
const
  MC_Camera_SI_M100                        =          161;
const
  MC_CamConfig_P17SA                       =          225;
const
  MC_CamConfig_P17RA                       =          226;
const
  MC_CamConfig_P17RA_G                     =          227;
const
  MC_Manufacturer_COSTAR                   =           23;
const
  MC_Camera_CS8541D                        =          162;
const
  MC__Board_Type__HARMONY                  =            5;
const
  MC__BoardType__HARMONY                   =           21;
const
  MC_GrabberIx                             =  3185 SHL 14;
const
  MC_Tap                                   =  3186 SHL 14;
const
  MC_HSLane                                =  3187 SHL 14;
const
  MC_VSLane                                =  3188 SHL 14;
const
  MC_ASR                                   =  3189 SHL 14;
const
  MC_TLD_S                                 =  3190 SHL 14;
const
  MC_HPD_S                                 =  3191 SHL 14;
const
  MC_SPD_S                                 =  3192 SHL 14;
const
  MC_OffsetGate_S                          =  3193 SHL 14;
const
  MC_EMN                                   =  3194 SHL 14;
const
  MC_EMX                                   =  3195 SHL 14;
const
  MC_OMN                                   =  3196 SHL 14;
const
  MC_OMX                                   =  3197 SHL 14;
const
  MC_TLD                                   =  3198 SHL 14;
const
  MC__TLD_S                                =  3199 SHL 14;
const
  MC_SPD                                   =  3200 SHL 14;
const
  MC__SPD_S                                =  3201 SHL 14;
const
  MC_HPD                                   =  3202 SHL 14;
const
  MC__HPD_S                                =  3203 SHL 14;
const
  MC_SSB                                   =  3204 SHL 14;
const
  MC_SBP                                   =  3205 SHL 14;
const
  MC__OffsetGate_S                         =  3206 SHL 14;
const
  MC_SVA                                   =  3207 SHL 14;
const
  MC_SSA                                   =  3208 SHL 14;
const
  MC_VCC                                   =  3209 SHL 14;
const
  MC_LAC                                   =  3210 SHL 14;
const
  MC_TAC                                   =  3211 SHL 14;
const
  MC_MNS_R                                 =  3212 SHL 14;
const
  MC__MNS                                  =  3213 SHL 14;
const
  MC_MNS                                   =  3214 SHL 14;
const
  MC_MXS_R                                 =  3215 SHL 14;
const
  MC__MXS                                  =  3216 SHL 14;
const
  MC_MXS                                   =  3217 SHL 14;
const
  MC_VSC                                   =  3218 SHL 14;
const
  MC_VSC_INTERLACE                         =            1;
const
  MC_VSC_PROGRESSIVE                       =            2;
const
  MC_CDC                                   =  3219 SHL 14;
const
  MC_CDC_PAL                               =            1;
const
  MC_CDC_NTSC                              =            2;
const
  MC_CDC_MONOCHROME                        =            3;
const
  MC_CDC_PAL_TRAP                          =            4;
const
  MC_CDC_NTSC_TRAP                         =            5;
const
  MC_SPC                                   =  3220 SHL 14;
const
  MC_SPC_PAL_SYNC                          =            1;
const
  MC_SPC_PAL_EVEN                          =            2;
const
  MC_SPC_PAL_ODD                           =            3;
const
  MC_SPC_NTSC_SYNC                         =            4;
const
  MC_SPC_NTSC_EVEN                         =            5;
const
  MC_SPC_NTSC_ODD                          =            6;
const
  MC_ChannelIx                             =  3221 SHL 14;
const
  MC__SyncPhase                            =  3222 SHL 14;
const
  MC__SyncPhase_EVEN                       =            1;
const
  MC__SyncPhase_ODD                        =            2;
const
  MC_DRP_R                                 =  3223 SHL 14;
const
  MC_RHL_R                                 =  3224 SHL 14;
const
  MC_RHA                                   =  3225 SHL 14;
const
  MC_RHL                                   =  3226 SHL 14;
const
  MC_RHD                                   =  3227 SHL 14;
const
  MC_RHT                                   =  3228 SHL 14;
const
  MC_RVA                                   =  3229 SHL 14;
const
  MC_RVL                                   =  3230 SHL 14;
const
  MC_RVD                                   =  3231 SHL 14;
const
  MC_RVT                                   =  3232 SHL 14;
const
  MC_RHD_0                                 =  3233 SHL 14;
const
  MC_RHD_1                                 =  3234 SHL 14;
const
  MC_RHD_2                                 =  3235 SHL 14;
const
  MC_DummyRHD_0                            =  3236 SHL 14;
const
  MC_DummyRHD_1                            =  3237 SHL 14;
const
  MC_DummyRHD_2                            =  3238 SHL 14;
const
  MC_AlphaComponent                        =  3239 SHL 14;
const
  MC_DRL                                   =  3240 SHL 14;
const
  MC__Gain                                 =  3241 SHL 14;
const
  MC__Offset                               =  3242 SHL 14;
const
  MC_SBS                                   =  3243 SHL 14;
const
  MC_URG_0                                 =  3244 SHL 14;
const
  MC__Gain_0                               =  3245 SHL 14;
const
  MC_URG_1                                 =  3246 SHL 14;
const
  MC__Gain_1                               =  3247 SHL 14;
const
  MC_URG_2                                 =  3248 SHL 14;
const
  MC__Gain_2                               =  3249 SHL 14;
const
  MC_URO_0                                 =  3250 SHL 14;
const
  MC__Offset_0                             =  3251 SHL 14;
const
  MC_URO_1                                 =  3252 SHL 14;
const
  MC__Offset_1                             =  3253 SHL 14;
const
  MC_URO_2                                 =  3254 SHL 14;
const
  MC__Offset_2                             =  3255 SHL 14;
const
  MC_KernelIx                              =  3256 SHL 14;
const
  MC_CVN                                   =  3257 SHL 14;
const
  MC_KAS                                   =  3258 SHL 14;
const
  MC_Kernel                                =  3259 SHL 14;
const
  MC_Kernel_F12_CT_NTSC                    =            1;
const
  MC_Kernel_F12_S1_NTSC                    =            2;
const
  MC_Kernel_F13_CT_NTSC                    =            3;
const
  MC_Kernel_F13_CT_PAL                     =            4;
const
  MC_Kernel_F13_S1_NTSC                    =            5;
const
  MC_Kernel_F13_S1_PAL                     =            6;
const
  MC_Kernel_F13_S2_PAL                     =            7;
const
  MC_Kernel_F15_CT_PAL                     =            8;
const
  MC_Kernel_F15_S1_PAL                     =            9;
const
  MC_Kernel_F18_S1_HIRES                   =           10;
const
  MC_Kernel_F20_S1_HIRES                   =           11;
const
  MC_Kernel_F23_S1_HIRES                   =           12;
const
  MC_Kernel_F25_S1_HIRES                   =           13;
const
  MC_Kernel_F25_S1_NTSC                    =           14;
const
  MC_Kernel_F28_S1_HIRES                   =           15;
const
  MC_Kernel_F30_S1_PAL                     =           16;
const
  MC_Kernel_F32_S1_HIRES                   =           17;
const
  MC_Kernel_F35_S1_HIRES                   =           18;
const
  MC_Kernel_F40_S1_HIRES                   =           19;
const
  MC__SyncPhase_ANY                        =            3;
const
  MC_JpegQuality                           =  3260 SHL 14;
const
  MC_Module_12_Present                     =  3261 SHL 14;
const
  MC_ModuleVideoAddress_                   =  3262 SHL 14;
const
  MC_InputStyle_Filter_MC_IN1              =  3263 SHL 14;
const
  MC_InputConfig_Filter_MC_IN2             =  3264 SHL 14;
const
  MC___InputId_MC_IN2                      =  3265 SHL 14;
const
  MC_InputStyle_Filter_MC_IN2              =  3266 SHL 14;
const
  MC_InputConfig_Filter_MC_IN3             =  3267 SHL 14;
const
  MC___InputId_MC_IN3                      =  3268 SHL 14;
const
  MC_InputStyle_Filter_MC_IN3              =  3269 SHL 14;
const
  MC_InputConfig_Filter_MC_IN4             =  3270 SHL 14;
const
  MC___InputId_MC_IN4                      =  3271 SHL 14;
const
  MC_InputStyle_Filter_MC_IN4              =  3272 SHL 14;
const
  MC_InputConfig_Filter_MC_IN5             =  3273 SHL 14;
const
  MC___InputId_MC_IN5                      =  3274 SHL 14;
const
  MC_InputStyle_Filter_MC_IN5              =  3275 SHL 14;
const
  MC__ChannelActivationDelay               =  3276 SHL 14;
const
  MC_Camera_XC_56                          =          163;
const
  MC_Camera_MV_D640                        =          164;
const
  MC_Camera_MV_D1024                       =          165;
const
  MC_CamConfig_P200SC                      =          228;
const
  MC_CamConfig_P200RG                      =          229;
const
  MC_CamConfig_P75SC                       =          230;
const
  MC_CamConfig_P75RG                       =          231;
const
  MC_Manufacturer_PHOTONFOCUS              =           24;
const
  MC_AcqStep_Px                            =  3277 SHL 14;
const
  MC_CamConfig_P200RC                      =          232;
const
  MC_GrabWindow_FIT                        =            5;
const
  MC_MIO_SB_Present                        =  3278 SHL 14;
const
  MC_InputConfig_Filter_MC_MIOSB_IN1       =  3279 SHL 14;
const
  MC___InputId_MC_MIOSB_IN1                =  3280 SHL 14;
const
  MC_InputStyle_Filter_MC_MIOSB_IN1        =  3281 SHL 14;
const
  MC_InputConfig_Filter_MC_MIOSB_IN2       =  3282 SHL 14;
const
  MC___InputId_MC_MIOSB_IN2                =  3283 SHL 14;
const
  MC_InputStyle_Filter_MC_MIOSB_IN2        =  3284 SHL 14;
const
  MC_InputConfig_Filter_MC_MIOSB_IN3       =  3285 SHL 14;
const
  MC___InputId_MC_MIOSB_IN3                =  3286 SHL 14;
const
  MC_InputStyle_Filter_MC_MIOSB_IN3        =  3287 SHL 14;
const
  MC_InputConfig_Filter_MC_MIOSB_IN4       =  3288 SHL 14;
const
  MC___InputId_MC_MIOSB_IN4                =  3289 SHL 14;
const
  MC_InputStyle_Filter_MC_MIOSB_IN4        =  3290 SHL 14;
const
  MC_InputConfig_Filter_MC_MIOSB_IN5       =  3291 SHL 14;
const
  MC___InputId_MC_MIOSB_IN5                =  3292 SHL 14;
const
  MC_InputStyle_Filter_MC_MIOSB_IN5        =  3293 SHL 14;
const
  MC_InputConfig_Filter_MC_MIOSB_IN6       =  3294 SHL 14;
const
  MC___InputId_MC_MIOSB_IN6                =  3295 SHL 14;
const
  MC_InputStyle_Filter_MC_MIOSB_IN6        =  3296 SHL 14;
const
  MC_OutputConfig_Filter_MC_MIOSB_OUT1     =  3297 SHL 14;
const
  MC___OutputId_MC_MIOSB_OUT1              =  3298 SHL 14;
const
  MC_OutputState_Filter_MC_MIOSB_OUT1      =  3299 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIOSB_OUT1      =  3300 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT1             =  3301 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT1_HOLD        =            1;
const
  MC_OutputState_MC_MIOSB_OUT1_LOW         =            2;
const
  MC_OutputState_MC_MIOSB_OUT1_HIGH        =            3;
const
  MC_OutputConfig_Filter_MC_MIOSB_OUT2     =  3302 SHL 14;
const
  MC___OutputId_MC_MIOSB_OUT2              =  3303 SHL 14;
const
  MC_OutputState_Filter_MC_MIOSB_OUT2      =  3304 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIOSB_OUT2      =  3305 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT2             =  3306 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT2_HOLD        =            1;
const
  MC_OutputState_MC_MIOSB_OUT2_LOW         =            2;
const
  MC_OutputState_MC_MIOSB_OUT2_HIGH        =            3;
const
  MC_OutputConfig_Filter_MC_MIOSB_OUT3     =  3307 SHL 14;
const
  MC___OutputId_MC_MIOSB_OUT3              =  3308 SHL 14;
const
  MC_OutputState_Filter_MC_MIOSB_OUT3      =  3309 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIOSB_OUT3      =  3310 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT3             =  3311 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT3_HOLD        =            1;
const
  MC_OutputState_MC_MIOSB_OUT3_LOW         =            2;
const
  MC_OutputState_MC_MIOSB_OUT3_HIGH        =            3;
const
  MC_OutputConfig_Filter_MC_MIOSB_OUT4     =  3312 SHL 14;
const
  MC___OutputId_MC_MIOSB_OUT4              =  3313 SHL 14;
const
  MC_OutputState_Filter_MC_MIOSB_OUT4      =  3314 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIOSB_OUT4      =  3315 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT4             =  3316 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT4_HOLD        =            1;
const
  MC_OutputState_MC_MIOSB_OUT4_LOW         =            2;
const
  MC_OutputState_MC_MIOSB_OUT4_HIGH        =            3;
const
  MC_OutputConfig_Filter_MC_MIOSB_OUT5     =  3317 SHL 14;
const
  MC___OutputId_MC_MIOSB_OUT5              =  3318 SHL 14;
const
  MC_OutputState_Filter_MC_MIOSB_OUT5      =  3319 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIOSB_OUT5      =  3320 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT5             =  3321 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT5_HOLD        =            1;
const
  MC_OutputState_MC_MIOSB_OUT5_LOW         =            2;
const
  MC_OutputState_MC_MIOSB_OUT5_HIGH        =            3;
const
  MC_OutputConfig_Filter_MC_MIOSB_OUT6     =  3322 SHL 14;
const
  MC___OutputId_MC_MIOSB_OUT6              =  3323 SHL 14;
const
  MC_OutputState_Filter_MC_MIOSB_OUT6      =  3324 SHL 14;
const
  MC_OutputStyle_Filter_MC_MIOSB_OUT6      =  3325 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT6             =  3326 SHL 14;
const
  MC_OutputState_MC_MIOSB_OUT6_HOLD        =            1;
const
  MC_OutputState_MC_MIOSB_OUT6_LOW         =            2;
const
  MC_OutputState_MC_MIOSB_OUT6_HIGH        =            3;
const
  MC_InputPinName_I5                       =           68;
const
  MC_InputPinName_I6                       =           69;
const
  MC_OutputPinName_O5                      =           76;
const
  MC_OutputPinName_O6                      =           77;
const
  MC_FLT                                   =  3327 SHL 14;
const
  MC_FLT_OFF                               =            1;
const
  MC_FLT_ON                                =            2;
const
  MC__DigitizersMask                       =  3328 SHL 14;
const
  MC_IDP_CFG                               =  3329 SHL 14;
const
  MC_TRM                                   =  3330 SHL 14;
const
  MC_TRM_OFF                               =            1;
const
  MC_TRM_ON                                =            2;
const
  MC__VideoLanesMask                       =  3331 SHL 14;
const
  MC_IDP_TRM                               =  3332 SHL 14;
const
  MC_BufferSize                            =  3333 SHL 14;
const
  MC_MinBufferSize                         =  3334 SHL 14;
const
  MC_MinBufferPitch                        =  3335 SHL 14;
const
  MC_BufferPitch                           =  3336 SHL 14;
const
  MC__ScaleFactor                          =  3337 SHL 14;
const
  MC_GainTrim1_Filter                      =  3338 SHL 14;
const
  MC_GainTrim2_Filter                      =  3339 SHL 14;
const
  MC_GainTrim3_Filter                      =  3340 SHL 14;
const
  MC_OffsetTrim1_Filter                    =  3341 SHL 14;
const
  MC_OffsetTrim2_Filter                    =  3342 SHL 14;
const
  MC_OffsetTrim3_Filter                    =  3343 SHL 14;
const
  MC_ConnectorName_DIGITAL_IO              =           18;
const
  MC_ConnectorName_DB9                     =           19;
const
  MC_Scaling                               =  3344 SHL 14;
const
  MC_Scaling_ENABLE                        =            1;
const
  MC_Scaling_DISABLE                       =            2;
const
  MC_Camera_CV_M9CL                        =          166;
const
  MC_CamConfig_P30RG_O                     =          233;
const
  MC_Camera_XC_HR57                        =          167;
const
  MC_Camera_XC_HR58                        =          168;
const
  MC_Camera_VCC_8350CL                     =          169;
const
  MC_Camera_VCC_8550CL                     =          170;
const
  MC_Camera_VCC_8750CL                     =          171;
const
  MC_Camera_VCC_8850CL                     =          172;
const
  MC_Camera_1600c                          =          173;
const
  MC_CamConfig_P12SC                       =          234;
const
  MC_CamConfig_P12RG                       =          235;
const
  MC_CamConfig_P30RC                       =          236;
const
  MC_CamConfig_P16RC                       =          237;
const
  MC_CamConfig_P12RC                       =          238;
const
  MC_Camera_1600c_S                        =          174;
const
  MC_Camera_1600c_D                        =          175;
const
  MC_Camera_1600c_S_RGB                    =          176;
const
  MC_Camera_1600c_D_RGB                    =          177;
const
  MC_CamConfig_P17SC                       =          239;
const
  MC_CamConfig_P17RG                       =          240;
const
  MC_CamConfig_P34SC                       =          241;
const
  MC_CamConfig_P34RG                       =          242;
const
  MC_TapStructure_HEX_B2                   =           20;
const
  MC_ChannelTopology_MEDIUM_2T24_1X2_1Y    =           16;
const
  MC__ASSY_SIX                             =            6;
const
  MC__UserScaleY                           =  3345 SHL 14;
const
  MC_InputConfig_Filter_MC_IN6             =  3346 SHL 14;
const
  MC___InputId_MC_IN6                      =  3347 SHL 14;
const
  MC_InputStyle_Filter_MC_IN6              =  3348 SHL 14;
const
  MC_InputConfig_Filter_MC_IN7             =  3349 SHL 14;
const
  MC___InputId_MC_IN7                      =  3350 SHL 14;
const
  MC_InputStyle_Filter_MC_IN7              =  3351 SHL 14;
const
  MC_InputConfig_Filter_MC_IN8             =  3352 SHL 14;
const
  MC___InputId_MC_IN8                      =  3353 SHL 14;
const
  MC_InputStyle_Filter_MC_IN8              =  3354 SHL 14;
const
  MC_InputConfig_Filter_MC_IN9             =  3355 SHL 14;
const
  MC___InputId_MC_IN9                      =  3356 SHL 14;
const
  MC_InputStyle_Filter_MC_IN9              =  3357 SHL 14;
const
  MC_InputConfig_Filter_MC_IN10            =  3358 SHL 14;
const
  MC___InputId_MC_IN10                     =  3359 SHL 14;
const
  MC_InputStyle_Filter_MC_IN10             =  3360 SHL 14;
const
  MC_InputConfig_Filter_MC_IN11            =  3361 SHL 14;
const
  MC___InputId_MC_IN11                     =  3362 SHL 14;
const
  MC_InputStyle_Filter_MC_IN11             =  3363 SHL 14;
const
  MC_InputConfig_Filter_MC_IN12            =  3364 SHL 14;
const
  MC___InputId_MC_IN12                     =  3365 SHL 14;
const
  MC_InputStyle_Filter_MC_IN12             =  3366 SHL 14;
const
  MC_InputConfig_Filter_MC_IN13            =  3367 SHL 14;
const
  MC___InputId_MC_IN13                     =  3368 SHL 14;
const
  MC_InputStyle_Filter_MC_IN13             =  3369 SHL 14;
const
  MC_ConnectorName_IO_LINES                =           20;
const
  MC_ConnectorName_IO_SCREW_TERMINAL       =           21;
const
  MC_Camera_1000m_D                        =          178;
const
  MC_Camera_1000m_S                        =          179;
const
  MC_Camera_1600m_D                        =          180;
const
  MC_Camera_1600m_S                        =          181;
const
  MC_Camera_2000m_D                        =          182;
const
  MC_Camera_2000m_S                        =          183;
const
  MC_Camera_4000m_D                        =          184;
const
  MC_Camera_4000m_S                        =          185;
const
  MC_ConnectorName_CTL                     =           22;
const
  MC_RCable_A15_C20                        =           21;
const
  MC_Cable_A15_C20                         =          146;
const
  MC_CableName_Single_Channel_Teli_Remote_Head =           91;
const
  MC__Board_Type__MELODY                   =            6;
const
  MC__BoardType__MELODY                    =           22;
const
  MC_BoardTopology_1                       =           33;
const
  MC_CamConfig_P17SD                       =          243;
const
  MC_CamConfig_P17RD_G                     =          244;
const
  MC_CamConfig_P17RD                       =          245;
const
  MC_ColorFormat_YV12                      =           58;
const
  MC_HSamplePeriod                         =  3370 SHL 14;
const
  MC_VSamplePeriod                         =  3371 SHL 14;
const
  MC_Camera_NSUF7400CL                     =          186;
const
  MC_CamConfig_L12500RP                    =          246;
const
  MC_ConverterMute                         =  3372 SHL 14;
const
  MC_ConverterMute_OFF                     =            1;
const
  MC_ConverterMute_ON                      =            2;
const
  MC__CPG_PGMOD_PM_CONTROLLED_LR           =            4;
const
  MC_ColorFormat_YVU9                      =           59;
const
  MC_ComponentSwap                         =  3373 SHL 14;
const
  MC_Camera_SU51                           =          187;
const
  MC_Camera_SU74                           =          188;
const
  MC_CamConfig_L7400RP                     =          247;
const
  MC_CamConfig_L5150SP                     =          248;
const
  MC_CamConfig_L5150RP                     =          249;
const
  MC_CamConfig_L7400SP                     =          250;
const
  MC_ColorFormat_YUV9                      =           60;
const
  MC_ColorFormat_YUV422PL                  =           61;
const
  MC_ColorFormat_YUV411PL                  =           62;
const
  MC_ColorFormat_IYUV                      =           63;
const
  MC_ColorFormat_I420                      =           64;
const
  MC_ColorFormat_Y42B                      =           65;
const
  MC_ColorFormat_Y41B                      =           66;
const
  MC_Camera_KP_F200CL                      =          189;
const
  MC_OnMinSpeed                            =  3374 SHL 14;
const
  MC_OnMinSpeed_IDLING                     =            1;
const
  MC_OnMinSpeed_MUTING                     =            2;
const
  MC_ColorFormat_YUV411                    =           67;
const
  MC_FrameRate_Hz                          =  3375 SHL 14;
const
  MC_PhaseTrigMode                         =  3376 SHL 14;
const
  MC_PhaseTrigMode_IMMEDIATE               =            1;
const
  MC_PhaseTrigMode_HARD                    =            2;
const
  MC_PhaseTrigMode_SOFT                    =            3;
const
  MC_PhaseTrigMode_COMBINED                =            4;
const
  MC_PhaseTrigMode_TIMER                   =            5;
const
  MC_TimerPeriodFl_ms                      =  3377 SHL 14;
const
  MC_TimerPeriod_ms                        =  3378 SHL 14;
const
  MC_StandardFrameRate_Hz                  =  3379 SHL 14;
const
  MC__FrameRate_Hz                         =  3380 SHL 14;
const
  MC__ImageWidth                           =  3381 SHL 14;
const
  MC__FifoWidth                            =  3382 SHL 14;
const
  MC__EndOfLineWidth                       =  3383 SHL 14;
const
  MC__ConvolverOutputSize                  =  3384 SHL 14;
const
  MC_TimerPeriodFl_us                      =  3385 SHL 14;
const
  MC_TimerPeriod_us                        =  3386 SHL 14;
const
  MC_SeqTrigMode                           =  3387 SHL 14;
const
  MC_SeqTrigMode_IMMEDIATE                 =            1;
const
  MC_SeqTrigMode_HARD                      =            2;
const
  MC_SeqTrigMode_SOFT                      =            3;
const
  MC_SeqTrigMode_COMBINED                  =            4;
const
  MC_ControlledFrameRate                   =  3388 SHL 14;
const
  MC_ControlledFrameRate_YES               =            1;
const
  MC_ControlledFrameRate_NO                =            2;
const
  MC_SeqCount                              =  3389 SHL 14;
const
  MC__NextTrigMode                         =  3390 SHL 14;
const
  MC__NextTrigMode_IMMEDIATE               =            1;
const
  MC__NextTrigMode_HARD                    =            2;
const
  MC__NextTrigMode_SOFT                    =            3;
const
  MC__NextTrigMode_COMBINED                =            4;
const
  MC_EndTrigEdge_HIGH                      =            3;
const
  MC_EndTrigEdge_LOW                       =            4;
const
  MC__DRS_CACQ_FRAME                       =            3;
const
  MC__TrigLineSupported                    =  3391 SHL 14;
const
  MC__TrigLineSupported_YES                =            1;
const
  MC__TrigLineSupported_NO                 =            2;
const
  MC_Camera_2000c_D                        =          190;
const
  MC_TransferInfoLocation                  =  3392 SHL 14;
const
  MC_TransferInfoLocation_LOCAL            =            1;
const
  MC_TransferInfoLocation_HOST             =            2;
const
  MC__CDC_TPGTAP1                          =  3393 SHL 14;
const
  MC__CDC_TPGTAP2                          =  3394 SHL 14;
const
  MC__CDC_TPGTAP3                          =  3395 SHL 14;
const
  MC__Board_Type__DELTA                    =            7;
const
  MC__BoardType__DELTA                     =           23;
const
  MC_GrabberConfig_1_0_1_0                 =           93;
const
  MC_GrabberConfig_0_1_0_1                 =           94;
const
  MC_Connector_X1                          =          119;
const
  MC_Connector_X2                          =          120;
const
  MC_Connector_Y1                          =          121;
const
  MC_Connector_Y2                          =          122;
const
  MC_NextGrabberConfig_1_0_1_0             =           90;
const
  MC_NextGrabberConfig_0_1_0_1             =           91;
const
  MC_ConnectorName_CAMX1                   =           23;
const
  MC_ConnectorName_CAMX2                   =           24;
const
  MC_ConnectorName_CAMY1                   =           25;
const
  MC_ConnectorName_CAMY2                   =           26;
const
  MC_BoardTopology_1_3                     =           34;
const
  MC_BoardTopology_3_1                     =           35;
const
  MC__Category_Synchronization             =           33;
const
  MC__Category_Acquisition_control         =           34;
const
  MC_AcquisitionMode                       =  3396 SHL 14;
const
  MC_AcquisitionMode_SNAPSHOT              =            1;
const
  MC_AcquisitionMode_HFR                   =            2;
const
  MC_AcquisitionMode_PAGE                  =            3;
const
  MC_AcquisitionMode_WEB                   =            4;
const
  MC_AcquisitionMode_LONGPAGE              =            5;
const
  MC_AcquisitionMode_Filter                =  3397 SHL 14;
const
  MC_ActivityLength_Sq                     =  3398 SHL 14;
const
  MC_SeqLength_Ph                          =  3399 SHL 14;
const
  MC_SeqLength_Sl                          =  3400 SHL 14;
const
  MC_SeqLength_Ln                          =  3401 SHL 14;
const
  MC_PhaseLength_Sl                        =  3402 SHL 14;
const
  MC_Operation_UNUSED                      =            9;
const
  MC__WFC_ACQCNT                           =  3403 SHL 14;
const
  MC__WSC_TotalFrameCount                  =  3404 SHL 14;
const
  MC_PageLength_LowLimit_Ln                =  3405 SHL 14;
const
  MC_ActivityLength                        =  3406 SHL 14;
const
  MC_SeqLength_Fr                          =  3407 SHL 14;
const
  MC_SeqLength_Pg                          =  3408 SHL 14;
const
  MC_PhaseLength_Fr                        =  3409 SHL 14;
const
  MC_SIMSTARTCHSet                         =  3410 SHL 14;
const
  MC_Dummy                                 =  3411 SHL 14;
const
  MC_PhaseLength_Optimal_Fr                =  3412 SHL 14;
const
  MC_PhaseLength_Minimal_Fr                =  3413 SHL 14;
const
  MC_PageLength_Optimal_Ln                 =  3414 SHL 14;
const
  MC_PageLength_Minimal_Ln                 =  3415 SHL 14;
const
  MC_KST                                   =  3416 SHL 14;
const
  MC_KST_PREDEFINED                        =            1;
const
  MC_KST_CUSTOM                            =            2;
const
  MC_KST_FROMFILE                          =            3;
const
  MC_SHP                                   =  3417 SHL 14;
const
  MC_SHP_LOWPASS                           =            1;
const
  MC_SHP_COLORTRAP                         =            2;
const
  MC_SHP_PASSBAND                          =            3;
const
  MC_SHP_PEAKING                           =            4;
const
  MC_SHP_PEAKTRAP                          =            5;
const
  MC_PhaseLength_Pg                        =  3418 SHL 14;
const
  MC_KASR                                  =  3419 SHL 14;
const
  MC_KDN                                   =  3420 SHL 14;
const
  MC_BWF                                   =  3421 SHL 14;
const
  MC_CBF                                   =  3422 SHL 14;
const
  MC_PWF                                   =  3423 SHL 14;
const
  MC_CFF                                   =  3424 SHL 14;
const
  MC_CWF                                   =  3425 SHL 14;
const
  MC_SSN                                   =  3426 SHL 14;
const
  MC_EndTrigMode_Filter                    =  3427 SHL 14;
const
  MC_BreakEffect_Filter                    =  3428 SHL 14;
const
  MC_HMode                                 =  3429 SHL 14;
const
  MC_HMode_ANALOG_LANE1                    =            1;
const
  MC_HMode_DIGITAL_PULSED                  =            2;
const
  MC_HMode_DIGITAL_MIXED                   =            3;
const
  MC_HMode_LOCAL                           =            4;
const
  MC_VMode                                 =  3430 SHL 14;
const
  MC_VMode_ANALOG_LANE1                    =            1;
const
  MC_VMode_DIGITAL_PULSED                  =            2;
const
  MC_VMode_DIGITAL_MIXED                   =            3;
const
  MC_VMode_LOCAL                           =            4;
const
  MC_HReference                            =  3431 SHL 14;
const
  MC_HReference_CAMERA                     =            1;
const
  MC_HReference_LOCAL                      =            2;
const
  MC_HReference_REMOTE                     =            3;
const
  MC_VReference                            =  3432 SHL 14;
const
  MC_VReference_CAMERA                     =            1;
const
  MC_VReference_LOCAL                      =            2;
const
  MC_VReference_REMOTE                     =            3;
const
  MC_KernelAddress                         =  3433 SHL 14;
const
  MC_KernelNB                              =  3434 SHL 14;
const
  MC___HFR_Check                           =  3435 SHL 14;
const
  MC___HFR_Check_PASS                      =            1;
const
  MC___HFR_Check_FAIL                      =            2;
const
  MC___HFR_BoardCheck                      =  3436 SHL 14;
const
  MC___HFR_BoardCheck_PASS                 =            1;
const
  MC___HFR_BoardCheck_FAIL                 =            2;
const
  MC_AcquisitionMode_INVALID               =            6;
const
  MC___FilteredParams_Check                =  3437 SHL 14;
const
  MC___FilteredParams_Check_PASS           =            1;
const
  MC___FilteredParams_Check_FAIL           =            2;
const
  MC_LogFilePath                           =  3438 SHL 14;
const
  MC__AutomaticParamsCheck                 =  3439 SHL 14;
const
  MC__AutomaticParamsCheck_YES             =            1;
const
  MC__AutomaticParamsCheck_NO              =            2;
const
  MC__FilteredParams_Check                 =  3440 SHL 14;
const
  MC__FilteredParams_Check_PASS            =            1;
const
  MC__FilteredParams_Check_FAIL            =            2;
const
  MC_ParamsConsistency                     =  3441 SHL 14;
const
  MC_ParamsConsistency_PASS                =            1;
const
  MC_ParamsConsistency_FAIL                =            2;
const
  MC_ParamsErrorLog                        =  3442 SHL 14;
const
  MC_ParamsConsistencyCheck                =  3443 SHL 14;
const
  MC_ParamsConsistencyCheck_AUTO           =            1;
const
  MC_ParamsConsistencyCheck_MANUAL         =            2;
const
  MC_TargetFrameRate_Hz                    =  3444 SHL 14;
const
  MC_AcquisitionMode_VIDEO                 =            7;
const
  MC_NextTrigMode_PERIODIC                 =            9;
const
  MC_TrigLineIndex                         =  3445 SHL 14;
const
  MC_EndTrigLineIndex                      =  3446 SHL 14;
const
  MC_EndTrigCtl                            =  3447 SHL 14;
const
  MC_EndTrigCtl_TTL                        =            1;
const
  MC__BCC_Value                            =  3448 SHL 14;
const
  MC__BCC_Value_PASS                       =            1;
const
  MC__BCC_Value_FAIL                       =            2;
const
  MC__BCC_Expert                           =  3449 SHL 14;
const
  MC__BCC_Expert_PASS                      =            1;
const
  MC__BCC_Expert_FAIL                      =            2;
const
  MC__BCC_Expert2                          =  3450 SHL 14;
const
  MC__BCC_Expert2_PASS                     =            1;
const
  MC__BCC_Expert2_FAIL                     =            2;
const
  MC__BCC_ColorScan                        =  3451 SHL 14;
const
  MC__BCC_ColorScan_PASS                   =            1;
const
  MC__BCC_ColorScan_FAIL                   =            2;
const
  MC_PerSecond_Fr                          =  3452 SHL 14;
const
  MC_Camera_XCLmV500                       =          191;
const
  MC_Camera_XCLmX700                       =          192;
const
  MC_Camera_XCLmU1000                      =          193;
const
  MC_Camera_XCLmU1000C                     =          194;
const
  MC_CableName_CameraLink_Miniature        =           92;
const
  MC_Camera_XCL_V500                       =          195;
const
  MC_Camera_XCL_X700                       =          196;
const
  MC_Camera_XCL_U1000                      =          197;
const
  MC_Camera_XCL_U1000C                     =          198;
const
  MC_Cable_CL_C04                          =          147;
const
  MC_Elapsed_Fr                            =  3453 SHL 14;
const
  MC_Remaining_Fr                          =  3454 SHL 14;
const
  MC_Elapsed_Pg                            =  3455 SHL 14;
const
  MC_Elapsed_Ln                            =  3456 SHL 14;
const
  MC_Remaining_Pg                          =  3457 SHL 14;
const
  MC_Remaining_Ln                          =  3458 SHL 14;
const
  MC_Camera_CS8550i_01                     =          199;
const
  MC_Camera_CS8550i                        =          200;
const
  MC_Camera_KP_F30                         =          201;
const
  MC_Camera_KP_F30x                        =          202;
const
  MC_CamConfig_P70RA                       =          251;
const
  MC_CamConfig_P70RM                       =          252;
const
  MC_CamConfig_P70SA                       =          253;
const
  MC_CamConfig_P70SM                       =          254;
const
  MC_TrigCtl_DIFF                          =            7;
const
  MC_StrobeCtl_DIFF                        =            6;
const
  MC_MDMPEnable                            =  3459 SHL 14;
const
  MC_MDMPEnable_TRUE                       =            1;
const
  MC_MDMPEnable_FALSE                      =            2;
const
  MC__Category_D3_Signal_Properties        =           35;
const
  MC__Category_D3_Kernel_Properties        =           36;
const
  MC__Category_D3_Configuration            =           37;
const
  MC__Category_D3_Resampler                =           38;
const
  MC__Category_D3_Resampling               =           39;
const
  MC__BoardType__SYMPHONY                  =           24;
const
  MC_STARTCHSet                            =  3460 SHL 14;
const
  MC_InputPinName_ENHANCED_IO1             =           70;
const
  MC_InputPinName_ENHANCED_IO2             =           71;
const
  MC_InputPinName_ENHANCED_IO3             =           72;
const
  MC_InputPinName_ENHANCED_IO4             =           73;
const
  MC_InputPinName_TR                       =           74;
const
  MC_InputPinName_CC1                      =           75;
const
  MC_InputPinName_CC2                      =           76;
const
  MC_InputPinName_CC3                      =           77;
const
  MC_InputPinName_CC4                      =           78;
const
  MC_InputPinName_CC5                      =           79;
const
  MC_InputPinLocked                        =  3461 SHL 14;
const
  MC_InputPinLocked_TRUE                   =            1;
const
  MC_InputPinLocked_FALSE                  =            2;
const
  MC_OutputState_LOOP1                     =           11;
const
  MC_OutputState_LOOP2                     =           12;
const
  MC_OutputPinName_Enhanced_IO1            =           78;
const
  MC_OutputPinName_Enhanced_IO2            =           79;
const
  MC_OutputPinName_Enhanced_IO3            =           80;
const
  MC_OutputPinName_Enhanced_IO4            =           81;
const
  MC_OutputPinName_ST                      =           82;
const
  MC_OutputPinName_CC5                     =           83;
const
  MC_OutputState_17_LOOP1                  =            4;
const
  MC_OutputState_17_LOOP2                  =            5;
const
  MC_OutputState_18_LOOP1                  =            4;
const
  MC_OutputState_18_LOOP2                  =            5;
const
  MC_OutputState_1_LOOP1                   =            6;
const
  MC_OutputState_1_LOOP2                   =            7;
const
  MC_OutputState_2_LOOP1                   =            4;
const
  MC_OutputState_2_LOOP2                   =            5;
const
  MC_OutputState_3_LOOP1                   =            4;
const
  MC_OutputState_3_LOOP2                   =            5;
const
  MC_OutputState_4_LOOP1                   =            4;
const
  MC_OutputState_4_LOOP2                   =            5;
const
  MC_OutputState_22_LOOP1                  =            4;
const
  MC_OutputState_22_LOOP2                  =            5;
const
  MC_OutputState_23_LOOP1                  =            4;
const
  MC_OutputState_23_LOOP2                  =            5;
const
  MC_OutputState_24_LOOP1                  =            4;
const
  MC_OutputState_24_LOOP2                  =            5;
const
  MC_OutputState_25_LOOP1                  =            4;
const
  MC_OutputState_25_LOOP2                  =            5;
const
  MC_OutputState_26_LOOP1                  =            4;
const
  MC_OutputState_26_LOOP2                  =            5;
const
  MC_OutputState_32_LOOP1                  =            4;
const
  MC_OutputState_32_LOOP2                  =            5;
const
  MC_OutputState_33_LOOP1                  =            4;
const
  MC_OutputState_33_LOOP2                  =            5;
const
  MC_OutputState_34_LOOP1                  =            4;
const
  MC_OutputState_34_LOOP2                  =            5;
const
  MC_OutputState_35_LOOP1                  =            4;
const
  MC_OutputState_35_LOOP2                  =            5;
const
  MC_OutputState_36_LOOP1                  =            4;
const
  MC_OutputState_36_LOOP2                  =            5;
const
  MC_OutputStyle_DIFF                      =            9;
const
  MC_MDMPDec                               =  3462 SHL 14;
const
  MC_MDMPOffset                            =  3463 SHL 14;
const
  MC_HdriveLine_CC1                        =            8;
const
  MC_HdriveLine_CC2                        =            9;
const
  MC_HdriveLine_CC3                        =           10;
const
  MC_HdriveLine_CC4                        =           11;
const
  MC_HdriveLine_CC5                        =           12;
const
  MC_VdriveLine_CC1                        =            8;
const
  MC_VdriveLine_CC2                        =            9;
const
  MC_VdriveLine_CC3                        =           10;
const
  MC_VdriveLine_CC4                        =           11;
const
  MC_VdriveLine_CC5                        =           12;
const
  MC_ResetLine_CC5                         =           12;
const
  MC_AuxResetLine_CC5                      =           12;
const
  MC_HsyncLine_CC1                         =            8;
const
  MC_HsyncLine_CC2                         =            9;
const
  MC_HsyncLine_CC3                         =           10;
const
  MC_HsyncLine_CC4                         =           11;
const
  MC_HsyncLine_CC5                         =           12;
const
  MC_VsyncLine_CC1                         =            8;
const
  MC_VsyncLine_CC2                         =            9;
const
  MC_VsyncLine_CC3                         =           10;
const
  MC_VsyncLine_CC4                         =           11;
const
  MC_VsyncLine_CC5                         =           12;
const
  MC_CsyncLine                             =  3464 SHL 14;
const
  MC_CsyncLine_NC                          =            1;
const
  MC_CsyncLine_CC1                         =            2;
const
  MC_CsyncLine_CC2                         =            3;
const
  MC_CsyncLine_CC3                         =            4;
const
  MC_CsyncLine_CC4                         =            5;
const
  MC_CsyncLine_CC5                         =            6;
const
  MC_GainG                                 =  3465 SHL 14;
const
  MC_GainR                                 =  3466 SHL 14;
const
  MC_GainB                                 =  3467 SHL 14;
const
  MC_OffsetG                               =  3468 SHL 14;
const
  MC_OffsetR                               =  3469 SHL 14;
const
  MC_OffsetB                               =  3470 SHL 14;
const
  MC_PinCC1_Usage                          =  3471 SHL 14;
const
  MC_PinCC1_Usage_NONE                     =            1;
const
  MC_PinCC1_Usage_INPUT                    =            2;
const
  MC_PinCC1_Usage_LOW                      =            3;
const
  MC_PinCC1_Usage_HIGH                     =            4;
const
  MC_PinCC1_Usage_VDRIVE                   =            5;
const
  MC_PinCC1_Usage_RESET                    =            6;
const
  MC_PinCC1_Usage_AUXRESET                 =            7;
const
  MC_PinCC1_Usage_HDRIVE                   =            8;
const
  MC_PinCC1_Dir                            =  3472 SHL 14;
const
  MC_PinCC1_Dir_INPUT                      =            1;
const
  MC_PinCC1_Dir_OUTPUT                     =            2;
const
  MC_PinCC1_PinCC2_STYLE                   =  3473 SHL 14;
const
  MC_PinCC1_PinCC2_STYLE_TTL               =            1;
const
  MC_PinCC1_PinCC2_STYLE_LVDS              =            2;
const
  MC_PinCC1_Source                         =  3474 SHL 14;
const
  MC_PinCC1_Source_LOW                     =            1;
const
  MC_PinCC1_Source_HIGH                    =            2;
const
  MC_PinCC1_Source_HDRIVE                  =            3;
const
  MC_PinCC1_Source_VDRIVE                  =            4;
const
  MC_PinCC1_Source_RESET                   =            5;
const
  MC_PinCC1_Source_AUXRESET                =            6;
const
  MC_PinCC1_Source_UNKNOWN                 =            7;
const
  MC_PinCC3_PinCC4_Style                   =  3475 SHL 14;
const
  MC_PinCC3_PinCC4_Style_TTL               =            1;
const
  MC_PinCC3_PinCC4_Style_LVDS              =            2;
const
  MC_PinCC2_Dir                            =  3476 SHL 14;
const
  MC_PinCC2_Dir_INPUT                      =            1;
const
  MC_PinCC2_Dir_OUTPUT                     =            2;
const
  MC_PinCC2_Source                         =  3477 SHL 14;
const
  MC_PinCC2_Source_LOW                     =            1;
const
  MC_PinCC2_Source_HIGH                    =            2;
const
  MC_PinCC2_Source_HDRIVE                  =            3;
const
  MC_PinCC2_Source_VDRIVE                  =            4;
const
  MC_PinCC2_Source_RESET                   =            5;
const
  MC_PinCC2_Source_AUXRESET                =            6;
const
  MC_PinCC2_Source_UNKNOWN                 =            7;
const
  MC_PinCC3_Dir                            =  3478 SHL 14;
const
  MC_PinCC3_Dir_INPUT                      =            1;
const
  MC_PinCC3_Dir_OUTPUT                     =            2;
const
  MC_PinCC3_Source                         =  3479 SHL 14;
const
  MC_PinCC3_Source_LOW                     =            1;
const
  MC_PinCC3_Source_HIGH                    =            2;
const
  MC_PinCC3_Source_HDRIVE                  =            3;
const
  MC_PinCC3_Source_VDRIVE                  =            4;
const
  MC_PinCC3_Source_RESET                   =            5;
const
  MC_PinCC3_Source_AUXRESET                =            6;
const
  MC_PinCC3_Source_UNKNOWN                 =            7;
const
  MC_PinCC4_Dir                            =  3480 SHL 14;
const
  MC_PinCC4_Dir_INPUT                      =            1;
const
  MC_PinCC4_Dir_OUTPUT                     =            2;
const
  MC_PinCC4_Source                         =  3481 SHL 14;
const
  MC_PinCC4_Source_LOW                     =            1;
const
  MC_PinCC4_Source_HIGH                    =            2;
const
  MC_PinCC4_Source_HDRIVE                  =            3;
const
  MC_PinCC4_Source_VDRIVE                  =            4;
const
  MC_PinCC4_Source_RESET                   =            5;
const
  MC_PinCC4_Source_AUXRESET                =            6;
const
  MC_PinCC4_Source_UNKNOWN                 =            7;
const
  MC_PinCC5_Dir                            =  3482 SHL 14;
const
  MC_PinCC5_Dir_INPUT                      =            1;
const
  MC_PinCC5_Dir_OUTPUT                     =            2;
const
  MC_PinCC5_Source                         =  3483 SHL 14;
const
  MC_PinCC5_Source_LOW                     =            1;
const
  MC_PinCC5_Source_HIGH                    =            2;
const
  MC_PinCC5_Source_HDRIVE                  =            3;
const
  MC_PinCC5_Source_VDRIVE                  =            4;
const
  MC_PinCC5_Source_RESET                   =            5;
const
  MC_PinCC5_Source_AUXRESET                =            6;
const
  MC_PinCC5_Source_UNKNOWN                 =            7;
const
  MC_PinSMIO1_Dir                          =  3484 SHL 14;
const
  MC_PinSMIO1_Dir_INPUT                    =            1;
const
  MC_PinSMIO1_Dir_OUTPUT                   =            2;
const
  MC_PinSMIO1_Dir_UNKNOWN                  =            3;
const
  MC_PinSMIO1_Source                       =  3485 SHL 14;
const
  MC_PinSMIO1_Source_LOW                   =            1;
const
  MC_PinSMIO1_Source_HIGH                  =            2;
const
  MC_PinSMIO1_Source_STROBE                =            3;
const
  MC_PinSMIO1_Source_UNKNOWN               =            4;
const
  MC_PinSMIO2_Dir                          =  3486 SHL 14;
const
  MC_PinSMIO2_Dir_INPUT                    =            1;
const
  MC_PinSMIO2_Dir_OUTPUT                   =            2;
const
  MC_PinSMIO2_Dir_UNKNOWN                  =            3;
const
  MC_PinSMIO2_Source                       =  3487 SHL 14;
const
  MC_PinSMIO2_Source_LOW                   =            1;
const
  MC_PinSMIO2_Source_HIGH                  =            2;
const
  MC_PinSMIO2_Source_STROBE                =            3;
const
  MC_PinSMIO2_Source_UNKNOWN               =            4;
const
  MC_PinSTR_Source                         =  3488 SHL 14;
const
  MC_PinSTR_Source_LOW                     =            1;
const
  MC_PinSTR_Source_HIGH                    =            2;
const
  MC_PinSTR_Source_STROBE                  =            3;
const
  MC_PinSTR_Source_UNKNOWN                 =            4;
const
  MC_TrigLine_IO1                          =           14;
const
  MC_TrigLine_IO2                          =           15;
const
  MC_TrigLine_IO3                          =           16;
const
  MC_TrigLine_IO4                          =           17;
const
  MC__TrigLine_IO1                         =           24;
const
  MC__TrigLine_IO2                         =           25;
const
  MC__TrigLine_IO3                         =           26;
const
  MC__TrigLine_IO4                         =           27;
const
  MC_StrobeLine_IO1                        =            8;
const
  MC_StrobeLine_IO2                        =            9;
const
  MC_StrobeLine_IO3                        =           10;
const
  MC_StrobeLine_IO4                        =           11;
const
  MC_StrobeLine_STX                        =           12;
const
  MC_StrobeLine_STY                        =           13;
const
  MC__StrobeLine_IO1                       =           10;
const
  MC__StrobeLine_IO2                       =           11;
const
  MC__StrobeLine_IO3                       =           12;
const
  MC__StrobeLine_IO4                       =           13;
const
  MC_PinSMIO3_Dir                          =  3489 SHL 14;
const
  MC_PinSMIO3_Dir_INPUT                    =            1;
const
  MC_PinSMIO3_Dir_OUTPUT                   =            2;
const
  MC_PinSMIO3_Dir_UNKNOWN                  =            3;
const
  MC_PinSMIO3_Source                       =  3490 SHL 14;
const
  MC_PinSMIO3_Source_LOW                   =            1;
const
  MC_PinSMIO3_Source_HIGH                  =            2;
const
  MC_PinSMIO3_Source_STROBE                =            3;
const
  MC_PinSMIO3_Source_UNKNOWN               =            4;
const
  MC_PinSMIO4_Dir                          =  3491 SHL 14;
const
  MC_PinSMIO4_Dir_INPUT                    =            1;
const
  MC_PinSMIO4_Dir_OUTPUT                   =            2;
const
  MC_PinSMIO4_Dir_UNKNOWN                  =            3;
const
  MC_PinSMIO4_Source                       =  3492 SHL 14;
const
  MC_PinSMIO4_Source_LOW                   =            1;
const
  MC_PinSMIO4_Source_HIGH                  =            2;
const
  MC_PinSMIO4_Source_STROBE                =            3;
const
  MC_PinSMIO4_Source_UNKNOWN               =            4;
const
  MC_PinSTX_Source                         =  3493 SHL 14;
const
  MC_PinSTX_Source_LOW                     =            1;
const
  MC_PinSTX_Source_HIGH                    =            2;
const
  MC_PinSTX_Source_STROBE                  =            3;
const
  MC_PinSTX_Source_UNKNOWN                 =            4;
const
  MC_PinSTY_Source                         =  3494 SHL 14;
const
  MC_PinSTY_Source_LOW                     =            1;
const
  MC_PinSTY_Source_HIGH                    =            2;
const
  MC_PinSTY_Source_STROBE                  =            3;
const
  MC_PinSTY_Source_UNKNOWN                 =            4;
const
  MC_TrigCtl_LVDS                          =            8;
const
  MC_StrobeCtl_OPTO                        =            7;
const
  MC_TrigLine_TR                           =           18;
const
  MC_StrobeLine_ST                         =           14;
const
  MC_OutputStyle_OPTO                      =           10;
const
  MC_HsyncCtl_LVDS                         =            5;
const
  MC_VsyncCtl_LVDS                         =            5;
const
  MC_TDScale_100ns                         =  3495 SHL 14;
const
  MC_TrigDelay_TDSCL                       =  3496 SHL 14;
const
  MC_TrigDelay_TDScale                     =  3497 SHL 14;
const
  MC__EScale_100ns                         =  3498 SHL 14;
const
  MC__Expose_E                             =  3499 SHL 14;
const
  MC__PostExpose_E                         =  3500 SHL 14;
const
  MC__RESETOn_E                            =  3501 SHL 14;
const
  MC__RESETOff_E                           =  3502 SHL 14;
const
  MC__OpenVsyncGate_E                      =  3503 SHL 14;
const
  MC__SScale_100ns                         =  3504 SHL 14;
const
  MC_EXPOn2STROBEOff_E                     =  3505 SHL 14;
const
  MC__PreStrobe_E                          =  3506 SHL 14;
const
  MC__PREEXP_us                            =  3507 SHL 14;
const
  MC__EXP_us                               =  3508 SHL 14;
const
  MC__POSTEXP_us                           =  3509 SHL 14;
const
  MC__PREEXP_E                             =  3510 SHL 14;
const
  MC__EXP_E                                =  3511 SHL 14;
const
  MC__POSTEXP_E                            =  3512 SHL 14;
const
  MC__SSpan_us                             =  3513 SHL 14;
const
  MC__EXP_S                                =  3514 SHL 14;
const
  MC__PreStrobe_S                          =  3515 SHL 14;
const
  MC__STR_S                                =  3516 SHL 14;
const
  MC_EXPOn2STROBEOff_S                     =  3517 SHL 14;
const
  MC_EXPOn2STROff_S                        =  3518 SHL 14;
const
  MC__EXPOn2STROff_S                       =  3519 SHL 14;
const
  MC__STPOS_DSB                            =  3520 SHL 14;
const
  MC__STPOS_ASB                            =  3521 SHL 14;
const
  MC__STPOS_SLO                            =  3522 SHL 14;
const
  MC__STPOS_End                            =  3523 SHL 14;
const
  MC__ETPOS_AuxResetOn                     =  3524 SHL 14;
const
  MC__ETPOS_AuxResetOff                    =  3525 SHL 14;
const
  MC__ETPOS_ResetOn                        =  3526 SHL 14;
const
  MC__ETPOS_ResetOff                       =  3527 SHL 14;
const
  MC__ETPOS_OpenVsyncGate                  =  3528 SHL 14;
const
  MC__ETPOS_CloseVsyncGate                 =  3529 SHL 14;
const
  MC__ETPOS_End                            =  3530 SHL 14;
const
  MC_Readout_us                            =  3531 SHL 14;
const
  MC__RDO_us                               =  3532 SHL 14;
const
  MC__RSpan_us                             =  3533 SHL 14;
const
  MC__RScale_100ns                         =  3534 SHL 14;
const
  MC__RDO_E                                =  3535 SHL 14;
const
  MC__RTPOS_SR                             =  3536 SHL 14;
const
  MC__RTPOS_NSLA                           =  3537 SHL 14;
const
  MC__RTPOS_End                            =  3538 SHL 14;
const
  MC__Category_Readout_Control             =           40;
const
  MC__TrueExp_100ns                        =  3539 SHL 14;
const
  MC__ExposeTrimFactor                     =  3540 SHL 14;
const
  MC__PREEXP_100ns                         =  3541 SHL 14;
const
  MC__EXP_100ns                            =  3542 SHL 14;
const
  MC__POSTEXP_100ns                        =  3543 SHL 14;
const
  MC__ESpan_100ns                          =  3544 SHL 14;
const
  MC_Readout_100ns                         =  3545 SHL 14;
const
  MC__RDO_100ns                            =  3546 SHL 14;
const
  MC__RSpan_100s                           =  3547 SHL 14;
const
  MC__SSpan_100ns                          =  3548 SHL 14;
const
  MC__RSpan_100ns                          =  3549 SHL 14;
const
  MC_TDTScale_100ns                        =  3550 SHL 14;
const
  MC__ETSpan_100ns                         =  3551 SHL 14;
const
  MC__ETScale_100ns                        =  3552 SHL 14;
const
  MC__RTSpan_100ns                         =  3553 SHL 14;
const
  MC__RTScale_100ns                        =  3554 SHL 14;
const
  MC__STSpan_100ns                         =  3555 SHL 14;
const
  MC__STScale_100ns                        =  3556 SHL 14;
const
  MC_TrigDelay_T                           =  3557 SHL 14;
const
  MC__ETPOS_EndExpose                      =  3558 SHL 14;
const
  MC_HCsyncToClamp_ns                      =  3559 SHL 14;
const
  MC_ClampDur_ns                           =  3560 SHL 14;
const
  MC_SyncPattern                           =  3561 SHL 14;
const
  MC_SyncPattern_PALSYNC                   =            1;
const
  MC_SyncPattern_NTSCSYNC                  =            2;
const
  MC_SyncPattern_PALEVEN                   =            3;
const
  MC_SyncPattern_PALODD                    =            4;
const
  MC_SyncPattern_NTSCEVEN                  =            5;
const
  MC_SyncPattern_NTSCODD                   =            6;
const
  MC_VideoFilter_Filter                    =  3562 SHL 14;
const
  MC_VrefSearchWindowLeft_IT               =  3563 SHL 14;
const
  MC_VrefSearchWindowRight_IT              =  3564 SHL 14;
const
  MC_Vsync2Vref_IT                         =  3565 SHL 14;
const
  MC_VrefSearchWindowLeft_TT               =  3566 SHL 14;
const
  MC_VrefSearchWindowRight_TT              =  3567 SHL 14;
const
  MC_Vsync2Vref_TT                         =  3568 SHL 14;
const
  MC_VideoFilter_COLORTRAP                 =            6;
const
  MC_VsyncLNB                              =  3569 SHL 14;
const
  MC_Expose_Filter                         =  3570 SHL 14;
const
  MC_Readout_Filter                        =  3571 SHL 14;
const
  MC__RDO_R                                =  3572 SHL 14;
const
  MC__RTSS                                 =  3573 SHL 14;
const
  MC__RTSS_OpenVsyncGate                   =            1;
const
  MC__RTSS_GatedVsync                      =            2;
const
  MC__VsyncFilter                          =  3574 SHL 14;
const
  MC__VsyncFilter_OFF                      =            1;
const
  MC__VsyncFilter_ON                       =            2;
const
  MC__VsyncFilter_MEDIUM                   =            3;
const
  MC__VsyncFilter_STRONG                   =            4;
const
  MC__PREEXP_S                             =  3575 SHL 14;
const
  MC__TrigDelay_S                          =  3576 SHL 14;
const
  MC_Gain_Filter                           =  3577 SHL 14;
const
  MC_Camera_IK_TF1                         =          203;
const
  MC_Camera_IK_TF5                         =          204;
const
  MC_Camera_IK_TF7                         =          205;
const
  MC_Manufacturer_TOSHIBA                  =           25;
const
  MC_RCable_A15_C21                        =           22;
const
  MC_Cable_A15_C21                         =          148;
const
  MC_CableName_Triple_Channel_RGB          =           93;
const
  MC_SeqLength_Fr_Filter                   =  3578 SHL 14;
const
  MC_SeqLength_Pg_Filter                   =  3579 SHL 14;
const
  MC_SeqLength_Ln_Filter                   =  3580 SHL 14;
const
  MC_PhaseLength_Fr_Filter                 =  3581 SHL 14;
const
  MC_CCE_Filter                            =  3582 SHL 14;
const
  MC___PageLength_Error_Check              =  3583 SHL 14;
const
  MC___PageLength_Error_Check_PASS         =            1;
const
  MC___PageLength_Error_Check_FAIL         =            2;
const
  MC__Category_Camera_Advanced_Features    =           41;
const
  MC_CamConfig_PxxRG_PartialScan           =          255;
const
  MC_SonyXCL_V500PartialScan_Filter        =  3584 SHL 14;
const
  MC_SonyXCL_X700PartialScan_Filter        =  3585 SHL 14;
const
  MC_SonyXCL_U1000PartialScan_Filter       =  3586 SHL 14;
const
  MC_SonyXCL_U1000CPartialScan_Filter      =  3587 SHL 14;
const
  MC_SonyXCL_V500_FPS                      =  3588 SHL 14;
const
  MC_SonyXCL_V500_RPS                      =  3589 SHL 14;
const
  MC_SonyXCL_X700_FPS                      =  3590 SHL 14;
const
  MC_SonyXCL_X700_RPS                      =  3591 SHL 14;
const
  MC_SonyXCL_U1000_Start                   =  3592 SHL 14;
const
  MC_SonyXCL_U1000_End                     =  3593 SHL 14;
const
  MC_SonyXCL_U1000C_Start                  =  3594 SHL 14;
const
  MC_SonyXCL_U1000C_End                    =  3595 SHL 14;
const
  MC_SonyXCL_V500PartialScanFrameRate_mHz  =  3596 SHL 14;
const
  MC_SonyXCL_V500PartialScanVactive_Ln     =  3597 SHL 14;
const
  MC_SonyXCL_X700PartialScanFrameRate_mHz  =  3598 SHL 14;
const
  MC_SonyXCL_X700PartialScanVactive_Ln     =  3599 SHL 14;
const
  MC_SonyXCL_U1000PartialScanFrameRate_mHz =  3600 SHL 14;
const
  MC_SonyXCL_U1000PartialScanVactive_Ln    =  3601 SHL 14;
const
  MC_SonyXCL_U1000CPartialScanFrameRate_mHz =  3602 SHL 14;
const
  MC_SonyXCL_U1000CPartialScanVactive_Ln   =  3603 SHL 14;
const
  MC_DvalMode_DID2P0                       =            4;
const
  MC__HDC_DCADV_INTERNAL_D2P0              =            3;
const
  MC_LUT__Data                             =  3604 SHL 14;
const
  MC__BoardType__AVENUE                    =           25;
const
  MC_TrigLine_ISOA1                        =           19;
const
  MC_TrigLine_ISOA2                        =           20;
const
  MC_TrigLine_TRA1                         =           21;
const
  MC_TrigLine_TRA2                         =           22;
const
  MC_EndTrigLine_IO1                       =           11;
const
  MC_EndTrigLine_IO2                       =           12;
const
  MC_EndTrigLine_IO3                       =           13;
const
  MC_EndTrigLine_IO4                       =           14;
const
  MC_EndTrigLine_ISOA1                     =           15;
const
  MC_EndTrigLine_ISOA2                     =           16;
const
  MC_EndTrigLine_TRA1                      =           17;
const
  MC_EndTrigLine_TRA2                      =           18;
const
  MC__TrigLine_ISOA1                       =           28;
const
  MC__TrigLine_ISOA2                       =           29;
const
  MC__TrigLine_TRA1                        =           30;
const
  MC__TrigLine_TRA2                        =           31;
const
  MC_StrobeLine_ISOA1                      =           15;
const
  MC_StrobeLine_ISOA2                      =           16;
const
  MC_StrobeLine_STA                        =           17;
const
  MC__StrobeLine_ISOA1                     =           14;
const
  MC__StrobeLine_ISOA2                     =           15;
const
  MC__StrobeLine_STA                       =           16;
const
  MC_LineTrigCtl_LVDS                      =            4;
const
  MC_LineTrigLine_IO1                      =            7;
const
  MC_LineTrigLine_IO2                      =            8;
const
  MC_LineTrigLine_IO3                      =            9;
const
  MC_LineTrigLine_IO4                      =           10;
const
  MC_LineTrigLine_ISOA1                    =           11;
const
  MC_LineTrigLine_ISOA2                    =           12;
const
  MC_LineTrigLine_TRA1                     =           13;
const
  MC_LineTrigLine_TRA2                     =           14;
const
  MC__LineTrigLine_IO1                     =           13;
const
  MC__LineTrigLine_IO2                     =           14;
const
  MC__LineTrigLine_IO3                     =           15;
const
  MC__LineTrigLine_IO4                     =           16;
const
  MC__LineTrigLine_ISOA1                   =           17;
const
  MC__LineTrigLine_ISOA2                   =           18;
const
  MC__LineTrigLine_TRA1                    =           19;
const
  MC__LineTrigLine_TRA2                    =           20;
const
  MC__TRG_LTSEL_A1                         =           11;
const
  MC__TRG_LTSEL_A2                         =           12;
const
  MC__TRG_LTSEL_TRG1                       =           13;
const
  MC__TRG_LTSEL_TRG2                       =           14;
const
  MC__TRG_LTSEL_IO1                        =           15;
const
  MC__TRG_LTSEL_IO2                        =           16;
const
  MC__TRG_LTSEL_IO3                        =           17;
const
  MC__TRG_LTSEL_IO4                        =           18;
const
  MC__TRG_FTSEL_TRG1                       =           17;
const
  MC__TRG_FTSEL_TRG2                       =           18;
const
  MC__TRG_FTSEL_IO1                        =           19;
const
  MC__TRG_FTSEL_IO2                        =           20;
const
  MC__TRG_FTSEL_IO3                        =           21;
const
  MC__TRG_FTSEL_IO4                        =           22;
const
  MC_IO1Usage                              =  3605 SHL 14;
const
  MC_IO1Usage_FREE                         =            1;
const
  MC_IO1Usage_STROBE                       =            2;
const
  MC_IO1Usage_TRIGGER                      =            3;
const
  MC_IO1Usage_LINETRIGGER                  =            4;
const
  MC_IO2Usage                              =  3606 SHL 14;
const
  MC_IO2Usage_FREE                         =            1;
const
  MC_IO2Usage_STROBE                       =            2;
const
  MC_IO2Usage_TRIGGER                      =            3;
const
  MC_IO2Usage_LINETRIGGER                  =            4;
const
  MC_IO3Usage                              =  3607 SHL 14;
const
  MC_IO3Usage_FREE                         =            1;
const
  MC_IO3Usage_STROBE                       =            2;
const
  MC_IO3Usage_TRIGGER                      =            3;
const
  MC_IO3Usage_LINETRIGGER                  =            4;
const
  MC_IO4Usage                              =  3608 SHL 14;
const
  MC_IO4Usage_FREE                         =            1;
const
  MC_IO4Usage_STROBE                       =            2;
const
  MC_IO4Usage_TRIGGER                      =            3;
const
  MC_IO4Usage_LINETRIGGER                  =            4;
const
  MC_ISOA1Usage                            =  3609 SHL 14;
const
  MC_ISOA1Usage_FREE                       =            1;
const
  MC_ISOA1Usage_STROBE                     =            2;
const
  MC_ISOA1Usage_TRIGGER                    =            3;
const
  MC_ISOA1Usage_LINETRIGGER                =            4;
const
  MC_ISOA2Usage                            =  3610 SHL 14;
const
  MC_ISOA2Usage_FREE                       =            1;
const
  MC_ISOA2Usage_STROBE                     =            2;
const
  MC_ISOA2Usage_TRIGGER                    =            3;
const
  MC_ISOA2Usage_LINETRIGGER                =            4;
const
  MC_TRA1Usage                             =  3611 SHL 14;
const
  MC_TRA1Usage_FREE                        =            1;
const
  MC_TRA1Usage_STROBE                      =            2;
const
  MC_TRA1Usage_TRIGGER                     =            3;
const
  MC_TRA1Usage_LINETRIGGER                 =            4;
const
  MC_TRA2Usage                             =  3612 SHL 14;
const
  MC_TRA2Usage_FREE                        =            1;
const
  MC_TRA2Usage_STROBE                      =            2;
const
  MC_TRA2Usage_TRIGGER                     =            3;
const
  MC_TRA2Usage_LINETRIGGER                 =            4;
const
  MC_STAUsage                              =  3613 SHL 14;
const
  MC_STAUsage_FREE                         =            1;
const
  MC_STAUsage_STROBE                       =            2;
const
  MC_STAUsage_TRIGGER                      =            3;
const
  MC_STAUsage_LINETRIGGER                  =            4;
const
  MC__STR_STR1POL                          =  3614 SHL 14;
const
  MC__STR_STR1POL_DIRECT                   =            1;
const
  MC__STR_STR1POL_INVERT                   =            2;
const
  MC__STR_STR1POL_HOLD                     =            3;
const
  MC__STR_STR1SRC                          =  3615 SHL 14;
const
  MC__STR_STR1SRC_LOW                      =            1;
const
  MC__STR_STR1SRC_T1SIG3_X                 =            2;
const
  MC__STR_STR1SRC_T1SIG4_X                 =            3;
const
  MC__STR_STR1SRC_PPLS_X                   =            4;
const
  MC__STR_STR1SRC_HOLD                     =            5;
const
  MC__STB_A1STYL                           =  3616 SHL 14;
const
  MC__STB_A1STYL_TTLIN                     =            1;
const
  MC__STB_A1STYL_12VIN                     =            2;
const
  MC__STB_A1STYL_TTLOUT                    =            3;
const
  MC__STB_A1STYL_OCOUT                     =            4;
const
  MC__STB_A1STYL_OEOUT                     =            5;
const
  MC__STB_A1STYL_HOLD                      =            6;
const
  MC__STB_A2STYL                           =  3617 SHL 14;
const
  MC__STB_A2STYL_TTLIN                     =            1;
const
  MC__STB_A2STYL_12VIN                     =            2;
const
  MC__STB_A2STYL_TTLOUT                    =            3;
const
  MC__STB_A2STYL_OCOUT                     =            4;
const
  MC__STB_A2STYL_OEOUT                     =            5;
const
  MC__STB_A2STYL_HOLD                      =            6;
const
  MC__STB_QA1SRC                           =  3618 SHL 14;
const
  MC__STB_QA1SRC_LOW                       =            1;
const
  MC__STB_QA1SRC_T1SIG3                    =            2;
const
  MC__STB_QA1SRC_T1SIG4                    =            3;
const
  MC__STB_QA1SRC_HIGH                      =            4;
const
  MC__STB_QA1SRC_T1SIG3_Inverted           =            5;
const
  MC__STB_QA1SRC_T1SIG4_Inverted           =            6;
const
  MC__STB_QA1SRC_HOLD                      =            7;
const
  MC__STB_QA2SRC                           =  3619 SHL 14;
const
  MC__STB_QA2SRC_LOW                       =            1;
const
  MC__STB_QA2SRC_T1SIG3                    =            2;
const
  MC__STB_QA2SRC_T1SIG4                    =            3;
const
  MC__STB_QA2SRC_HIGH                      =            4;
const
  MC__STB_QA2SRC_T1SIG3_Inverted           =            5;
const
  MC__STB_QA2SRC_T1SIG4_Inverted           =            6;
const
  MC__STB_QA2SRC_HOLD                      =            7;
const
  MC__STB_QA1POL                           =  3620 SHL 14;
const
  MC__STB_QA1POL_DIRECT                    =            1;
const
  MC__STB_QA1POL_INVERT                    =            2;
const
  MC__STB_QA1POL_HOLD                      =            3;
const
  MC__STB_QA2POL                           =  3621 SHL 14;
const
  MC__STB_QA2POL_DIRECT                    =            1;
const
  MC__STB_QA2POL_INVERT                    =            2;
const
  MC__STB_QA2POL_HOLD                      =            3;
const
  MC_InputPinName_TRA1                     =           80;
const
  MC_InputPinName_TRA2                     =           81;
const
  MC_InputPinName_ISOA1                    =           82;
const
  MC_InputPinName_ISOA2                    =           83;
const
  MC_OutputPinName_STA                     =           84;
const
  MC_OutputPinName_ISOA1                   =           85;
const
  MC_OutputPinName_ISOA2                   =           86;
const
  MC_OutputState_LOOP                      =           13;
const
  MC_OutputState_1_LOOP                    =            8;
const
  MC_OutputState_2_LOOP                    =            6;
const
  MC_OutputState_3_LOOP                    =            6;
const
  MC_OutputState_4_LOOP                    =            6;
const
  MC_OutputState_LOOP3                     =           14;
const
  MC_OutputState_LOOP4                     =           15;
const
  MC_OutputState_17_LOOP3                  =            6;
const
  MC_OutputState_17_LOOP4                  =            7;
const
  MC_OutputState_21_LOOP1                  =            4;
const
  MC_OutputState_21_LOOP2                  =            5;
const
  MC_OutputState_21_LOOP3                  =            6;
const
  MC_OutputState_21_LOOP4                  =            7;
const
  MC_OutputState_22_LOOP3                  =            6;
const
  MC_OutputState_22_LOOP4                  =            7;
const
  MC_OutputState_23_LOOP3                  =            6;
const
  MC_OutputState_23_LOOP4                  =            7;
const
  MC_OutputState_24_LOOP3                  =            6;
const
  MC_OutputState_24_LOOP4                  =            7;
const
  MC_ISOA1Usage_USER                       =            5;
const
  MC_ISOA2Usage_USER                       =            5;
const
  MC_EndTrigLine_Filter                    =  3622 SHL 14;
const
  MC_EndTrigCtl_Filter                     =  3623 SHL 14;
const
  MC_EndTrigCtl_LVDS                       =            2;
const
  MC_EndTrigCtl_ITTL                       =            3;
const
  MC_EndTrigCtl_I12V                       =            4;
const
  MC_StrobeLine_STR                        =           18;
const
  MC_ColorFormat_UINT32                    =           68;
const
  MC_CamConfig_L4080SP                     =          256;
const
  MC_CamConfig_L4080RC                     =          257;
const
  MC_CamConfig_L4080RG                     =          258;
const
  MC__CSIO_CSIO1Out                        =  3624 SHL 14;
const
  MC__CSIO_CSIO1Out_T1SIG3                 =            1;
const
  MC__CSIO_CSIO1Out_T1SIG4                 =            2;
const
  MC__CSIO_CSIO1Out_PPLS                   =            3;
const
  MC__CSIO_CSIO1Out_HOLD                   =            4;
const
  MC__CSIO_CSIO1Dir                        =  3625 SHL 14;
const
  MC__CSIO_CSIO1Dir_DIRECT                 =            1;
const
  MC__CSIO_CSIO1Dir_INVERT                 =            2;
const
  MC__CSIO_CSIO1Dir_HOLD                   =            3;
const
  MC__CSIO_CSIO2Out                        =  3626 SHL 14;
const
  MC__CSIO_CSIO2Out_T1SIG3                 =            1;
const
  MC__CSIO_CSIO2Out_T1SIG4                 =            2;
const
  MC__CSIO_CSIO2Out_PPLS                   =            3;
const
  MC__CSIO_CSIO2Out_HOLD                   =            4;
const
  MC__CSIO_CSIO2Dir                        =  3627 SHL 14;
const
  MC__CSIO_CSIO2Dir_DIRECT                 =            1;
const
  MC__CSIO_CSIO2Dir_INVERT                 =            2;
const
  MC__CSIO_CSIO2Dir_HOLD                   =            3;
const
  MC__CSIO_CSIO3Out                        =  3628 SHL 14;
const
  MC__CSIO_CSIO3Out_T1SIG3                 =            1;
const
  MC__CSIO_CSIO3Out_T1SIG4                 =            2;
const
  MC__CSIO_CSIO3Out_PPLS                   =            3;
const
  MC__CSIO_CSIO3Out_HOLD                   =            4;
const
  MC__CSIO_CSIO3Dir                        =  3629 SHL 14;
const
  MC__CSIO_CSIO3Dir_DIRECT                 =            1;
const
  MC__CSIO_CSIO3Dir_INVERT                 =            2;
const
  MC__CSIO_CSIO3Dir_HOLD                   =            3;
const
  MC__CSIO_CSIO4Out                        =  3630 SHL 14;
const
  MC__CSIO_CSIO4Out_T1SIG3                 =            1;
const
  MC__CSIO_CSIO4Out_T1SIG4                 =            2;
const
  MC__CSIO_CSIO4Out_PPLS                   =            3;
const
  MC__CSIO_CSIO4Out_HOLD                   =            4;
const
  MC__CSIO_CSIO4Dir                        =  3631 SHL 14;
const
  MC__CSIO_CSIO4Dir_DIRECT                 =            1;
const
  MC__CSIO_CSIO4Dir_INVERT                 =            2;
const
  MC__CSIO_CSIO4Dir_HOLD                   =            3;
const
  MC__CSIO_CSIO1Out_T1SIG3X                =            5;
const
  MC__CSIO_CSIO1Out_T1SIG4X                =            6;
const
  MC__CSIO_CSIO2Out_T1SIG3X                =            5;
const
  MC__CSIO_CSIO2Out_T1SIG4X                =            6;
const
  MC__CSIO_CSIO3Out_T1SIG3X                =            5;
const
  MC__CSIO_CSIO3Out_T1SIG4X                =            6;
const
  MC__CSIO_CSIO4Out_T1SIG3X                =            5;
const
  MC__CSIO_CSIO4Out_T1SIG4X                =            6;
const
  MC__CSIO_CSIO1Dir_IO_Output              =            4;
const
  MC__CSIO_CSIO1Dir_IO_nOutput             =            5;
const
  MC__CSIO_CSIO1Dir_IO_Input               =            6;
const
  MC__CSIO_CSIO2Dir_IO_Output              =            4;
const
  MC__CSIO_CSIO2Dir_IO_nOutput             =            5;
const
  MC__CSIO_CSIO2Dir_IO_Input               =            6;
const
  MC__CSIO_CSIO3Dir_IO_Output              =            4;
const
  MC__CSIO_CSIO3Dir_IO_nOutput             =            5;
const
  MC__CSIO_CSIO3Dir_IO_Input               =            6;
const
  MC__CSIO_CSIO4Dir_IO_Output              =            4;
const
  MC__CSIO_CSIO4Dir_IO_nOutput             =            5;
const
  MC__CSIO_CSIO4Dir_IO_Input               =            6;
const
  MC__CSIO_CSIO1Out_PPLSX                  =            7;
const
  MC__CSIO_CSIO2Out_PPLSX                  =            7;
const
  MC__CSIO_CSIO3Out_PPLSX                  =            7;
const
  MC__CSIO_CSIO4Out_PPLSX                  =            7;
const
  MC_ColorFormat_FLOAT32                   =           69;
const
  MC_Toto                                  =  3632 SHL 14;
const
  MC_LineTrigLine_Filter                   =  3633 SHL 14;
const
  MC_OutputState_18_LOOP3                  =            6;
const
  MC_OutputState_18_LOOP4                  =            7;
const
  MC_OutputState_19_LOOP1                  =            4;
const
  MC_OutputState_19_LOOP2                  =            5;
const
  MC_OutputState_19_LOOP3                  =            6;
const
  MC_OutputState_19_LOOP4                  =            7;
const
  MC_OutputState_31_LOOP1                  =            4;
const
  MC_OutputState_31_LOOP2                  =            5;
const
  MC_OutputState_31_LOOP3                  =            6;
const
  MC_OutputState_31_LOOP4                  =            7;
const
  MC_OutputState_32_LOOP3                  =            6;
const
  MC_OutputState_32_LOOP4                  =            7;
const
  MC_OutputState_33_LOOP3                  =            6;
const
  MC_OutputState_33_LOOP4                  =            7;
const
  MC_OutputState_34_LOOP3                  =            6;
const
  MC_OutputState_34_LOOP4                  =            7;
const
  MC_Camera_MV_D1024_80_CL_8               =          206;
const
  MC_Camera_MV_D1024_160_CL_8              =          207;
const
  MC_Camera_MV_D640_66_CL_10               =          208;
const
  MC_Camera_MV_D640C_66_CL_10              =          209;
const
  MC_Camera_MV_D640_33_CL_10               =          210;
const
  MC_Camera_MV_D640C_33_CL_10              =          211;
const
  MC_Camera_TMC_4000CL                     =          212;
const
  MC_CamConfig_P30SC_Base                  =          259;
const
  MC_CamConfig_P30RG_Base                  =          260;
const
  MC_CamConfig_P30RG_O_Base                =          261;
const
  MC_CamConfig_P30SC_Medium                =          262;
const
  MC_CamConfig_P30RG_Medium                =          263;
const
  MC_CamConfig_P30RG_O_Medium              =          264;
const
  MC_CamConfig_L512SC                      =          265;
const
  MC_CamConfig_L512RP                      =          266;
const
  MC_CamConfig_P15RC                       =          267;
const
  MC_CamConfig_P100SC                      =          268;
const
  MC_CamConfig_P100RC                      =          269;
const
  MC_CamConfig_P150SC                      =          270;
const
  MC_CamConfig_P150RG                      =          271;
const
  MC_CamConfig_L1024RG_Base                =          272;
const
  MC_CamConfig_L1024RG_Medium              =          273;
const
  MC_CamConfig_L2048RG_Base                =          274;
const
  MC_CamConfig_L2048RG_Medium              =          275;
const
  MC_CamConfig_L1024RP                     =          276;
const
  MC_CamConfig_L4080SC                     =          277;
const
  MC_CamConfig_L4080RP                     =          278;
const
  MC_Manufacturer_SVS_VISTEK               =           26;
const
  MC_PageLength_TileHeight_Key             =  3634 SHL 14;
const
  MC___PageLength_TileHeight_Check         =  3635 SHL 14;
const
  MC___PageLength_TileHeight_Check_PASS    =            1;
const
  MC___PageLength_TileHeight_Check_FAIL    =            2;
const
  MC_ProductionTest                        =  3636 SHL 14;
const
  MC_ProductionTest_DISABLED               =            1;
const
  MC_ProductionTest_ENABLED                =            2;
const
  MC__ReadoutDur_us                        =  3637 SHL 14;
const
  MC_ForceTrig_ENDTRIG                     =            2;
const
  MC_ForceTrig_Filter                      =  3638 SHL 14;
const
  MC_EndTrigFilter                         =  3639 SHL 14;
const
  MC_EndTrigFilter_OFF                     =            1;
const
  MC_EndTrigFilter_MEDIUM                  =            2;
const
  MC_EndTrigFilter_STRONG                  =            3;
const
  MC_EndTrigFilter_ON                      =            4;
const
  MC_EndTrigFilter_Filter                  =  3640 SHL 14;
const
  MC__EndTrigLine                          =  3641 SHL 14;
const
  MC__EndTrigLine_NONE                     =            1;
const
  MC__EndTrigLine_IO1                      =            2;
const
  MC__EndTrigLine_IO2                      =            3;
const
  MC__EndTrigLine_IO3                      =            4;
const
  MC__EndTrigLine_IO4                      =            5;
const
  MC__EndTrigLine_ISOA1                    =            6;
const
  MC__EndTrigLine_ISOA2                    =            7;
const
  MC__EndTrigLine_TRA1                     =            8;
const
  MC__EndTrigLine_TRA2                     =            9;
const
  MC__EndTrigLine_LTACT                    =           10;
const
  MC__EndTrigLine_PG                       =           11;
const
  MC__TRG_EFTPOL                           =  3642 SHL 14;
const
  MC__TRG_EFTPOL_DIRECT                    =            1;
const
  MC__TRG_EFTPOL_INVERT                    =            2;
const
  MC__TRG_EFTSEL                           =  3643 SHL 14;
const
  MC__TRG_EFTSEL_NA                        =            1;
const
  MC__TRG_EFTSEL_D1                        =            2;
const
  MC__TRG_EFTSEL_D2                        =            3;
const
  MC__TRG_EFTSEL_PG                        =            4;
const
  MC__TRG_EFTSEL_LTACT                     =            5;
const
  MC__TRG_EFTSEL_TRX                       =            6;
const
  MC__TRG_EFTSEL_TRY                       =            7;
const
  MC__TRG_EFTSEL_TRZ                       =            8;
const
  MC__TRG_EFTSEL_DA1                       =            9;
const
  MC__TRG_EFTSEL_DA2                       =           10;
const
  MC__TRG_EFTSEL_TRG1                      =           11;
const
  MC__TRG_EFTSEL_TRG2                      =           12;
const
  MC__TRG_EFTSEL_IO1                       =           13;
const
  MC__TRG_EFTSEL_IO2                       =           14;
const
  MC__TRG_EFTSEL_IO3                       =           15;
const
  MC__TRG_EFTSEL_IO4                       =           16;
const
  MC__EndTrigLine_DA1                      =           12;
const
  MC__EndTrigLine_DA2                      =           13;
const
  MC__EndTrigLine_PGA                      =           14;
const
  MC__EndTrigLine_DB1                      =           15;
const
  MC__EndTrigLine_DB2                      =           16;
const
  MC__EndTrigLine_PGB                      =           17;
const
  MC__EndTrigLine_TRX                      =           18;
const
  MC__EndTrigLine_TRY                      =           19;
const
  MC__EndTrigLine_TRZ                      =           20;
const
  MC_SimMANTRIGSet                         =  3644 SHL 14;
const
  MC__EndTrigLineNeeded                    =  3645 SHL 14;
const
  MC__EndTrigLineNeeded_NO                 =            1;
const
  MC__EndTrigLineNeeded_YES                =            2;
const
  MC__VCOFrequency                         =  3646 SHL 14;
const
  MC__SSC_CV_A1                            =            7;
const
  MC__CBA_DIRX_w                           =  3647 SHL 14;
const
  MC_PartialPageLength_Ln                  =  3648 SHL 14;
const
  MC__LQS_COUNT0                           =  3649 SHL 14;
const
  MC__LQS_COUNT1                           =  3650 SHL 14;
const
  MC__LQS_COUNT2                           =  3651 SHL 14;
const
  MC_PPBUFSize_GrabSizeXStep_Px            =  3652 SHL 14;
const
  MC_ADR_GrabSizeXStep_Px                  =  3653 SHL 14;
const
  MC__ADR_ComponentSize_Byte               =  3654 SHL 14;
const
  MC__ADR_SliceSize_Byte                   =  3655 SHL 14;
const
  MC__ADR_InputBytePerComponent            =  3656 SHL 14;
const
  MC__ADR_OutputBytePerComponent           =  3657 SHL 14;
const
  MC__ADR_OutputsSteps64bit                =  3658 SHL 14;
const
  MC__ADR_ImageSizeX_Component             =  3659 SHL 14;
const
  MC__ADR_TotalSliceCount                  =  3660 SHL 14;
const
  MC__ADR_LastSliceSize_64bit              =  3661 SHL 14;
const
  MC_LineCaptureMode_ADR                   =            3;
const
  MC__CPG_PGFRAC                           =  3662 SHL 14;
const
  MC__MinPitch_mw                          =  3663 SHL 14;
const
  MC__ADR_OutputFormat                     =  3664 SHL 14;
const
  MC__ADR_OutputFormat_8BIT                =            1;
const
  MC__ADR_OutputFormat_10BIT               =            2;
const
  MC__ADR_OutputFormat_12BIT               =            3;
const
  MC__ADR_OutputFormat_14BIT               =            4;
const
  MC__ADR_OutputFormat_16BIT               =            5;
const
  MC__ADR_SliceSize_Component              =  3665 SHL 14;
const
  MC_MinIntractionLead                     =  3666 SHL 14;
const
  MC_VSyncSearchWindowLeft_TT              =  3667 SHL 14;
const
  MC_VSyncSearchWindowRight_TT             =  3668 SHL 14;
const
  MC_VSyncFoundLNB                         =  3669 SHL 14;
const
  MC_TimerFrequency                        =  3670 SHL 14;
const
  MC_Fc_Hz                                 =  3671 SHL 14;
const
  MC_Fp1_Hz                                =  3672 SHL 14;
const
  MC_RCR                                   =  3673 SHL 14;
const
  MC_Fe1_Hz                                =  3674 SHL 14;
const
  MC__PM_N0                                =  3675 SHL 14;
const
  MC__PG_SF0                               =  3676 SHL 14;
const
  MC__Category_Rate_Converter              =           42;
const
  MC__PG_U                                 =  3677 SHL 14;
const
  MC__PG_S_U_max                           =  3678 SHL 14;
const
  MC__PG_U_max                             =  3679 SHL 14;
const
  MC__PG_S_max                             =  3680 SHL 14;
const
  MC__PG_S                                 =  3681 SHL 14;
const
  MC__PM_N1                                =  3682 SHL 14;
const
  MC__PM_PMSDIV                            =  3683 SHL 14;
const
  MC__PM_M                                 =  3684 SHL 14;
const
  MC__PM_N2                                =  3685 SHL 14;
const
  MC_Fp2_Hz                                =  3686 SHL 14;
const
  MC_Fe2_Hz                                =  3687 SHL 14;
const
  MC_Fm_Hz                                 =  3688 SHL 14;
const
  MC_RCDR                                  =  3689 SHL 14;
const
  MC___RCDR_Check                          =  3690 SHL 14;
const
  MC___RCDR_Check_PASS                     =            1;
const
  MC___RCDR_Check_FAIL                     =            2;
const
  MC___PM_PMSDIV_Range_Check               =  3691 SHL 14;
const
  MC___PM_PMSDIV_Range_Check_PASS          =            1;
const
  MC___PM_PMSDIV_Range_Check_FAIL          =            2;
const
  MC___PG_U_Check                          =  3692 SHL 14;
const
  MC___PG_U_Check_PASS                     =            1;
const
  MC___PG_U_Check_FAIL                     =            2;
const
  MC_SamplingPitch                         =  3693 SHL 14;
const
  MC__TrimmedKFactor                       =  3694 SHL 14;
const
  MC__TrimmedKFactor_Check                 =  3695 SHL 14;
const
  MC__TrimmedKFactor_Check_PASS            =            1;
const
  MC__TrimmedKFactor_Check_FAIL            =            2;
const
  MC__TrimmedPeriod_s                      =  3696 SHL 14;
const
  MC__Category_Periodic_Timer              =           43;
const
  MC__TrimmedPeriod_us                     =  3697 SHL 14;
const
  MC_RC_Fc_Hz                              =  3698 SHL 14;
const
  MC_PT_Fc_Hz                              =  3699 SHL 14;
const
  MC_PT_Po_s                               =  3700 SHL 14;
const
  MC__PT_S_U_max                           =  3701 SHL 14;
const
  MC__PT_U_max                             =  3702 SHL 14;
const
  MC__PT_U                                 =  3703 SHL 14;
const
  MC__PT_S_max                             =  3704 SHL 14;
const
  MC__PT_S                                 =  3705 SHL 14;
const
  MC__PT_N                                 =  3706 SHL 14;
const
  MC__PGSCAL                               =  3707 SHL 14;
const
  MC__PGFRAC                               =  3708 SHL 14;
const
  MC__KFactorTrim                          =  3709 SHL 14;
const
  MC__Vtotal_ms                            =  3710 SHL 14;
const
  MC__Expose_ms                            =  3711 SHL 14;
const
  MC_MaxCameraLineRate                     =  3712 SHL 14;
const
  MC_MaxDownwebLineRate                    =  3713 SHL 14;
const
  MC__MinIntractionLead                    =  3714 SHL 14;
const
  MC__MinIntractionLead_S                  =  3715 SHL 14;
const
  MC_SimABORTGASet                         =  3716 SHL 14;
const
  MC_ExpectedSeqLength_Ln                  =  3717 SHL 14;
const
  MC__PT_S_min                             =  3718 SHL 14;
const
  MC___PT_PGCNT_Range_Check                =  3719 SHL 14;
const
  MC___PT_PGCNT_Range_Check_PASS           =            1;
const
  MC___PT_PGCNT_Range_Check_FAIL           =            2;
const
  MC_SkippedLineCount                      =  3720 SHL 14;
const
  MC__CTD_ETDMOD                           =  3721 SHL 14;
const
  MC__CTD_ETDMOD_Bypass                    =            1;
const
  MC__CTD_ETDMOD_Enable                    =            2;
const
  MC__ETD_TDCNT                            =  3722 SHL 14;
const
  MC_EndPageDelay_Ln                       =  3723 SHL 14;
const
  MC__ETD_TDMOD                            =  3724 SHL 14;
const
  MC__ETD_TDMOD_Bypass                     =            1;
const
  MC__ETD_TDMOD_Enable                     =            2;
const
  MC_AssyPixelSize                         =  3725 SHL 14;
const
  MC_LineCaptureMode_LineCaptureMode_Filter =            4;
const
  MC_LineCaptureMode_Filter                =  3726 SHL 14;
const
  MC_IDP_SWITCH                            =  3727 SHL 14;
const
  MC_IDP_SWITCH_TURN_ON                    =            1;
const
  MC_IDP_SWITCH_TURN_OFF                   =            2;
const
  MC_LineDur_Px                            =  3728 SHL 14;
const
  MC__SampledPixels_Px                     =  3729 SHL 14;
const
  MC_ActiveLineDurNoBlack_ns               =  3730 SHL 14;
const
  MC_LineDurNoBlack_Px                     =  3731 SHL 14;
const
  MC_MaxHCsyncAft_ns                       =  3732 SHL 14;
const
  MC_MaxHCsyncBfr_ns                       =  3733 SHL 14;
const
  MC__NoBlackOffset                        =  3734 SHL 14;
const
  MC__NoBlackOffset_Px                     =  3735 SHL 14;
const
  MC__NoBlackScale                         =  3736 SHL 14;
const
  MC__ModelId                              =  3737 SHL 14;
const
  MC__ModuleId                             =  3738 SHL 14;
const
  MC_ImagePixelAlign_N_A                   =            3;
const
  MC__Peak                                 =  3739 SHL 14;
const
  MC__Peak_OFF                             =            1;
const
  MC__Peak_ON                              =            2;
const
  MC__Hfilt                                =  3740 SHL 14;
const
  MC__Majs                                 =  3741 SHL 14;
const
  MC__BoardType__PICOLO_ALERT              =           26;
const
  MC__Dummy                                =  3742 SHL 14;
const
  MC___PageLength_TileHeight_Check_ErrorMsg =  3743 SHL 14;
const
  MC_NextTrigMode_NextTrigMode             =           10;
const
  MC__TED_TDCLK                            =  3744 SHL 14;
const
  MC__TED_TDCLK_PRESCAL                    =            1;
const
  MC__TED_TDCLK_LTRIG                      =            2;
const
  MC__TED_TDCLK_PPLS                       =            3;
const
  MC__TED_TDCLK_EOL                        =            4;
const
  MC__TED_TDMOD                            =  3745 SHL 14;
const
  MC__TED_TDMOD_Bypass                     =            1;
const
  MC__TED_TDMOD_Enable                     =            2;
const
  MC__ETD_ETDMOD                           =  3746 SHL 14;
const
  MC__ETD_ETDMOD_Bypass                    =            1;
const
  MC__ETD_ETDMOD_Enable                    =            2;
const
  MC__TED_TDSCAL_ns                        =  3747 SHL 14;
const
  MC__TED_TDCNT                            =  3748 SHL 14;
const
  MC__ETD_ETDCNT                           =  3749 SHL 14;
const
  MC_PageDelay_Filter                      =  3750 SHL 14;
const
  MC_EndPageDelay_Filter                   =  3751 SHL 14;
const
  MC_BoardStartSet                         =  3752 SHL 14;
const
  MC__HDHalfPeriod_25ns                    =  3753 SHL 14;
const
  MC__HDPulseWidth_25ns                    =  3754 SHL 14;
const
  MC__VDPeriod_halfHD                      =  3755 SHL 14;
const
  MC__VDPulseWidth_halfHD                  =  3756 SHL 14;
const
  MC__CameraSyncEnable                     =  3757 SHL 14;
const
  MC__CameraSyncEnable_ENABLE              =            1;
const
  MC__CameraSyncEnable_DISABLE             =            2;
const
  MC___DisableCamDigIO                     =  3758 SHL 14;
const
  MC___DisableCamDigIO_DISABLE             =            1;
const
  MC___DisableCamDigIO_ENABLE              =            2;
const
  MC__Board_Type__ALERT                    =            8;
const
  MC__Category_Low_Level                   =           44;
const
  MC__BoardType__ALERT                     =           27;
const
  MC_BEC_SrcFlipX                          =  3759 SHL 14;
const
  MC_BEC_SrcFlipX_ON                       =            1;
const
  MC_BEC_SrcFlipX_OFF                      =            2;
const
  MC_BEC_SrcVertRes                        =  3760 SHL 14;
const
  MC_BEC_SrcVertRes_HALFRES                =            1;
const
  MC_BEC_SrcVertRes_FULLRES                =            2;
const
  MC_BEC_SrcSizeY                          =  3761 SHL 14;
const
  MC_SrcOffsetAddressY                     =  3762 SHL 14;
const
  MC_BEC_SrcOffsetAddressY                 =  3763 SHL 14;
const
  MC_BEC_SrcCAPM                           =  3764 SHL 14;
const
  MC_BEC_SrcCAPM_CField                    =            1;
const
  MC_BEC_SrcCAPM_CFrame                    =            2;
const
  MC_FEC_CAPM                              =  3765 SHL 14;
const
  MC_FEC_CAPM_CField                       =            1;
const
  MC_FEC_CAPM_CFrame                       =            2;
const
  MC_FEC_HPRE                              =  3766 SHL 14;
const
  MC_FEC_VPIM                              =  3767 SHL 14;
const
  MC_FEC_VPIM_EvenIsUp                     =            1;
const
  MC_FEC_VPIM_EvenIsDown                   =            2;
const
  MC_FEC_VSTD                              =  3768 SHL 14;
const
  MC_FEC_VSTD_PAL_SQ                       =            1;
const
  MC_FEC_VSTD_NTSC_SQ                      =            2;
const
  MC_FEC_VSTD_PAL_BROAD                    =            3;
const
  MC_FEC_VSTD_NTSC_BROAD                   =            4;
const
  MC_FEC_VSTD_SimA                         =            5;
const
  MC_FEC_VSTD_SimB                         =            6;
const
  MC_FEC_VSTD_SimC                         =            7;
const
  MC_FEC_VSTD_SimD                         =            8;
const
  MC_BusIdx                                =  3769 SHL 14;
const
  MC_DeviceIdx                             =  3770 SHL 14;
const
  MC__FPGA_Model                           =  3771 SHL 14;
const
  MC__FPGA_Model_HARMONY_DUOCAM            =            1;
const
  MC__FPGA_Model_HARMONY_MONOCAM_RGB       =            2;
const
  MC__FPGA_Model_MELODY_MONOCAM            =            3;
const
  MC__CONV_OUTPUT_GRANULARITY_             =  3772 SHL 14;
const
  MC_D3_CONVOLVER_BLOCKS                   =  3773 SHL 14;
const
  MC__DMA_TRANSFER_GRANULARITY_            =  3774 SHL 14;
const
  MC__IMAGE_TRANSFER_GRANULARITY_          =  3775 SHL 14;
const
  MC__Rounded_RHD                          =  3776 SHL 14;
const
  MC_RAS_R                                 =  3777 SHL 14;
const
  MC_Connector_UNDEFINED                   =          123;
const
  MC_BEC_VScaleFactor                      =  3778 SHL 14;
const
  MC_FEC_VPRE                              =  3779 SHL 14;
const
  MC_FEC_VACT                              =  3780 SHL 14;
const
  MC_FEC_VBarrelShift                      =  3781 SHL 14;
const
  MC_FEC_VBarrelShift_1BIT                 =            1;
const
  MC_FEC_VBarrelShift_2BIT                 =            2;
const
  MC_FEC_VBarrelShift_3BIT                 =            3;
const
  MC_FEC_VBarrelShift_0BIT                 =            4;
const
  MC_FEC_HBarrelShift                      =  3782 SHL 14;
const
  MC_FEC_HBarrelShift_0BIT                 =            1;
const
  MC_FEC_HBarrelShift_1BIT                 =            2;
const
  MC_FEC_HBarrelShift_2BIT                 =            3;
const
  MC_BEC_HScaleFactor                      =  3783 SHL 14;
const
  MC_BEC_SrcOffetX                         =  3784 SHL 14;
const
  MC_BEC_DestSizeX                         =  3785 SHL 14;
const
  MC_BEC_EnableCSC                         =  3786 SHL 14;
const
  MC_BEC_EnableCSC_ON                      =            1;
const
  MC_BEC_EnableCSC_OFF                     =            2;
const
  MC_BEC_Offset_Y                          =  3787 SHL 14;
const
  MC_BEC_Gain_Y                            =  3788 SHL 14;
const
  MC_BEC_Gain_Cr1                          =  3789 SHL 14;
const
  MC_BEC_Gain_Cr2                          =  3790 SHL 14;
const
  MC_BEC_Gain_Cb1                          =  3791 SHL 14;
const
  MC_BEC_Gain_Cb2                          =  3792 SHL 14;
const
  MC_BEC_Gain_Cr_1                         =  3793 SHL 14;
const
  MC_BEC_Gain_Cr_2                         =  3794 SHL 14;
const
  MC_BEC_Gain_Cb_1                         =  3795 SHL 14;
const
  MC_BEC_Gain_Cb_2                         =  3796 SHL 14;
const
  MC_PixelTiming                           =  3797 SHL 14;
const
  MC_PixelTiming_SQUARE                    =            1;
const
  MC_PixelTiming_BROADCAST                 =            2;
const
  MC_Resolution                            =  3798 SHL 14;
const
  MC_Resolution_FRAME                      =            1;
const
  MC_Resolution_FLD                        =            2;
const
  MC_Resolution_CIF                        =            3;
const
  MC_Resolution_QCIF                       =            4;
const
  MC_BEC_VBarrelShift                      =  3799 SHL 14;
const
  MC_BEC_VBarrelShift_0BIT                 =            1;
const
  MC_BEC_VBarrelShift_1BIT                 =            2;
const
  MC_BEC_VBarrelShift_2BIT                 =            3;
const
  MC_BEC_HBarrelShift                      =  3800 SHL 14;
const
  MC_BEC_HBarrelShift_0BIT                 =            1;
const
  MC_BEC_HBarrelShift_1BIT                 =            2;
const
  MC_BEC_HBarrelShift_2BIT                 =            3;
const
  MC__Y_Ln                                 =  3801 SHL 14;
const
  MC_Resolution_CUSTOM                     =            5;
const
  MC_Resolution_Filter                     =  3802 SHL 14;
const
  MC__ScaleX                               =  3803 SHL 14;
const
  MC__RoundedScaledWindowX                 =  3804 SHL 14;
const
  MC__ScaledWindowX                        =  3805 SHL 14;
const
  MC_ScaledWindowX                         =  3806 SHL 14;
const
  MC__ScaleY                               =  3807 SHL 14;
const
  MC__ScaledWindowY                        =  3808 SHL 14;
const
  MC_ScaledWindowY                         =  3809 SHL 14;
const
  MC_ColorFormat_YUV444                    =           70;
const
  MC_ColorFormat_Y41P                      =           71;
const
  MC_ColorFormat_Y42P                      =           72;
const
  MC_ColorFormat_IYU2                      =           73;
const
  MC_ColorFormat_YUV444PL                  =           74;
const
  MC_ColorFormat_YUV411PL_DEC              =           75;
const
  MC_ColorFormat_YUV422PL_DEC              =           76;
const
  MC__HSP                                  =  3810 SHL 14;
const
  MC__VSP                                  =  3811 SHL 14;
const
  MC__BPP                                  =  3812 SHL 14;
const
  MC__Pixel_Assembly_Granularity           =  3813 SHL 14;
const
  MC__TransferredImageSizeX                =  3814 SHL 14;
const
  MC__B4PP                                 =  3815 SHL 14;
const
  MC__Max_OffsetX_Px                       =  3816 SHL 14;
const
  MC__Min_OffsetX_Px                       =  3817 SHL 14;
const
  MC__LeftMargin_Max_Px                    =  3818 SHL 14;
const
  MC__LeftMargin_Px                        =  3819 SHL 14;
const
  MC__TopMargin_Max_Ln                     =  3820 SHL 14;
const
  MC__TopMargin_Ln                         =  3821 SHL 14;
const
  MC_ImageColorSpace                       =  3822 SHL 14;
const
  MC_ImageColorSpace_YUV                   =            1;
const
  MC_ImageColorSpace_RGB                   =            2;
const
  MC_VsyncAft_Ln_Bit0                      =  3823 SHL 14;
const
  MC_GainY_f                               =  3824 SHL 14;
const
  MC__GainC_f                              =  3825 SHL 14;
const
  MC__CSC_GainY_4_7                        =  3826 SHL 14;
const
  MC__CSC_GainCrR_4_7                      =  3827 SHL 14;
const
  MC__CSC_GainCrG_S3_7                     =  3828 SHL 14;
const
  MC__CSC_GainCbB_4_7                      =  3829 SHL 14;
const
  MC__CSC_GainCbG_S3_7                     =  3830 SHL 14;
const
  MC__GainU_f                              =  3831 SHL 14;
const
  MC__GainV_f                              =  3832 SHL 14;
const
  MC_ScalersGain_f                         =  3833 SHL 14;
const
  MC_GainU_f                               =  3834 SHL 14;
const
  MC_GainV_f                               =  3835 SHL 14;
const
  MC__CSC_GainCbG_S2_7                     =  3836 SHL 14;
const
  MC_GainY                                 =  3837 SHL 14;
const
  MC_GainU                                 =  3838 SHL 14;
const
  MC_GainV                                 =  3839 SHL 14;
const
  MC__CSC_GainY                            =  3840 SHL 14;
const
  MC__CSC_GainCrR                          =  3841 SHL 14;
const
  MC__CSC_GainCrG                          =  3842 SHL 14;
const
  MC__CSC_GainCbB                          =  3843 SHL 14;
const
  MC__CSC_GainCbG                          =  3844 SHL 14;
const
  MC_ScalersGain                           =  3845 SHL 14;
const
  MC_ScaleY                                =  3846 SHL 14;
const
  MC_ScaleX                                =  3847 SHL 14;
const
  MC_ScalerXGain                           =  3848 SHL 14;
const
  MC_ScalerYGain                           =  3849 SHL 14;
const
  MC_BEC_VideoOutFormat                    =  3850 SHL 14;
const
  MC_BEC_VideoOutFormat_YUV444_Packed      =            1;
const
  MC_BEC_VideoOutFormat_YUV444_Planar      =            2;
const
  MC_BEC_VideoOutFormat_YUV422_Packed      =            3;
const
  MC_BEC_VideoOutFormat_YUV422_Planar      =            4;
const
  MC_BEC_VideoOutFormat_YUV422_Planar_Decimated =            5;
const
  MC_BEC_VideoOutFormat_YUV411_Packed      =            6;
const
  MC_BEC_VideoOutFormat_YUV411_Planar      =            7;
const
  MC_BEC_VideoOutFormat_YUV411_Planar_Decimated =            8;
const
  MC_BEC_VideoOutFormat_RGB15_Packed       =            9;
const
  MC_BEC_VideoOutFormat_RGB16_Packed       =           10;
const
  MC_BEC_VideoOutFormat_RGB24_Packed       =           11;
const
  MC_BEC_VideoOutFormat_RGB24_Planar       =           12;
const
  MC_BEC_VideoOutFormat_ARGB32_Packed      =           13;
const
  MC_BEC_VideoOutFormat_Y8                 =           14;
const
  MC_Camera_SIMA                           =          213;
const
  MC_BEC_SrcOffsetX                        =  3851 SHL 14;
const
  MC_Standard_SIMA                         =            6;
const
  MC__FCR                                  =  3852 SHL 14;
const
  MC_FEC_FCR                               =  3853 SHL 14;
const
  MC_DataRange_Filter                      =  3854 SHL 14;
const
  MC_ColorFormat_MJPG                      =           77;
const
  MC_VideoSamplingPeriod                   =  3855 SHL 14;
const
  MC_ImageWidth                            =  3856 SHL 14;
const
  MC_VerticalSamplingPeriod                =  3857 SHL 14;
const
  MC_Go                                    =  3858 SHL 14;
const
  MC_CaptureRate                           =  3859 SHL 14;
const
  MC_CaptureRate_Slider                    =  3860 SHL 14;
const
  MC_CaptureRate_Max                       =  3861 SHL 14;
const
  MC_CaptureRate_Min                       =  3862 SHL 14;
const
  MC_CaptureRate_Default                   =  3863 SHL 14;
const
  MC_CaptureRate_SliderF                   =  3864 SHL 14;
const
  MC_InterfaceLayer                        =  3865 SHL 14;
const
  MC_InterfaceLayer_DISABLED               =            1;
const
  MC_InterfaceLayer_ENABLED                =            2;
const
  MC_Brightness_Slider                     =  3866 SHL 14;
const
  MC_Brightness                            =  3867 SHL 14;
const
  MC_Brightness_SliderF                    =  3868 SHL 14;
const
  MC_Brightness_Max                        =  3869 SHL 14;
const
  MC_Brightness_Min                        =  3870 SHL 14;
const
  MC_Brightness_Default                    =  3871 SHL 14;
const
  MC_Contrast_Slider                       =  3872 SHL 14;
const
  MC_Contrast                              =  3873 SHL 14;
const
  MC_Contrast_SliderF                      =  3874 SHL 14;
const
  MC_Contrast_Max                          =  3875 SHL 14;
const
  MC_Contrast_Min                          =  3876 SHL 14;
const
  MC_Contrast_Default                      =  3877 SHL 14;
const
  MC_Saturation_Slider                     =  3878 SHL 14;
const
  MC_Saturation                            =  3879 SHL 14;
const
  MC_Saturation_SliderF                    =  3880 SHL 14;
const
  MC_Saturation_Max                        =  3881 SHL 14;
const
  MC_Saturation_Min                        =  3882 SHL 14;
const
  MC_Saturation_Default                    =  3883 SHL 14;
const
  MC_CaptureRate_Slider_Default            =  3884 SHL 14;
const
  MC_Contrast_Slider_Default               =  3885 SHL 14;
const
  MC_Saturation_Slider_Default             =  3886 SHL 14;
const
  MC_Brightness_Slider_Default             =  3887 SHL 14;
const
  MC__CaptureRate_Max_x1000                =  3888 SHL 14;
const
  MC_FEC_VPIM_OddIsUp                      =            3;
const
  MC_StandardFrameRate_mHz                 =  3889 SHL 14;
const
  MC_VideoStandard                         =  3890 SHL 14;
const
  MC_VideoStandard_PAL                     =            1;
const
  MC_VideoStandard_NTSC                    =            2;
const
  MC_OutputFormat                          =  3891 SHL 14;
const
  MC_OutputFormat_YUY2                     =            1;
const
  MC_OutputFormat_YV12                     =            2;
const
  MC_OutputFormat_Y41P                     =            3;
const
  MC_OutputFormat_IYUV                     =            4;
const
  MC_OutputFormat_YVU9                     =            5;
const
  MC_OutputFormat_RGB24                    =            6;
const
  MC_OutputFormat_RGB555                   =            7;
const
  MC_OutputFormat_RGB565                   =            8;
const
  MC_OutputFormat_RGB8                     =            9;
const
  MC_OutputFormat_ARGB32                   =           10;
const
  MC_CaptureRegion                         =  3892 SHL 14;
const
  MC_CaptureRegion_FRAME                   =            1;
const
  MC_CaptureRegion_FLD                     =            2;
const
  MC_CaptureRegion_CIF                     =            3;
const
  MC_CaptureRegion_QCIF                    =            4;
const
  MC_CaptureRegion_CUSTOM                  =            5;
const
  MC_CaptureRegionXSize_Slider             =  3893 SHL 14;
const
  MC_CaptureRegionXSize                    =  3894 SHL 14;
const
  MC_CaptureRegionXSize_Max                =  3895 SHL 14;
const
  MC_CaptureRegionXSize_Min                =  3896 SHL 14;
const
  MC_CaptureRegionXSize_Default            =  3897 SHL 14;
const
  MC_CaptureRegionXSize_Slider_Default     =  3898 SHL 14;
const
  MC_CaptureRegionXSize_SliderF            =  3899 SHL 14;
const
  MC_CaptureRegionYSize_Slider             =  3900 SHL 14;
const
  MC_CaptureRegionYSize                    =  3901 SHL 14;
const
  MC_CaptureRegionYSize_SliderF            =  3902 SHL 14;
const
  MC_CaptureRegionYSize_Max                =  3903 SHL 14;
const
  MC_CaptureRegionYSize_Min                =  3904 SHL 14;
const
  MC_CaptureRegionYSize_Default            =  3905 SHL 14;
const
  MC_CaptureRegionYSize_Slider_Default     =  3906 SHL 14;
const
  MC_CaptureRegionXPosition_Slider         =  3907 SHL 14;
const
  MC_CaptureRegionXPosition                =  3908 SHL 14;
const
  MC_CaptureRegionXPosition_SliderF        =  3909 SHL 14;
const
  MC_CaptureRegionXPosition_Max            =  3910 SHL 14;
const
  MC_CaptureRegionXPosition_Min            =  3911 SHL 14;
const
  MC_CaptureRegionXPosition_Default        =  3912 SHL 14;
const
  MC_CaptureRegionXPosition_Slider_Default =  3913 SHL 14;
const
  MC_CaptureRegionXPosition_Span           =  3914 SHL 14;
const
  MC_CaptureRegionYPosition_Slider         =  3915 SHL 14;
const
  MC_CaptureRegionYPosition                =  3916 SHL 14;
const
  MC_CaptureRegionYPosition_SliderF        =  3917 SHL 14;
const
  MC_CaptureRegionYPosition_Span           =  3918 SHL 14;
const
  MC_CaptureRegionYPosition_Max            =  3919 SHL 14;
const
  MC_CaptureRegionYPosition_Min            =  3920 SHL 14;
const
  MC_CaptureRegionYPosition_Default        =  3921 SHL 14;
const
  MC_CaptureRegionYPosition_Slider_Default =  3922 SHL 14;
const
  MC__PixelClock_x2                        =  3923 SHL 14;
const
  MC_EffLineDur_Px                         =  3924 SHL 14;
const
  MC__PixelClock                           =  3925 SHL 14;
const
  MC__PLL_fl                               =  3926 SHL 14;
const
  MC__PLL_int                              =  3927 SHL 14;
const
  MC_ObjectName_Slider                     =  3928 SHL 14;
const
  MC_ObjectName_SliderF                    =  3929 SHL 14;
const
  MC_ObjectName_Max                        =  3930 SHL 14;
const
  MC_ObjectName_Min                        =  3931 SHL 14;
const
  MC_ObjectName_Default                    =  3932 SHL 14;
const
  MC_ObjectName_Slider_Default             =  3933 SHL 14;
const
  MC_EffPixelClock                         =  3934 SHL 14;
const
  MC_EffPixelClock_x2                      =  3935 SHL 14;
const
  MC_Brightness_Span                       =  3936 SHL 14;
const
  MC__PageLength_Ln_Check                  =  3937 SHL 14;
const
  MC__LimitedScaleX                        =  3938 SHL 14;
const
  MC__LimitedScaleY                        =  3939 SHL 14;
const
  MC_ImageXSize_Slider                     =  3940 SHL 14;
const
  MC_ImageXSize                            =  3941 SHL 14;
const
  MC_ImageXSize_SliderF                    =  3942 SHL 14;
const
  MC_ImageXSize_Max                        =  3943 SHL 14;
const
  MC_ImageXSize_Min                        =  3944 SHL 14;
const
  MC_ImageXSize_Default                    =  3945 SHL 14;
const
  MC_ImageXSize_Slider_Default             =  3946 SHL 14;
const
  MC_ImageYSize_Slider                     =  3947 SHL 14;
const
  MC_ImageYSize                            =  3948 SHL 14;
const
  MC_ImageYSize_SliderF                    =  3949 SHL 14;
const
  MC_ImageYSize_Max                        =  3950 SHL 14;
const
  MC_ImageYSize_Min                        =  3951 SHL 14;
const
  MC_ImageYSize_Default                    =  3952 SHL 14;
const
  MC_ImageYSize_Slider_Default             =  3953 SHL 14;
const
  MC_ResolutionX_Slider                    =  3954 SHL 14;
const
  MC_ResolutionX                           =  3955 SHL 14;
const
  MC_ResolutionX_SliderF                   =  3956 SHL 14;
const
  MC_ResolutionX_Max                       =  3957 SHL 14;
const
  MC_ResolutionX_Min                       =  3958 SHL 14;
const
  MC_ResolutionX_Default                   =  3959 SHL 14;
const
  MC_ResolutionX_Slider_Default            =  3960 SHL 14;
const
  MC_ResolutionY_Slider                    =  3961 SHL 14;
const
  MC_ResolutionY                           =  3962 SHL 14;
const
  MC_ResolutionY_SliderF                   =  3963 SHL 14;
const
  MC_ResolutionY_Max                       =  3964 SHL 14;
const
  MC_ResolutionY_Min                       =  3965 SHL 14;
const
  MC_ResolutionY_Default                   =  3966 SHL 14;
const
  MC_ResolutionY_Slider_Default            =  3967 SHL 14;
const
  MC_AnalogHSLane                          =  3968 SHL 14;
const
  MC_DigitalHSLane                         =  3969 SHL 14;
const
  MC__ResolutionX_Max                      =  3970 SHL 14;
const
  MC__ResolutionX_Min                      =  3971 SHL 14;
const
  MC__ResolutionY_Max                      =  3972 SHL 14;
const
  MC__ResolutionY_Min                      =  3973 SHL 14;
const
  MC_FieldSizeY                            =  3974 SHL 14;
const
  MC__SyncPhaseLock                        =  3975 SHL 14;
const
  MC__SyncPhaseLock_TRUE                   =            1;
const
  MC__SyncPhaseLock_FALSE                  =            2;
const
  MC__FieldsInSignal                       =  3976 SHL 14;
const
  MC__GrabbedFields                        =  3977 SHL 14;
const
  MC_InterfaceParameters                   =  3978 SHL 14;
const
  MC_InterfaceParameters_DISABLE           =            1;
const
  MC_InterfaceParameters_ENABLE            =            2;
const
  MC_CsyncCtl                              =  3979 SHL 14;
const
  MC_CsyncCtl_NONE                         =            1;
const
  MC_CsyncCtl_TTL                          =            2;
const
  MC_CsyncCtl_DIFF                         =            3;
const
  MC_CsyncCtl_LVDS                         =            4;
const
  MC_CsyncEdge                             =  3980 SHL 14;
const
  MC_CsyncEdge_GOLOW                       =            1;
const
  MC_CsyncEdge_GOHIGH                      =            2;
const
  MC_CsyncLine_HIO                         =            7;
const
  MC_CsyncLine_GATE                        =            8;
const
  MC_TargetFrameRate_mHz                   =  3981 SHL 14;
const
  MC_Monochrome                            =  3982 SHL 14;
const
  MC__BoardType__PICOLO_DILIGENT           =           28;
const
  MC_ResolutionY_Rule                      =  3983 SHL 14;
const
  MC_ResolutionY_FeedbackRule              =  3984 SHL 14;
const
  MC_ResolutionYMaxRule                    =  3985 SHL 14;
const
  MC_OutputFormat_RGB32                    =           11;
const
  MC_CX_VACTIVE                            =  3986 SHL 14;
const
  MC_WISPackages                           =  3987 SHL 14;
const
  MC__WIS_CompressMode                     =  3988 SHL 14;
const
  MC__WIS_CompressMode_MPEG1               =            1;
const
  MC__WIS_CompressMode_MPEG2               =            2;
const
  MC__WIS_CompressMode_H263                =            3;
const
  MC__WIS_CompressMode_MPEG4               =            4;
const
  MC__WIS_CompressMode_MJPEG               =            5;
const
  MC_MPEGPackages                          =  3989 SHL 14;
const
  MC_MPEGXPackage                          =  3990 SHL 14;
const
  MC_ICXYIVLCPackage                       =  3991 SHL 14;
const
  MC_MPEGXTBLPackage                       =  3992 SHL 14;
const
  MC__WIS_SequenceMode                     =  3993 SHL 14;
const
  MC__WIS_SequenceMode_IP                  =            1;
const
  MC__WIS_SequenceMode_IPB                 =            2;
const
  MC_QDEQTBLPackage                        =  3994 SHL 14;
const
  MC_OSDPackage                            =  3995 SHL 14;
const
  MC_WISPackage                            =  3996 SHL 14;
const
  MC_WindowY_SLn                           =  3997 SHL 14;
const
  MC_BEC_StorageType                       =  3998 SHL 14;
const
  MC_BEC_StorageType_PACKED                =            1;
const
  MC_BEC_StorageType_PLANAR                =            2;
const
  MC_BEC_ChromaSwap                        =  3999 SHL 14;
const
  MC_BEC_ChromaSwap_OFF                    =            1;
const
  MC_BEC_ChromaSwap_ON                     =            2;
const
  MC_Vactive_Noblack_Ln                    =  4000 SHL 14;
const
  MC_WindowX_Noblack_Px                    =  4001 SHL 14;
const
  MC_Hactive_Noblack_Px                    =  4002 SHL 14;
const
  MC_ENC_CompressMode                      =  4003 SHL 14;
const
  MC_ENC_CompressMode_MPEG4                =            1;
const
  MC_ENC_CompressMode_MJPEG                =            2;
const
  MC_DIVX_MPEG4                            =  4004 SHL 14;
const
  MC_MS_MPEG4                              =  4005 SHL 14;
const
  MC_ENC_Mjpeg                             =  4006 SHL 14;
const
  MC_ENC_SequenceMode                      =  4007 SHL 14;
const
  MC_ENC_SequenceMode_IONLY                =            1;
const
  MC_ENC_SequenceMode_IPONLY               =            2;
const
  MC_ENC_SequenceMode_IPB                  =            3;
const
  MC_ENC_GopMode                           =  4008 SHL 14;
const
  MC_ENC_GopMode_OPEN                      =            1;
const
  MC_ENC_GopMode_CLOSE                     =            2;
const
  MC_ENC_GopSize                           =  4009 SHL 14;
const
  MC_ENC_GopSizeGranularity                =  4010 SHL 14;
const
  MC_ENC_Mpeg4Mode                         =  4011 SHL 14;
const
  MC_ENC_Mpeg4Mode_DX50                    =            1;
const
  MC_ENC_Mpeg4Mode_MP4S                    =            2;
const
  MC_ENC_DeinterlaceMode                   =  4012 SHL 14;
const
  MC_ENC_SearchRange                       =  4013 SHL 14;
const
  MC_ENC_GopHeaderEn                       =  4014 SHL 14;
const
  MC_ENC_SeqHeaderEn                       =  4015 SHL 14;
const
  MC_ENC_AspectRatio                       =  4016 SHL 14;
const
  MC_MJPEG                                 =  4017 SHL 14;
const
  MC_ENC_SequenceMode_Filter               =  4018 SHL 14;
const
  MC_TCFGVIDEOEX                           =  4019 SHL 14;
const
  MC_TVIDEOCFGFIX                          =  4020 SHL 14;
const
  MC_ENC_CompressMode_MPEG1                =            3;
const
  MC_ENC_CompressMode_MPEG2                =            4;
const
  MC_ENC_CompressMode_H263                 =            5;
const
  MC__MIIR                                 =  4021 SHL 14;
const
  MC_PixelTiming_Filter                    =  4022 SHL 14;
const
  MC_ENC_DeinterlaceMode_INTERPOLATION     =            1;
const
  MC_ENC_DeinterlaceMode_INTERLACED_ENCODING =            2;
const
  MC_ENC_DeinterlaceMode_WEAVING           =            3;
const
  MC_ENC_DeinterlaceMode_BLENDING          =            4;
const
  MC_ENC_DeinterlaceMode_MOTION_DETECTION  =            5;
const
  MC_ENC_DVDCompliant                      =  4023 SHL 14;
const
  MC_ENC_MaxGopSize                        =  4024 SHL 14;
const
  MC_ENC_BRCTRLreserved                    =  4025 SHL 14;
const
  MC_ENC_QMIN                              =  4026 SHL 14;
const
  MC_ENC_QMAX                              =  4027 SHL 14;
const
  MC_ENC_BRCWindowSize                     =  4028 SHL 14;
const
  MC_ENC_MBEnable                          =  4029 SHL 14;
const
  MC_ENC_DupEn                             =  4030 SHL 14;
const
  MC_ENC_BitrateControl                    =  4031 SHL 14;
const
  MC_ENC_BitrateControl_CBR                =            1;
const
  MC_ENC_BitrateControl_CQ                 =            2;
const
  MC_ENC_BitrateControl_IQPQBQ             =            3;
const
  MC_ENC_TargetBitrate                     =  4032 SHL 14;
const
  MC_ENC_CBRConvergingSpeed                =  4033 SHL 14;
const
  MC_ENC_Lambda                            =  4034 SHL 14;
const
  MC_ENC_Q                                 =  4035 SHL 14;
const
  MC_ENC_IQ                                =  4036 SHL 14;
const
  MC_ENC_PQ                                =  4037 SHL 14;
const
  MC_ENC_BQ                                =  4038 SHL 14;
const
  MC_ENC_VBVBuffer                         =  4039 SHL 14;
const
  MC_ENC_PeakBitrate                       =  4040 SHL 14;
const
  MC_ENC_BitrateControl_CONSTANT_BITRATE   =            4;
const
  MC_ENC_BitrateControl_CONSTANT_QUALITY   =            5;
const
  MC_ENC_BitrateControl_FIXED_QUALITY      =            6;
const
  MC_CBR_Filter                            =  4041 SHL 14;
const
  MC_VBR_Filter                            =  4042 SHL 14;
const
  MC_NBR_Filter                            =  4043 SHL 14;
const
  MC_OutputFormat_MJPG                     =           12;
const
  MC_ENC_Mpeg4Mode_Filter                  =  4044 SHL 14;
const
  MC_CompressedStream                      =  4045 SHL 14;
const
  MC_OutputFormat_Filter                   =  4046 SHL 14;
const
  MC_StandardFramesPerSecond               =  4047 SHL 14;
const
  MC_ENC_DropFrame                         =  4048 SHL 14;
const
  MC_ENC_1001FrameRate                     =  4049 SHL 14;
const
  MC_ENC_DropFrame_Fl                      =  4050 SHL 14;
const
  MC_ENC_VSyncBitPlane                     =  4051 SHL 14;
const
  MC_ENC_FingerprintEnable                 =  4052 SHL 14;
const
  MC_ENC_Quality                           =  4053 SHL 14;
const
  MC_ENC_Quality2Q                         =  4054 SHL 14;
const
  MC_DirectShowSupport                     =  4055 SHL 14;
const
  MC_DirectShowSupport_TRUE                =            1;
const
  MC_DirectShowSupport_FALSE               =            2;
const
  MC__HSyncOffsetGate_S                    =  4056 SHL 14;
const
  MC_HSyncOffsetGate_S                     =  4057 SHL 14;
const
  MC__HSyncDly_S                           =  4058 SHL 14;
const
  MC_HSyncDly_S                            =  4059 SHL 14;
const
  MC__TransferredScaleX                    =  4060 SHL 14;
const
  MC_VideoLane                             =  4061 SHL 14;
const
  MC_ScaleX512                             =  4062 SHL 14;
const
  MC__TransferredScaleX512                 =  4063 SHL 14;
const
  MC_ScaleX1000                            =  4064 SHL 14;
const
  MC_ENC_Mpeg4RepeatSeqHead                =  4065 SHL 14;
const
  MC_ColorFormat_DX50                      =           78;
const
  MC_ColorFormat_MP4S                      =           79;
const
  MC_ScaleY256                             =  4066 SHL 14;
const
  MC_ScaleY1000                            =  4067 SHL 14;
const
  MC_ScaleY128                             =  4068 SHL 14;
const
  MC__TransferredImageSizeY                =  4069 SHL 14;
const
  MC__EndOfImageHeight                     =  4070 SHL 14;
const
  MC_FilterDly_ns                          =  4071 SHL 14;
const
  MC__VSyncSearchWindowLeft_TT             =  4072 SHL 14;
const
  MC__VSyncSearchWindowRight_TT            =  4073 SHL 14;
const
  MC__RoundHSyncDly_S                      =  4074 SHL 14;
const
  MC_BufferOffset                          =  4075 SHL 14;
const
  MC_OutputFormat_DX50                     =           13;
const
  MC_OutputFormat_MP4S                     =           14;
const
  MC_VideoBusIdx                           =  4076 SHL 14;
const
  MC_I2cBusIdx                             =  4077 SHL 14;
const
  MC_UnreleasedFeatureFiltering            =  4078 SHL 14;
const
  MC_UnreleasedFeatureFiltering_YES        =            1;
const
  MC_UnreleasedFeatureFiltering_NO         =            2;
const
  MC_TrigDelay_us_Filter                   =  4079 SHL 14;
const
  MC_Even                                  =  4080 SHL 14;
const
  MC_Even_UP                               =            1;
const
  MC_Even_DOWN                             =            2;
const
  MC_Odd                                   =  4081 SHL 14;
const
  MC_Odd_UP                                =            1;
const
  MC_Odd_DOWN                              =            2;
const
  MC_HReference_Filter                     =  4082 SHL 14;
const
  MC_VReference_Filter                     =  4083 SHL 14;
const
  MC_HdriveLine_Filter                     =  4084 SHL 14;
const
  MC_VdriveLine_Filter                     =  4085 SHL 14;
const
  MC_ResetLine_Filter                      =  4086 SHL 14;
const
  MC_AuxResetLine_Filter                   =  4087 SHL 14;
const
  MC_HsyncLine_Filter                      =  4088 SHL 14;
const
  MC_VsyncLine_Filter                      =  4089 SHL 14;
const
  MC_CsyncLine_Filter                      =  4090 SHL 14;
const
  MC_PinCC1_PinCC2_Style_DIFF              =            3;
const
  MC_PinCC3_PinCC4_Style_DIFF              =            3;
const
  MC_CameraControlSignalSet_CSYNC          =           11;
const
  MC_CameraControlSignalSet_HSYNC          =           12;
const
  MC_CameraControlSignalSet_CSYNC_VSYNC    =           13;
const
  MC_CameraControlSignalSet_HSYNC_VSYNC    =           14;
const
  MC_CameraControlSignalSet_HDRIVE         =           15;
const
  MC_CameraControlSignalSet_HDRIVE_VSYNC   =           16;
const
  MC_CameraControlSignalSet_RESET_HSYNC_VSYNC =           17;
const
  MC_CameraControlSignalSet_VSYNC          =           18;
const
  MC_ENC_1001FrameRate_Fl                  =  4091 SHL 14;
const
  MC_ENC_OutputWidth                       =  4092 SHL 14;
const
  MC_ENC_OutputHeight                      =  4093 SHL 14;
const
  MC__SurfaceCount                         =  4094 SHL 14;
const
  MC_NoblackWindowHeight_Ln                =  4095 SHL 14;
const
  MC_NoblackWindowOffset_Ln                =  4096 SHL 14;
const
  MC_ENC_FrameDur_ms                       =  4097 SHL 14;
const
  MC_ENC_FrameDur_ms_Fl                    =  4098 SHL 14;
const
  MC_ENC_FrameDur_us                       =  4099 SHL 14;
const
  MC_ENC_FrameDur_us_Fl                    =  4100 SHL 14;
const
  MC_PixelClkLine_Filter                   =  4101 SHL 14;
const
  MC_ENC_HSubOffset                        =  4102 SHL 14;
const
  MC_ENC_HScaleFactor                      =  4103 SHL 14;
const
  MC_ENC_VScaleFactor                      =  4104 SHL 14;
const
  MC_ENC_VSubOffset                        =  4105 SHL 14;
const
  MC_BitrateControl                        =  4106 SHL 14;
const
  MC_BitrateControl_CBR                    =            1;
const
  MC_BitrateControl_VBR                    =            2;
const
  MC_BitrateControl_Filter                 =  4107 SHL 14;
const
  MC_AverageBitrate                        =  4108 SHL 14;
const
  MC_AverageBitrate_Filter                 =  4109 SHL 14;
const
  MC_VideoQuality                          =  4110 SHL 14;
const
  MC_VideoQuality_Filter                   =  4111 SHL 14;
const
  MC__Category_Compression                 =           45;
const
  MC__AverageBitrateFeedback               =  4112 SHL 14;
const
  MC_SequenceMode                          =  4113 SHL 14;
const
  MC_SequenceMode_IONLY                    =            1;
const
  MC_SequenceMode_IPONLY                   =            2;
const
  MC_SequenceMode_IPB                      =            3;
const
  MC_SequenceMode_Filter                   =  4114 SHL 14;
const
  MC_KeyFrameInterval                      =  4115 SHL 14;
const
  MC_KeyFrameInterval_Filter               =  4116 SHL 14;
const
  MC_CaptureRegionYSize_Ln                 =  4117 SHL 14;
const
  MC_GopSize                               =  4118 SHL 14;
const
  MC_GopSize_Filter                        =  4119 SHL 14;
const
  MC_CaptureRegionXSize_Px                 =  4120 SHL 14;
const
  MC_ContrastSliderSlope1                  =  4121 SHL 14;
const
  MC_ObjectName_Slope                      =  4122 SHL 14;
const
  MC_Contrast_Slope                        =  4123 SHL 14;
const
  MC_Contrast_Offset                       =  4124 SHL 14;
const
  MC_Saturation_Slope                      =  4125 SHL 14;
const
  MC_Saturation_Offset                     =  4126 SHL 14;
const
  MC_Brightness_Slope                      =  4127 SHL 14;
const
  MC_Brightness_Offset                     =  4128 SHL 14;
const
  MC_SubChIdx                              =  4129 SHL 14;
const
  MC_VHSync                                =  4130 SHL 14;
const
  MC_VHSync_NO                             =            1;
const
  MC_VHSync_YES                            =            2;
const
  MC_CXEND_Record                          =  4131 SHL 14;
const
  MC_FRONTEND_Record                       =  4132 SHL 14;
const
  MC_CXEND_Signature                       =  4133 SHL 14;
const
  MC_FRONTEND_Signature                    =  4134 SHL 14;
const
  MC__FRONTEND_Condition                   =  4135 SHL 14;
const
  MC__CXEND_Condition                      =  4136 SHL 14;
const
  MC_TargetFrameRate_Hz_Feedback           =  4137 SHL 14;
const
  MC_CameraControlSignalSet_RESET_HSYNC    =           19;
const
  MC_MaxAnalysisLead                       =  4138 SHL 14;
const
  MC__MaxAnalysisLead                      =  4139 SHL 14;
const
  MC__SamplingBufferSize_Ln                =  4140 SHL 14;
const
  MC__Category_Master_Sync_Control         =           46;
const
  MC_ConnectorCheckSet                     =  4141 SHL 14;
const
  MC_VideoBridgeCheckSet                   =  4142 SHL 14;
const
  MC_VrefAft_Ln                            =  4143 SHL 14;
const
  MC_Vsync2Vref_H                          =  4144 SHL 14;
const
  MC_Effective_TrigDelay_100ns             =  4145 SHL 14;
const
  MC__EXPOn2STROff_100ns                   =  4146 SHL 14;
const
  MC__STDUR_100ns                          =  4147 SHL 14;
const
  MC__STPOS_DSB_100ns                      =  4148 SHL 14;
const
  MC__STPOS_ASB_100ns                      =  4149 SHL 14;
const
  MC_VideoTerminator                       =  4150 SHL 14;
const
  MC_VideoTerminator_OFF                   =            1;
const
  MC_VideoTerminator_ON                    =            2;
const
  MC_VideoTerminator_JUMPER                =            3;
const
  MC_GopStructure                          =  4151 SHL 14;
const
  MC_GopStructure_IONLY                    =            1;
const
  MC_GopStructure_IPONLY                   =            2;
const
  MC_GopStructure_IPB                      =            3;
const
  MC_GopStructure_Filter                   =  4152 SHL 14;
const
  MC_BCC_VideoOutputSelector               =  4153 SHL 14;
const
  MC_VideoOuputSelection                   =  4154 SHL 14;
const
  MC_VideoOuputSelection_VID1              =            1;
const
  MC_VideoOuputSelection_VID2              =            2;
const
  MC_VideoOuputSelection_VID3              =            3;
const
  MC_VideoOuputSelection_VID4              =            4;
const
  MC_VideoOuputSelection_CASCADE           =            5;
const
  MC_VideoOutputSelection                  =  4155 SHL 14;
const
  MC_VideoOutputSelection_VID1             =            1;
const
  MC_VideoOutputSelection_VID2             =            2;
const
  MC_VideoOutputSelection_VID3             =            3;
const
  MC_VideoOutputSelection_VID4             =            4;
const
  MC_VideoOutputSelection_CASCADE          =            5;
const
  MC_DetectedSignalStrength                =  4156 SHL 14;
const
  MC_DetectedSignalStrength_NORMAL         =            1;
const
  MC_DetectedSignalStrength_HIGH           =            2;
const
  MC_DetectedSignalStrength_LOW            =            3;
const
  MC_PinSMIO1_Source_STROBE_INV            =            5;
const
  MC_PinSMIO2_Source_STROBE_INV            =            5;
const
  MC_PinSTX_Source_ON                      =            5;
const
  MC_PinSTX_Source_OFF                     =            6;
const
  MC_PinSTY_Source_ON                      =            5;
const
  MC_PinSTY_Source_OFF                     =            6;
const
  MC_PinSMIO3_Source_STROBE_INV            =            5;
const
  MC_PinSMIO4_Source_STROBE_INV            =            5;
const
  MC_StrobeLevel_Filter                    =  4157 SHL 14;
const
  MC_Hactive_Nominal_Px                    =  4158 SHL 14;
const
  MC_DetectedSignalStrength_TOO_HIGH       =            4;
const
  MC_DetectedSignalStrength_TOO_LOW        =            5;
const
  MC_BEC_SrcCAPM_CUp                       =            3;
const
  MC_BEC_SrcCAPM_CDown                     =            4;
const
  MC_FEC_CAPM_CUp                          =            3;
const
  MC_FEC_CAPM_CDown                        =            4;
const
  MC__DelayedStandardFrameRate_Hz          =  4159 SHL 14;
const
  MC__Delayed_WindowY_Ln                   =  4160 SHL 14;
const
  MC_InputState_DISCONNECTED               =            6;
const
  MC_FEC_SWITCH                            =  4161 SHL 14;
const
  MC_FEC_SWITCH_Forbidden                  =            1;
const
  MC_FEC_SWITCH_Allowed                    =            2;
const
  MC__ImageSizeX                           =  4162 SHL 14;
const
  MC__ImageSizeY                           =  4163 SHL 14;
const
  MC__RFields                              =  4164 SHL 14;
const
  MC__AverageBitratePoints                 =  4165 SHL 14;
const
  MC__DownScalingFactor                    =  4166 SHL 14;
const
  MC__AvgBitrateRedFactor                  =  4167 SHL 14;
const
  MC___AvgBitrateRedFactor                 =  4168 SHL 14;
const
  MC_HardwareTriggerNeeded                 =  4169 SHL 14;
const
  MC_HardwareTriggerNeeded_NO              =            1;
const
  MC_HardwareTriggerNeeded_YES             =            2;
const
  MC_CaptureStrategy                       =  4170 SHL 14;
const
  MC_CaptureStrategy_SPEED                 =            1;
const
  MC_CaptureStrategy_UNITY                 =            2;
const
  MC_ResolutionXMinRule                    =  4171 SHL 14;
const
  MC_ResolutionYMinRule                    =  4172 SHL 14;
const
  MC_ENC_HCropping                         =  4173 SHL 14;
const
  MC_ENC_HCropping_YES                     =            1;
const
  MC_ENC_HCropping_NO                      =            2;
const
  MC_ENC_VCropping                         =  4174 SHL 14;
const
  MC_ENC_VCropping_YES                     =            1;
const
  MC_ENC_VCropping_NO                      =            2;
const
  MC_ENC_LastLine                          =  4175 SHL 14;
const
  MC_CameraControlSignalSet_UNAVAILABLE    =           20;
const
  MC_CameraControlSignalSet_UNAVAILABLE_PxxRA_M =           21;
const
  MC_CameraControlSignalSet_UNAVAILABLE_PxxRM_1 =           22;
const
  MC_CameraControlSignalSet_UNAVAILABLE_PxxRM_2 =           23;
const
  MC__RST_100ns                            =  4176 SHL 14;
const
  MC__RST_E                                =  4177 SHL 14;
const
  MC_HID                                   =  4178 SHL 14;
const
  MC_VID                                   =  4179 SHL 14;
const
  MC_HVID                                  =  4180 SHL 14;
const
  MC_VrefSearchWindowLeft_ms               =  4181 SHL 14;
const
  MC_VrefSearchWindowRight_ms              =  4182 SHL 14;
const
  MC_Vsync2Vref_ms                         =  4183 SHL 14;
const
  MC_VSyncSearchWindowLeft_ms              =  4184 SHL 14;
const
  MC_VSyncSearchWindowRight_ms             =  4185 SHL 14;
const
  MC_StandardFrameRate_mHz_Int             =  4186 SHL 14;
const
  MC_StandardFrameRate_Hz_Int              =  4187 SHL 14;
const
  MC__VideoDecoderType                     =  4188 SHL 14;
const
  MC__VideoDecoderType_D3                  =            1;
const
  MC__VideoDecoderType_CLASSIC             =            2;
const
  MC_CaptureRate_1                         =  4189 SHL 14;
const
  MC_CaptureRate_10                        =  4190 SHL 14;
const
  MC_CaptureRate_11                        =  4191 SHL 14;
const
  MC_CaptureRate_12                        =  4192 SHL 14;
const
  MC_CaptureRate_8                         =  4193 SHL 14;
const
  MC_CaptureRate_3                         =  4194 SHL 14;
const
  MC_CaptureRate_4                         =  4195 SHL 14;
const
  MC_CaptureRate_5                         =  4196 SHL 14;
const
  MC_CaptureRate_7                         =  4197 SHL 14;
const
  MC_CaptureRate_6                         =  4198 SHL 14;
const
  MC_CaptureRate_2                         =  4199 SHL 14;
const
  MC_CaptureRate_9                         =  4200 SHL 14;
const
  MC_HCsyncBfr_Px                          =  4201 SHL 14;
const
  MC_HCsyncAft_Px                          =  4202 SHL 14;
const
  MC_VideoSlewTime_ns                      =  4203 SHL 14;
const
  MC__LeftMargin_Max_1000                  =  4204 SHL 14;
const
  MC__TopMargin_Max_1000                   =  4205 SHL 14;
const
  MC__CaptureRateControl                   =  4206 SHL 14;
const
  MC_SignalStrength                        =  4207 SHL 14;
const
  MC_SignalStrength_NORMAL                 =            1;
const
  MC_SignalStrength_STRONG                 =            2;
const
  MC_SignalStrength_WEAK                   =            3;
const
  MC_SignalStrength_TOO_STRONG             =            4;
const
  MC_SignalStrength_TOO_WEAK               =            5;
const
  MC__FPGA_Model_HARMONY_3_1               =            4;
const
  MC_MicroBlazeIx                          =  4208 SHL 14;
const
  MC_InputFunction_FREE                    =           15;
const
  MC_InputFunction_RESERVED                =           16;
const
  MC_InputState_OPEN                       =            7;
const
  MC_InputStyle_AUTO                       =            9;
const
  MC_InputStyle_RELAY                      =           10;
const
  MC_InputStyle_5V                         =           11;
const
  MC_InputStyle_12V                        =           12;
const
  MC_InputFilter_FILTER_10ms               =            6;
const
  MC_InputFilter_FILTER_100ms              =            7;
const
  MC_OutputFunction_FREE                   =           15;
const
  MC_OutputStyle_SSRLY                     =           11;
const
  MC_ConnectorName_PROFESSIONAL_IO         =           27;
const
  MC_WatchdogResetsCount_OLD               =  4209 SHL 14;
const
  MC_StartupTimeout_128ms                  =  4210 SHL 14;
const
  MC_ApplicationTimeout_128ms              =  4211 SHL 14;
const
  MC_GainY_VB                              =  4212 SHL 14;
const
  MC_GainU_VB                              =  4213 SHL 14;
const
  MC_GainV_VB                              =  4214 SHL 14;
const
  MC_Offset_VB                             =  4215 SHL 14;
const
  MC_GainY_CX                              =  4216 SHL 14;
const
  MC_GainU_CX                              =  4217 SHL 14;
const
  MC_GainV_CX                              =  4218 SHL 14;
const
  MC_Offset_CX                             =  4219 SHL 14;
const
  MC__SIZY_PerField                        =  4220 SHL 14;
const
  MC__Tk_X_Px                              =  4221 SHL 14;
const
  MC__Category__ADR_Process                =           47;
const
  MC__ADR_GrabSizeX_Component              =  4222 SHL 14;
const
  MC_OffsetY_VB                            =  4223 SHL 14;
const
  MC_OffsetY_CX                            =  4224 SHL 14;
const
  MC_GainY_AfterCX                         =  4225 SHL 14;
const
  MC_GainY_AfterVB                         =  4226 SHL 14;
const
  MC_GainU_AfterCX                         =  4227 SHL 14;
const
  MC_GainU_AfterVB                         =  4228 SHL 14;
const
  MC_GainV_AfterCX                         =  4229 SHL 14;
const
  MC_GainV_AfterVB                         =  4230 SHL 14;
const
  MC_OffsetY_AfterCX                       =  4231 SHL 14;
const
  MC_OffsetY_AfterVB                       =  4232 SHL 14;
const
  MC__GainY_AfterCX                        =  4233 SHL 14;
const
  MC__GainY_AfterVB                        =  4234 SHL 14;
const
  MC__GainU_AfterCX                        =  4235 SHL 14;
const
  MC__GainU_AfterVB                        =  4236 SHL 14;
const
  MC__GainV_AfterCX                        =  4237 SHL 14;
const
  MC__GainV_AfterVB                        =  4238 SHL 14;
const
  MC__OffsetY_AfterCX                      =  4239 SHL 14;
const
  MC__OffsetY_AfterVB                      =  4240 SHL 14;
const
  MC__CSIO_CSIO1Out_LOW                    =            8;
const
  MC__CSIO_CSIO2Out_LOW                    =            8;
const
  MC__CSIO_CSIO3Out_LOW                    =            8;
const
  MC__CSIO_CSIO4Out_LOW                    =            8;
const
  MC__STR_SREF                             =  4241 SHL 14;
const
  MC__STR_SREF_TSB                         =            1;
const
  MC__STR_SREF_CSB                         =            2;
const
  MC_TrigEdge_Filter                       =  4242 SHL 14;
const
  MC_EndTrigEdge_Filter                    =  4243 SHL 14;
const
  MC_Camera_CAMERA_sPAL                    =          214;
const
  MC_Camera_CAMERA_sNTSC                   =          215;
const
  MC_Camera_CAMERA_sCCIR                   =          216;
const
  MC_Camera_CAMERA_sEIA                    =          217;
const
  MC_Standard_sPAL                         =            7;
const
  MC_Standard_sNTSC                        =            8;
const
  MC_FEC_VSTD_sPAL_SQ                      =            9;
const
  MC_FEC_VSTD_sNTSC_SQ                     =           10;
const
  MC_FEC_VSTD_sPAL_BROAD                   =           11;
const
  MC_FEC_VSTD_sNTSC_BROAD                  =           12;
const
  MC_Board_Name                            =  4244 SHL 14;
const
  MC_Board_Name_Unknown                    =            1;
const
  MC_Board_Name_Alert                      =            2;
const
  MC_Board_Name_Diligent                   =            3;
const
  MC_Board_Family                          =  4245 SHL 14;
const
  MC_Board_Family_Unknown                  =            1;
const
  MC_CaptureStrategy_Filter                =  4246 SHL 14;
const
  MC__VBC_LBFR_GEOM                        =  4247 SHL 14;
const
  MC_LUT_Filter                            =  4248 SHL 14;
const
  MC_LUT_nbr                               =  4249 SHL 14;
const
  MC__ImageSizeX_Interface                 =  4250 SHL 14;
const
  MC__ImageSizeY_Interface                 =  4251 SHL 14;
const
  MC_WhiteCrush                            =  4252 SHL 14;
const
  MC_WhiteCrush_ON                         =            1;
const
  MC_WhiteCrush_OFF                        =            2;
const
  MC__BoardType__PICOLO_TYMO               =           29;
const
  MC_Connector_YC1                         =          124;
const
  MC_Connector_YC2                         =          125;
const
  MC_Connector_YC3                         =          126;
const
  MC_Connector_YC4                         =          127;
const
  MC_VideoOutputSelection_VID5             =            6;
const
  MC_VideoOutputSelection_VID6             =            7;
const
  MC_VideoOutputSelection_VID7             =            8;
const
  MC_VideoOutputSelection_VID8             =            9;
const
  MC_VideoOutputSelection_VID9             =           10;
const
  MC_VideoOutputSelection_VID10            =           11;
const
  MC_VideoOutputSelection_VID11            =           12;
const
  MC_VideoOutputSelection_VID12            =           13;
const
  MC_VideoOutputSelection_VID13            =           14;
const
  MC_VideoOutputSelection_VID14            =           15;
const
  MC_VideoOutputSelection_VID15            =           16;
const
  MC_VideoOutputSelection_VID16            =           17;
const
  MC__Range                                =  4253 SHL 14;
const
  MC__NormalContrast                       =  4254 SHL 14;
const
  MC_AutoAgc                               =  4255 SHL 14;
const
  MC_AutoAgc_ENABLED                       =            1;
const
  MC_AutoAgc_DISABLED                      =            2;
const
  MC_AutoVga                               =  4256 SHL 14;
const
  MC_AutoVga_ENABLED                       =            1;
const
  MC_AutoVga_DISABLED                      =            2;
const
  MC__CDC_MTAP_OneTimeSlot                 =            3;
const
  MC__CDC_MTAP_TwoTimeSlots_MultiplexedBits =            4;
const
  MC__CDC_MTAP_TwoTimeSlots_MultiplexedTaps =            5;
const
  MC__CDC_MTAP_ThreeTimeSlots_MultiplexedTaps =            6;
const
  MC__CDC_ALIGN_Bit8                       =            4;
const
  MC__CDC_ALIGN_Bit10                      =            5;
const
  MC__CDC_ALIGN_Bit12                      =            6;
const
  MC__CDC_ALIGN_Bit14                      =            7;
const
  MC__CDC_ALIGN_Bit16                      =            8;
const
  MC__CDA_TRAIL_LD                         =  4257 SHL 14;
const
  MC__CDA_LEAD1                            =  4258 SHL 14;
const
  MC__CDA_TRAIL_INI1                       =  4259 SHL 14;
const
  MC_TRAIL_MODULO                          =  4260 SHL 14;
const
  MC__CDA_LEAD2                            =  4261 SHL 14;
const
  MC__CDA_TRAIL_INI2                       =  4262 SHL 14;
const
  MC__CDA_LEAD3                            =  4263 SHL 14;
const
  MC__CDA_TRAIL_INI3                       =  4264 SHL 14;
const
  MC__CDA_LEAD4                            =  4265 SHL 14;
const
  MC__CDA_TRAIL_INI4                       =  4266 SHL 14;
const
  MC__CDA_TRAIL_PADDING                    =  4267 SHL 14;
const
  MC__CDA_TRAIL_PADDING_OneAssemblyCycle   =            1;
const
  MC__CDA_TRAIL_PADDING_TwoAssemblyCycle   =            2;
const
  MC_TapConfiguration                      =  4268 SHL 14;
const
  MC_TapConfiguration_BASE_1T8             =            1;
const
  MC_TapConfiguration_BASE_1T10            =            2;
const
  MC_TapConfiguration_BASE_1T12            =            3;
const
  MC_TapConfiguration_BASE_1T14            =            4;
const
  MC_TapConfiguration_BASE_1T16            =            5;
const
  MC_TapConfiguration_BASE_1T24            =            6;
const
  MC_TapConfiguration_BASE_2T8             =            7;
const
  MC_TapConfiguration_BASE_2T10            =            8;
const
  MC_TapConfiguration_BASE_2T12            =            9;
const
  MC_TapConfiguration_BASE_3T8             =           10;
const
  MC_TapConfiguration_BASE_1T30B2          =           11;
const
  MC_TapConfiguration_BASE_1T36B2          =           12;
const
  MC_TapConfiguration_BASE_1T42B2          =           13;
const
  MC_TapConfiguration_BASE_1T48B2          =           14;
const
  MC_TapConfiguration_BASE_2T14B2          =           15;
const
  MC_TapConfiguration_BASE_2T16B2          =           16;
const
  MC_TapConfiguration_BASE_2T24B2          =           17;
const
  MC_TapConfiguration_BASE_3T10B2          =           18;
const
  MC_TapConfiguration_BASE_3T12B2          =           19;
const
  MC_TapConfiguration_BASE_3T14B2          =           20;
const
  MC_TapConfiguration_BASE_3T16B2          =           21;
const
  MC_TapConfiguration_BASE_4T8B2           =           22;
const
  MC_TapConfiguration_BASE_4T10B2          =           23;
const
  MC_TapConfiguration_BASE_4T12B2          =           24;
const
  MC_TapConfiguration_BASE_1T24B3          =           25;
const
  MC_TapConfiguration_BASE_1T30B3          =           26;
const
  MC_TapConfiguration_BASE_1T36B3          =           27;
const
  MC_TapConfiguration_BASE_1T42B3          =           28;
const
  MC_TapConfiguration_BASE_1T48B3          =           29;
const
  MC_TapConfiguration_MEDIUM_1T30          =           30;
const
  MC_TapConfiguration_MEDIUM_1T36          =           31;
const
  MC_TapConfiguration_MEDIUM_1T42          =           32;
const
  MC_TapConfiguration_MEDIUM_1T48          =           33;
const
  MC_TapConfiguration_MEDIUM_2T14          =           34;
const
  MC_TapConfiguration_MEDIUM_2T16          =           35;
const
  MC_TapConfiguration_MEDIUM_2T24          =           36;
const
  MC_TapConfiguration_MEDIUM_3T10          =           37;
const
  MC_TapConfiguration_MEDIUM_3T12          =           38;
const
  MC_TapConfiguration_MEDIUM_3T14          =           39;
const
  MC_TapConfiguration_MEDIUM_3T16          =           40;
const
  MC_TapConfiguration_MEDIUM_4T8           =           41;
const
  MC_TapConfiguration_MEDIUM_4T10          =           42;
const
  MC_TapConfiguration_MEDIUM_4T12          =           43;
const
  MC_TapConfiguration_MEDIUM_8T8B2         =           44;
const
  MC_TapConfiguration_FULL_8T8             =           45;
const
  MC_TapConfiguration_Filter               =  4269 SHL 14;
const
  MC__GCL_CLCFG_FULL                       =            3;
const
  MC_WIS_DeinterlaceMode                   =  4270 SHL 14;
const
  MC_WIS_DeinterlaceMode_INTERPOLATION     =            1;
const
  MC_WIS_DeinterlaceMode_WEAVING           =            2;
const
  MC_WIS_DeinterlaceMode_BLENDING          =            3;
const
  MC_CL_ConfigurationClass                 =  4271 SHL 14;
const
  MC_CL_ConfigurationClass_BASE            =            1;
const
  MC_CL_ConfigurationClass_MEDIUM          =            2;
const
  MC_CL_ConfigurationClass_FULL            =            3;
const
  MC_CL_BitDepth                           =  4272 SHL 14;
const
  MC_TapGeometry                           =  4273 SHL 14;
const
  MC_TapGeometry_1X                        =            1;
const
  MC_TapGeometry_1X2                       =            2;
const
  MC_TapGeometry_2X                        =            3;
const
  MC_TapGeometry_2XE                       =            4;
const
  MC_TapGeometry_2XM                       =            5;
const
  MC_TapGeometry_1X3                       =            6;
const
  MC_TapGeometry_3X                        =            7;
const
  MC_TapGeometry_1X4                       =            8;
const
  MC_TapGeometry_4X                        =            9;
const
  MC_TapGeometry_2X2                       =           10;
const
  MC_TapGeometry_2X2E                      =           11;
const
  MC_TapGeometry_2X2M                      =           12;
const
  MC_TapGeometry_1X8                       =           13;
const
  MC_TapGeometry_8X                        =           14;
const
  MC_TapGeometry_4X2                       =           15;
const
  MC_TapGeometry_1X_1Y                     =           16;
const
  MC_TapGeometry_1X2_1Y                    =           17;
const
  MC_TapGeometry_2X_1Y                     =           18;
const
  MC_TapGeometry_2XE_1Y                    =           19;
const
  MC_TapGeometry_2XM_1Y                    =           20;
const
  MC_TapGeometry_1X_1Y2                    =           21;
const
  MC_TapGeometry_1X_2YE                    =           22;
const
  MC_TapGeometry_1X3_1Y                    =           23;
const
  MC_TapGeometry_3X_1Y                     =           24;
const
  MC_TapGeometry_1X4_1Y                    =           25;
const
  MC_TapGeometry_4X_1Y                     =           26;
const
  MC_TapGeometry_2X2_1Y                    =           27;
const
  MC_TapGeometry_2X2E_1Y                   =           28;
const
  MC_TapGeometry_2X2M_1Y                   =           29;
const
  MC_TapGeometry_1X2_2YE                   =           30;
const
  MC_TapGeometry_2X_2YE                    =           31;
const
  MC_TapGeometry_2XE_2YE                   =           32;
const
  MC_TapGeometry_2XM_2YE                   =           33;
const
  MC_TapGeometry_1X8_1Y                    =           34;
const
  MC_TapGeometry_8X_1Y                     =           35;
const
  MC_TapGeometry_4X2_1Y                    =           36;
const
  MC_TapGeometry_2X2E_2YE                  =           37;
const
  MC_CompressionType                       =  4274 SHL 14;
const
  MC_CompressionType_NONE                  =            1;
const
  MC_CompressionType_DX50                  =            2;
const
  MC_CompressionType_MP4S                  =            3;
const
  MC_TapGeometry_Filter                    =  4275 SHL 14;
const
  MC_CL_Tapcount                           =  4276 SHL 14;
const
  MC_AssyConfig                            =  4277 SHL 14;
const
  MC_AssyConfig_SINGLE                     =            1;
const
  MC_AssyConfig_DUALXPAIR                  =            2;
const
  MC_AssyConfig_DUALXTAP                   =            3;
const
  MC_AssyConfig_DUALXEND                   =            4;
const
  MC_AssyConfig_DUALXMID                   =            5;
const
  MC_AssyConfig_DUALYPAIR                  =            6;
const
  MC_AssyConfig_DUALYEND                   =            7;
const
  MC_AssyConfig_TRIPLE                     =            8;
const
  MC_AssyConfig_QUADXTAP                   =            9;
const
  MC_AssyConfig_QUADXPAIRTAP               =           10;
const
  MC_AssyConfig_QUADXPAIREND               =           11;
const
  MC_AssyConfig_QUADXPAIRMID               =           12;
const
  MC_AssyConfig_OCTALXTAP                  =           13;
const
  MC_AssyConfig_QUADXQUAD                  =           14;
const
  MC_AssyConfig_MEDIUM_2T24_1X2_1Y         =           15;
const
  MC_CL_PixelComponentBitDepth             =  4278 SHL 14;
const
  MC__CDC_ISIZE_BIT8                       =           14;
const
  MC__CDC_ISIZE_BIT10                      =           15;
const
  MC__CDC_ISIZE_BIT12                      =           16;
const
  MC__CDC_ISIZE_BIT14                      =           17;
const
  MC__CDC_ISIZE_BIT16                      =           18;
const
  MC__CDC_ISIZE_BIT10T2                    =           19;
const
  MC__CDC_ISIZE_BIT12T2                    =           20;
const
  MC__CDC_ISIZE_BIT14T2                    =           21;
const
  MC__CDC_ISIZE_BIT16T2                    =           22;
const
  MC_AssyPixelComponentSize                =  4279 SHL 14;
const
  MC_AssyComponentCount                    =  4280 SHL 14;
const
  MC_AssyConfig_INVALID                    =           16;
const
  MC__Category_InputDataProcessing         =           48;
const
  MC_FifoPitchOffset                       =  4281 SHL 14;
const
  MC_FifoSizeOffset                        =  4282 SHL 14;
const
  MC_FifoPitch                             =  4283 SHL 14;
const
  MC_FifoSize                              =  4284 SHL 14;
const
  MC__Category_WindowControllers           =           49;
const
  MC__SFA01                                =  4285 SHL 14;
const
  MC__SFA02                                =  4286 SHL 14;
const
  MC__SFA03                                =  4287 SHL 14;
const
  MC__SFA04                                =  4288 SHL 14;
const
  MC__SFA05                                =  4289 SHL 14;
const
  MC__SFA06                                =  4290 SHL 14;
const
  MC__SFA07                                =  4291 SHL 14;
const
  MC__SFA08                                =  4292 SHL 14;
const
  MC_TapConfiguration_INVALID              =           46;
const
  MC__CDA_INDEX_MAP                        =  4293 SHL 14;
const
  MC__CWR_INDEX_MAP                        =  4294 SHL 14;
const
  MC__Lead_W1                              =  4295 SHL 14;
const
  MC__Lead_W2                              =  4296 SHL 14;
const
  MC__Lead_W3                              =  4297 SHL 14;
const
  MC__Lead_W4                              =  4298 SHL 14;
const
  MC__Lead_D1                              =  4299 SHL 14;
const
  MC__Lead_D2                              =  4300 SHL 14;
const
  MC__Lead_D3                              =  4301 SHL 14;
const
  MC__Lead_D4                              =  4302 SHL 14;
const
  MC__CDA_P1INDEX                          =  4303 SHL 14;
const
  MC__CDA_P2INDEX                          =  4304 SHL 14;
const
  MC__CDA_P3INDEX                          =  4305 SHL 14;
const
  MC__CDA_P4INDEX                          =  4306 SHL 14;
const
  MC__AssyPerWindow                        =  4307 SHL 14;
const
  MC_CL_TimeSlots                          =  4308 SHL 14;
const
  MC_ASW_1                                 =  4309 SHL 14;
const
  MC__ASW_1                                =  4310 SHL 14;
const
  MC__ASW_2                                =  4311 SHL 14;
const
  MC__ASW_3                                =  4312 SHL 14;
const
  MC__ASW_4                                =  4313 SHL 14;
const
  MC__RightMargin_Px                       =  4314 SHL 14;
const
  MC_FifoWindowOffsetX_Px                  =  4315 SHL 14;
const
  MC_FifoWindowOffsetY_Ln                  =  4316 SHL 14;
const
  MC_OffsetX_Px_MinBound                   =  4317 SHL 14;
const
  MC_OffsetX_Px_MaxBound                   =  4318 SHL 14;
const
  MC_OffsetY_Ln_MinBound                   =  4319 SHL 14;
const
  MC_OffsetY_Ln_MaxBound                   =  4320 SHL 14;
const
  MC_ImageLeadPadding                      =  4321 SHL 14;
const
  MC_ImageTrailPadding                     =  4322 SHL 14;
const
  MC_XferSizeX                             =  4323 SHL 14;
const
  MC_BufferOffsetX                         =  4324 SHL 14;
const
  MC_XferSizeY                             =  4325 SHL 14;
const
  MC_BufferOffsetY                         =  4326 SHL 14;
const
  MC_FifoOffsetX_Unaligned                 =  4327 SHL 14;
const
  MC_FifoBufferSkew                        =  4328 SHL 14;
const
  MC_FifoBufferHomeAddress                 =  4329 SHL 14;
const
  MC_TrigEdge_GOOPEN                       =            5;
const
  MC_TrigEdge_OPEN                         =            6;
const
  MC_EndTrigEdge_GOOPEN                    =            5;
const
  MC_EndTrigEdge_OPEN                      =            6;
const
  MC__PllMax                               =  4330 SHL 14;
const
  MC__PllMaxOffset                         =  4331 SHL 14;
const
  MC_MltpLineAnlShift                      =  4332 SHL 14;
const
  MC_WoiOrgX                               =  4333 SHL 14;
const
  MC_WOI_GrabWindow_Filter                 =  4334 SHL 14;
const
  MC_WoiOrgY                               =  4335 SHL 14;
const
  MC_WoiWidth                              =  4336 SHL 14;
const
  MC_WoiHeight                             =  4337 SHL 14;
const
  MC_CameraWoiBankSetup                    =  4338 SHL 14;
const
  MC_CameraWoiBankSelect                   =  4339 SHL 14;
const
  MC_GrabWindow_WOI                        =            6;
const
  MC_GrabWindow_Filter                     =  4340 SHL 14;
const
  MC__Category_CLCAM_Interface             =           50;
const
  MC_CLCAM_Topology                        =  4341 SHL 14;
const
  MC_CLCAM_Topology_SINGLE                 =            1;
const
  MC_CLCAM_Topology_DUALXPAIR              =            2;
const
  MC_CLCAM_Topology_DUALXTAP               =            3;
const
  MC_CLCAM_Topology_DUALXEND               =            4;
const
  MC_CLCAM_Topology_DUALXMID               =            5;
const
  MC_CLCAM_Topology_DUALYPAIR              =            6;
const
  MC_CLCAM_Topology_DUALYEND               =            7;
const
  MC_CLCAM_Topology_TRIPLE                 =            8;
const
  MC_CLCAM_Topology_QUADXTAP               =            9;
const
  MC_CLCAM_Topology_QUADXPAIRTAP           =           10;
const
  MC_CLCAM_Topology_QUADXPAIREND           =           11;
const
  MC_CLCAM_Topology_QUADXPAIRMID           =           12;
const
  MC_CLCAM_Topology_TRIPLEXPAIR            =           13;
const
  MC_CLCAM_DataWidth                       =  4342 SHL 14;
const
  MC_CLCAM_ClockFreq_KHz                   =  4343 SHL 14;
const
  MC_CLCAM_FramePeriod                     =  4344 SHL 14;
const
  MC_CLCAM_FrameBlanking                   =  4345 SHL 14;
const
  MC_CLCAM_LinePeriod                      =  4346 SHL 14;
const
  MC_CLCAM_LineBlanking                    =  4347 SHL 14;
const
  MC_CLCAM_LineInitialdelay                =  4348 SHL 14;
const
  MC_CLCAM_LineCount                       =  4349 SHL 14;
const
  MC_CLCAM_DataInitialDelay                =  4350 SHL 14;
const
  MC_CLCAM_Databurst                       =  4351 SHL 14;
const
  MC_CLCAM_DataBurstGap                    =  4352 SHL 14;
const
  MC_CLCAM_DataBurstCount                  =  4353 SHL 14;
const
  MC_CLCAM_DataGating                      =  4354 SHL 14;
const
  MC_CLCAM_LVALNone                        =  4355 SHL 14;
const
  MC_CLCAM_FVALNone                        =  4356 SHL 14;
const
  MC_CLCAM_DataIncrement                   =  4357 SHL 14;
const
  MC_CLCAM_DataArrangement                 =  4358 SHL 14;
const
  MC_CLCAM_OPModeFreeRun                   =  4359 SHL 14;
const
  MC_CLCAM_OPModeExpWidth                  =  4360 SHL 14;
const
  MC_CLCAM_AsyncResetPin                   =  4361 SHL 14;
const
  MC_CLCAM_Power                           =  4362 SHL 14;
const
  MC_MaxWoiBanks                           =  4363 SHL 14;
const
  MC_MaxWoiPerBank                         =  4364 SHL 14;
const
  MC_WoiGranularity                        =  4365 SHL 14;
const
  MC_ComponentStorageOrder                 =  4366 SHL 14;
const
  MC_ComponentStorageOrder_DIRECT          =            1;
const
  MC_ComponentStorageOrder_REVERSE         =            2;
const
  MC_InputFilter_OFF                       =            8;
const
  MC_WoiMinWidth                           =  4367 SHL 14;
const
  MC_WoiMaxWidth                           =  4368 SHL 14;
const
  MC_WoiMinHeight                          =  4369 SHL 14;
const
  MC_WoiMaxHeight                          =  4370 SHL 14;
const
  MC_TrigCtl_AUTO                          =            9;
const
  MC_TrigCtl_RELAY                         =           10;
const
  MC_TrigCtl_5V                            =           11;
const
  MC_TrigCtl_12V                           =           12;
const
  MC_TrigFilter_FILTER_10ms                =            5;
const
  MC_TrigFilter_FILTER_100ms               =            6;
const
  MC_EndTrigCtl_AUTO                       =            5;
const
  MC_EndTrigCtl_RELAY                      =            6;
const
  MC_EndTrigCtl_5V                         =            7;
const
  MC_EndTrigCtl_12V                        =            8;
const
  MC_EndTrigFilter_FILTER_10ms             =            5;
const
  MC_EndTrigFilter_FILTER_100ms            =            6;
const
  MC_WoiSaveMemoryBank                     =  4371 SHL 14;
const
  MC_WoiSaveMemoryBank_YES                 =            1;
const
  MC_WoiSaveMemoryBank_NO                  =            2;
const
  MC_WoiSaveMemoryBankAfterWoiBankSetup    =  4372 SHL 14;
const
  MC_WoiSaveMemoryBankAfterWoiBankSetup_YES =            1;
const
  MC_WoiSaveMemoryBankAfterWoiBankSetup_NO =            2;
const
  MC_SaveMemoryBank                        =  4373 SHL 14;
const
  MC_SaveMemoryBank_YES                    =            1;
const
  MC_SaveMemoryBank_NO                     =            2;
const
  MC__CDA_LEADASSYNR1                      =  4374 SHL 14;
const
  MC__CDA_LEADASSYNR2                      =  4375 SHL 14;
const
  MC__CDA_LEADASSYNR3                      =  4376 SHL 14;
const
  MC__CDA_LEADASSYNR4                      =  4377 SHL 14;
const
  MC__CDA_REFASSYNR1                       =  4378 SHL 14;
const
  MC__CDA_REFASSYNR2                       =  4379 SHL 14;
const
  MC__CDA_REFASSYNR3                       =  4380 SHL 14;
const
  MC__CDA_REFASSYNR4                       =  4381 SHL 14;
const
  MC_CheckRamp_DataIncrement               =  4382 SHL 14;
const
  MC_DefaultConnector                      =  4383 SHL 14;
const
  MC_DefaultConnector_M                    =            1;
const
  MC_DefaultConnector_A                    =            2;
const
  MC_DefaultConnector_B                    =            3;
const
  MC___MSFError_Check_Filter               =  4384 SHL 14;
const
  MC_CLCAM_TapMultiplexingMode             =  4385 SHL 14;
const
  MC_CLCAM_TapMultiplexingMode_OneTimeSlot =            1;
const
  MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_MultiplexedBits =            2;
const
  MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_MultiplexedTaps =            3;
const
  MC_CLCAM_TapMultiplexingMode_ThreeTimeSlots_MultiplexedTaps =            4;
const
  MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_TwoMultiplexedTaps =            5;
const
  MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_FourMultiplexedTaps =            6;
const
  MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_SixMultiplexedTaps =            7;
const
  MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_EightMultiplexedTaps =            8;
const
  MC__CDC_MTAP_TwoTimeSlots_TwoMultiplexedTaps =            7;
const
  MC__CDC_MTAP_TwoTimeSlots_FourMultiplexedTaps =            8;
const
  MC__CDC_MTAP_TwoTimeSlots_SixMultiplexedTaps =            9;
const
  MC__CDC_MTAP_TwoTimeSlots_EightMultiplexedTaps =           10;
const
  MC_CLCAM_Geometry                        =  4386 SHL 14;
const
  MC_CLCAM_Geometry_TG_1X                  =            1;
const
  MC_CLCAM_Geometry_TG_1X2                 =            2;
const
  MC_CLCAM_Geometry_TG_2X                  =            3;
const
  MC_CLCAM_Geometry_TG_2XE                 =            4;
const
  MC_CLCAM_Geometry_TG_2XM                 =            5;
const
  MC_CLCAM_Geometry_TG_1X_1Y2              =            6;
const
  MC_CLCAM_Geometry_TG_1X_2YE              =            7;
const
  MC_CLCAM_Geometry_TG_1X3                 =            8;
const
  MC_CLCAM_Geometry_TG_3X                  =            9;
const
  MC_CLCAM_Geometry_TG_1X4                 =           10;
const
  MC_CLCAM_Geometry_TG_4X                  =           11;
const
  MC_CLCAM_Geometry_TG_2X2                 =           12;
const
  MC_CLCAM_Geometry_TG_2X2E                =           13;
const
  MC_CLCAM_Geometry_TG_2X2M                =           14;
const
  MC_CLCAM_Geometry_TG_1X2_2YE             =           15;
const
  MC_CLCAM_Geometry_TG_2X_2YE              =           16;
const
  MC_CLCAM_Geometry_TG_2XE_2YE             =           17;
const
  MC_CLCAM_Geometry_TG_2XM_2YE             =           18;
const
  MC_CLCAM_Geometry_TG_1X8                 =           19;
const
  MC_CLCAM_Geometry_TG_8X                  =           20;
const
  MC_CLCAM_Geometry_TG_4X2                 =           21;
const
  MC_CLCAM_Geometry_TG_2X2E_2YE            =           22;
const
  MC_ActiveDroopCompensation               =  4387 SHL 14;
const
  MC_ActiveDroopCompensation_ENABLED       =            1;
const
  MC_ActiveDroopCompensation_DISABLED      =            2;
const
  MC_AnalogClamping                        =  4388 SHL 14;
const
  MC_AnalogClamping_ENABLED                =            1;
const
  MC_AnalogClamping_DISABLED               =            2;
const
  MC_PhaseRate_AbsoluteUpperLimit_mHz      =  4389 SHL 14;
const
  MC_PhaseRate_Optimal_mHz                 =  4390 SHL 14;
const
  MC__VgaGain                              =  4391 SHL 14;
const
  MC_CLCAM_MinLineRate_Hz                  =  4392 SHL 14;
const
  MC_CLCAM_MinFrameRate_mHz                =  4393 SHL 14;
const
  MC_SrcSizeY                              =  4394 SHL 14;
const
  MC__Requested_GainY                      =  4395 SHL 14;
const
  MC__Requested_GainU                      =  4396 SHL 14;
const
  MC__Requested_GainV                      =  4397 SHL 14;
const
  MC__Requested_OffsetY                    =  4398 SHL 14;
const
  MC__TwinGrabberIndex                     =  4399 SHL 14;
const
  MC__Twin_GainY                           =  4400 SHL 14;
const
  MC__Twin_GainU                           =  4401 SHL 14;
const
  MC__Twin_GainV                           =  4402 SHL 14;
const
  MC__Twin_OffsetY                         =  4403 SHL 14;
const
  MC__Luma_xmin                            =  4404 SHL 14;
const
  MC__Luma_xmax                            =  4405 SHL 14;
const
  MC_WindowXY_Filter                       =  4406 SHL 14;
const
  MC__Twin_GainY_VB                        =  4407 SHL 14;
const
  MC__Twin_GainU_VB                        =  4408 SHL 14;
const
  MC__Twin_GainV_VB                        =  4409 SHL 14;
const
  MC__Twin_OffsetY_VB                      =  4410 SHL 14;
const
  MC_BEC_TwinOffset_Y                      =  4411 SHL 14;
const
  MC_BEC_TwinGain_Y                        =  4412 SHL 14;
const
  MC_BEC_Twin_Gain_Cr_1                    =  4413 SHL 14;
const
  MC_BEC_Twin_Gain_Cr_2                    =  4414 SHL 14;
const
  MC_BEC_Twin_Gain_Cb_1                    =  4415 SHL 14;
const
  MC_BEC_Twin_Gain_Cb_2                    =  4416 SHL 14;
const
  MC_CameraConfigMessageBuilder            =  4417 SHL 14;
const
  MC_CameraConfigMessageBuilder_NONE       =            1;
const
  MC_CameraConfigMessageBuilder_CSB4000CL  =            2;
const
  MC__Twin_CSC_GainY                       =  4418 SHL 14;
const
  MC__Twin_CSC_GainCrR                     =  4419 SHL 14;
const
  MC__Twin_CSC_GainCrG                     =  4420 SHL 14;
const
  MC__Twin_CSC_GainCbB                     =  4421 SHL 14;
const
  MC__Twin_CSC_GainCbG                     =  4422 SHL 14;
const
  MC__CTD_TDCLK_HRWP                       =            5;
const
  MC__TRG_EFTFLT                           =  4423 SHL 14;
const
  MC__TRG_EFTFLT_100ns                     =            1;
const
  MC__TRG_EFTFLT_500ns                     =            2;
const
  MC__TRG_EFTFLT_2500ns                    =            3;
const
  MC__CTD_TDCLK_REFTIC                     =            6;
const
  MC__RawGrabSizeY_Ln                      =  4424 SHL 14;
const
  MC__IsExpert2                            =  4425 SHL 14;
const
  MC__IsExpert2_YES                        =            1;
const
  MC__IsExpert2_NO                         =            2;
const
  MC__CameraWindowingAvailable             =  4426 SHL 14;
const
  MC__CameraWindowingAvailable_YES         =            1;
const
  MC__CameraWindowingAvailable_NO          =            2;
const
  MC__RawGrabSizeX_Log2                    =  4427 SHL 14;
const
  MC_CL_TapCount_Y                         =  4428 SHL 14;
const
  MC_CL_TapCount_X                         =  4429 SHL 14;
const
  MC_CamConfig_IxxSA_D                     =          279;
const
  MC_CamConfig_IxxSD                       =          280;
const
  MC_CamConfig_PxxSA_D                     =          281;
const
  MC__LQS_COUNT3                           =  4430 SHL 14;
const
  MC__TRG_TM                               =  4431 SHL 14;
const
  MC__TRG_TM_IMM                           =            1;
const
  MC__TRG_TM_HRD                           =            2;
const
  MC__TRG_TM_SFT                           =            3;
const
  MC__TRG_TM_CMB                           =            4;
const
  MC__TRG_NTM                              =  4432 SHL 14;
const
  MC__TRG_NTM_RPT                          =            1;
const
  MC__TRG_NTM_HRD                          =            2;
const
  MC__TRG_NTM_SFT                          =            3;
const
  MC__TRG_NTM_CMB                          =            4;
const
  MC__TRG_NTM_PER                          =            5;
const
  MC_CameraWoiBankSetupCmd                 =  4433 SHL 14;
const
  MC_CameraWoiBankSelectCmd                =  4434 SHL 14;
const
  MC_BruSelonDC                            =  4435 SHL 14;
const
  MC_BruSelonDC_Forbidden                  =            1;
const
  MC_BruSelonDC_Allowed                    =            2;
const
  MC_FEC_DITHER                            =  4436 SHL 14;
const
  MC_FEC_DITHER_Forbidden                  =            1;
const
  MC_FEC_DITHER_Allowed                    =            2;
const
  MC_VgaGain                               =  4437 SHL 14;
const
  MC_VsyncBfrEndExp_us                     =  4438 SHL 14;
const
  MC_StrobeMode_OFF                        =            4;
const
  MC__CSIO_CSIO2Out_LOX                    =            9;
const
  MC___IO1Usage_Check                      =  4439 SHL 14;
const
  MC___IO1Usage_Check_PASS                 =            1;
const
  MC___IO1Usage_Check_FAIL                 =            2;
const
  MC___IO2Usage_Check                      =  4440 SHL 14;
const
  MC___IO2Usage_Check_PASS                 =            1;
const
  MC___IO2Usage_Check_FAIL                 =            2;
const
  MC___IO3Usage_Check                      =  4441 SHL 14;
const
  MC___IO3Usage_Check_PASS                 =            1;
const
  MC___IO3Usage_Check_FAIL                 =            2;
const
  MC___IO4Usage_Check                      =  4442 SHL 14;
const
  MC___IO4Usage_Check_PASS                 =            1;
const
  MC___IO4Usage_Check_FAIL                 =            2;
const
  MC___ISOA2Usage_Check                    =  4443 SHL 14;
const
  MC___ISOA2Usage_Check_PASS               =            1;
const
  MC___ISOA2Usage_Check_FAIL               =            2;
const
  MC___TRA1Usage_Check                     =  4444 SHL 14;
const
  MC___TRA1Usage_Check_PASS                =            1;
const
  MC___TRA1Usage_Check_FAIL                =            2;
const
  MC___TRA2Usage_Check                     =  4445 SHL 14;
const
  MC___TRA2Usage_Check_PASS                =            1;
const
  MC___TRA2Usage_Check_FAIL                =            2;
const
  MC___ISOA1Usage_Check                    =  4446 SHL 14;
const
  MC___ISOA1Usage_Check_PASS               =            1;
const
  MC___ISOA1Usage_Check_FAIL               =            2;
const
  MC_Gain_s                                =  4447 SHL 14;
const
  MC__Twin_GainY_s                         =  4448 SHL 14;
const
  MC__CBA_READ_RATE                        =  4449 SHL 14;
const
  MC__CBA_READ_RATE_FULL                   =            1;
const
  MC__CBA_READ_RATE_HALF                   =            2;
const
  MC_GrabWindow_WOI_NO                     =            7;
const
  MC_GrabWindow_WOI_YES                    =            8;
const
  MC_FifoSizeX_inbytes                     =  4450 SHL 14;
const
  MC_Camera_CSB1100CL                      =          218;
const
  MC_CamConfig_P22RC                       =          282;
const
  MC___FPGA_Model_Check                    =  4451 SHL 14;
const
  MC___FPGA_Model_Check_PASS               =            1;
const
  MC___FPGA_Model_Check_FAIL               =            2;
const
  MC_WoiLvalCount                          =  4452 SHL 14;
const
  MC_WoiPixelCount                         =  4453 SHL 14;
const
  MC_ECASet                                =  4454 SHL 14;
const
  MC_WoiFvalHigh_Tk                        =  4455 SHL 14;
const
  MC_WoiMinTriggerDisableTime_Tk           =  4456 SHL 14;
const
  MC_WoiReadoutTime_Tk                     =  4457 SHL 14;
const
  MC_WoiReadoutDur_Tk                      =  4458 SHL 14;
const
  MC_WoiReadoutDur_10ns                    =  4459 SHL 14;
const
  MC_IoCapability                          =  4460 SHL 14;
const
  MC___MinHactive_Check                    =  4461 SHL 14;
const
  MC___MinHactive_Check_PASS               =            1;
const
  MC___MinHactive_Check_FAIL               =            2;


