// McParams.h Parameter Identifier File
// Created: 2006/02/01
// This file has been generated automatically and should not be modified
#ifndef _McParams_
#define _McParams_


#define MC_DriverIndex                           (MCPARAMID)(    0 << 14)
#define MC_PciPosition                           (MCPARAMID)(    1 << 14)
#define MC_BoardName                             (MCPARAMID)(    2 << 14)
#define MC_BoardIdentifier                       (MCPARAMID)(    3 << 14)
#define MC_NameBoard                             (MCPARAMID)(    4 << 14)
#define MC_SerialNumber                          (MCPARAMID)(    5 << 14)
#define MC_BoardType                             (MCPARAMID)(    6 << 14)
#define MC_BoardType_MULTI                         1
#define MC_BoardType_MULTIPLUS                     2
#define MC_BoardType_MULTIEXPRESS                  3
#define MC_BoardType_GAMMA                         4
#define MC_BoardType_ALPHA                         5
#define MC_BoardType_PRESTISSIMO                   6
#define MC_BoardType_VALUE                         7
#define MC_BoardType_EXPERT                        8
#define MC_BoardType_STREAM                        9
#define MC_BoardType_ALPHA_CPCI                   10
#define MC_BoardType_IOTA                         11
#define MC_BoardType_ALPHA_2                      12
#define MC_BoardType_PICOLO                       13
#define MC_BoardType_PICOLO_PRO2                  14
#define MC_BoardType_PICOLO_PRO3I                 15
#define MC_BoardType_PICOLO_PRO3E                 16
#define MC_BoardType_PICOLO_TETRA                 17
#define MC_BoardType_PICOLO_JETX                  18
#define MC_BoardType_EXPERT_2                     19
#define MC_BoardType_EXPERT_2_CPCI                20
#define MC_BoardType_VALUE_CPCI                   21
#define MC_BoardType_COLORSCAN                    22
#define MC_BoardType_COLORSCAN_CPCI               23
#define MC_BoardType_PICOLO_TETRAX                24
#define MC_BoardType_JUNIOR_4                     25
#define MC_BoardType_DOMINO_HARMONY               26
#define MC_BoardType_DOMINO_MELODY                27
#define MC_BoardType_DOMINO_SYMPHONY              28
#define MC_BoardType_DOMINO_DELTA                 29
#define MC_BoardType_GRABLINK_AVENUE              30
#define MC_BoardType_PICOLO_ALERT                 31
#define MC_BoardType_PICOLO_DILIGENT              32
#define MC_BoardType_PICOLO_TYMO                  33
#define MC_BoardType_PICOLO_FULL_ALERT            34
#define MC_BoardType_PICOLO_ALERT_RC              35
#define MC_ModuleType                            (MCPARAMID)(    7 << 14)
#define MC_ModuleType_NONE                         1
#define MC_ModuleType_DIG16                        2
#define MC_ModuleType_DIG32                        3
#define MC_ModuleType_DIG16_C_2K644                4
#define MC_ModuleType_DIG16_C_2K422                5
#define MC_ModuleType_DIG16_C_CUSTOM               6
#define MC_ModuleType_DIG32_B_8K644                7
#define MC_ModuleType_DIG32_B_2K422                8
#define MC_ModuleType_DIG32_B_CUSTOM               9
#define MC_ModuleType_DIG32_644                   10
#define MC_ModuleType_DIG32_C_2K422               11
#define MC_ModuleType_DIG32_C_CUSTOM              12
#define MC_ModuleType_DIG16_644                   13
#define MC_ModuleType_DIG16_422                   14
#define MC_ModuleType_DIG32_422                   15
#define MC_ModuleType_CAMERALINK                  16
#define MC_OemSafetyLock                         (MCPARAMID)(    8 << 14)
#define MC_OemSafetyKey                          (MCPARAMID)(    9 << 14)
#define MC_EvolutionNumber                       (MCPARAMID)(   10 << 14)
#define MC_CamFile                               (MCPARAMID)(   11 << 14)
#define MC_Cluster                               (MCPARAMID)(   12 << 14)
#define MC_ClusterMode                           (MCPARAMID)(   13 << 14)
#define MC_ClusterMode_AUTO                        1
#define MC_ClusterMode_MANUAL                      2
#define MC_ClusterMask                           (MCPARAMID)(   14 << 14)
#define MC_ClusterMask_NONE                        1
#define MC_ClusterMask_SKIP                        2
#define MC_ClusterMask_HOLD                        3
#define MC_ClusterMask_DELAY                       4
#define MC_ClusterMask_STOP                        5
#define MC_ChannelState                          (MCPARAMID)(   15 << 14)
#define MC_ChannelState_IDLE                       1
#define MC_ChannelState_ACTIVE                     2
#define MC_ChannelState_READY                      3
#define MC_ChannelState_FREE                       4
#define MC_ChannelState_ORPHAN                     5
#define MC_LineIndex                             (MCPARAMID)(   16 << 14)
#define MC_SurfaceIndex                          (MCPARAMID)(   17 << 14)
#define MC_TriggerMode                           (MCPARAMID)(   18 << 14)
#define MC_TriggerMode_TIMER                       1
#define MC_TriggerMode_GRABBER                     2
#define MC_InitialPause                          (MCPARAMID)(   19 << 14)
#define MC_Pause                                 (MCPARAMID)(   20 << 14)
#define MC_InitialTrigger                        (MCPARAMID)(   21 << 14)
#define MC_Trigger                               (MCPARAMID)(   22 << 14)
#define MC_Trigger_PAUSE                           1
#define MC_Trigger_GOHIGH                          2
#define MC_Trigger_GOLOW                           3
#define MC_GrabCount                             (MCPARAMID)(   23 << 14)
#define MC_SignalEnable                          (MCPARAMID)(   24 << 14)
#define MC_SignalEnable_NONE                       1
#define MC_SignalEnable_PROCESSING                 2
#define MC_SignalEnable_FILLED                     3
#define MC_SignalEnable_OFF                        4
#define MC_SignalEnable_ON                         5
#define MC_SignalEnable_AFTER_EAS                  6
#define MC_SignalEvent                           (MCPARAMID)(   25 << 14)
#define MC_Usage                                 (MCPARAMID)(   26 << 14)
#define MC_SurfaceSize                           (MCPARAMID)(   27 << 14)
#define MC_SurfaceAddr                           (MCPARAMID)(   28 << 14)
#define MC_SurfacePitch                          (MCPARAMID)(   29 << 14)
#define MC_PlaneCount                            (MCPARAMID)(   30 << 14)
#define MC_SurfaceState                          (MCPARAMID)(   31 << 14)
#define MC_SurfaceState_FREE                       1
#define MC_SurfaceState_FILLING                    2
#define MC_SurfaceState_FILLED                     3
#define MC_SurfaceState_PROCESSING                 4
#define MC_SurfaceState_RESERVED                   5
#define MC_SurfaceContext                        (MCPARAMID)(   32 << 14)
#define MC_DebugMode                             (MCPARAMID)(   33 << 14)
#define MC_ResourceId                            (MCPARAMID)(   34 << 14)
#define MC_ResourceId_DSP1                         1
#define MC_ResourceId_DSP2                         2
#define MC_ResourceId_DSP12                        3
#define MC_ResourceId_DSP3                         3
#define MC_ResourceId_DSP4                         4
#define MC_Source                                (MCPARAMID)(   35 << 14)
#define MC_ProcessFile                           (MCPARAMID)(   36 << 14)
#define MC_Black                                 (MCPARAMID)(   37 << 14)
#define MC_White                                 (MCPARAMID)(   38 << 14)
#define MC_BlackProfile                          (MCPARAMID)(   39 << 14)
#define MC_WhiteProfile                          (MCPARAMID)(   40 << 14)
#define MC_ProcessType                           (MCPARAMID)(   41 << 14)
#define MC_ProcessorState                        (MCPARAMID)(   42 << 14)
#define MC_ProcessorState_OFF                      1
#define MC_ProcessorState_ON                       2
#define MC_FillCount                             (MCPARAMID)(   43 << 14)
#define MC_Gain                                  (MCPARAMID)(   44 << 14)
#define MC_PageDuration                          (MCPARAMID)(   45 << 14)
#define MC_OverrunCount                          (MCPARAMID)(   46 << 14)
#define MC_Level                                 (MCPARAMID)(   47 << 14)
#define MC_SurfaceLocation                       (MCPARAMID)(   48 << 14)
#define MC_SurfaceLocation_HOST                    1
#define MC_SurfaceLocation_DSP                     2
#define MC_SurfaceLocation_BOARD                   3
#define MC_SurfaceLocation_PHYSICAL                4
#define MC_ErrorHandling                         (MCPARAMID)(   49 << 14)
#define MC_ErrorHandling_NONE                      1
#define MC_ErrorHandling_MSGBOX                    2
#define MC_ErrorHandling_EXCEPTION                 3
#define MC_ErrorHandling_MSGEXCEPTION              4
#define MC_ForceTrig                             (MCPARAMID)(   50 << 14)
#define MC_ForceTrig_TRIG                          1
#define MC_ParamBlock                            (MCPARAMID)(   51 << 14)
#define MC_SurfaceFormat                         (MCPARAMID)(   52 << 14)
#define MC_SurfaceFormat_RAW                       1
#define MC_SurfaceFormat_RGB24                     2
#define MC_SurfaceFormat_PLANAR24                  3
#define MC_SurfaceFormat_SPLITX                    4
#define MC_Lookup                                (MCPARAMID)(   53 << 14)
#define MC_Flags                                 (MCPARAMID)(   54 << 14)
#define MC_HardwareKey                           (MCPARAMID)(   55 << 14)
#define MC_AcqTimeout_ms                         (MCPARAMID)(   56 << 14)
#define MC_LineTriggerViolation                  (MCPARAMID)(   57 << 14)
#define MC_FrameTriggerViolation                 (MCPARAMID)(   58 << 14)
#define MC_BoardTopology                         (MCPARAMID)(   59 << 14)
#define MC_BoardTopology_3_3_0                     1
#define MC_BoardTopology_2_3_1                     2
#define MC_BoardTopology_2_2_2                     3
#define MC_BoardTopology_2_2_1                     4
#define MC_BoardTopology_1_3_1                     5
#define MC_BoardTopology_1_1_2                     6
#define MC_BoardTopology_1_1_1                     7
#define MC_BoardTopology_2_2_11                    8
#define MC_BoardTopology_11_3_1                    9
#define MC_BoardTopology_11_11_2                  10
#define MC_BoardTopology_11_11_11                 11
#define MC_BoardTopology_0_3_1                    12
#define MC_BoardTopology_2_2_0                    13
#define MC_BoardTopology_2_2                      14
#define MC_BoardTopology_2_1                      15
#define MC_BoardTopology_1_1                      16
#define MC_BoardTopology_2_11                     17
#define MC_BoardTopology_11_11                    18
#define MC_BoardTopology_0_2                      19
#define MC_BoardTopology_1_1_1_1                  20
#define MC_GrabberConfig                         (MCPARAMID)(   60 << 14)
#define MC_GrabberConfig_1_1_1                     1
#define MC_GrabberConfig_1_1_2                     2
#define MC_GrabberConfig_2_0                       3
#define MC_GrabberConfig_1_1                       4
#define MC_GrabberConfig_0_2                       5
#define MC_GrabberConfig_2_2_0                     6
#define MC_MPFRevision                           (MCPARAMID)(   61 << 14)
#define MC_BoardCount                            (MCPARAMID)(   62 << 14)
#define MC_RemainingGrab                         (MCPARAMID)(   63 << 14)
#define MC_ElapsedGrab                           (MCPARAMID)(   64 << 14)
#define MC_LineDelay                             (MCPARAMID)(   65 << 14)
#define MC_LutIndex                              (MCPARAMID)(   66 << 14)
#define MC_InputLut                              (MCPARAMID)(   67 << 14)
#define MC_SurfaceInfo                           (MCPARAMID)(   68 << 14)
#define MC_GrabDuration_us                       (MCPARAMID)(   69 << 14)
#define MC_SerialControlA                        (MCPARAMID)(   70 << 14)
#define MC_SerialControlB                        (MCPARAMID)(   71 << 14)
#define MC_TimeCode                              (MCPARAMID)(   72 << 14)
#define MC_GenerateSignal                        (MCPARAMID)(   73 << 14)
#define MC_GenerateSignal_EACH_EVENT               1
#define MC_GenerateSignal_LATEST_EVENT             2
#define MC_SignalHandling                        (MCPARAMID)(   74 << 14)
#define MC_SignalHandling_ANY                      1
#define MC_SignalHandling_CALLBACK_SIGNALING       2
#define MC_SignalHandling_WAITING_SIGNALING        3
#define MC_SignalHandling_OS_EVENT_SIGNALING       4
#define MC_Parity                                (MCPARAMID)(   75 << 14)
#define MC_Parity_NA                               1
#define MC_Parity_UP                               2
#define MC_Parity_DOWN                             3
#define MC_Parity_UPDW                             4
#define MC_Parity_DWUP                             5
#define MC_TimeAnsi                              (MCPARAMID)(   76 << 14)
#define MC_TimeStamp_us                          (MCPARAMID)(   77 << 14)
#define MC_WatchdogResetsCount                   (MCPARAMID)(   78 << 14)
#define MC_StartupTimeout_s                      (MCPARAMID)(   79 << 14)
#define MC_ApplicationTimeout_s                  (MCPARAMID)(   80 << 14)
#define MC_ErrorLog                              (MCPARAMID)(   81 << 14)
#define MC_SurfaceCount                          (MCPARAMID)(   82 << 14)
#define MC_sctxt                                 (MCPARAMID)(   83 << 14)
#define MC_SurfaceSizeX                          (MCPARAMID)(   84 << 14)
#define MC_SurfaceSizeY                          (MCPARAMID)(   85 << 14)
#define MC_SurfaceColorFormat                    (MCPARAMID)(   86 << 14)
#define MC_FilledPlanes                          (MCPARAMID)(   87 << 14)
#define MC_SAB                                   (MCPARAMID)(   88 << 14)
#define MC_TransferReport                        (MCPARAMID)(   89 << 14)
#define MC_TransferReport_OK                       1
#define MC_TransferReport_FIFO_OVERRUN             2
#define MC_BufferAddress                         (MCPARAMID)(   90 << 14)
#define MC_FrameType                             (MCPARAMID)(   91 << 14)
#define MC_FrameType_I                             1
#define MC_FrameType_P                             2
#define MC_FrameType_B                             3
#define MC_SurfaceReserved5                      (MCPARAMID)(   92 << 14)
#define MC_SurfaceReserved6                      (MCPARAMID)(   93 << 14)
#define MC_SurfaceReserved7                      (MCPARAMID)(   94 << 14)
#define MC_SurfaceReserved8                      (MCPARAMID)(   95 << 14)
#define MC_SurfaceReserved9                      (MCPARAMID)(   96 << 14)
#define MC_ParamInfoStructSize                   (MCPARAMID)(   97 << 14)
#define MC_ErrorDesc                             (MCPARAMID)(   98 << 14)
#define MC_MaxEvents                             (MCPARAMID)(   99 << 14)
#define MC_CallbackPriority                      (MCPARAMID)(  100 << 14)
#define MC_CallbackPriority_LOWEST                 1
#define MC_CallbackPriority_BELOW_NORMAL           2
#define MC_CallbackPriority_NORMAL                 3
#define MC_CallbackPriority_ABOVE_NORMAL           4
#define MC_CallbackPriority_HIGHEST                5
#define MC_CallbackPriority_TIME_CRITICAL          6
#define MC_CurrentTime_us                        (MCPARAMID)(  101 << 14)
#define MC_TrigMode                              (MCPARAMID)(  512 << 14)
#define MC_TrigMode_INT                            1
#define MC_TrigMode_EXT                            2
#define MC_TrigMode_SOFT                           3
#define MC_TrigMode_ENC                            3
#define MC_TrigMode_EXTRC                          4
#define MC_TrigMode_AUTO                           5
#define MC_TrigMode_IMMEDIATE                      6
#define MC_TrigMode_HARD                           7
#define MC_TrigMode_COMBINED                       8
#define MC_TrigCtl                               (MCPARAMID)(  513 << 14)
#define MC_TrigCtl_TGOLOW                          1
#define MC_TrigCtl_TGOHIGH                         2
#define MC_TrigCtl_VGOLOW                          3
#define MC_TrigCtl_VGOHIGH                         4
#define MC_TrigFlt                               (MCPARAMID)(  514 << 14)
#define MC_ExpScl                                (MCPARAMID)(  515 << 14)
#define MC_ExpTrm                                (MCPARAMID)(  516 << 14)
#define MC_DataWidth                             (MCPARAMID)(  517 << 14)
#define MC_LinePeriod                            (MCPARAMID)(  518 << 14)
#define MC_ImagePixelSize                        (MCPARAMID)(  519 << 14)
#define MC_FramePeriod                           (MCPARAMID)(  520 << 14)
#define MC_SensorWidth                           (MCPARAMID)(  521 << 14)
#define MC_SensorHeight                          (MCPARAMID)(  522 << 14)
#define MC_ImageSizeX                            (MCPARAMID)(  523 << 14)
#define MC_ImageSizeY                            (MCPARAMID)(  524 << 14)
#define MC_ImageFlipY                            (MCPARAMID)(  525 << 14)
#define MC_ImageFlipY_OFF                          1
#define MC_ImageFlipY_ON                           2
#define MC_CameraChannels                        (MCPARAMID)(  526 << 14)
#define MC_AcqScl                                (MCPARAMID)(  527 << 14)
#define MC_AcqCount                              (MCPARAMID)(  528 << 14)
#define MC_AcqShift                              (MCPARAMID)(  529 << 14)
#define MC_AcqSplit                              (MCPARAMID)(  530 << 14)
#define MC_FrameShift                            (MCPARAMID)(  531 << 14)
#define MC_VcamCount                             (MCPARAMID)(  532 << 14)
#define MC_StrCtl                                (MCPARAMID)(  533 << 14)
#define MC_StrCtl_LOW                              1
#define MC_StrCtl_HIGH                             2
#define MC_StrCtl_PLSLOW                           3
#define MC_StrCtl_PLSHIGH                          4
#define MC_StrLvl                                (MCPARAMID)(  534 << 14)
#define MC_StrLvl_DIS                              1
#define MC_StrLvl_TTL                              2
#define MC_StrLvl_OC                               3
#define MC_StrLvl_OE                               4
#define MC_StrPos                                (MCPARAMID)(  535 << 14)
#define MC_StrDur                                (MCPARAMID)(  536 << 14)
#define MC_PendLines                             (MCPARAMID)(  537 << 14)
#define MC_FrameRstCtl                           (MCPARAMID)(  538 << 14)
#define MC_FrameRstCtl_TPLSLOW                     1
#define MC_FrameRstCtl_TPLSHIGH                    2
#define MC_FrameRstCtl_DPLSLOW                     3
#define MC_FrameRstCtl_DPLSHIGH                    4
#define MC_FrameRstPos                           (MCPARAMID)(  539 << 14)
#define MC_FrameRstDur                           (MCPARAMID)(  540 << 14)
#define MC_ExpMode                               (MCPARAMID)(  541 << 14)
#define MC_ExpMode_Reset_Width                     1
#define MC_ExpMode_Dual_Reset_Interval             2
#define MC_ExpMode_Reset_To_Expose_interval        3
#define MC_ExpDur                                (MCPARAMID)(  542 << 14)
#define MC_LineValCtl                            (MCPARAMID)(  543 << 14)
#define MC_LineValCtl_LOW                          1
#define MC_LineValCtl_HIGH                         2
#define MC_LineValCtl_TLOW                         3
#define MC_LineValCtl_THIGH                        4
#define MC_FrameValCtl                           (MCPARAMID)(  544 << 14)
#define MC_FrameValCtl_LOW                         1
#define MC_FrameValCtl_HIGH                        2
#define MC_FrameValCtl_TLOW                        3
#define MC_FrameValCtl_THIGH                       4
#define MC_FrameValFlt                           (MCPARAMID)(  545 << 14)
#define MC_FrameValFlt_0                           1
#define MC_FrameValFlt_4                           2
#define MC_FrameValFlt_16                          3
#define MC_FrameValFlt_64                          4
#define MC_ExpCtl                                (MCPARAMID)(  546 << 14)
#define MC_ExpCtl_TPLSLOW                          1
#define MC_ExpCtl_TPLSHIGH                         2
#define MC_ExpCtl_DPLSLOW                          3
#define MC_ExpCtl_DPLSHIGH                         4
#define MC_ClockPhase                            (MCPARAMID)(  547 << 14)
#define MC_ClockPhase_0                            1
#define MC_ClockPhase_90                           2
#define MC_ClockPhase_180                          3
#define MC_ClockPhase_270                          4
#define MC_DataDelay                             (MCPARAMID)(  548 << 14)
#define MC_DataDelay_NONE                          1
#define MC_DataDelay_SLIGHT                        2
#define MC_TestPat                               (MCPARAMID)(  549 << 14)
#define MC_TestPat_OFF                             1
#define MC_TestPat_ON                              2
#define MC_TestPat_LaneID                          3
#define MC_Line3Ctl                              (MCPARAMID)(  550 << 14)
#define MC_Line3Ctl_RESET                          1
#define MC_Line3Ctl_DLOW                           2
#define MC_Line3Ctl_DHIGH                          3
#define MC_Line3Ctl_TLOW                           4
#define MC_Line3Ctl_THIGH                          5
#define MC_Line3Ctl_EXPOSE                         6
#define MC_Line4Ctl                              (MCPARAMID)(  551 << 14)
#define MC_Line4Ctl_LOW                            1
#define MC_Line4Ctl_HIGH                           2
#define MC_Line4Ctl_REFCKA                         3
#define MC_Line5Ctl                              (MCPARAMID)(  552 << 14)
#define MC_Line5Ctl_EXPOSE                         1
#define MC_Line5Ctl_DLOW                           2
#define MC_Line5Ctl_DHIGH                          3
#define MC_Line5Ctl_TLOW                           4
#define MC_Line5Ctl_THIGH                          5
#define MC_Line5Ctl_RESET                          6
#define MC_Line6Ctl                              (MCPARAMID)(  553 << 14)
#define MC_Line6Ctl_LOW                            1
#define MC_Line6Ctl_HIGH                           2
#define MC_BitMask                               (MCPARAMID)(  554 << 14)
#define MC_RdoutTrm                              (MCPARAMID)(  555 << 14)
#define MC_SacqLoc                               (MCPARAMID)(  556 << 14)
#define MC_EacqLoc                               (MCPARAMID)(  557 << 14)
#define MC_ExpDurT                               (MCPARAMID)(  558 << 14)
#define MC_ImageSizeXModulo                      (MCPARAMID)(  559 << 14)
#define MC_PerScl                                (MCPARAMID)(  560 << 14)
#define MC_PerCnt                                (MCPARAMID)(  561 << 14)
#define MC_EncScl                                (MCPARAMID)(  562 << 14)
#define MC_RateCode                              (MCPARAMID)(  563 << 14)
#define MC_SensorLength                          (MCPARAMID)(  564 << 14)
#define MC_PageLength                            (MCPARAMID)(  565 << 14)
#define MC_LineForbidPos                         (MCPARAMID)(  566 << 14)
#define MC_LineSkipHold                          (MCPARAMID)(  567 << 14)
#define MC_LineSkipHold_SKIP                       1
#define MC_LineSkipHold_HOLD                       2
#define MC_LineRstCtl                            (MCPARAMID)(  568 << 14)
#define MC_LineRstCtl_PLSLOW                       1
#define MC_LineRstCtl_PLSHIGH                      2
#define MC_ExpCtl_PLSLOW                           1
#define MC_ExpCtl_PLSHIGH                          2
#define MC_FifoDepth                             (MCPARAMID)(  569 << 14)
#define MC_FifoWidth                             (MCPARAMID)(  570 << 14)
#define MC_FifoLineSize                          (MCPARAMID)(  571 << 14)
#define MC_BackendInterruptMask                  (MCPARAMID)(  572 << 14)
#define MC_ColorInputFormat                      (MCPARAMID)(  573 << 14)
#define MC_ColorInputFormat_SerialBGR              1
#define MC_ColorInputFormat_SerialRGB              2
#define MC_ColorInputFormat_ParallelRGB            3
#define MC_ColorOutputFormat                     (MCPARAMID)(  574 << 14)
#define MC_ColorOutputFormat_Packed24              1
#define MC_ColorOutputFormat_Planar8               2
#define MC_ColorOutputFormat_Planar16              3
#define MC_PageTrigMode                          (MCPARAMID)(  575 << 14)
#define MC_PageTrigMode_INT                        1
#define MC_PageTrigMode_EXT                        2
#define MC_PageTrigMode_DELAY                      3
#define MC_PageTrigMode_FVAL                       4
#define MC_PageTrigMode_SOFT                       5
#define MC_PageTrigCtl                           (MCPARAMID)(  576 << 14)
#define MC_PageTrigCtl_TGOLOW                      1
#define MC_PageTrigCtl_TGOHIGH                     2
#define MC_PageTrigCtl_VGOLOW                      3
#define MC_PageTrigCtl_VGOHIGH                     4
#define MC_PageTrigCtl_DGOLOW                      5
#define MC_PageTrigCtl_DGOHIGH                     6
#define MC_PageTrigFlt                           (MCPARAMID)(  577 << 14)
#define MC_PageDelay                             (MCPARAMID)(  578 << 14)
#define MC_FrameForbidPos                        (MCPARAMID)(  579 << 14)
#define MC_FrameSkipHold                         (MCPARAMID)(  580 << 14)
#define MC_FrameSkipHold_SKIP                      1
#define MC_FrameSkipHold_HOLD                      2
#define MC_PageSkipHold                          (MCPARAMID)(  581 << 14)
#define MC_PageSkipHold_SKIP                       1
#define MC_PageSkipHold_HOLD                       2
#define MC_Block                                 (MCPARAMID)(  582 << 14)
#define MC_Atom                                  (MCPARAMID)(  583 << 14)
#define MC_ChannelTopology                       (MCPARAMID)(  584 << 14)
#define MC_ChannelTopology_Single                  1
#define MC_ChannelTopology_DualXPair               2
#define MC_ChannelTopology_DualXTap                3
#define MC_ChannelTopology_DualXEnd                4
#define MC_ChannelTopology_DualYPair               5
#define MC_ChannelTopology_DualYEnd                6
#define MC_ChannelTopology_Triple                  7
#define MC_ChannelTopology_QuadX                   8
#define MC_CameraTimings                         (MCPARAMID)(  585 << 14)
#define MC_CameraTimings_Mono                      1
#define MC_CameraTimings_Duo                       2
#define MC_XChannels                             (MCPARAMID)(  586 << 14)
#define MC_YChannels                             (MCPARAMID)(  587 << 14)
#define MC_BlockSize                             (MCPARAMID)(  588 << 14)
#define MC_PixelComponents                       (MCPARAMID)(  589 << 14)
#define MC_BackEndProg                           (MCPARAMID)(  590 << 14)
#define MC_BackEndProg_AB12                        1
#define MC_BackEndProg_CD12                        2
#define MC_BackEndProg_AB24                        3
#define MC_BackEndProg_CD24                        4
#define MC_BackEndProg_ABCD22                      5
#define MC_BackEndProg_BGR24                       6
#define MC_BackEndProg_PLANAR8                     7
#define MC_BackEndProg_ABCD11                      8
#define MC_BackEndProg_X                           9
#define MC_DesiredLinePitch                      (MCPARAMID)(  591 << 14)
#define MC_EncoderPitch                          (MCPARAMID)(  592 << 14)
#define MC_MaxLineFrequency                      (MCPARAMID)(  593 << 14)
#define MC_PixelClockFrequency                   (MCPARAMID)(  594 << 14)
#define MC_LinePitch                             (MCPARAMID)(  595 << 14)
#define MC_MinLineFrequency                      (MCPARAMID)(  596 << 14)
#define MC_DesiredVCLKFrequency                  (MCPARAMID)(  597 << 14)
#define MC_EffectiveVCLKFrequency                (MCPARAMID)(  598 << 14)
#define MC_VCLKFrequencyError                    (MCPARAMID)(  599 << 14)
#define MC_Smin                                  (MCPARAMID)(  600 << 14)
#define MC_FVR                                   (MCPARAMID)(  601 << 14)
#define MC_Rmin                                  (MCPARAMID)(  602 << 14)
#define MC_Rmax                                  (MCPARAMID)(  603 << 14)
#define MC_MinEncoderFrequency                   (MCPARAMID)(  604 << 14)
#define MC_FrameCount                            (MCPARAMID)(  605 << 14)
#define MC_MoleculeSize                          (MCPARAMID)(  606 << 14)
#define MC_ZChannels                             (MCPARAMID)(  607 << 14)
#define MC_Alines                                (MCPARAMID)(  608 << 14)
#define MC_StartReadout                          (MCPARAMID)(  609 << 14)
#define MC_StartReadout_Auto                       1
#define MC_StartReadout_LineSync                   2
#define MC_StartReadout_Flex                       3
#define MC_StartReadout_FlexD                      4
#define MC_StartReadout_FlexU                      5
#define MC_FifoCap4                              (MCPARAMID)(  610 << 14)
#define MC_Exposure                              (MCPARAMID)(  611 << 14)
#define MC_MinExpose                             (MCPARAMID)(  612 << 14)
#define MC_ExpPscl                               (MCPARAMID)(  613 << 14)
#define MC_ExpTerm                               (MCPARAMID)(  614 << 14)
#define MC_PageCount                             (MCPARAMID)(  615 << 14)
#define MC_MinLinePeriod                         (MCPARAMID)(  616 << 14)
#define MC_MinResetWidth                         (MCPARAMID)(  617 << 14)
#define MC_ExpWidth                              (MCPARAMID)(  618 << 14)
#define MC_StrWidth                              (MCPARAMID)(  619 << 14)
#define MC_RstWidth                              (MCPARAMID)(  620 << 14)
#define MC_Str2Rst                               (MCPARAMID)(  621 << 14)
#define MC_MinRstWidth                           (MCPARAMID)(  622 << 14)
#define MC_ExpTrim                               (MCPARAMID)(  623 << 14)
#define MC_ExpTrimFactor                         (MCPARAMID)(  624 << 14)
#define MC_Periodic                              (MCPARAMID)(  625 << 14)
#define MC_DacCmd                                (MCPARAMID)(  626 << 14)
#define MC_DacCmd_DAC_A8                           1
#define MC_DacCmd_DAC_A9                           2
#define MC_DacCmd_DAC_B8                           3
#define MC_DacCmd_DAC_B9                           4
#define MC_DacData                               (MCPARAMID)(  627 << 14)
#define MC_Destination                           (MCPARAMID)(  628 << 14)
#define MC_Destination_PC                          1
#define MC_Destination_DSP1                        2
#define MC_Destination_DSP2                        3
#define MC_REFCKA_Frequency                      (MCPARAMID)(  629 << 14)
#define MC_Gating                                (MCPARAMID)(  630 << 14)
#define MC_Gating_POST                             1
#define MC_Gating_PRE                              2
#define MC_DataClockPolarity                     (MCPARAMID)(  631 << 14)
#define MC_DataClockPolarity_POS                   1
#define MC_DataClockPolarity_NEG                   2
#define MC_TimingClockSource                     (MCPARAMID)(  632 << 14)
#define MC_TimingClockSource_EXT                   1
#define MC_TimingClockSource_REFCKA                2
#define MC_EncSvalue                             (MCPARAMID)(  633 << 14)
#define MC_ReadoutTC                             (MCPARAMID)(  634 << 14)
#define MC_USS                                   (MCPARAMID)(  635 << 14)
#define MC_USOutM                                (MCPARAMID)(  636 << 14)
#define MC_USOutM_ABCD4                            1
#define MC_USOutM_ABCD2                            2
#define MC_USOutM_BADC2                            3
#define MC_USOutM_ACBD2                            4
#define MC_USOutM_CADB2                            5
#define MC_USOutM_BADC1                            6
#define MC_USOutM_DCBA1                            7
#define MC_USOutM_CBA1                             8
#define MC_USOutM_CBA3                             9
#define MC_USOutM_ABC3                            10
#define MC_USOutM_X                               11
#define MC_USOutM_ABCD1                           12
#define MC_ChannelOrder                          (MCPARAMID)(  637 << 14)
#define MC_ChannelOrder_Direct                     1
#define MC_ChannelOrder_Invert                     2
#define MC_DataLanes                             (MCPARAMID)(  638 << 14)
#define MC_DataLanes_P                             1
#define MC_DataLanes_R                             2
#define MC_DataLanes_PQ                            3
#define MC_DataLanes_PR                            4
#define MC_DataLanes_RS                            5
#define MC_DataLanes_PRS                           6
#define MC_DataLanes_PQRS                          7
#define MC_DataLanes_PQR                           8
#define MC_DataLanes_PRQS                          9
#define MC_DataLanes_PQS                          10
#define MC_DataLanes_RSQ                          11
#define MC_USOutD                                (MCPARAMID)(  639 << 14)
#define MC_USOutD_AB2                              1
#define MC_USOutD_AB1                              2
#define MC_USOutD_BA1                              3
#define MC_USOutD_CD2                              4
#define MC_USOutD_CD1                              5
#define MC_USOutD_DC1                              6
#define MC_USOutD_X                                7
#define MC_DualLaneComb                          (MCPARAMID)(  640 << 14)
#define MC_DualLaneComb_PQ                         1
#define MC_DualLaneComb_PR                         2
#define MC_ModuleID                              (MCPARAMID)(  641 << 14)
#define MC_FifoType                              (MCPARAMID)(  642 << 14)
#define MC_FifoType_Unknown                        1
#define MC_FifoType_TwoK                           2
#define MC_FifoType_EightK                         3
#define MC_ElectricalInterfaceType               (MCPARAMID)(  643 << 14)
#define MC_ElectricalInterfaceType_Unknown         1
#define MC_ElectricalInterfaceType_422             2
#define MC_ElectricalInterfaceType_644             3
#define MC_ElectricalInterfaceType_CameraLink      4
#define MC_Period                                (MCPARAMID)(  644 << 14)
#define MC_RGBLanes                              (MCPARAMID)(  645 << 14)
#define MC_RGBLanes_PRS                            1
#define MC_RGBLanes_PQR                            2
#define MC_RGBLanes_PQS                            3
#define MC_RGBLanes_RSQ                            4
#define MC_SWAP16                                (MCPARAMID)(  646 << 14)
#define MC_SWAP16_OFF                              1
#define MC_SWAP16_ON                               2
#define MC_Clanes                                (MCPARAMID)(  647 << 14)
#define MC_Clanes_X                                1
#define MC_Clanes_P                                2
#define MC_Clanes_R                                3
#define MC_Clanes_PQ                               4
#define MC_Clanes_PR                               5
#define MC_Clanes_RS                               6
#define MC_Clanes_P_Q                              7
#define MC_Clanes_P_R                              8
#define MC_Clanes_R_S                              9
#define MC_Clanes_PR_QS                           10
#define MC_Clanes_PQ_RS                           11
#define MC_Clanes_P_R_S                           12
#define MC_Clanes_P_Q_R                           13
#define MC_Clanes_P_Q_S                           14
#define MC_Clanes_R_S_Q                           15
#define MC_Clanes_P_Q_R_S                         16
#define MC_USLanes                               (MCPARAMID)(  648 << 14)
#define MC_USLanes_X                               1
#define MC_USLanes_P                               2
#define MC_USLanes_Q                               3
#define MC_USLanes_R                               4
#define MC_USLanes_S                               5
#define MC_USLanes_PQ                              6
#define MC_USLanes_PR                              7
#define MC_USLanes_RS                              8
#define MC_USLanes_PRS                             9
#define MC_USLanes_PQR                            10
#define MC_USLanes_PQS                            11
#define MC_USLanes_RSQ                            12
#define MC_USLanes_PRQS                           13
#define MC_USLanes_PQRS                           14
#define MC_CableAlign                            (MCPARAMID)(  649 << 14)
#define MC_CableAlign_Left                         1
#define MC_CableAlign_Right                        2
#define MC_CameraWidth                           (MCPARAMID)(  650 << 14)
#define MC_PortSize                              (MCPARAMID)(  651 << 14)
#define MC_Ubit                                  (MCPARAMID)(  652 << 14)
#define MC_Dbit                                  (MCPARAMID)(  653 << 14)
#define MC_Umask                                 (MCPARAMID)(  654 << 14)
#define MC_Dmask                                 (MCPARAMID)(  655 << 14)
#define MC_MSmask                                (MCPARAMID)(  656 << 14)
#define MC_LSmask                                (MCPARAMID)(  657 << 14)
#define MC_Dwidth                                (MCPARAMID)(  658 << 14)
#define MC_ALIGN                                 (MCPARAMID)(  659 << 14)
#define MC_ImagePixelAlign                       (MCPARAMID)(  660 << 14)
#define MC_ImagePixelAlign_Left                    1
#define MC_ImagePixelAlign_Right                   2
#define MC_CWidth                                (MCPARAMID)(  661 << 14)
#define MC_ModType                               (MCPARAMID)(  662 << 14)
#define MC_ModType_Unknown                         1
#define MC_ModType_NoModule                        2
#define MC_ModType_D16A                            3
#define MC_ModType_D32AB                           4
#define MC_ModType_D32B                            5
#define MC_ModType_D16C                            6
#define MC_ModType_D32C                            7
#define MC_ModType_CameraLink                      8
#define MC_NextTrigMode                          (MCPARAMID)(  663 << 14)
#define MC_TrigEdge                              (MCPARAMID)(  664 << 14)
#define MC_TrigEdge_GOHIGH                         1
#define MC_TrigEdge_GOLOW                          2
#define MC_TrigFilter                            (MCPARAMID)(  665 << 14)
#define MC_TrigFilter_OFF                          1
#define MC_TrigFilter_ON                           2
#define MC_TrigLine                              (MCPARAMID)(  666 << 14)
#define MC_TrigLine_NOM                            1
#define MC_TrigLine_ALT1                           2
#define MC_TrigLine_ALT2                           3
#define MC_TrigLine_ALT3                           4
#define MC_TrigLine_ALT4                           5
#define MC_MapConTim                             (MCPARAMID)(  667 << 14)
#define MC_MapConTim_XYZ                           1
#define MC_MapConTim_ZYX                           2
#define MC_MapConTim_YZX                           3
#define MC_MapConTim_XZY                           4
#define MC_MapConTim_ZXY                           5
#define MC_MapConTim_YXZ                           6
#define MC_MapDigTim                             (MCPARAMID)(  668 << 14)
#define MC_MapDigTim_ABD                           1
#define MC_MapDigTim_ACD                           2
#define MC_MapDigTim_ABC                           3
#define MC_MapDigTim_BCC                           4
#define MC_MapDigTim_BBC                           5
#define MC_MapDigTim_BCD                           6
#define MC_MapDigTim_BBD                           7
#define MC_MapTimCon                             (MCPARAMID)(  669 << 14)
#define MC_MapTimCon_TXYZ                          1
#define MC_MapTimCon_TZYX                          2
#define MC_MapTimCon_TYZX                          3
#define MC_MapTimCon_TXZY                          4
#define MC_MapTimCon_TZXY                          5
#define MC_MapTimCon_TYXZ                          6
#define MC_MapTimDig                             (MCPARAMID)(  670 << 14)
#define MC_MapTimDig_TXXZZ                         1
#define MC_MapTimDig_TXXXZ                         2
#define MC_MapTimDig_TXZZZ                         3
#define MC_MapTimDig_TXYZZ                         4
#define MC_MapTimDig_TXYYZ                         5
#define MC_MapTimDig_TXXYZ                         6
#define MC_MapLaneX1                             (MCPARAMID)(  671 << 14)
#define MC_MapLaneX1_OFF                           1
#define MC_MapLaneX1_A                             2
#define MC_MapLaneX2                             (MCPARAMID)(  672 << 14)
#define MC_MapLaneX2_OFF                           1
#define MC_MapLaneX2_B                             2
#define MC_MapLaneX3                             (MCPARAMID)(  673 << 14)
#define MC_MapLaneX3_OFF                           1
#define MC_MapLaneX3_A                             2
#define MC_MapLaneX3_C                             3
#define MC_MapLaneX3_CLK                           4
#define MC_MapLaneY1                             (MCPARAMID)(  674 << 14)
#define MC_MapLaneY1_OFF                           1
#define MC_MapLaneY1_A                             2
#define MC_MapLaneY1_C                             3
#define MC_MapLaneY1_D                             4
#define MC_MapLaneY2                             (MCPARAMID)(  675 << 14)
#define MC_MapLaneY2_OFF                           1
#define MC_MapLaneY2_B                             2
#define MC_MapLaneY2_D                             3
#define MC_MapLaneY3                             (MCPARAMID)(  676 << 14)
#define MC_MapLaneY3_OFF                           1
#define MC_MapLaneY3_B                             2
#define MC_MapLaneY3_C                             3
#define MC_MapLaneY3_D                             4
#define MC_MapLaneY3_CLK                           5
#define MC_MapLaneZ1                             (MCPARAMID)(  677 << 14)
#define MC_MapLaneZ1_OFF                           1
#define MC_MapLaneZ1_A                             2
#define MC_MapLaneZ1_C                             3
#define MC_MapLaneZ2                             (MCPARAMID)(  678 << 14)
#define MC_MapLaneZ2_OFF                           1
#define MC_MapLaneZ2_B                             2
#define MC_MapLaneZ2_C                             3
#define MC_MapLaneZ2_D                             4
#define MC_MapLaneZ3                             (MCPARAMID)(  679 << 14)
#define MC_MapLaneZ3_OFF                           1
#define MC_MapLaneZ3_CLK                           2
#define MC_ClkSynth1                             (MCPARAMID)(  680 << 14)
#define MC_ClkSynth2                             (MCPARAMID)(  681 << 14)
#define MC_Connector                             (MCPARAMID)(  682 << 14)
#define MC_Connector_X                             1
#define MC_Connector_Y                             2
#define MC_Connector_Z                             3
#define MC_Connector_XBIS                          4
#define MC_Connector_YBIS                          5
#define MC_Connector_ZBIS                          6
#define MC_GrabWindow                            (MCPARAMID)(  683 << 14)
#define MC_GrabWindow_STD                          1
#define MC_GrabWindow_NOBLACK                      2
#define MC_GrabWindow_NOLOSS                       3
#define MC_GrabWindow_MAN                          4
#define MC_GrbCount                              (MCPARAMID)(  684 << 14)
#define MC_OffsetX_Tk                            (MCPARAMID)(  685 << 14)
#define MC_OffsetY_Ln                            (MCPARAMID)(  686 << 14)
#define MC_LineDurTrim                           (MCPARAMID)(  687 << 14)
#define MC_CableComp                             (MCPARAMID)(  688 << 14)
#define MC_Filter                                (MCPARAMID)(  689 << 14)
#define MC_Filter_NONE                             1
#define MC_Filter_10MHZ                            2
#define MC_Filter_5MHZ                             3
#define MC_Filter_5MHZ_PAL                         4
#define MC_Filter_5MHZ_NTSC                        5
#define MC_CalPat                                (MCPARAMID)(  690 << 14)
#define MC_CalPat_NONE                             1
#define MC_CalPat_CAL                              2
#define MC_CalPat_TPG                              3
#define MC_LutEn                                 (MCPARAMID)(  691 << 14)
#define MC_LutEn_OFF                               1
#define MC_LutEn_ON                                2
#define MC_ImageBufLoc                           (MCPARAMID)(  692 << 14)
#define MC_LutBufLoc                             (MCPARAMID)(  693 << 14)
#define MC_ConnectLoc                            (MCPARAMID)(  694 << 14)
#define MC_ConnectLoc_UPPER                        1
#define MC_ConnectLoc_CENTER                       2
#define MC_ConnectLoc_LOWER                        3
#define MC_TimUnit                               (MCPARAMID)(  695 << 14)
#define MC_TimUnit_TX                              1
#define MC_TimUnit_TY                              2
#define MC_TimUnit_TZ                              3
#define MC_DigUnit1                              (MCPARAMID)(  696 << 14)
#define MC_DigUnit1_A                              1
#define MC_DigUnit1_B                              2
#define MC_DigUnit1_C                              3
#define MC_DigUnit1_D                              4
#define MC_DigUnit2                              (MCPARAMID)(  697 << 14)
#define MC_DigUnit2_NONE                           1
#define MC_DigUnit2_A                              2
#define MC_DigUnit2_B                              3
#define MC_DigUnit2_C                              4
#define MC_DigUnit2_D                              5
#define MC_DigUnit3                              (MCPARAMID)(  698 << 14)
#define MC_DigUnit3_NONE                           1
#define MC_DigUnit3_A                              2
#define MC_DigUnit3_B                              3
#define MC_DigUnit3_C                              4
#define MC_DigUnit3_D                              5
#define MC_SelClkSynth                           (MCPARAMID)(  699 << 14)
#define MC_SelClkSynth_NONE                        1
#define MC_SelClkSynth_CLK1                        2
#define MC_SelClkSynth_CLK2                        3
#define MC_Camera                                (MCPARAMID)(  700 << 14)
#define MC_Camera_CCIR                             1
#define MC_Camera_EIA                              2
#define MC_Camera_CV_M1                            3
#define MC_Camera_CV_M10C                          4
#define MC_Camera_CV_M10E                          5
#define MC_Camera_CV_M50                           6
#define MC_Camera_XC_55                            7
#define MC_Camera_SIMUL                            8
#define MC_Camera_CV_M40                           9
#define MC_Camera_CUSTOM                          10
#define MC_Camera_XC_HR300                        11
#define MC_CamConfig                             (MCPARAMID)(  701 << 14)
#define MC_CamConfig_STD                           1
#define MC_CamConfig_TEST                          2
#define MC_CamConfig_I50SA                         3
#define MC_CamConfig_I60SA                         4
#define MC_CamConfig_P25SA                         5
#define MC_CamConfig_P30SA                         6
#define MC_CamConfig_P50SA                         7
#define MC_CamConfig_P60SA                         8
#define MC_CamConfig_P25RA                         9
#define MC_CamConfig_P30RA                        10
#define MC_CamConfig_P50RA                        11
#define MC_CamConfig_P60RA                        12
#define MC_CamConfig_P12RD                        13
#define MC_CamConfig_P60RD                        14
#define MC_CamConfig_P100RA                       15
#define MC_Scanning                              (MCPARAMID)(  702 << 14)
#define MC_Scanning_PROGRESSIVE                    1
#define MC_Scanning_INTERLACE                      2
#define MC_Standard                              (MCPARAMID)(  703 << 14)
#define MC_Standard_CCIR                           1
#define MC_Standard_EIA                            2
#define MC_PixelClk_Hz                           (MCPARAMID)(  704 << 14)
#define MC_LineRate_Hz                           (MCPARAMID)(  705 << 14)
#define MC_HCsyncDur_ns                          (MCPARAMID)(  706 << 14)
#define MC_HCsyncBfr_ns                          (MCPARAMID)(  707 << 14)
#define MC_HCSyncAft_ns                          (MCPARAMID)(  708 << 14)
#define MC_Vtotal_Ln                             (MCPARAMID)(  709 << 14)
#define MC_Vactive_Ln                            (MCPARAMID)(  710 << 14)
#define MC_VCsyncAft_Ln                          (MCPARAMID)(  711 << 14)
#define MC_VsyncAft_Ln                           (MCPARAMID)(  712 << 14)
#define MC_HdriveDur_ns                          (MCPARAMID)(  713 << 14)
#define MC_VdriveDur_Ln                          (MCPARAMID)(  714 << 14)
#define MC_HsyncDly_ns                           (MCPARAMID)(  715 << 14)
#define MC_HdriveDly_ns                          (MCPARAMID)(  716 << 14)
#define MC_HVdriveCtl                            (MCPARAMID)(  717 << 14)
#define MC_HVdriveCtl_NONE                         1
#define MC_HVdriveCtl_TTL                          2
#define MC_HVdriveCtl_DIFF                         3
#define MC_HVdriveEdge                           (MCPARAMID)(  718 << 14)
#define MC_HVdriveEdge_GOLOW                       1
#define MC_HVdriveEdge_GOHIGH                      2
#define MC_PixelClkCtl                           (MCPARAMID)(  719 << 14)
#define MC_PixelClkCtl_NONE                        1
#define MC_PixelClkCtl_TTL                         2
#define MC_PixelClkCtl_DIFF                        3
#define MC_PixelClkEdge                          (MCPARAMID)(  720 << 14)
#define MC_PixelClkEdge_GOHIGH                     1
#define MC_PixelClkEdge_GOLOW                      2
#define MC_VsyncCtl                              (MCPARAMID)(  721 << 14)
#define MC_VsyncCtl_NONE                           1
#define MC_VsyncCtl_TTL                            2
#define MC_VsyncCtl_DIFF                           3
#define MC_HsyncCtl                              (MCPARAMID)(  722 << 14)
#define MC_HsyncCtl_NONE                           1
#define MC_HsyncCtl_TTL                            2
#define MC_HsyncCtl_DIFF                           3
#define MC_HsyncEdge                             (MCPARAMID)(  723 << 14)
#define MC_HsyncEdge_GOLOW                         1
#define MC_HsyncEdge_GOHIGH                        2
#define MC_VsyncEdge                             (MCPARAMID)(  724 << 14)
#define MC_VsyncEdge_GOLOW                         1
#define MC_VsyncEdge_GOHIGH                        2
#define MC_ICS9161Code                           (MCPARAMID)(  725 << 14)
#define MC_SyncMode                              (MCPARAMID)(  726 << 14)
#define MC_SyncMode_MASTER                         1
#define MC_SyncMode_ANALOG                         2
#define MC_SyncMode_DIGITAL                        3
#define MC_VCgatePos_Ln                          (MCPARAMID)(  727 << 14)
#define MC_Operation                             (MCPARAMID)(  728 << 14)
#define MC_Operation_SYNC                          1
#define MC_Operation_VCAM                          2
#define MC_Operation_CTL                           3
#define MC_Cable                                 (MCPARAMID)(  729 << 14)
#define MC_Cable_A15_C01                           1
#define MC_Cable_A15_C02                           2
#define MC_Cable_A15_C03                           3
#define MC_Cable_A15_C04                           4
#define MC_Cable_A15_C05                           5
#define MC_FrameRstEdge                          (MCPARAMID)(  730 << 14)
#define MC_FrameRstEdge_GOLOW                      1
#define MC_FrameRstEdge_GOHIGH                     2
#define MC_LineDur_Tk                            (MCPARAMID)(  731 << 14)
#define MC_LineDur_ns                            (MCPARAMID)(  732 << 14)
#define MC_SampleClk_Hz                          (MCPARAMID)(  733 << 14)
#define MC_TCU_ps                                (MCPARAMID)(  734 << 14)
#define MC_Hactive_ns                            (MCPARAMID)(  735 << 14)
#define MC_Hactive_Tk                            (MCPARAMID)(  736 << 14)
#define MC_GrabSizeX_Tk                          (MCPARAMID)(  737 << 14)
#define MC_GrabSizeX_ns                          (MCPARAMID)(  738 << 14)
#define MC_GrabPosX_ns                           (MCPARAMID)(  739 << 14)
#define MC_X_ACQOn                               (MCPARAMID)(  740 << 14)
#define MC_X_ACQOff                              (MCPARAMID)(  741 << 14)
#define MC_ClmDur_ns                             (MCPARAMID)(  742 << 14)
#define MC_ClmPos_ns                             (MCPARAMID)(  743 << 14)
#define MC_X_CLMOn                               (MCPARAMID)(  744 << 14)
#define MC_X_CLMOff                              (MCPARAMID)(  745 << 14)
#define MC_X_HPLL                                (MCPARAMID)(  746 << 14)
#define MC_X_ENDR                                (MCPARAMID)(  747 << 14)
#define MC_X_HOn                                 (MCPARAMID)(  748 << 14)
#define MC_X_HOff                                (MCPARAMID)(  749 << 14)
#define MC_X_MIDX                                (MCPARAMID)(  750 << 14)
#define MC__VActive                              (MCPARAMID)(  751 << 14)
#define MC_GrabSizeY_Ln                          (MCPARAMID)(  752 << 14)
#define MC_GrabPosY_Ln                           (MCPARAMID)(  753 << 14)
#define MC_ADelay1_ns                            (MCPARAMID)(  754 << 14)
#define MC_ADelay2_ns                            (MCPARAMID)(  755 << 14)
#define MC_ADelay3_ns                            (MCPARAMID)(  756 << 14)
#define MC_DDelay2                               (MCPARAMID)(  757 << 14)
#define MC_DDelay3                               (MCPARAMID)(  758 << 14)
#define MC_AcqStep                               (MCPARAMID)(  759 << 14)
#define MC__MIDXQ                                (MCPARAMID)(  760 << 14)
#define MC__ASEL                                 (MCPARAMID)(  761 << 14)
#define MC__BSEL                                 (MCPARAMID)(  762 << 14)
#define MC__CSEL                                 (MCPARAMID)(  763 << 14)
#define MC__DSEL                                 (MCPARAMID)(  764 << 14)
#define MC__PShift1                              (MCPARAMID)(  765 << 14)
#define MC__PShift2                              (MCPARAMID)(  766 << 14)
#define MC__Dig321Mask                           (MCPARAMID)(  767 << 14)
#define MC__VCODIV                               (MCPARAMID)(  768 << 14)
#define MC__SELH                                 (MCPARAMID)(  769 << 14)
#define MC__SELH_NONE                              1
#define MC__SELH_HDS                               2
#define MC__SELH_DETS                              3
#define MC__SELH_QS                                4
#define MC__SELV                                 (MCPARAMID)(  770 << 14)
#define MC__SELV_NONE                              1
#define MC__SELV_VDS                               2
#define MC__SELV_DETV                              3
#define MC__ASSY11                               (MCPARAMID)(  771 << 14)
#define MC__ASSY12                               (MCPARAMID)(  772 << 14)
#define MC__ASSY13                               (MCPARAMID)(  773 << 14)
#define MC__ASSY14                               (MCPARAMID)(  774 << 14)
#define MC__ASSY21                               (MCPARAMID)(  775 << 14)
#define MC__ASSY22                               (MCPARAMID)(  776 << 14)
#define MC__ASSY23                               (MCPARAMID)(  777 << 14)
#define MC__ASSY24                               (MCPARAMID)(  778 << 14)
#define MC__SIZX                                 (MCPARAMID)(  779 << 14)
#define MC__SIZY                                 (MCPARAMID)(  780 << 14)
#define MC__STARTU1                              (MCPARAMID)(  781 << 14)
#define MC__STARTU2                              (MCPARAMID)(  782 << 14)
#define MC__STARTD1                              (MCPARAMID)(  783 << 14)
#define MC__STARTD2                              (MCPARAMID)(  784 << 14)
#define MC__STEPX                                (MCPARAMID)(  785 << 14)
#define MC__STEPY                                (MCPARAMID)(  786 << 14)
#define MC__OFSU                                 (MCPARAMID)(  787 << 14)
#define MC__OFSD                                 (MCPARAMID)(  788 << 14)
#define MC__SELINC                               (MCPARAMID)(  789 << 14)
#define MC__SELINC_EOL                             1
#define MC__SELINC_EOF                             2
#define MC__SELINC_EOL2                            3
#define MC__SELINC_EOF2                            4
#define MC__YChannels                            (MCPARAMID)(  790 << 14)
#define MC__TFINC                                (MCPARAMID)(  791 << 14)
#define MC_SWICodeMask                           (MCPARAMID)(  792 << 14)
#define MC_SASCodeMask                           (MCPARAMID)(  793 << 14)
#define MC_EAPCodeMask                           (MCPARAMID)(  794 << 14)
#define MC_NOWCodeMask                           (MCPARAMID)(  795 << 14)
#define MC_Gain1Ctl                              (MCPARAMID)(  796 << 14)
#define MC_Gain1Ctl_LIN                            1
#define MC_Gain1Ctl_p3DB                           2
#define MC_Gain1Ctl_p2DB                           3
#define MC_Gain1Ctl_p1DB                           4
#define MC_Gain1Ctl_0DB                            5
#define MC_Gain1Ctl_m1DB                           6
#define MC_Gain1Ctl_m2DB                           7
#define MC_Gain1Ctl_m3DB                           8
#define MC_Gain1                                 (MCPARAMID)(  797 << 14)
#define MC_Offset1                               (MCPARAMID)(  798 << 14)
#define MC_Gain2Ctl                              (MCPARAMID)(  799 << 14)
#define MC_Gain2Ctl_LIN                            1
#define MC_Gain2Ctl_p3DB                           2
#define MC_Gain2Ctl_p2DB                           3
#define MC_Gain2Ctl_p1DB                           4
#define MC_Gain2Ctl_0DB                            5
#define MC_Gain2Ctl_m1DB                           6
#define MC_Gain2Ctl_m2DB                           7
#define MC_Gain2Ctl_m3DB                           8
#define MC_Gain2                                 (MCPARAMID)(  800 << 14)
#define MC_Offset2                               (MCPARAMID)(  801 << 14)
#define MC_Gain3Ctl                              (MCPARAMID)(  802 << 14)
#define MC_Gain3Ctl_LIN                            1
#define MC_Gain3Ctl_p3DB                           2
#define MC_Gain3Ctl_p2DB                           3
#define MC_Gain3Ctl_p1DB                           4
#define MC_Gain3Ctl_0DB                            5
#define MC_Gain3Ctl_m1DB                           6
#define MC_Gain3Ctl_m2DB                           7
#define MC_Gain3Ctl_m3DB                           8
#define MC_Gain3                                 (MCPARAMID)(  803 << 14)
#define MC_Offset3                               (MCPARAMID)(  804 << 14)
#define MC_NominalGainACode                      (MCPARAMID)(  805 << 14)
#define MC_NominalGainBCode                      (MCPARAMID)(  806 << 14)
#define MC_NominalGainCCode                      (MCPARAMID)(  807 << 14)
#define MC_NominalGainDCode                      (MCPARAMID)(  808 << 14)
#define MC__NominalGain1Code                     (MCPARAMID)(  809 << 14)
#define MC__NominalGain2Code                     (MCPARAMID)(  810 << 14)
#define MC__NominalGain3Code                     (MCPARAMID)(  811 << 14)
#define MC__Gain1Code                            (MCPARAMID)(  812 << 14)
#define MC__Gain2Code                            (MCPARAMID)(  813 << 14)
#define MC__Gain3Code                            (MCPARAMID)(  814 << 14)
#define MC_X_IPLLOn                              (MCPARAMID)(  815 << 14)
#define MC_X_IPLLOff                             (MCPARAMID)(  816 << 14)
#define MC_ModuleType_Unknown                      1
#define MC_ModuleType_NoModule                     2
#define MC_ModuleType_D16A                         3
#define MC_ModuleType_D32AB                        4
#define MC_ModuleType_D32B                         5
#define MC_ModuleType_D16C                         6
#define MC_ModuleType_D32C                         7
#define MC_NextTrigMode_REPEAT                     1
#define MC_NextTrigMode_HARD                       2
#define MC_NextTrigMode_SOFT                       3
#define MC_NextTrigMode_COMBINED                   4
#define MC_AcqMode                               (MCPARAMID)(  817 << 14)
#define MC_AcqMode_GRABBER                         1
#define MC_AcqMode_TIMER                           2
#define MC_AcqMode_SYSTEM                          3
#define MC_TrigCtl_TTL                             1
#define MC_JumperCK                              (MCPARAMID)(  818 << 14)
#define MC_JumperCK_CKDPOS                         1
#define MC_JumperCK_CKDNEG                         2
#define MC_JumperCK_CKSPOS                         3
#define MC_JumperCK_CKSNEG                         4
#define MC_JumperCK_ZLANE                          5
#define MC_JumperCK_EMPTY                          6
#define MC_JumperL1                              (MCPARAMID)(  819 << 14)
#define MC_JumperL1_DT                             1
#define MC_JumperL1_DU                             2
#define MC_JumperL1_ST                             3
#define MC_JumperL1_SU                             4
#define MC_JumperL2                              (MCPARAMID)(  820 << 14)
#define MC_JumperL2_DT                             1
#define MC_JumperL2_DU                             2
#define MC_JumperL2_ST                             3
#define MC_JumperL2_SU                             4
#define MC_JumperH                               (MCPARAMID)(  821 << 14)
#define MC_JumperH_TTL                             1
#define MC_JumperH_DPOS                            2
#define MC_JumperH_DNEG                            3
#define MC_JumperV                               (MCPARAMID)(  822 << 14)
#define MC_JumperV_TTL                             1
#define MC_JumperV_DPOS                            2
#define MC_JumperV_DNEG                            3
#define MC_ADresolution                          (MCPARAMID)(  823 << 14)
#define MC_ADresolution_8BIT                       1
#define MC_ADresolution_10BIT                      2
#define MC_LineDurTrimOK                         (MCPARAMID)(  824 << 14)
#define MC_LineDurTrimOK_YES                       1
#define MC_LineDurTrimOK_NO                        2
#define MC_OffsetX_Px                            (MCPARAMID)(  825 << 14)
#define MC_WindowX_Px                            (MCPARAMID)(  826 << 14)
#define MC_WindowY_Ln                            (MCPARAMID)(  827 << 14)
#define MC_WindowX_Tk                            (MCPARAMID)(  828 << 14)
#define MC_VdriveDly_Ln                          (MCPARAMID)(  829 << 14)
#define MC_Expose_us                             (MCPARAMID)(  830 << 14)
#define MC_ExposeTrim                            (MCPARAMID)(  831 << 14)
#define MC_TrueExp_us                            (MCPARAMID)(  832 << 14)
#define MC_StrobeLevel                           (MCPARAMID)(  833 << 14)
#define MC_StrobeLevel_PLSHIGH                     1
#define MC_StrobeLevel_PLSLOW                      2
#define MC_StrobeLevel_HIGH                        3
#define MC_StrobeLevel_LOW                         4
#define MC_StrobeDur                             (MCPARAMID)(  834 << 14)
#define MC_StrobePos                             (MCPARAMID)(  835 << 14)
#define MC_StrobeCtl                             (MCPARAMID)(  836 << 14)
#define MC_StrobeCtl_NONE                          1
#define MC_StrobeCtl_TTL                           2
#define MC_StrobeLine                            (MCPARAMID)(  837 << 14)
#define MC_StrobeLine_NOM                          1
#define MC_StrobeLine_ALT1                         2
#define MC_StrobeLine_ALT2                         3
#define MC_StrobeLine_ALT3                         4
#define MC_StrobeLine_ALT4                         5
#define MC_GainCtl                               (MCPARAMID)(  838 << 14)
#define MC_GainCtl_LIN                             1
#define MC_GainCtl_p3DB                            2
#define MC_GainCtl_p2DB                            3
#define MC_GainCtl_p1DB                            4
#define MC_GainCtl_0DB                             5
#define MC_GainCtl_m1DB                            6
#define MC_GainCtl_m2DB                            7
#define MC_GainCtl_m3DB                            8
#define MC_GainTrim1                             (MCPARAMID)(  839 << 14)
#define MC_GainTrim2                             (MCPARAMID)(  840 << 14)
#define MC_GainTrim3                             (MCPARAMID)(  841 << 14)
#define MC_Offset                                (MCPARAMID)(  842 << 14)
#define MC_OffsetTrim1                           (MCPARAMID)(  843 << 14)
#define MC_OffsetTrim2                           (MCPARAMID)(  844 << 14)
#define MC_OffsetTrim3                           (MCPARAMID)(  845 << 14)
#define MC__Offset1Code                          (MCPARAMID)(  846 << 14)
#define MC__Offset2Code                          (MCPARAMID)(  847 << 14)
#define MC__Offset3Code                          (MCPARAMID)(  848 << 14)
#define MC__Tk_Px                                (MCPARAMID)(  849 << 14)
#define MC___MSFBuild                            (MCPARAMID)(  850 << 14)
#define MC___MSFError                            (MCPARAMID)(  851 << 14)
#define MC_PinGATE                               (MCPARAMID)(  852 << 14)
#define MC_PinGATE_UNUSED                          1
#define MC_PinGATE_VSYNC                           2
#define MC_PinVIO                                (MCPARAMID)(  853 << 14)
#define MC_PinVIO_UNUSED                           1
#define MC_PinVIO_VSYNC                            2
#define MC_Cable_A15_C06                           6
#define MC_Cable_A15_C07                           7
#define MC_Premier                               (MCPARAMID)(  854 << 14)
#define MC_Premier_AA                              1
#define MC_Premier_BB                              2
#define MC_Premier_CC                              3
#define MC_Premier_DD                              4
#define MC_Premier_ZZ                              5
#define MC_ParamIn2                              (MCPARAMID)(  855 << 14)
#define MC_Auteur                                (MCPARAMID)(  856 << 14)
#define MC_Auteur_TOI                              1
#define MC_Auteur_MOI                              2
#define MC_Auteur_EUX                              3
#define MC_Auteur_NOUS                             4
#define MC_Auteur_LUI                              5
#define MC_Menteur                               (MCPARAMID)(  857 << 14)
#define MC_ParamIn8                              (MCPARAMID)(  858 << 14)
#define MC_ParamOut1                             (MCPARAMID)(  859 << 14)
#define MC_ParamOut1_XX                            1
#define MC_ParamOut1_YY                            2
#define MC_ParamOut1_ZZ                            3
#define MC_Carton                                (MCPARAMID)(  860 << 14)
#define MC_Carton_ALPHA                            1
#define MC_Carton_BETA                             2
#define MC_Carton_GAMMA                            3
#define MC_Carton_DELTA                            4
#define MC_ParamOut4                             (MCPARAMID)(  861 << 14)
#define MC_ParamOut5                             (MCPARAMID)(  862 << 14)
#define MC_Arthur                                (MCPARAMID)(  863 << 14)
#define MC_Arthur_X                                1
#define MC_Arthur_Y                                2
#define MC_Arthur_Z                                3
#define MC_Acteur                                (MCPARAMID)(  864 << 14)
#define MC_Acteur_JOE                              1
#define MC__CFG                                  (MCPARAMID)(  865 << 14)
#define MC__CFG_MONOCAM                            1
#define MC__CFG_DUOCAMA                            2
#define MC__CFG_DUOCAMB                            3
#define MC_TapCount                              (MCPARAMID)(  866 << 14)
#define MC__Bend16                               (MCPARAMID)(  867 << 14)
#define MC__Bend15                               (MCPARAMID)(  868 << 14)
#define MC__Bend14                               (MCPARAMID)(  869 << 14)
#define MC__Bend13                               (MCPARAMID)(  870 << 14)
#define MC__Bend12                               (MCPARAMID)(  871 << 14)
#define MC__Bend11                               (MCPARAMID)(  872 << 14)
#define MC__Bend10                               (MCPARAMID)(  873 << 14)
#define MC__Bend9                                (MCPARAMID)(  874 << 14)
#define MC__Bend8                                (MCPARAMID)(  875 << 14)
#define MC__Bend7                                (MCPARAMID)(  876 << 14)
#define MC__Bend6                                (MCPARAMID)(  877 << 14)
#define MC__Bend5                                (MCPARAMID)(  878 << 14)
#define MC__Bend4                                (MCPARAMID)(  879 << 14)
#define MC__Bend3                                (MCPARAMID)(  880 << 14)
#define MC__Bend2                                (MCPARAMID)(  881 << 14)
#define MC__Bend1                                (MCPARAMID)(  882 << 14)
#define MC_CamCount                              (MCPARAMID)(  883 << 14)
#define MC_ChannelTopology_QUADXTAP                9
#define MC_BackEndProg_ABC34                      10
#define MC_BackEndProg_ABCD44                     11
#define MC_BackEndOption                         (MCPARAMID)(  884 << 14)
#define MC_TimingClockFrequency                  (MCPARAMID)(  885 << 14)
#define MC_TapCount_ONE                            1
#define MC_TapCount_TWO                            2
#define MC_TapCount_THREE                          3
#define MC_TapCount_FOUR                           4
#define MC_TapCount_TWO_Y_END                      5
#define MC_USOutM_ABC1                            13
#define MC_BlockCount                            (MCPARAMID)(  886 << 14)
#define MC_PlaneTopology                         (MCPARAMID)(  887 << 14)
#define MC_PlaneTopology_SINGLE                    1
#define MC_PlaneTopology_MULTIPLE                  2
#define MC_Line1Cfg                              (MCPARAMID)(  888 << 14)
#define MC_Line1Cfg_DIFF_IN_T                      1
#define MC_Line1Cfg_TTL_IN_Z                       2
#define MC_RX1                                   (MCPARAMID)(  889 << 14)
#define MC_TX1                                   (MCPARAMID)(  890 << 14)
#define MC_Line2Cfg                              (MCPARAMID)(  891 << 14)
#define MC_Line2Cfg_DIFF_IN_T                      1
#define MC_Line2Cfg_TTL_IN_Z                       2
#define MC_RX2                                   (MCPARAMID)(  892 << 14)
#define MC_TX2                                   (MCPARAMID)(  893 << 14)
#define MC_SX12                                  (MCPARAMID)(  894 << 14)
#define MC_Line3Cfg                              (MCPARAMID)(  895 << 14)
#define MC_Line3Cfg_DIFF_OUT                       1
#define MC_Line3Cfg_TTL_OUT                        2
#define MC_Line4Cfg                              (MCPARAMID)(  896 << 14)
#define MC_Line4Cfg_DIFF_OUT                       1
#define MC_Line4Cfg_DIFF_IN_T                      2
#define MC_Line4Cfg_TTL_IN_Z                       3
#define MC_RX4                                   (MCPARAMID)(  897 << 14)
#define MC_TX4                                   (MCPARAMID)(  898 << 14)
#define MC_SX34                                  (MCPARAMID)(  899 << 14)
#define MC_Line5Cfg                              (MCPARAMID)(  900 << 14)
#define MC_Line5Cfg_DIFF_OUT                       1
#define MC_Line5Cfg_TTL_OUT                        2
#define MC_Line6Cfg                              (MCPARAMID)(  901 << 14)
#define MC_Line6Cfg_DIFF_OUT                       1
#define MC_Line6Cfg_TTL_OUT                        2
#define MC_SX56                                  (MCPARAMID)(  902 << 14)
#define MC_Line6Ctl_RESET                          3
#define MC_Line6Ctl_EXPOSE                         4
#define MC_Line4Ctl_DCLKIN                         4
#define MC_TPFrequencyRatio                      (MCPARAMID)(  903 << 14)
#define MC__DCGComb                              (MCPARAMID)(  904 << 14)
#define MC__DCGComb_NO                             1
#define MC__DCGComb_YES                            2
#define MC_TimUnitN                              (MCPARAMID)(  905 << 14)
#define MC_TimUnitN_UNKNOWN                        1
#define MC_TimUnitN_FREE                           2
#define MC_TimUnitN_USEDX                          3
#define MC_TimUnitN_USEDY                          4
#define MC_TimUnitN_CONFLICT                       5
#define MC_MapConTim_XY                            7
#define MC_MapDigTim_NONE                          8
#define MC_MapTimCon_TXY                           7
#define MC_MapTimDig_TXX                           7
#define MC_MapTimDig_TXY                           8
#define MC_MapLaneY1_B                             5
#define MC_MapLaneX1_B                             3
#define MC_MapLaneX2_A                             3
#define MC_MapLaneY2_A                             4
#define MC__BoardType                            (MCPARAMID)(  906 << 14)
#define MC__BoardType__ALPHA                       1
#define MC__BoardType__GAMMA                       2
#define MC_MapConTim_YX                            8
#define MC_MapTimCon_TYX                           8
#define MC_VCSync                                (MCPARAMID)(  907 << 14)
#define MC_VCSync_NO                               1
#define MC_VCSync_YES                              2
#define MC__Integer1                             (MCPARAMID)(  908 << 14)
#define MC__SlowMode                             (MCPARAMID)(  909 << 14)
#define MC__SlowMode_OFF                           1
#define MC__SlowMode_ON                            2
#define MC_Expose_Tk                             (MCPARAMID)(  910 << 14)
#define MC__ST_StrxCtl                           (MCPARAMID)(  911 << 14)
#define MC__ST_StrxCtl_High                        1
#define MC__ST_StrxCtl_Low                         2
#define MC__ST_StryCtl                           (MCPARAMID)(  912 << 14)
#define MC__ST_StryCtl_High                        1
#define MC__ST_StryCtl_Low                         2
#define MC__ST_StrzCtl                           (MCPARAMID)(  913 << 14)
#define MC__ST_StrzCtl_High                        1
#define MC__ST_StrzCtl_Low                         2
#define MC__ST_TVxCtl                            (MCPARAMID)(  914 << 14)
#define MC__ST_TVxCtl_High                         1
#define MC__ST_TVxCtl_Low                          2
#define MC__ST_TVxCtl_Input                        3
#define MC__ST_TVyCtl                            (MCPARAMID)(  915 << 14)
#define MC__ST_TVyCtl_High                         1
#define MC__ST_TVyCtl_Low                          2
#define MC__ST_TVyCtl_Input                        3
#define MC__ST_TVzCtl                            (MCPARAMID)(  916 << 14)
#define MC__ST_TVzCtl_High                         1
#define MC__ST_TVzCtl_Low                          2
#define MC__ST_TVzCtl_Input                        3
#define MC__ST_THxCtl                            (MCPARAMID)(  917 << 14)
#define MC__ST_THxCtl_High                         1
#define MC__ST_THxCtl_Low                          2
#define MC__ST_THxCtl_Input                        3
#define MC__ST_THyCtl                            (MCPARAMID)(  918 << 14)
#define MC__ST_THyCtl_High                         1
#define MC__ST_THyCtl_Low                          2
#define MC__ST_THyCtl_Input                        3
#define MC__ST_THzCtl                            (MCPARAMID)(  919 << 14)
#define MC__ST_THzCtl_High                         1
#define MC__ST_THzCtl_Low                          2
#define MC__ST_THzCtl_Input                        3
#define MC__ST_TExCtl                            (MCPARAMID)(  920 << 14)
#define MC__ST_TExCtl_High                         1
#define MC__ST_TExCtl_Low                          2
#define MC__ST_TExCtl_Input                        3
#define MC__ST_TEyCtl                            (MCPARAMID)(  921 << 14)
#define MC__ST_TEyCtl_High                         1
#define MC__ST_TEyCtl_Low                          2
#define MC__ST_TEyCtl_Input                        3
#define MC__ST_TEzCtl                            (MCPARAMID)(  922 << 14)
#define MC__ST_TEzCtl_High                         1
#define MC__ST_TEzCtl_Low                          2
#define MC__ST_TEzCtl_Input                        3
#define MC__ST_TGxCtl                            (MCPARAMID)(  923 << 14)
#define MC__ST_TGxCtl_High                         1
#define MC__ST_TGxCtl_Low                          2
#define MC__ST_TGxCtl_Input                        3
#define MC__ST_TGyCtl                            (MCPARAMID)(  924 << 14)
#define MC__ST_TGyCtl_High                         1
#define MC__ST_TGyCtl_Low                          2
#define MC__ST_TGyCtl_Input                        3
#define MC__ST_TGzCtl                            (MCPARAMID)(  925 << 14)
#define MC__ST_TGzCtl_High                         1
#define MC__ST_TGzCtl_Low                          2
#define MC__ST_TGzCtl_Input                        3
#define MC__ST_TRxCtl                            (MCPARAMID)(  926 << 14)
#define MC__ST_TRxCtl_High                         1
#define MC__ST_TRxCtl_Low                          2
#define MC__ST_TRxCtl_Input                        3
#define MC__ST_TRyCtl                            (MCPARAMID)(  927 << 14)
#define MC__ST_TRyCtl_High                         1
#define MC__ST_TRyCtl_Low                          2
#define MC__ST_TRyCtl_Input                        3
#define MC__ST_TRzCtl                            (MCPARAMID)(  928 << 14)
#define MC__ST_TRzCtl_High                         1
#define MC__ST_TRzCtl_Low                          2
#define MC__ST_TRzCtl_Input                        3
#define MC__ST_Out1Ctl                           (MCPARAMID)(  929 << 14)
#define MC__ST_Out1Ctl_High                        1
#define MC__ST_Out1Ctl_Low                         2
#define MC__ST_Out2Ctl                           (MCPARAMID)(  930 << 14)
#define MC__ST_Out2Ctl_High                        1
#define MC__ST_Out2Ctl_Low                         2
#define MC__ST_Out3Ctl                           (MCPARAMID)(  931 << 14)
#define MC__ST_Out3Ctl_High                        1
#define MC__ST_Out3Ctl_Low                         2
#define MC__ST_Out4Ctl                           (MCPARAMID)(  932 << 14)
#define MC__ST_Out4Ctl_High                        1
#define MC__ST_Out4Ctl_Low                         2
#define MC_Destination_DSP12                       4
#define MC__ST_aFilter                           (MCPARAMID)(  933 << 14)
#define MC__ST_aFilter_NONE                        1
#define MC__ST_aFilter_10MHZ                       2
#define MC__ST_aFilter_5MHZ                        3
#define MC__ST_aFilter_5MHZ_PAL                    4
#define MC__ST_aFilter_5MHZ_NTSC                   5
#define MC__ST_bFilter                           (MCPARAMID)(  934 << 14)
#define MC__ST_bFilter_NONE                        1
#define MC__ST_bFilter_10MHZ                       2
#define MC__ST_bFilter_5MHZ                        3
#define MC__ST_bFilter_5MHZ_PAL                    4
#define MC__ST_bFilter_5MHZ_NTSC                   5
#define MC_CamConfig_P25RD                        16
#define MC__TIMATIM                              (MCPARAMID)(  935 << 14)
#define MC__DIGATIM                              (MCPARAMID)(  936 << 14)
#define MC_CamConfig_P30RD                        17
#define MC_Clanes_qP_QS                           17
#define MC_Clanes_sR_SQ                           18
#define MC_MMmask                                (MCPARAMID)(  937 << 14)
#define MC_GrabberConfig_0_3_1                     7
#define MC__ASSY31                               (MCPARAMID)(  938 << 14)
#define MC__ASSY32                               (MCPARAMID)(  939 << 14)
#define MC__ASSY33                               (MCPARAMID)(  940 << 14)
#define MC__ASSY34                               (MCPARAMID)(  941 << 14)
#define MC__PShiftA                              (MCPARAMID)(  942 << 14)
#define MC__PShiftB                              (MCPARAMID)(  943 << 14)
#define MC__PShiftC                              (MCPARAMID)(  944 << 14)
#define MC__PShiftD                              (MCPARAMID)(  945 << 14)
#define MC__PShift3                              (MCPARAMID)(  946 << 14)
#define MC__CPHASE                               (MCPARAMID)(  947 << 14)
#define MC__CPHASE_INDEPENDENT                     1
#define MC__CPHASE_GROUPED                         2
#define MC_Camera_HV_C20AEK                       12
#define MC_Camera_XC_003                          13
#define MC__RSTFIFO                              (MCPARAMID)(  948 << 14)
#define MC__RSTFIFO_DISABLED                       1
#define MC__RSTFIFO_ENABLED                        2
#define MC__Fields                               (MCPARAMID)(  949 << 14)
#define MC__UpField                              (MCPARAMID)(  950 << 14)
#define MC__STARTU3                              (MCPARAMID)(  951 << 14)
#define MC__STARTD3                              (MCPARAMID)(  952 << 14)
#define MC_Cable_A15_C08                           8
#define MC_Cable_A15_C09                           9
#define MC_LutSelect1                            (MCPARAMID)(  953 << 14)
#define MC_LutSelect2                            (MCPARAMID)(  954 << 14)
#define MC_LutSelect3                            (MCPARAMID)(  955 << 14)
#define MC_InputFilter                           (MCPARAMID)(  956 << 14)
#define MC_InputFilter_NONE                        1
#define MC_InputFilter_10MHZ                       2
#define MC_InputFilter_5MHZ                        3
#define MC_InputFilter_5MHZ_PAL                    4
#define MC_InputFilter_5MHZ_NTSC                   5
#define MC_VideoFilter                           (MCPARAMID)(  957 << 14)
#define MC_VideoFilter_NONE                        1
#define MC_VideoFilter_10MHZ                       2
#define MC_VideoFilter_5MHZ                        3
#define MC_VideoFilter_5MHZ_PAL                    4
#define MC_VideoFilter_5MHZ_NTSC                   5
#define MC_SYNCLoadSet                           (MCPARAMID)(  958 << 14)
#define MC_VCAMLoadSet                           (MCPARAMID)(  959 << 14)
#define MC_SWISet                                (MCPARAMID)(  960 << 14)
#define MC_SASSet                                (MCPARAMID)(  961 << 14)
#define MC_EAPSet                                (MCPARAMID)(  962 << 14)
#define MC_NOWSet                                (MCPARAMID)(  963 << 14)
#define MC___MSFError_Check                      (MCPARAMID)(  964 << 14)
#define MC___MSFError_Check_PASS                   1
#define MC___MSFError_Check_FAIL                   2
#define MC___GrabberConfig_Check                 (MCPARAMID)(  965 << 14)
#define MC___GrabberConfig_Check_PASS              1
#define MC___GrabberConfig_Check_FAIL              2
#define MC___Alpha_TimUnitN_Check                (MCPARAMID)(  966 << 14)
#define MC___Alpha_TimUnitN_Check_PASS             1
#define MC___Alpha_TimUnitN_Check_FAIL             2
#define MC___Alpha_SyncMode_Check                (MCPARAMID)(  967 << 14)
#define MC___Alpha_SyncMode_Check_PASS             1
#define MC___Alpha_SyncMode_Check_FAIL             2
#define MC___Alpha_ADresolution_Check            (MCPARAMID)(  968 << 14)
#define MC___Alpha_ADresolution_Check_PASS         1
#define MC___Alpha_ADresolution_Check_FAIL         2
#define MC___Alpha_CalPat_Check                  (MCPARAMID)(  969 << 14)
#define MC___Alpha_CalPat_Check_PASS               1
#define MC___Alpha_CalPat_Check_FAIL               2
#define MC_GrabberConfig_Filter                  (MCPARAMID)(  970 << 14)
#define MC_TrigMode_Filter                       (MCPARAMID)(  971 << 14)
#define MC_Connector_Filter                      (MCPARAMID)(  972 << 14)
#define MC_ConnectLoc_Filter                     (MCPARAMID)(  973 << 14)
#define MC_ADresolution_Filter                   (MCPARAMID)(  974 << 14)
#define MC_CalPat_Filter                         (MCPARAMID)(  975 << 14)
#define MC_ChannelTopology_Filter                (MCPARAMID)(  976 << 14)
#define MC_SyncMode_Filter                       (MCPARAMID)(  977 << 14)
#define MC_Cable_Filter                          (MCPARAMID)(  978 << 14)
#define MC_Camera_KP_F3                           14
#define MC_Camera_KP_F3W                          15
#define MC_Camera_Generic                         16
#define MC_Camera_Generic_RGB                     17
#define MC_NextTrigMode_SAME                       5
#define MC_CamConfig_I50RA                        18
#define MC_Cable_A15_C10                          10
#define MC_X_VRSTOn                              (MCPARAMID)(  979 << 14)
#define MC_X_VRSTOff                             (MCPARAMID)(  980 << 14)
#define MC__DeltaX_SIGEOL_RSTOn                  (MCPARAMID)(  981 << 14)
#define MC__DeltaX_SIGEOL_RSTOff                 (MCPARAMID)(  982 << 14)
#define MC_Camera_HV_C20AP                        12
#define MC_Operation_SPECIAL                       4
#define MC_HV_C20AP_AsyncLoadSet                 (MCPARAMID)(  983 << 14)
#define MC_CamConfig_P100SA                       19
#define MC_HReset                                (MCPARAMID)(  984 << 14)
#define MC_HReset_NO                               1
#define MC_HReset_YES                              2
#define MC__ETimebase                            (MCPARAMID)(  985 << 14)
#define MC__ETimebase_READOUT_TIMER                1
#define MC__ETimebase_TIMING_CLOCK                 2
#define MC__E_Tk                                 (MCPARAMID)(  986 << 14)
#define MC__ESpan_us                             (MCPARAMID)(  987 << 14)
#define MC__ESpan_Tk                             (MCPARAMID)(  988 << 14)
#define MC__EXPOn_E                              (MCPARAMID)(  989 << 14)
#define MC__EXPOff_E                             (MCPARAMID)(  990 << 14)
#define MC__ExposeWidth_E                        (MCPARAMID)(  991 << 14)
#define MC__StrobeWidth_E                        (MCPARAMID)(  992 << 14)
#define MC__STROn_E                              (MCPARAMID)(  993 << 14)
#define MC__STROff_E                             (MCPARAMID)(  994 << 14)
#define MC__EXPWidth_E                           (MCPARAMID)(  995 << 14)
#define MC__STRWidth_E                           (MCPARAMID)(  996 << 14)
#define MC__ENDE_E                               (MCPARAMID)(  997 << 14)
#define MC_ExpEdge                               (MCPARAMID)(  998 << 14)
#define MC_ExpEdge_GOLOW                           1
#define MC_ExpEdge_GOHIGH                          2
#define MC__TrueExp_Tk                           (MCPARAMID)(  999 << 14)
#define MC__ExposeTrim_pc                        (MCPARAMID)( 1000 << 14)
#define MC_CamConfig_P100RA_G                     20
#define MC_ExposeOverlap                         (MCPARAMID)( 1001 << 14)
#define MC_ExposeOverlap_FORBID                    1
#define MC_ExposeOverlap_ALLOW                     2
#define MC__TrigLine                             (MCPARAMID)( 1002 << 14)
#define MC_D4Input                               (MCPARAMID)( 1003 << 14)
#define MC_D4Input_ON                              1
#define MC_D4Input_OFF                             2
#define MC__Category                             (MCPARAMID)( 1004 << 14)
#define MC__Category_Camera_Specification          1
#define MC__Category_Camera_Timing                 2
#define MC__Category_Camera_Features               3
#define MC__Category_Line_Scan_Features            4
#define MC__Category_Trigger_Control               5
#define MC__Category_Exposure_Control              6
#define MC__Category_Strobe_Control                7
#define MC__Category_Board_Linkage                 8
#define MC__Category_Board_Configuration           9
#define MC__Category_Grabber_Configuration        10
#define MC__Category_Grabber_Timing               11
#define MC__Category_Grabber_Conditioning         12
#define MC__Category_Cluster_Linkage              13
#define MC_CamConfig_FACTORY                      21
#define MC_TapStructure                          (MCPARAMID)( 1005 << 14)
#define MC_TapStructure_SINGLE_A                   1
#define MC_TapStructure_DUAL_A                     2
#define MC_TapStructure_TRIPLE_A                   3
#define MC_Manufacturer                          (MCPARAMID)( 1006 << 14)
#define MC_Manufacturer_NONE                       1
#define MC_Manufacturer_HITACHI                    2
#define MC_Manufacturer_JAI                        3
#define MC_Manufacturer_SONY                       4
#define MC_Imaging                               (MCPARAMID)( 1007 << 14)
#define MC_Imaging_AREA                            1
#define MC_Spectrum                              (MCPARAMID)( 1008 << 14)
#define MC_Spectrum_BW                             1
#define MC_Spectrum_COLOR                          2
#define MC_Spectrum_IR                             3
#define MC_DataLink                              (MCPARAMID)( 1009 << 14)
#define MC_DataLink_ANALOG                         1
#define MC_ColorMethod                           (MCPARAMID)( 1010 << 14)
#define MC_ColorMethod_NONE                        1
#define MC_ColorMethod_PRISM                       2
#define MC_ColorMethod_RGB                         3
#define MC_Expose                                (MCPARAMID)( 1011 << 14)
#define MC_Expose_PLSTRG                           3
#define MC_Expose_PLSCTL                           4
#define MC_Expose_WIDTH                            5
#define MC_Expose_INTCTL                           6
#define MC_Expose_INTPRM                           7
#define MC_Expose_EXTPRM                           8
#define MC_Readout                               (MCPARAMID)( 1012 << 14)
#define MC_Readout_PLSTRG                          1
#define MC_Readout_WIDTH                           2
#define MC_Readout_INTCTL                          3
#define MC__Category_Channel_Management           14
#define MC__Category_Exception_Management         15
#define MC__Category_Board_Information            16
#define MC__ScanMode                             (MCPARAMID)( 1013 << 14)
#define MC__ScanMode_PROGRESSIVE                   1
#define MC__ScanMode_INTERLACE                     2
#define MC_ENDSet                                (MCPARAMID)( 1014 << 14)
#define MC_EncoderTrim                           (MCPARAMID)( 1015 << 14)
#define MC__BitCalcArg                           (MCPARAMID)( 1016 << 14)
#define MC__XTALTrim                             (MCPARAMID)( 1017 << 14)
#define MC__REFCKATrim                           (MCPARAMID)( 1018 << 14)
#define MC__BoardType__VALUE                       3
#define MC__BoardType__EXPERT                      4
#define MC_Camera_Generic_Dual                    18
#define MC_Camera_1000m                           19
#define MC_TapStructure_SINGLE_B                   4
#define MC_TapStructure_SINGLE_W                   5
#define MC_TapStructure_DUAL_B                     6
#define MC_TapStructure_DUAL_B2                    7
#define MC_TapStructure_DUAL_W                     8
#define MC_TapStructure_DUAL_W2                    9
#define MC_TapStructure_TRIPLE_B                  10
#define MC_TapStructure_TRIPLE_W                  11
#define MC_TapStructure_QUAD_B                    12
#define MC_TapStructure_QUAD_B2                   13
#define MC_TapStructure_QUAD_B4                   14
#define MC_TapStructure_OCTAL_B2                  15
#define MC_TapStructure_Filter                   (MCPARAMID)( 1019 << 14)
#define MC_Operation_PAGE                          5
#define MC_Operation_WEB                           6
#define MC_Manufacturer_ADIMEC                     5
#define MC_DataLink_CAMERALINK                     2
#define MC_DataClk_Hz                            (MCPARAMID)( 1020 << 14)
#define MC_Hactive_Px                            (MCPARAMID)( 1021 << 14)
#define MC_HsyncAft_ns                           (MCPARAMID)( 1022 << 14)
#define MC_VsyncPst_Ln                           (MCPARAMID)( 1023 << 14)
#define MC_HsyncPst_ns                           (MCPARAMID)( 1024 << 14)
#define MC_VgatePos_Ln                           (MCPARAMID)( 1025 << 14)
#define MC_CameraDataWidth                       (MCPARAMID)( 1026 << 14)
#define MC_CameraDataWidth_8BIT                    1
#define MC_CameraDataWidth_10BIT                   2
#define MC_CameraDataWidth_12BIT                   3
#define MC_CameraDataWidth_14BIT                   4
#define MC_CameraDataWidth_16BIT                   5
#define MC_PixelClkCtl_BUILTIN                     4
#define MC_PixelClkEdge_BUILTIN                    3
#define MC_HsyncCtl_BUILTIN                        4
#define MC_VsyncCtl_BUILTIN                        4
#define MC_ResetCtl                              (MCPARAMID)( 1027 << 14)
#define MC_ResetCtl_NONE                           1
#define MC_ResetCtl_TTL                            2
#define MC_ResetCtl_DIFF                           3
#define MC_ResetEdge                             (MCPARAMID)( 1028 << 14)
#define MC_ResetEdge_GOHIGH                        1
#define MC_ResetEdge_GOLOW                         2
#define MC_AuxResetCtl                           (MCPARAMID)( 1029 << 14)
#define MC_AuxResetCtl_NONE                        1
#define MC_AuxResetCtl_TTL                         2
#define MC_AuxResetCtl_DIFF                        3
#define MC_AuxResetEdge                          (MCPARAMID)( 1030 << 14)
#define MC_AuxResetEdge_GOHIGH                     1
#define MC_AuxResetEdge_GOLOW                      2
#define MC_ResetDur                              (MCPARAMID)( 1031 << 14)
#define MC_ResetPos                              (MCPARAMID)( 1032 << 14)
#define MC_ExposeMin_us                          (MCPARAMID)( 1033 << 14)
#define MC_ExposeMax_us                          (MCPARAMID)( 1034 << 14)
#define MC_FvalMode                              (MCPARAMID)( 1035 << 14)
#define MC_FvalMode_FN                             1
#define MC_FvalMode_FA                             2
#define MC_FvalMode_FC                             3
#define MC_FvalMode_PC                             4
#define MC_LvalMode                              (MCPARAMID)( 1036 << 14)
#define MC_LvalMode_LA                             1
#define MC_LvalMode_LP                             2
#define MC_LvalMode_LB                             3
#define MC_LvalMode_LC                             4
#define MC_DvalMode                              (MCPARAMID)( 1037 << 14)
#define MC_DvalMode_DN                             1
#define MC_DvalMode_DG                             2
#define MC_DvalMode_DC                             3
#define MC_Cable_CL_C01                           11
#define MC__Category_Cable_Features               17
#define MC__Category_Encoder_Control              18
#define MC_PageDelay_Ln                          (MCPARAMID)( 1038 << 14)
#define MC_PageLength_Ln                         (MCPARAMID)( 1039 << 14)
#define MC_GrabberDataWidth                      (MCPARAMID)( 1040 << 14)
#define MC_GrabberDataWidth_8BIT                   1
#define MC_GrabberDataWidth_10BIT                  2
#define MC_GrabberDataWidth_12BIT                  3
#define MC_GrabberDataWidth_14BIT                  4
#define MC_GrabberDataWidth_16BIT                  5
#define MC__CDC_SRC                              (MCPARAMID)( 1041 << 14)
#define MC__CDC_SRC_CAMERA                         1
#define MC__CDC_SRC_TPG                            2
#define MC__CDC_ISIZE                            (MCPARAMID)( 1042 << 14)
#define MC__CDC_ISIZE_BASE8                        1
#define MC__CDC_ISIZE_BASE10                       2
#define MC__CDC_ISIZE_BASE12                       3
#define MC__CDC_ISIZE_BASE14                       4
#define MC__CDC_ISIZE_BASE16                       5
#define MC__CDC_ALIGN                            (MCPARAMID)( 1043 << 14)
#define MC__CDC_ALIGN_BYTE                         1
#define MC__CDC_ALIGN_WORDMS                       2
#define MC__CDC_ALIGN_WORDLS                       3
#define MC__CDC_FALLOC1                          (MCPARAMID)( 1044 << 14)
#define MC__CDC_FALLOC1_256_0                      1
#define MC__CDC_FALLOC1_128_0                      2
#define MC__CDC_FALLOC1_128_128                    3
#define MC__CDC_FALLOC1_64_0                       4
#define MC__CDC_FALLOC1_64_64                      5
#define MC__CDC_FALLOC1_64_128                     6
#define MC__CDC_FALLOC1_64_192                     7
#define MC__CDC_FALLOC2                          (MCPARAMID)( 1045 << 14)
#define MC__CDC_FALLOC2_256_0                      1
#define MC__CDC_FALLOC2_128_0                      2
#define MC__CDC_FALLOC2_128_128                    3
#define MC__CDC_FALLOC2_64_0                       4
#define MC__CDC_FALLOC2_64_64                      5
#define MC__CDC_FALLOC2_64_128                     6
#define MC__CDC_FALLOC2_64_192                     7
#define MC__CDC_FALLOC3                          (MCPARAMID)( 1046 << 14)
#define MC__CDC_FALLOC3_256_0                      1
#define MC__CDC_FALLOC3_128_0                      2
#define MC__CDC_FALLOC3_128_128                    3
#define MC__CDC_FALLOC3_64_0                       4
#define MC__CDC_FALLOC3_64_64                      5
#define MC__CDC_FALLOC3_64_128                     6
#define MC__CDC_FALLOC3_64_192                     7
#define MC__CBA_FALLOC1                          (MCPARAMID)( 1047 << 14)
#define MC__CBA_FALLOC1_256_0                      1
#define MC__CBA_FALLOC1_128_0                      2
#define MC__CBA_FALLOC1_128_128                    3
#define MC__CBA_FALLOC1_64_0                       4
#define MC__CBA_FALLOC1_64_64                      5
#define MC__CBA_FALLOC1_64_128                     6
#define MC__CBA_FALLOC1_64_192                     7
#define MC__CBA_FALLOC2                          (MCPARAMID)( 1048 << 14)
#define MC__CBA_FALLOC2_256_0                      1
#define MC__CBA_FALLOC2_128_0                      2
#define MC__CBA_FALLOC2_128_128                    3
#define MC__CBA_FALLOC2_64_0                       4
#define MC__CBA_FALLOC2_64_64                      5
#define MC__CBA_FALLOC2_64_128                     6
#define MC__CBA_FALLOC2_64_192                     7
#define MC__CBA_FALLOC3                          (MCPARAMID)( 1049 << 14)
#define MC__CBA_FALLOC3_256_0                      1
#define MC__CBA_FALLOC3_128_0                      2
#define MC__CBA_FALLOC3_128_128                    3
#define MC__CBA_FALLOC3_64_0                       4
#define MC__CBA_FALLOC3_64_64                      5
#define MC__CBA_FALLOC3_64_128                     6
#define MC__CBA_FALLOC3_64_192                     7
#define MC__CBA_FALLOC4                          (MCPARAMID)( 1050 << 14)
#define MC__CBA_FALLOC4_256_0                      1
#define MC__CBA_FALLOC4_128_0                      2
#define MC__CBA_FALLOC4_128_128                    3
#define MC__CBA_FALLOC4_64_0                       4
#define MC__CBA_FALLOC4_64_64                      5
#define MC__CBA_FALLOC4_64_128                     6
#define MC__CBA_FALLOC4_64_192                     7
#define MC__WIC                                  (MCPARAMID)( 1051 << 14)
#define MC__WIC_ONE                                1
#define MC__WIC_TWO                                2
#define MC__WIC_THREE                              3
#define MC__WIC_FOUR                               4
#define MC__CBA_SHIFT1                           (MCPARAMID)( 1052 << 14)
#define MC__CBA_SHIFT2                           (MCPARAMID)( 1053 << 14)
#define MC__CBA_SHIFT3                           (MCPARAMID)( 1054 << 14)
#define MC__CBA_SHIFT4                           (MCPARAMID)( 1055 << 14)
#define MC_Connector_X_Y                           7
#define MC__CBA_GROUP1                           (MCPARAMID)( 1056 << 14)
#define MC__ASSY                                 (MCPARAMID)( 1057 << 14)
#define MC__ASSY_ONE                               1
#define MC__ASSY_TWO                               2
#define MC__ASSY_THREE                             3
#define MC__ASSY_FOUR                              4
#define MC__CBA_GROUP2                           (MCPARAMID)( 1058 << 14)
#define MC__CBA_GROUP3                           (MCPARAMID)( 1059 << 14)
#define MC__CDC_ISIZE_MEDIUM8                      6
#define MC__CDC_ISIZE_MEDIUM10                     7
#define MC__CDC_ISIZE_MEDIUM12                     8
#define MC__CAM                                  (MCPARAMID)( 1060 << 14)
#define MC__CAM_MONOCAM                            1
#define MC__CAM_DUOCAM                             2
#define MC__CTA_START01                          (MCPARAMID)( 1061 << 14)
#define MC__CTA_START11                          (MCPARAMID)( 1062 << 14)
#define MC__CTA_START02                          (MCPARAMID)( 1063 << 14)
#define MC__CTA_START12                          (MCPARAMID)( 1064 << 14)
#define MC__BW                                   (MCPARAMID)( 1065 << 14)
#define MC__ISIZX                                (MCPARAMID)( 1066 << 14)
#define MC__ISIZYF                               (MCPARAMID)( 1067 << 14)
#define MC__ISIZY                                (MCPARAMID)( 1068 << 14)
#define MC__WX                                   (MCPARAMID)( 1069 << 14)
#define MC__WY                                   (MCPARAMID)( 1070 << 14)
#define MC__DirX1                                (MCPARAMID)( 1071 << 14)
#define MC__DirX2                                (MCPARAMID)( 1072 << 14)
#define MC__DirX3                                (MCPARAMID)( 1073 << 14)
#define MC__DirY1                                (MCPARAMID)( 1074 << 14)
#define MC__DirY2                                (MCPARAMID)( 1075 << 14)
#define MC__DirY3                                (MCPARAMID)( 1076 << 14)
#define MC_ImagePitch                            (MCPARAMID)( 1077 << 14)
#define MC__PITCH1                               (MCPARAMID)( 1078 << 14)
#define MC__PITCH2                               (MCPARAMID)( 1079 << 14)
#define MC__PITCH3                               (MCPARAMID)( 1080 << 14)
#define MC__InterlaceFactor                      (MCPARAMID)( 1081 << 14)
#define MC__CTA_STEPX1                           (MCPARAMID)( 1082 << 14)
#define MC__CTA_STEPX2                           (MCPARAMID)( 1083 << 14)
#define MC__CTA_STEPX3                           (MCPARAMID)( 1084 << 14)
#define MC__CTA_STEPY1                           (MCPARAMID)( 1085 << 14)
#define MC__CTA_STEPY2                           (MCPARAMID)( 1086 << 14)
#define MC__CTA_STEPY3                           (MCPARAMID)( 1087 << 14)
#define MC__OFSD1                                (MCPARAMID)( 1088 << 14)
#define MC__OFSD2                                (MCPARAMID)( 1089 << 14)
#define MC__OFSD3                                (MCPARAMID)( 1090 << 14)
#define MC__OFSU1                                (MCPARAMID)( 1091 << 14)
#define MC__OFSU2                                (MCPARAMID)( 1092 << 14)
#define MC__OFSU3                                (MCPARAMID)( 1093 << 14)
#define MC__CTA_OFSD1                            (MCPARAMID)( 1094 << 14)
#define MC__CTA_OFSD2                            (MCPARAMID)( 1095 << 14)
#define MC__CTA_OFSD3                            (MCPARAMID)( 1096 << 14)
#define MC__CTA_OFSU1                            (MCPARAMID)( 1097 << 14)
#define MC__CTA_OFSU2                            (MCPARAMID)( 1098 << 14)
#define MC__CTA_OFSU3                            (MCPARAMID)( 1099 << 14)
#define MC__CTA_SELINC                           (MCPARAMID)( 1100 << 14)
#define MC__CTA_SELINC_EOL                         1
#define MC__CTA_SELINC_EOF                         2
#define MC__CTA_SELINC_EOL2                        3
#define MC__CTA_SELINC_EOF2                        4
#define MC__Xchannels                            (MCPARAMID)( 1101 << 14)
#define MC__CTA_OFS01                            (MCPARAMID)( 1102 << 14)
#define MC__CTA_OFS11                            (MCPARAMID)( 1103 << 14)
#define MC__CTA_OFS02                            (MCPARAMID)( 1104 << 14)
#define MC__CTA_OFS12                            (MCPARAMID)( 1105 << 14)
#define MC__CTA_TFINC                            (MCPARAMID)( 1106 << 14)
#define MC__CBA_PSHIFT1                          (MCPARAMID)( 1107 << 14)
#define MC__CBA_PSHIFT2                          (MCPARAMID)( 1108 << 14)
#define MC__CBA_PSHIFT3                          (MCPARAMID)( 1109 << 14)
#define MC__CBA_PSHIFT4                          (MCPARAMID)( 1110 << 14)
#define MC_CamConfig_P25SC_S8                     22
#define MC_CamConfig_P25SC_S10                    23
#define MC_CamConfig_P50SC_D8                     24
#define MC_CamConfig_P50SC_D10                    25
#define MC_HsyncAft_Tk                           (MCPARAMID)( 1111 << 14)
#define MC_HsyncPst_Tk                           (MCPARAMID)( 1112 << 14)
#define MC__PITCH1_mw                            (MCPARAMID)( 1113 << 14)
#define MC__PITCH2_mw                            (MCPARAMID)( 1114 << 14)
#define MC__PITCH3_mw                            (MCPARAMID)( 1115 << 14)
#define MC__SIZX_mw                              (MCPARAMID)( 1116 << 14)
#define MC__STARTU1_mw                           (MCPARAMID)( 1117 << 14)
#define MC__STARTU2_mw                           (MCPARAMID)( 1118 << 14)
#define MC__STARTU3_mw                           (MCPARAMID)( 1119 << 14)
#define MC__STARTD1_mw                           (MCPARAMID)( 1120 << 14)
#define MC__STARTD2_mw                           (MCPARAMID)( 1121 << 14)
#define MC__STARTD3_mw                           (MCPARAMID)( 1122 << 14)
#define MC__OFSU1_mw                             (MCPARAMID)( 1123 << 14)
#define MC__OFSU2_mw                             (MCPARAMID)( 1124 << 14)
#define MC__OFSU3_mw                             (MCPARAMID)( 1125 << 14)
#define MC__OFSD1_mw                             (MCPARAMID)( 1126 << 14)
#define MC__OFSD2_mw                             (MCPARAMID)( 1127 << 14)
#define MC__OFSD3_mw                             (MCPARAMID)( 1128 << 14)
#define MC__IPitch_mw                            (MCPARAMID)( 1129 << 14)
#define MC__Pitch_mw                             (MCPARAMID)( 1130 << 14)
#define MC_GrabSizeX_Px                          (MCPARAMID)( 1131 << 14)
#define MC_CamConfig_P50SC                        26
#define MC_GrabberDataWidth_Filter               (MCPARAMID)( 1132 << 14)
#define MC_GrabSizeXStep_Px                      (MCPARAMID)( 1133 << 14)
#define MC_CamConfig_Filter                      (MCPARAMID)( 1134 << 14)
#define MC__VLC_LCNT                             (MCPARAMID)( 1135 << 14)
#define MC__VLC_LBFR                             (MCPARAMID)( 1136 << 14)
#define MC__VLC_LAFT                             (MCPARAMID)( 1137 << 14)
#define MC__VLC_DCNT                             (MCPARAMID)( 1138 << 14)
#define MC__VLC_DBFR                             (MCPARAMID)( 1139 << 14)
#define MC__VLC_DAFT                             (MCPARAMID)( 1140 << 14)
#define MC__x_INDEX                              (MCPARAMID)( 1141 << 14)
#define MC__D1_INDEX                             (MCPARAMID)( 1142 << 14)
#define MC__D2_INDEX                             (MCPARAMID)( 1143 << 14)
#define MC__D3_INDEX                             (MCPARAMID)( 1144 << 14)
#define MC__D4_INDEX                             (MCPARAMID)( 1145 << 14)
#define MC_FutureUseLoadSet                      (MCPARAMID)( 1146 << 14)
#define MC_DigUnit1_E                              5
#define MC_DigUnit1_F                              6
#define MC_DigUnit1_G                              7
#define MC_DigUnit1_H                              8
#define MC_Camera_A201b                           21
#define MC_CamConfig_P30SC                        27
#define MC_Manufacturer_BASLER                     6
#define MC_Cable_CL_C02                           12
#define MC_LinePitch_Filter                      (MCPARAMID)( 1147 << 14)
#define MC_PageDelay_Ln_Filter                   (MCPARAMID)( 1148 << 14)
#define MC_PageLength_Ln_Filter                  (MCPARAMID)( 1149 << 14)
#define MC_EncoderPitch_Filter                   (MCPARAMID)( 1150 << 14)
#define MC_Camera_Filter                         (MCPARAMID)( 1151 << 14)
#define MC_Operation_Filter                      (MCPARAMID)( 1152 << 14)
#define MC___Unsupported_Parameter_Filter        (MCPARAMID)( 1153 << 14)
#define MC_MAN_GrabWindow_Filter                 (MCPARAMID)( 1154 << 14)
#define MC_Camera_A202k                           22
#define MC_Camera_Manufacturer_Filter            (MCPARAMID)( 1155 << 14)
#define MC_CableName                             (MCPARAMID)( 1156 << 14)
#define MC_CableName_CameraLink_Standard           1
#define MC_CableName_Basler_Channel_Link           2
#define MC___CamConfig_Check                     (MCPARAMID)( 1157 << 14)
#define MC___CamConfig_Check_PASS                  1
#define MC___CamConfig_Check_FAIL                  2
#define MC_CamConfig_P48SC                        28
#define MC_ResetLine                             (MCPARAMID)( 1158 << 14)
#define MC_ResetLine_CC1                           1
#define MC_ResetLine_CC2                           2
#define MC_ResetLine_CC3                           3
#define MC_ResetLine_CC4                           4
#define MC_AuxresetLine                          (MCPARAMID)( 1159 << 14)
#define MC_AuxresetLine_CC1                        1
#define MC_AuxresetLine_CC2                        2
#define MC_AuxresetLine_CC3                        3
#define MC_AuxresetLine_CC4                        4
#define MC_CamConfig_P50SM                        29
#define MC__ClkSynthReq                          (MCPARAMID)( 1160 << 14)
#define MC__ClkSynthReq_NONE                       1
#define MC__ClkSynthReq_CS1                        2
#define MC__ClkSynthReq_CS2                        3
#define MC_ClkSynth1_UNKNOWN                       1
#define MC_ClkSynth1_FREE                          2
#define MC_ClkSynth1_USEDX                         3
#define MC_ClkSynth1_USEDY                         4
#define MC_ClkSynth1_USEDZ                         5
#define MC_ClkSynth2_UNKNOWN                       1
#define MC_ClkSynth2_FREE                          2
#define MC_ClkSynth2_USEDX                         3
#define MC_ClkSynth2_USEDY                         4
#define MC_ClkSynth2_USEDZ                         5
#define MC_ClkSynth1_XXX                           6
#define MC_ClkSynth2_XXX                           6
#define MC___Gamma_ClkSynth_Check                (MCPARAMID)( 1161 << 14)
#define MC___Gamma_ClkSynth_Check_PASS             1
#define MC___Gamma_ClkSynth_Check_FAIL             2
#define MC_ClkSynth1_Hz                          (MCPARAMID)( 1162 << 14)
#define MC_ClkSynth2_Hz                          (MCPARAMID)( 1163 << 14)
#define MC__VerticalSyncMode                     (MCPARAMID)( 1164 << 14)
#define MC__VerticalSyncMode_ANALOG                1
#define MC__VerticalSyncMode_DIGITAL               2
#define MC__VerticalSyncMode_MASTER                3
#define MC__SYNC_Line1_Type                      (MCPARAMID)( 1165 << 14)
#define MC_TimUnitN_XXX                            6
#define MC__SSC                                  (MCPARAMID)( 1166 << 14)
#define MC__SSC_CCIR                               1
#define MC__SSC_EIA                                2
#define MC__SSC_CCIR_2                             3
#define MC__SSC_EIA_2                              4
#define MC__SSC_OUTOFRANGE                         5
#define MC__SELH_SSC                               5
#define MC__SYNC_Line1_Type_BLANK_VRSTOFF          1
#define MC__SYNC_Line1_Type_BLANK_VRSTON           2
#define MC__SYNC_Line1_Dur                       (MCPARAMID)( 1167 << 14)
#define MC__SYNC_Line2_Type                      (MCPARAMID)( 1168 << 14)
#define MC__SYNC_Line2_Type_BLANK_VRSTOFF          1
#define MC__SYNC_Line2_Dur                       (MCPARAMID)( 1169 << 14)
#define MC__SYNC_Line3_Type                      (MCPARAMID)( 1170 << 14)
#define MC__SYNC_Line3_Type_ACQ_VRSTOFF            1
#define MC__SYNC_Line3_Dur                       (MCPARAMID)( 1171 << 14)
#define MC__SYNC_Line4_Type                      (MCPARAMID)( 1172 << 14)
#define MC__SYNC_Line4_Type_ACQ_VRSTOFF            1
#define MC__SYNC_Line4_Type_ACQ_VRSTON             2
#define MC__SYNC_Line4_Dur                       (MCPARAMID)( 1173 << 14)
#define MC__SYNC_Line5_Type                      (MCPARAMID)( 1174 << 14)
#define MC__SYNC_Line5_Type_BLANK_VRSTOFF          1
#define MC__SYNC_Line5_Type_BLANK_VRSTON           2
#define MC__SYNC_Line5_Dur                       (MCPARAMID)( 1175 << 14)
#define MC__SYNC_Acq_Dur                         (MCPARAMID)( 1176 << 14)
#define MC__SYNC_Vrst_Dur                        (MCPARAMID)( 1177 << 14)
#define MC__SYNC_RefV2Acq_Gap                    (MCPARAMID)( 1178 << 14)
#define MC__SYNC_Field_Dur                       (MCPARAMID)( 1179 << 14)
#define MC__SYNC_Eacq2Vrst_Gap                   (MCPARAMID)( 1180 << 14)
#define MC__SYNC_Vrst2Bacq_Gap                   (MCPARAMID)( 1181 << 14)
#define MC__SYNC_Vtotal_Check                    (MCPARAMID)( 1182 << 14)
#define MC__SYNC_Eacq2Vrst_Phase                 (MCPARAMID)( 1183 << 14)
#define MC__SYNC_Eacq2Vrst_Phase_BEFORE            1
#define MC__SYNC_Eacq2Vrst_Phase_SAME              2
#define MC__SYNC_Eacq2Vrst_Phase_AFTER             3
#define MC_ClkSynth1_OFF                           7
#define MC_ClkSynth1_TX                            8
#define MC_ClkSynth1_TY                            9
#define MC_ClkSynth1_TZ                           10
#define MC_ClkSynth2_OFF                           7
#define MC_ClkSynth2_TX                            8
#define MC_ClkSynth2_TY                            9
#define MC_ClkSynth2_TZ                           10
#define MC__PllControl                           (MCPARAMID)( 1184 << 14)
#define MC__PllControl_YES                         1
#define MC__PllControl_NO                          2
#define MC_CamConfig_P50RM_G                      30
#define MC__DigUnit1                             (MCPARAMID)( 1185 << 14)
#define MC__DigUnit2                             (MCPARAMID)( 1186 << 14)
#define MC__DigUnit3                             (MCPARAMID)( 1187 << 14)
#define MC__TimUnit                              (MCPARAMID)( 1188 << 14)
#define MC_CSTSet                                (MCPARAMID)( 1189 << 14)
#define MC_WSTSet                                (MCPARAMID)( 1190 << 14)
#define MC_PixelClkLine                          (MCPARAMID)( 1191 << 14)
#define MC_PixelClkLine_CK                         1
#define MC_ResetLine_RST                           5
#define MC_ResetLine_EXP                           6
#define MC_ResetLine_GATE                          7
#define MC_ResetLine_HIO                           8
#define MC_ResetLine_VIO                           9
#define MC_ResetLine_DUAL                         10
#define MC_AuxResetLine_RST                        5
#define MC_AuxResetLine_EXP                        6
#define MC_AuxResetLine_GATE                       7
#define MC_AuxResetLine_HIO                        8
#define MC_AuxResetLine_VIO                        9
#define MC_AuxResetLine_DUAL                      10
#define MC_VsyncLine                             (MCPARAMID)( 1192 << 14)
#define MC_VsyncLine_RST                           1
#define MC_VsyncLine_EXP                           2
#define MC_VsyncLine_GATE                          3
#define MC_VsyncLine_HIO                           4
#define MC_VsyncLine_VIO                           5
#define MC_VsyncLine_DUAL                          6
#define MC_HsyncLine                             (MCPARAMID)( 1193 << 14)
#define MC_HsyncLine_RST                           1
#define MC_HsyncLine_EXP                           2
#define MC_HsyncLine_GATE                          3
#define MC_HsyncLine_HIO                           4
#define MC_HsyncLine_VIO                           5
#define MC_HsyncLine_DUAL                          6
#define MC_CableName_UNKNOWN                       3
#define MC_CableName_Single_Channel_R              4
#define MC_CableName_Single_Channel_RC             5
#define MC_CableName_Single_Channel_RGC_2          6
#define MC_CableName_Dual_Channel                  7
#define MC_CableName_Dual_Channel_RG               8
#define MC_CableName_Dual_Channel_RG_2             9
#define MC_CableName_Triple_Channel_R             10
#define MC_ColorMethod_Filter                    (MCPARAMID)( 1194 << 14)
#define MC_GCE_Filter                            (MCPARAMID)( 1195 << 14)
#define MC__TrueExp_us                           (MCPARAMID)( 1196 << 14)
#define MC_StrobeMode                            (MCPARAMID)( 1197 << 14)
#define MC_StrobeMode_Filter                     (MCPARAMID)( 1198 << 14)
#define MC_StrobeMode_NONE                         1
#define MC_StrobeMode_AUTO                         2
#define MC_StrobeMode_MAN                          3
#define MC_SampleTrim                            (MCPARAMID)( 1199 << 14)
#define MC_DigUnit2_Filter                       (MCPARAMID)( 1200 << 14)
#define MC_DigUnit3_Filter                       (MCPARAMID)( 1201 << 14)
#define MC_SampleTrim_Filter                     (MCPARAMID)( 1202 << 14)
#define MC_Manufacturer_MY_CAMERAS                 7
#define MC___GrabberTiming_Check                 (MCPARAMID)( 1203 << 14)
#define MC___GrabberTiming_Check_PASS              1
#define MC___GrabberTiming_Check_FAIL              2
#define MC__HDC_DCNT                             (MCPARAMID)( 1204 << 14)
#define MC__HBC_HPRE                             (MCPARAMID)( 1205 << 14)
#define MC__HBC_DBFR_Expected                    (MCPARAMID)( 1206 << 14)
#define MC__HBC_DBFR                             (MCPARAMID)( 1207 << 14)
#define MC__HBC_DBFR_Check                       (MCPARAMID)( 1208 << 14)
#define MC__HBC_DBFR_Check_PASS                    1
#define MC__HBC_DBFR_Check_FAIL                    2
#define MC__HAC_DAFT                             (MCPARAMID)( 1209 << 14)
#define MC__VBC_LBFR                             (MCPARAMID)( 1210 << 14)
#define MC__VAC_LAFT                             (MCPARAMID)( 1211 << 14)
#define MC__SCC_CC1                              (MCPARAMID)( 1212 << 14)
#define MC__SCC_CC1_CTL1                           1
#define MC__SCC_CC1_CTL2                           2
#define MC__SCC_CC1_XCTL2                          3
#define MC__SCC_CC1_LOW                            4
#define MC__SCC_CC1_CTL1n                          5
#define MC__SCC_CC1_CTL2n                          6
#define MC__SCC_CC1_XCTL2n                         7
#define MC__SCC_CC1_HIGH                           8
#define MC__SCC_CC2                              (MCPARAMID)( 1213 << 14)
#define MC__SCC_CC2_CTL1                           1
#define MC__SCC_CC2_CTL2                           2
#define MC__SCC_CC2_XCTL2                          3
#define MC__SCC_CC2_LOW                            4
#define MC__SCC_CC2_CTL1n                          5
#define MC__SCC_CC2_CTL2n                          6
#define MC__SCC_CC2_XCTL2n                         7
#define MC__SCC_CC2_HIGH                           8
#define MC__SCC_CC3                              (MCPARAMID)( 1214 << 14)
#define MC__SCC_CC3_CTL1                           1
#define MC__SCC_CC3_CTL2                           2
#define MC__SCC_CC3_XCTL2                          3
#define MC__SCC_CC3_LOW                            4
#define MC__SCC_CC3_CTL1n                          5
#define MC__SCC_CC3_CTL2n                          6
#define MC__SCC_CC3_XCTL2n                         7
#define MC__SCC_CC3_HIGH                           8
#define MC__SCC_CC4                              (MCPARAMID)( 1215 << 14)
#define MC__SCC_CC4_CTL1                           1
#define MC__SCC_CC4_CTL2                           2
#define MC__SCC_CC4_XCTL2                          3
#define MC__SCC_CC4_LOW                            4
#define MC__SCC_CC4_CTL1n                          5
#define MC__SCC_CC4_CTL2n                          6
#define MC__SCC_CC4_XCTL2n                         7
#define MC__SCC_CC4_HIGH                           8
#define MC_CC1Usage                              (MCPARAMID)( 1216 << 14)
#define MC_CC1Usage_SOFT                           1
#define MC_CC1Usage_LOW                            2
#define MC_CC1Usage_HIGH                           3
#define MC_CC1Usage_RESET                          4
#define MC_CC1Usage_AUXRESET                       5
#define MC_CC1Usage_ACQPHASE                       6
#define MC_CC1Usage_ACQSEQUENCE                    7
#define MC_CCxUsage_Filter                       (MCPARAMID)( 1217 << 14)
#define MC_CC2Usage                              (MCPARAMID)( 1218 << 14)
#define MC_CC2Usage_SOFT                           1
#define MC_CC2Usage_LOW                            2
#define MC_CC2Usage_HIGH                           3
#define MC_CC2Usage_RESET                          4
#define MC_CC2Usage_AUXRESET                       5
#define MC_CC2Usage_ACQPHASE                       6
#define MC_CC2Usage_ACQSEQUENCE                    7
#define MC_CC3Usage                              (MCPARAMID)( 1219 << 14)
#define MC_CC3Usage_SOFT                           1
#define MC_CC3Usage_LOW                            2
#define MC_CC3Usage_HIGH                           3
#define MC_CC3Usage_RESET                          4
#define MC_CC3Usage_AUXRESET                       5
#define MC_CC3Usage_ACQPHASE                       6
#define MC_CC3Usage_ACQSEQUENCE                    7
#define MC_CC4Usage                              (MCPARAMID)( 1220 << 14)
#define MC_CC4Usage_SOFT                           1
#define MC_CC4Usage_LOW                            2
#define MC_CC4Usage_HIGH                           3
#define MC_CC4Usage_RESET                          4
#define MC_CC4Usage_AUXRESET                       5
#define MC_CC4Usage_ACQPHASE                       6
#define MC_CC4Usage_ACQSEQUENCE                    7
#define MC__STRB                                 (MCPARAMID)( 1221 << 14)
#define MC__CID                                  (MCPARAMID)( 1222 << 14)
#define MC__OUT1                                 (MCPARAMID)( 1223 << 14)
#define MC__OUT2                                 (MCPARAMID)( 1224 << 14)
#define MC__OUT3                                 (MCPARAMID)( 1225 << 14)
#define MC__OUT4                                 (MCPARAMID)( 1226 << 14)
#define MC__VBC_LBFR_Expected                    (MCPARAMID)( 1227 << 14)
#define MC__VBC_LBFR_Check                       (MCPARAMID)( 1228 << 14)
#define MC__VBC_LBFR_Check_PASS                    1
#define MC__VBC_LBFR_Check_FAIL                    2
#define MC__VBC_VPRE                             (MCPARAMID)( 1229 << 14)
#define MC__VLC_LCINIT                           (MCPARAMID)( 1230 << 14)
#define MC_Camera_TM_1020_15CL                    23
#define MC_Camera_TM_1320_15CL                    24
#define MC_Camera_SVS282CSCL                      25
#define MC_Camera_SVS285MFCL                      26
#define MC_Camera_SVS285MSCL                      27
#define MC_CamConfig_P15SC                        31
#define MC_CamConfig_I10SC                        32
#define MC_CamConfig_P22SC                        33
#define MC_Manufacturer_PULNIX                     8
#define MC_Manufacturer_VISTEK                     9
#define MC_ColorMethod_BAYER                       4
#define MC__DRS_CPAR                             (MCPARAMID)( 1231 << 14)
#define MC__DRS_CSAP                             (MCPARAMID)( 1232 << 14)
#define MC__DRS_CFLD                             (MCPARAMID)( 1233 << 14)
#define MC__TRG_FTPOL_SAS                        (MCPARAMID)( 1234 << 14)
#define MC__TRG_FTPOL_SAS_NONE                     1
#define MC__TRG_FTPOL_SAS_DIRECT                   2
#define MC__TRG_FTPOL_SAS_INVERT                   3
#define MC__TRG_FTPOL_SAP                        (MCPARAMID)( 1235 << 14)
#define MC__TRG_FTPOL_SAP_NONE                     1
#define MC__TRG_FTPOL_SAP_DIRECT                   2
#define MC__TRG_FTPOL_SAP_INVERT                   3
#define MC_TrigFilter_MEDIUM                       3
#define MC_TrigFilter_STRONG                       4
#define MC__TRG_FTFLT                            (MCPARAMID)( 1236 << 14)
#define MC__TRG_FTFLT_NONE                         1
#define MC__TRG_FTFLT_200ns                        2
#define MC__TRG_FTFLT_3200ns                       3
#define MC_TrigLine_CAM                            6
#define MC__TRG_FTSEL_SAS                        (MCPARAMID)( 1237 << 14)
#define MC__TRG_FTSEL_SAS_DA1                      1
#define MC__TRG_FTSEL_SAS_DA2                      2
#define MC__TRG_FTSEL_SAS_CAMSIG                   3
#define MC__TRG_FTSEL_SAS_TRG                      4
#define MC__TRG_FTSEL_SAS_FORCE                    5
#define MC__TRG_FTSEL_SAP                        (MCPARAMID)( 1238 << 14)
#define MC__TRG_FTSEL_SAP_KEEP                     1
#define MC__TRG_FTSEL_SAP_FORCE                    2
#define MC__STM1_T1CLK                           (MCPARAMID)( 1239 << 14)
#define MC__STM1_T1CLK_PRESCALER                   1
#define MC__STM1_T1CLK_LTRIGS                      2
#define MC__STM1_T1CLK_PPLS                        3
#define MC__STM1_T1SCAL                          (MCPARAMID)( 1240 << 14)
#define MC__STM1_T1SCAL_100ns                      1
#define MC__STM1_T1SCAL_1us                        2
#define MC__STM1_T1SCAL_10us                       3
#define MC__STM1_T1SCAL_100us                      4
#define MC__STM1_T1SCAL_1ms                        5
#define MC__PRM1_T1POS_CTL1On                    (MCPARAMID)( 1241 << 14)
#define MC__PRM1_T1POS_CTL1Off                   (MCPARAMID)( 1242 << 14)
#define MC__PRM1_T1POS_PulseSq                   (MCPARAMID)( 1243 << 14)
#define MC__PRM1_T1POS_PulseEnd                  (MCPARAMID)( 1244 << 14)
#define MC___Timer1_Check                        (MCPARAMID)( 1245 << 14)
#define MC___Timer1_Check_PASS                     1
#define MC___Timer1_Check_FAIL                     2
#define MC__STM1_T1SCAL_OVER                       6
#define MC_Camera_SVS084MFCL                      28
#define MC_Camera_SVS084MSCL                      29
#define MC_Camera_SVS085MFCL                      30
#define MC_Camera_SVS085MSCL                      31
#define MC_Camera_SVS204MFCL                      32
#define MC_Camera_SVS204MSCL                      33
#define MC_CamConfig_P21SC                        34
#define MC_CamConfig_P42SC                        35
#define MC_CamConfig_P13SC                        36
#define MC_CamConfig_P25SC                        37
#define MC_CamConfig_P64SC                        38
#define MC_CamConfig_P94SC                        39
#define MC__T1Span_10ns                          (MCPARAMID)( 1246 << 14)
#define MC__T1_10ns                              (MCPARAMID)( 1247 << 14)
#define MC__EXPWidth_10ns                        (MCPARAMID)( 1248 << 14)
#define MC__EXPWidth_T1                          (MCPARAMID)( 1249 << 14)
#define MC__TRG_FTSEL                            (MCPARAMID)( 1250 << 14)
#define MC__TRG_FTSEL_DA1                          6
#define MC__TRG_FTSEL_DA2                          7
#define MC__TRG_FTSEL_CAMSIG                       8
#define MC__TRG_FTSEL_TRG                          9
#define MC__TRG_FTRIG_SAS                        (MCPARAMID)( 1251 << 14)
#define MC__TRG_FTRIG_SAS_KEEP                     1
#define MC__TRG_FTRIG_SAS_FORCE                    2
#define MC__TRG_FTRIG_EAP                        (MCPARAMID)( 1252 << 14)
#define MC__TRG_FTRIG_EAP_KEEP                     1
#define MC__TRG_FTRIG_EAP_FORCE                    2
#define MC__TRG_FTPOL_EAP                        (MCPARAMID)( 1253 << 14)
#define MC__TRG_FTPOL_EAP_NONE                     1
#define MC__TRG_FTPOL_EAP_DIRECT                   2
#define MC__TRG_FTPOL_EAP_INVERT                   3
#define MC_Camera_CV_A11                          34
#define MC_CamConfig_P30SM                        40
#define MC_CamConfig_P30RM_G                      41
#define MC_Cable_A15_C11                          13
#define MC_CableName_Single_Channel_RGC           11
#define MC_EASQet                                (MCPARAMID)( 1254 << 14)
#define MC_CamConfig_P30RG                        42
#define MC_CamConfig_P50RG                        43
#define MC__STM2_T2SCAL                          (MCPARAMID)( 1255 << 14)
#define MC__STM2_T2SCAL_100ns                      1
#define MC__STM2_T2SCAL_1us                        2
#define MC__STM2_T2SCAL_10us                       3
#define MC__STM2_T2SCAL_100us                      4
#define MC__STM2_T2SCAL_1ms                        5
#define MC__STM2_T2SCAL_OVER                       6
#define MC__PRM2_T2POS_CTL2On                    (MCPARAMID)( 1256 << 14)
#define MC__PRM2_T2POS_CTL2Off                   (MCPARAMID)( 1257 << 14)
#define MC__PRM2_T2POS_PulseEnd                  (MCPARAMID)( 1258 << 14)
#define MC__T2Span_10ns                          (MCPARAMID)( 1259 << 14)
#define MC_StrobeCtl_ITTL                          3
#define MC_StrobeCtl_IOC                           4
#define MC_StrobeCtl_IOE                           5
#define MC__EXPWidth_T2                          (MCPARAMID)( 1260 << 14)
#define MC__STRWidth_T2                          (MCPARAMID)( 1261 << 14)
#define MC__STROn_T2                             (MCPARAMID)( 1262 << 14)
#define MC__STROff_T2                            (MCPARAMID)( 1263 << 14)
#define MC_Imaging_LINE                            2
#define MC_Imaging_TDI                             3
#define MC_CamConfig_P15RG                        44
#define MC_Camera_XC_HR50                         35
#define MC_CamConfig_P60SM                        45
#define MC_CamConfig_P60RM_G                      46
#define MC_CamConfig_P60RA_G                      47
#define MC_CamConfig_P22RG                        48
#define MC__ACQV_Line1_Dur                       (MCPARAMID)( 1264 << 14)
#define MC__IDLEV_Line2_Type                     (MCPARAMID)( 1265 << 14)
#define MC__IDLEV_Line2_Type_BLANK_VRSTON          1
#define MC__IDLEV_Line2_Type_BLANK_VRSTOFF         2
#define MC__IDLEV_Line2_Dur                      (MCPARAMID)( 1266 << 14)
#define MC__ACQV_Line2_Dur                       (MCPARAMID)( 1267 << 14)
#define MC__ACQV_Line3_Dur                       (MCPARAMID)( 1268 << 14)
#define MC__ACQV_Line4_Dur                       (MCPARAMID)( 1269 << 14)
#define MC__ACQV_Acq_Dur                         (MCPARAMID)( 1270 << 14)
#define MC__ACQV_PreAcq_Dur                      (MCPARAMID)( 1271 << 14)
#define MC__ACQV_Total_Dur                       (MCPARAMID)( 1272 << 14)
#define MC_Camera_CS8530                          36
#define MC_Manufacturer_TELI                      10
#define MC_CamConfig_P48RG                        49
#define MC_Camera_CS8531                          37
#define MC_Camera_CS8531D                         38
#define MC_CamConfig_P120SM                       50
#define MC_CamConfig_P120RM_G                     51
#define MC_CamConfig_P30RA_G                      52
#define MC_CamConfig_P50RM                        53
#define MC_CamConfig_P60RM                        54
#define MC_CamConfig_P120RM                       55
#define MC_CamConfig_P30RM                        56
#define MC_ColorRegistration                     (MCPARAMID)( 1273 << 14)
#define MC_ColorRegistration_GB                    1
#define MC_ColorRegistration_BG                    2
#define MC_ColorRegistration_RG                    3
#define MC_ColorRegistration_GR                    4
#define MC_ImageColorRegistration                (MCPARAMID)( 1274 << 14)
#define MC_ImageColorRegistration_GB               1
#define MC_ImageColorRegistration_BG               2
#define MC_ImageColorRegistration_RG               3
#define MC_ImageColorRegistration_GR               4
#define MC__OffsetX0                             (MCPARAMID)( 1275 << 14)
#define MC__OffsetY0                             (MCPARAMID)( 1276 << 14)
#define MC_CamConfig_P30SD                        57
#define MC_VdriveLine                            (MCPARAMID)( 1277 << 14)
#define MC_VdriveLine_RST                          1
#define MC_VdriveLine_EXP                          2
#define MC_VdriveLine_GATE                         3
#define MC_VdriveLine_HIO                          4
#define MC_VdriveLine_VIO                          5
#define MC_VdriveLine_DUAL                         6
#define MC_HdriveLine                            (MCPARAMID)( 1278 << 14)
#define MC_HdriveLine_RST                          1
#define MC_HdriveLine_EXP                          2
#define MC_HdriveLine_GATE                         3
#define MC_HdriveLine_HIO                          4
#define MC_HdriveLine_VIO                          5
#define MC_HdriveLine_DUAL                         6
#define MC__TrimmedExpose_us                     (MCPARAMID)( 1279 << 14)
#define MC_PixelClkLine_NC                         2
#define MC_ResetLine_NC                           11
#define MC_AuxResetLine_NC                        11
#define MC_VsyncLine_NC                            7
#define MC_HsyncLine_NC                            7
#define MC_VdriveLine_NC                           7
#define MC_HdriveLine_NC                           7
#define MC_Cable_A15_C12                          14
#define MC_CableName_Triple_Channel_RG            12
#define MC__CDU_CAL                              (MCPARAMID)( 1280 << 14)
#define MC_Camera_SKCm141TC                       39
#define MC_CamConfig_P10SA                        58
#define MC_CamConfig_P10SM                        59
#define MC_CamConfig_P10RM                        60
#define MC_CamConfig_P10RA                        61
#define MC_Manufacturer_IKEGAMI                   11
#define MC_CableName_Triple_Channel_RGC_3         13
#define MC__PinUsed                              (MCPARAMID)( 1281 << 14)
#define MC_Camera_SKC_141TC                       40
#define MC_Camera_CV_M50C                         41
#define MC_CamConfig_I25SA                        62
#define MC_CamConfig_P50                          63
#define MC_CamConfig_P50SD                        64
#define MC_CamConfig_P50RD                        65
#define MC_CamConfig_P10SD                        66
#define MC_CamConfig_P10RD                        67
#define MC_CamConfig_P25RG                        68
#define MC_CamConfig_P64RG                        69
#define MC_CamConfig_P42RG                        70
#define MC_CamConfig_P94RG                        71
#define MC_Camera_STC_1000                        42
#define MC_CamConfig_P60SD                        72
#define MC_Manufacturer_SENTECH                   12
#define MC__DIS_FALT                             (MCPARAMID)( 1282 << 14)
#define MC__DIS_FALT_NORMAL                        1
#define MC__DIS_FALT_ALTERNATE                     2
#define MC__DIS_SPOL                             (MCPARAMID)( 1283 << 14)
#define MC__DIS_SPOL_DIRECT                        1
#define MC__DIS_SPOL_INVERT                        2
#define MC__DIS_FPOL                             (MCPARAMID)( 1284 << 14)
#define MC__DIS_FPOL_DIRECT                        1
#define MC__DIS_FPOL_INVERT                        2
#define MC__DIS_LPOL                             (MCPARAMID)( 1285 << 14)
#define MC__DIS_LPOL_DIRECT                        1
#define MC__DIS_LPOL_INVERT                        2
#define MC__DIS_DPOL                             (MCPARAMID)( 1286 << 14)
#define MC__DIS_DPOL_DIRECT                        1
#define MC__DIS_DPOL_INVERT                        2
#define MC__DRS_CPAR_NONE                          1
#define MC__DRS_CPAR_LVAL_AFT                      2
#define MC__DRS_CPAR_LVAL_BFR                      3
#define MC__DRS_CPAR_SPARE_AFT                     4
#define MC__DRS_CPAR_SPARE_BFR                     5
#define MC__DRS_CSAP_ONNEXTFVAL                    1
#define MC__DRS_CSAP_ONNEXTFVAL_PAR0               2
#define MC__DRS_CSAP_ONNEXTFVAL_PAR1               3
#define MC__DRS_CFLD_ONEFIELD                      1
#define MC__DRS_CFLD_TWOFIELDS                     2
#define MC__DRS_CACQ                             (MCPARAMID)( 1287 << 14)
#define MC__DRS_CACQ_LINE                          1
#define MC__DRS_CACQ_LINEandVALD                   2
#define MC__DRS_CEOL                             (MCPARAMID)( 1288 << 14)
#define MC__DRS_CEOL_DLAST                         1
#define MC__DRS_CEOL_DSTOP                         2
#define MC__DRS_CEOL_LVALE                         3
#define MC__DRS_CEOL_DVALE                         4
#define MC__DRS_CSOL                             (MCPARAMID)( 1289 << 14)
#define MC__DRS_CSOL_LVALS                         1
#define MC__DRS_CSOL_FVALSorLVALE                  2
#define MC__DRS_CSOL_FVALSorDLAST                  3
#define MC_Camera_NoCamera                        43
#define MC_LvalMode_LN                             5
#define MC_Camera_TMC_1000                        44
#define MC_Camera_TMC_6700                        45
#define MC_Camera_A501k                           46
#define MC_CamConfig_P60SC                        73
#define MC_CamConfig_P60RG                        74
#define MC_CamConfig_P74SC                        75
#define MC_CamConfig_P74RG                        76
#define MC_Cable_CL_C03                           15
#define MC_CableName_Pulnix_Adapter               14
#define MC_Camera_XC_8500CE                       47
#define MC_Cable_A15_C13                          16
#define MC_CableName_Dual_Channel_RG_2_A          15
#define MC_StrobeLine_Filter                     (MCPARAMID)( 1290 << 14)
#define MC_StrobeLine_STZ                          6
#define MC__CBA_GROUP4                           (MCPARAMID)( 1291 << 14)
#define MC__STB_STB_x                            (MCPARAMID)( 1292 << 14)
#define MC__STB_STB_x_FromCTL1_x                   1
#define MC__STB_STB_x_FromCTL2_x                   2
#define MC__STB_STB_x_FromXCTL2_x                  3
#define MC__STB_Qx1SRC                           (MCPARAMID)( 1293 << 14)
#define MC__STB_Qx1SRC_LOW                         1
#define MC__STB_Qx1SRC_HIGH                        2
#define MC__STB_Qx1SRC_FromSTB_X                   3
#define MC__STB_Qx1SRC_FromSTB_X_Inverted          4
#define MC__STB_x1STYL                           (MCPARAMID)( 1294 << 14)
#define MC__STB_x1STYL_TTLIN                       1
#define MC__STB_x1STYL_12VIN                       2
#define MC__STB_x1STYL_TTLOUT                      3
#define MC__STB_x1STYL_OCOUT                       4
#define MC__STB_x1STYL_OEOUT                       5
#define MC__STB_Qx2SRC                           (MCPARAMID)( 1295 << 14)
#define MC__STB_Qx2SRC_LOW                         1
#define MC__STB_Qx2SRC_HIGH                        2
#define MC__STB_Qx2SRC_FromSTB_X                   3
#define MC__STB_Qx2SRC_FromSTB_X_Inverted          4
#define MC__STB_x2STYL                           (MCPARAMID)( 1296 << 14)
#define MC__STB_x2STYL_TTLIN                       1
#define MC__STB_x2STYL_12VIN                       2
#define MC__STB_x2STYL_TTLOUT                      3
#define MC__STB_x2STYL_OCOUT                       4
#define MC__STB_x2STYL_OEOUT                       5
#define MC__STR_STR_X                            (MCPARAMID)( 1297 << 14)
#define MC__STR_STR_X_LOW                          1
#define MC__STR_STR_X_HIGH                         2
#define MC__STR_STR_X_FromSTB_X                    3
#define MC__STR_STR_X_FromSTB_X_Inverted           4
#define MC___StrobeStyle_Check                   (MCPARAMID)( 1298 << 14)
#define MC___StrobeStyle_Check_PASS                1
#define MC___StrobeStyle_Check_FAIL                2
#define MC_STRUsage                              (MCPARAMID)( 1299 << 14)
#define MC_STRUsage_FREE                           1
#define MC_STRUsage_STROBE                         2
#define MC_A1Usage                               (MCPARAMID)( 1300 << 14)
#define MC_A1Usage_FREE                            1
#define MC_A1Usage_STROBE                          2
#define MC_A2Usage                               (MCPARAMID)( 1301 << 14)
#define MC_A2Usage_FREE                            1
#define MC_A2Usage_STROBE                          2
#define MC_DefaultLoadSet                        (MCPARAMID)( 1302 << 14)
#define MC__TRG_FTMOD                            (MCPARAMID)( 1303 << 14)
#define MC__TRG_FTMOD_SKIP                         1
#define MC__TRG_FTMOD_HOLD                         2
#define MC__TRG_FTRES_FB                         (MCPARAMID)( 1304 << 14)
#define MC__TRG_FTRES_FB_NO                        1
#define MC__TRG_FTRES_FB_YES                       2
#define MC__TRG_FTRES_T1                         (MCPARAMID)( 1305 << 14)
#define MC__TRG_FTRES_T1_NO                        1
#define MC__TRG_FTRES_T1_YES                       2
#define MC__TRG_FTRES_T2                         (MCPARAMID)( 1306 << 14)
#define MC__TRG_FTRES_T2_NO                        1
#define MC__TRG_FTRES_T2_YES                       2
#define MC__TRG_FTPOL_TE                         (MCPARAMID)( 1307 << 14)
#define MC__TRG_FTPOL_TE_NONE                      1
#define MC__TRG_FTPOL_TE_DIRECT                    2
#define MC__TRG_FTPOL_TE_INVERT                    3
#define MC__TRG_FTRIG_TE                         (MCPARAMID)( 1308 << 14)
#define MC__TRG_FTRIG_TE_KEEP                      1
#define MC__TRG_FTRIG_TE_FORCE                     2
#define MC_Camera_STC_1100b                       48
#define MC__DRS_CSOL_FVALSorEOL                    4
#define MC_TriggerSkipHold                       (MCPARAMID)( 1309 << 14)
#define MC_TriggerSkipHold_SKIP                    1
#define MC_TriggerSkipHold_HOLD                    2
#define MC_LineScanOnly_Filter                   (MCPARAMID)( 1310 << 14)
#define MC_ExposeRecovery_us                     (MCPARAMID)( 1311 << 14)
#define MC_ReadoutRecovery_us                    (MCPARAMID)( 1312 << 14)
#define MC__EXPOffWidthForbid_10ns               (MCPARAMID)( 1313 << 14)
#define MC__EXPOffWidth_T1                       (MCPARAMID)( 1314 << 14)
#define MC__LineDur_ns                           (MCPARAMID)( 1315 << 14)
#define MC__ReadoutDur_10ns                      (MCPARAMID)( 1316 << 14)
#define MC_Cable_A15_C14                          17
#define MC_CableName_Single_Channel_RGC_A         16
#define MC__EXPOffWidth_10ns                     (MCPARAMID)( 1317 << 14)
#define MC__MaxReadoutRate_Hz                    (MCPARAMID)( 1318 << 14)
#define MC__MaxTriggerRate_Hz                    (MCPARAMID)( 1319 << 14)
#define MC_CableName_Triple_Channel_RG_3          17
#define MC___IOLoopBack                          (MCPARAMID)( 1320 << 14)
#define MC___IOLoopBack_DISABLE                    1
#define MC___IOLoopBack_ENABLE                     2
#define MC_Camera_ICD_FA41                        49
#define MC_CableName_Single_Channel_R_A           18
#define MC_Camera_SKC_131                         50
#define MC_CamConfig_P12SA                        77
#define MC_CamConfig_P12SD                        78
#define MC_CamConfig_P12RA                        79
#define MC_Operation_LONG_EXPOSURE                 7
#define MC__Vtotal_Ln                            (MCPARAMID)( 1321 << 14)
#define MC_CamConfig_P50SM_L                      80
#define MC__VLC_LCSNS                            (MCPARAMID)( 1322 << 14)
#define MC__VLC_LCSNS_NORMAL                       1
#define MC__VLC_LCSNS_SENSE                        2
#define MC__VAC_VPOST                            (MCPARAMID)( 1323 << 14)
#define MC__VAC_VPOST_FVALE_Post                   1
#define MC__VAC_VPOST_FVALE_NoPost                 2
#define MC__VAC_VPOST_LVALE_NoPost                 3
#define MC__VAC_VPOST_LLAST_NoPost                 4
#define MC__CTA_SELFLH                           (MCPARAMID)( 1324 << 14)
#define MC__CTA_SELFLH_EOI                         1
#define MC__CTA_SELFLH_EOL                         2
#define MC_Camera_CV_A50C                         51
#define MC_CamConfig_P25SM_L                      81
#define MC_Camera_iMVS157                         52
#define MC_Manufacturer_FASTCOM                   13
#define MC_CC3Usage_READOUTALLOWED                 8
#define MC_CC4Usage_TRIGGERALLOWED                 8
#define MC__SCC_CC3_ACQUIREALLOWED                 9
#define MC__SCC_CC3_ACQUIREALLOWEDn               10
#define MC__SCC_CC4_TRIGGERALLOWED                 9
#define MC__SCC_CC4_TRIGGERALLOWEDn               10
#define MC__SCC_CC3_READOUTALLOWED                11
#define MC__SCC_CC3_READOUTALLOWEDn               12
#define MC__VactiveMax_Ln                        (MCPARAMID)( 1325 << 14)
#define MC_Camera_TM_6702                         53
#define MC_Cable_A15_C15                          19
#define MC_CableName_Single_Ch                    19
#define MC_CableName_Single_Channel_R_B           20
#define MC_Camera_VCC_870                         54
#define MC_CamConfig_P12SM                        82
#define MC_CamConfig_P12RM                        83
#define MC_Manufacturer_CIS                       14
#define MC_AreaScanOnly_Filter                   (MCPARAMID)( 1326 << 14)
#define MC_TrigCtl_ITTL                            5
#define MC_TrigCtl_I12V                            6
#define MC_TrigLine_TRG                            7
#define MC_TrigLine_Filter                       (MCPARAMID)( 1327 << 14)
#define MC_ColorMethod_TRILINEAR                   5
#define MC_LineRateMode                          (MCPARAMID)( 1328 << 14)
#define MC_LineRateMode_CAMERA                     1
#define MC_LineRateMode_PERIOD                     2
#define MC_LineRateMode_PULSE                      3
#define MC_LineRateMode_CONVERT                    4
#define MC_Period_us                             (MCPARAMID)( 1329 << 14)
#define MC_PeriodTrim                            (MCPARAMID)( 1330 << 14)
#define MC_LineTrigCtl                           (MCPARAMID)( 1331 << 14)
#define MC_LineTrigCtl_ITTL                        1
#define MC_LineTrigCtl_I12V                        2
#define MC_LineTrigCtl_TTL                         3
#define MC_LineTrigEdge                          (MCPARAMID)( 1332 << 14)
#define MC_LineTrigEdge_GOHIGH                     1
#define MC_LineTrigEdge_GOLOW                      2
#define MC_LineTrigFilter                        (MCPARAMID)( 1333 << 14)
#define MC_LineTrigFilter_OFF                      1
#define MC_LineTrigFilter_MEDIUM                   2
#define MC_LineTrigFilter_STRONG                   3
#define MC_LineTrigLine                          (MCPARAMID)( 1334 << 14)
#define MC_LineTrigLine_NOM                        1
#define MC_LineTrigLine_TRG                        2
#define MC_LineTrigLine_CAM                        3
#define MC_ConverterTrim                         (MCPARAMID)( 1335 << 14)
#define MC_MaxSpeed                              (MCPARAMID)( 1336 << 14)
#define MC_MinSpeed                              (MCPARAMID)( 1337 << 14)
#define MC__TRG_FTRES_EOF                        (MCPARAMID)( 1338 << 14)
#define MC__TRG_FTRES_EOF_NO                       1
#define MC__TRG_FTRES_EOF_YES                      2
#define MC_MAN_GrabWindowY_Filter                (MCPARAMID)( 1339 << 14)
#define MC_ImageFlipX                            (MCPARAMID)( 1340 << 14)
#define MC_ImageFlipX_OFF                          1
#define MC_CS3920_AsyncLoadSet                   (MCPARAMID)( 1341 << 14)
#define MC__Expose_us                            (MCPARAMID)( 1342 << 14)
#define MC_Camera_CS3920                          55
#define MC_CamConfig_I7SA                         84
#define MC_CamConfig_I7RA                         85
#define MC_Cable_A15_C16                          21
#define MC_CableName_Single_Channel_R_C           21
#define MC__CTA_SELFLH_EOI_S                       3
#define MC_Camera_CV_M4CL                         56
#define MC_CamConfig_P24SC                        86
#define MC_CamConfig_P24RG                        87
#define MC_CamConfig_I15SA                        88
#define MC_CamConfig_I15RA                        89
#define MC__TrimmedExpose_10ns                   (MCPARAMID)( 1343 << 14)
#define MC_Camera_CV_M50E                         57
#define MC_CamConfig_P60SM_L                      90
#define MC_CamConfig_I30SA                        91
#define MC_Camera_CV_A50E                         58
#define MC_CamConfig_P30SM_L                      92
#define MC_Camera_CV_M7CL                         59
#define MC_Camera_ICD_FA41E                       60
#define MC_CamConfig_P25RA_G                      93
#define MC_CamConfig_P50RA_G                      94
#define MC_StrobeCtl_Filter                      (MCPARAMID)( 1344 << 14)
#define MC_CamConfig_I60RA                        95
#define MC_CamConfig_I120SA                       96
#define MC_CamConfig_I120RA                       97
#define MC__HDC_DCADV                            (MCPARAMID)( 1345 << 14)
#define MC__HDC_DCADV_PERMANENT                    1
#define MC__HDC_DCADV_VALD                         2
#define MC_ImageFlipX_ON                           2
#define MC_MaxLineRate_Hz                        (MCPARAMID)( 1346 << 14)
#define MC_LineRateMode_Filter                   (MCPARAMID)( 1347 << 14)
#define MC__T2Span_T2                            (MCPARAMID)( 1348 << 14)
#define MC__PRM2_T2POS_1                         (MCPARAMID)( 1349 << 14)
#define MC__PRM2_T2PLS1_1                        (MCPARAMID)( 1350 << 14)
#define MC__PRM2_T2PLS2_1                        (MCPARAMID)( 1351 << 14)
#define MC__PRM2_T2POS_2                         (MCPARAMID)( 1352 << 14)
#define MC__PRM2_T2PLS1_2                        (MCPARAMID)( 1353 << 14)
#define MC__PRM2_T2PLS2_2                        (MCPARAMID)( 1354 << 14)
#define MC__PRM2_T2POS_3                         (MCPARAMID)( 1355 << 14)
#define MC__PRM2_T2PLS1_3                        (MCPARAMID)( 1356 << 14)
#define MC__PRM2_T2PLS2_3                        (MCPARAMID)( 1357 << 14)
#define MC__PRM2_T2POS_4                         (MCPARAMID)( 1358 << 14)
#define MC__PRM2_T2PLS1_4                        (MCPARAMID)( 1359 << 14)
#define MC__PRM2_T2PLS2_4                        (MCPARAMID)( 1360 << 14)
#define MC__PRM2_T2POS_5                         (MCPARAMID)( 1361 << 14)
#define MC__PRM2_T2PLS1_5                        (MCPARAMID)( 1362 << 14)
#define MC__PRM2_T2PLS2_5                        (MCPARAMID)( 1363 << 14)
#define MC__STM2_T2SEL                           (MCPARAMID)( 1364 << 14)
#define MC__STM2_T2SEL_OFF                         1
#define MC__STM2_T2SEL_OnLTRIGS                    2
#define MC__STM2_T2SEL_OnLTRIGE                    3
#define MC__STM2_T2SEL_OnPPLS                      4
#define MC__STM2_T2SEL_OnGO1                       5
#define MC__STM2_T2SEL_OnEND2                      6
#define MC__T2_10ns                              (MCPARAMID)( 1365 << 14)
#define MC__ResetDur_T2                          (MCPARAMID)( 1366 << 14)
#define MC__ReadoutDur_T2                        (MCPARAMID)( 1367 << 14)
#define MC__ExposureController                   (MCPARAMID)( 1368 << 14)
#define MC__ExposureController_CAMERA              1
#define MC__ExposureController_GRABBER             2
#define MC__Category_Timer1_Control               19
#define MC__Category_Timer2_Control               20
#define MC__TRG_LTPOL                            (MCPARAMID)( 1369 << 14)
#define MC__TRG_LTPOL_NONE                         1
#define MC__TRG_LTPOL_DIRECT                       2
#define MC__TRG_LTPOL_INVERT                       3
#define MC__TRG_LTFLT                            (MCPARAMID)( 1370 << 14)
#define MC__TRG_LTFLT_NONE                         1
#define MC__TRG_LTFLT_200ns                        2
#define MC__TRG_LTFLT_3200ns                       3
#define MC__TRG_LTSEL                            (MCPARAMID)( 1371 << 14)
#define MC__TRG_LTSEL_DA1                          1
#define MC__TRG_LTSEL_DA2                          2
#define MC__TRG_LTSEL_CAMSIG                       3
#define MC__TRG_LTSEL_TRG                          4
#define MC_Encoder_Filter                        (MCPARAMID)( 1372 << 14)
#define MC_LineTrigCtl_Filter                    (MCPARAMID)( 1373 << 14)
#define MC_LineTrig_Filter                       (MCPARAMID)( 1374 << 14)
#define MC_Period_Filter                         (MCPARAMID)( 1375 << 14)
#define MC_Perio_Filter                          (MCPARAMID)( 1376 << 14)
#define MC_A1Usage_TRIGGER                         3
#define MC_A1Usage_LINETRIGGER                     4
#define MC_A2Usage_TRIGGER                         3
#define MC_A2Usage_LINETRIGGER                     4
#define MC__TrigLineNeeded                       (MCPARAMID)( 1377 << 14)
#define MC__TrigLineNeeded_NO                      1
#define MC__TrigLineNeeded_YES                     2
#define MC__TrigLine_NONE                          3
#define MC__TrigLine_DA1                           4
#define MC__TrigLine_DA2                           5
#define MC__TrigLine_CAMSIG                        6
#define MC__TrigLine_TRG                           7
#define MC__LineTrigLineNeeded                   (MCPARAMID)( 1378 << 14)
#define MC__LineTrigLineNeeded_NO                  1
#define MC__LineTrigLineNeeded_YES                 2
#define MC__LineTrigLine                         (MCPARAMID)( 1379 << 14)
#define MC__LineTrigLine_NONE                      3
#define MC__LineTrigLine_DA1                       4
#define MC__LineTrigLine_CAMSIG                    5
#define MC__LineTrigLine_TRG                       6
#define MC__StrobeLine                           (MCPARAMID)( 1380 << 14)
#define MC__StrobeLine_NONE                        1
#define MC__StrobeLine_QA1                         2
#define MC__StrobeLine_QA2                         3
#define MC__StrobeLine_STR                         4
#define MC__Category_System_IO                    21
#define MC_TRGUsage                              (MCPARAMID)( 1381 << 14)
#define MC_TRGUsage_FREE                           1
#define MC_TRGUsage_TRIGGER                        2
#define MC_TRGUsage_LINETRIGGER                    3
#define MC_TrigCtl_Filter                        (MCPARAMID)( 1382 << 14)
#define MC__TrimmedPeriod_10ns                   (MCPARAMID)( 1383 << 14)
#define MC__PG_10ns                              (MCPARAMID)( 1384 << 14)
#define MC__TrimmedK_1000                        (MCPARAMID)( 1385 << 14)
#define MC__SP_Ideal                             (MCPARAMID)( 1386 << 14)
#define MC_GrabField                             (MCPARAMID)( 1387 << 14)
#define MC_NextGrabField                         (MCPARAMID)( 1388 << 14)
#define MC__PM_Criteria                          (MCPARAMID)( 1389 << 14)
#define MC__PM_Criteria_NORMAL                     1
#define MC__PM_Criteria_WIDERANGE                  2
#define MC__PM_Criteria_HIGHRESOLUTION             3
#define MC__K_Criteria                           (MCPARAMID)( 1390 << 14)
#define MC__K_Criteria_NORMAL                      1
#define MC__K_Criteria_FASTUPDATE                  2
#define MC__K_Criteria_HIGHRESOLUTION              3
#define MC__Nmin                                 (MCPARAMID)( 1391 << 14)
#define MC__Mmin                                 (MCPARAMID)( 1392 << 14)
#define MC__PSClockFrequency_MHz                 (MCPARAMID)( 1393 << 14)
#define MC__TrimmedPeriod_PSC                    (MCPARAMID)( 1394 << 14)
#define MC__SP_Desired                           (MCPARAMID)( 1395 << 14)
#define MC__TrimmedK_10000                       (MCPARAMID)( 1396 << 14)
#define MC__SEmin_Desired                        (MCPARAMID)( 1397 << 14)
#define MC__Keff_10000                           (MCPARAMID)( 1398 << 14)
#define MC__CPM_PMSDIV_Update                    (MCPARAMID)( 1399 << 14)
#define MC__CPG_PGCNT_Update                     (MCPARAMID)( 1400 << 14)
#define MC__Vactive_Ln                           (MCPARAMID)( 1401 << 14)
#define MC__VCsyncAft_Ln                         (MCPARAMID)( 1402 << 14)
#define MC_GrabField_FLD                           1
#define MC_GrabField_UP                            2
#define MC_GrabField_DOWN                          3
#define MC_GrabField_FRAME                         4
#define MC_GrabField_UPDW                          5
#define MC_GrabField_DWUP                          6
#define MC_GrabField_NONE                          7
#define MC_NextGrabField_FLD                       1
#define MC_NextGrabField_UP                        2
#define MC_NextGrabField_DOWN                      3
#define MC_NextGrabField_FRAME                     4
#define MC_NextGrabField_UPDW                      5
#define MC_NextGrabField_DWUP                      6
#define MC_NextGrabField_KEEP                      7
#define MC_NextGrabField_SAME                      8
#define MC_NextGrabField_CHANGE                    9
#define MC_INTLoadSet                            (MCPARAMID)( 1403 << 14)
#define MC_MaxSpeed_Max                          (MCPARAMID)( 1404 << 14)
#define MC_MaxSpeed_Min                          (MCPARAMID)( 1405 << 14)
#define MC__RateConverterControl                 (MCPARAMID)( 1406 << 14)
#define MC__RateConverterControl_STANDARD          1
#define MC__RateConverterControl_EXTENDED          2
#define MC___Encoder_Check                       (MCPARAMID)( 1407 << 14)
#define MC___Encoder_Check_PASS                    1
#define MC___Encoder_Check_FAIL                    2
#define MC__CPG_PGSCAL_Key                       (MCPARAMID)( 1408 << 14)
#define MC__CPG_PGSCAL_Key_Top_Check             (MCPARAMID)( 1409 << 14)
#define MC__CPG_PGSCAL_Key_Top_Check_PASS          1
#define MC__CPG_PGSCAL_Key_Top_Check_FAIL          2
#define MC__CPM_PMISCAL_Key                      (MCPARAMID)( 1410 << 14)
#define MC__CPM_PMISCAL_Key_Top_Check            (MCPARAMID)( 1411 << 14)
#define MC__CPM_PMISCAL_Key_Top_Check_PASS         1
#define MC__CPM_PMISCAL_Key_Top_Check_FAIL         2
#define MC__CPM_PMSDIV_Top_Check                 (MCPARAMID)( 1412 << 14)
#define MC__CPM_PMSDIV_Top_Check_PASS              1
#define MC__CPM_PMSDIV_Top_Check_FAIL              2
#define MC__CPG_PGMOD                            (MCPARAMID)( 1413 << 14)
#define MC__CPG_PGMOD_OFF                          1
#define MC__CPG_PGMOD_FREE_RUN                     2
#define MC__CPG_PGMOD_PM_CONTROLLED                3
#define MC__CPM_PMISCAL                          (MCPARAMID)( 1414 << 14)
#define MC__CPM_PMSDIV                           (MCPARAMID)( 1415 << 14)
#define MC__CPG_PGCNT                            (MCPARAMID)( 1416 << 14)
#define MC__CPG_PGSCAL                           (MCPARAMID)( 1417 << 14)
#define MC__TrimmedK_10000_MAX                   (MCPARAMID)( 1418 << 14)
#define MC__TrimmedK_10000_MIN                   (MCPARAMID)( 1419 << 14)
#define MC__TrimmedKeff_10000                    (MCPARAMID)( 1420 << 14)
#define MC_MaxSpeedEffective                     (MCPARAMID)( 1421 << 14)
#define MC_MaxSpeed_Check_Key                    (MCPARAMID)( 1422 << 14)
#define MC_MaxSpeed_Check                        (MCPARAMID)( 1423 << 14)
#define MC_MaxSpeed_Check_PASS                     1
#define MC_MaxSpeed_Check_FAIL                     2
#define MC__TrimmedK_Check_Key                   (MCPARAMID)( 1424 << 14)
#define MC__TrimmedK_Check                       (MCPARAMID)( 1425 << 14)
#define MC__TrimmedK_Check_PASS                    1
#define MC__TrimmedK_Check_FAIL                    2
#define MC__SE_Factor_Key                        (MCPARAMID)( 1426 << 14)
#define MC__SE_Factor_Key_Top_Check              (MCPARAMID)( 1427 << 14)
#define MC__SE_Factor_Key_Top_Check_PASS           1
#define MC__SE_Factor_Key_Top_Check_FAIL           2
#define MC__SE_Factor                            (MCPARAMID)( 1428 << 14)
#define MC__M_Ratio                              (MCPARAMID)( 1429 << 14)
#define MC__M_Ratio_Top_Check                    (MCPARAMID)( 1430 << 14)
#define MC__M_Ratio_Top_Check_PASS                 1
#define MC__M_Ratio_Top_Check_FAIL                 2
#define MC__SP_Factor_Key                        (MCPARAMID)( 1431 << 14)
#define MC__SP_Factor_Key_Top_Check              (MCPARAMID)( 1432 << 14)
#define MC__SP_Factor_Key_Top_Check_PASS           1
#define MC__SP_Factor_Key_Top_Check_FAIL           2
#define MC__SP_Factor                            (MCPARAMID)( 1433 << 14)
#define MC_NextTrigMode_Filter                   (MCPARAMID)( 1434 << 14)
#define MC_MinSpeed_Check                        (MCPARAMID)( 1435 << 14)
#define MC_MinSpeed_Check_PASS                     1
#define MC_MinSpeed_Check_FAIL                     2
#define MC___Encoder_Warning_Check               (MCPARAMID)( 1436 << 14)
#define MC___Encoder_Warning_Check_PASS            1
#define MC___Encoder_Warning_Check_FAIL            2
#define MC__EncoderMaxSpeed                      (MCPARAMID)( 1437 << 14)
#define MC__EncoderMaxSpeed_Check                (MCPARAMID)( 1438 << 14)
#define MC__EncoderMaxSpeed_Check_PASS             1
#define MC__EncoderMaxSpeed_Check_FAIL             2
#define MC__EncoderMinSpeed                      (MCPARAMID)( 1439 << 14)
#define MC__EncoderMinSpeed_Check                (MCPARAMID)( 1440 << 14)
#define MC__EncoderMinSpeed_Check_PASS             1
#define MC__EncoderMinSpeed_Check_FAIL             2
#define MC_X_VRSTMID                             (MCPARAMID)( 1441 << 14)
#define MC__SYNC_Line1_Type_BLANK_VRSTMID          3
#define MC__SYNC_Line4_Type_ACQ_VRSTMID            3
#define MC__SYNC_Line5_Type_BLANK_VRSTMID          3
#define MC__SYNC_Line6_Type                      (MCPARAMID)( 1442 << 14)
#define MC__SYNC_Line6_Type_BLANK_VRSTOFF          1
#define MC__SYNC_Line6_Type_BLANK_VRSTON           2
#define MC__SYNC_Line6_Type_BLANK_VRSTMID          3
#define MC__SYNC_Line6_Dur                       (MCPARAMID)( 1443 << 14)
#define MC__SYNC_Line7_Type                      (MCPARAMID)( 1444 << 14)
#define MC__SYNC_Line7_Type_BLANK_VRSTOFF          1
#define MC__SYNC_Line7_Dur                       (MCPARAMID)( 1445 << 14)
#define MC__SYNC_Line8_Type                      (MCPARAMID)( 1446 << 14)
#define MC__SYNC_Line8_Type_ACQ_VRSTOFF            1
#define MC__SYNC_Line8_Type_ACQ_VRSTON             2
#define MC__SYNC_Line8_Type_ACQ_VRSTMID            3
#define MC__SYNC_Line8_Dur                       (MCPARAMID)( 1447 << 14)
#define MC__SYNC_Line9_Type                      (MCPARAMID)( 1448 << 14)
#define MC__SYNC_Line9_Type_BLANK_VRSTOFF          1
#define MC__SYNC_Line9_Type_BLANK_VRSTON           2
#define MC__SYNC_Line9_Type_BLANK_VRSTMID          3
#define MC__SYNC_Line9_Dur                       (MCPARAMID)( 1449 << 14)
#define MC__MID_Eacq2Vrst_Gap                    (MCPARAMID)( 1450 << 14)
#define MC__MID_Vrst2Bacq_Gap                    (MCPARAMID)( 1451 << 14)
#define MC__SYNC_Line10_Type                     (MCPARAMID)( 1452 << 14)
#define MC__SYNC_Line10_Type_ACQ_VRSTOFF           1
#define MC__SYNC_Line10_Dur                      (MCPARAMID)( 1453 << 14)
#define MC_MATLoadSet                            (MCPARAMID)( 1454 << 14)
#define MC__K_SP                                 (MCPARAMID)( 1455 << 14)
#define MC__M_SP                                 (MCPARAMID)( 1456 << 14)
#define MC__M_SP_10                              (MCPARAMID)( 1457 << 14)
#define MC__TrimmedK_16384                       (MCPARAMID)( 1458 << 14)
#define MC__K_SP_16384                           (MCPARAMID)( 1459 << 14)
#define MC__TrimmedK_131072                      (MCPARAMID)( 1460 << 14)
#define MC_VCSYNC1                               (MCPARAMID)( 1461 << 14)
#define MC_VCSYNC2                               (MCPARAMID)( 1462 << 14)
#define MC_BACK1                                 (MCPARAMID)( 1463 << 14)
#define MC_BACK2                                 (MCPARAMID)( 1464 << 14)
#define MC__VdriveDur_Ln                         (MCPARAMID)( 1465 << 14)
#define MC__VdriveDly_Ln                         (MCPARAMID)( 1466 << 14)
#define MC__L_16384                              (MCPARAMID)( 1467 << 14)
#define MC__INT_Eacq2Vrst_Gap                    (MCPARAMID)( 1468 << 14)
#define MC__INT_Vrst2Bacq_Gap                    (MCPARAMID)( 1469 << 14)
#define MC__SYNC_Line4_Type_BLANK_VRSTMID          4
#define MC__INITD1_SELV1                         (MCPARAMID)( 1470 << 14)
#define MC__INT_BEFORE                           (MCPARAMID)( 1471 << 14)
#define MC__INT_CHOIX                            (MCPARAMID)( 1472 << 14)
#define MC__Equalization                         (MCPARAMID)( 1473 << 14)
#define MC_TrigFilter_Filter                     (MCPARAMID)( 1474 << 14)
#define MC__TRG_FTFLT_100ns                        4
#define MC__TRG_FTFLT_500ns                        5
#define MC__TRG_FTFLT_2500ns                       6
#define MC_LineTrigFilter_Filter                 (MCPARAMID)( 1475 << 14)
#define MC__TRG_LTFLT_100ns                        4
#define MC__TRG_LTFLT_500ns                        5
#define MC__TRG_LTFLT_2500ns                       6
#define MC__STM1_T1CLK_EOL                         4
#define MC__EquaCCIR                             (MCPARAMID)( 1476 << 14)
#define MC_PageModeOnly_Filter                   (MCPARAMID)( 1477 << 14)
#define MC_AllButWebMode_Filter                  (MCPARAMID)( 1478 << 14)
#define MC__IndexField                           (MCPARAMID)( 1479 << 14)
#define MC_Camera_LD3521PGx                       61
#define MC_Camera_LD3522PGx                       62
#define MC_Camera_LD3523PGx                       63
#define MC_Camera_LD3541PGx                       64
#define MC_Camera_LD3542PGx                       65
#define MC_Camera_LD3543PGx                       66
#define MC_Camera_L101k                           67
#define MC_Camera_L103k                           68
#define MC_Camera_L104k                           69
#define MC_Camera_A301bc                          70
#define MC_CamConfig_L512SP                       98
#define MC_CamConfig_L1024SP                      99
#define MC_CamConfig_L2048SP                     100
#define MC_CamConfig_L1024RC                     101
#define MC_CamConfig_L1024RG                     102
#define MC_CamConfig_L2048RG                     103
#define MC_CamConfig_L2048RC                     104
#define MC_CamConfig_P80SC                       105
#define MC_CamConfig_P80RG                       106
#define MC_Manufacturer_PERKINELMER               15
#define MC_Camera_L301bc                          71
#define MC_CamConfig_L2098SP                     107
#define MC_CamConfig_L2098RC                     108
#define MC_CamConfig_L2098RG                     109
#define MC_Camera_L401k                           72
#define MC_Camera_L402k                           73
#define MC_Camera_L403k                           74
#define MC_CamConfig_L4096SP                     110
#define MC_CamConfig_L4096RC                     111
#define MC_CamConfig_L4096RG                     112
#define MC_Camera_P2_2x_06k40                     75
#define MC_Camera_P2_2x_08k40                     76
#define MC_CamConfig_L6144SP                     113
#define MC_CamConfig_L6144RC                     114
#define MC_CamConfig_L6144RG                     115
#define MC_CamConfig_L8192SP                     116
#define MC_CamConfig_L8192RC                     117
#define MC_CamConfig_L8192RG                     118
#define MC_Manufacturer_DALSA                     16
#define MC_CamConfig_L512RG                      119
#define MC_Camera_AVIIVA                          77
#define MC_CamConfig_L512RC                      120
#define MC_Manufacturer_ATMEL                     17
#define MC_Camera_P2_2x_01k40                     78
#define MC_Camera_P2_2x_02k40                     79
#define MC_Camera_P2_2x_04k40                     80
#define MC_Camera_AVIIVA0514                      81
#define MC_Camera_AVIIVA1014                      82
#define MC_Camera_AVIIVA2014                      83
#define MC_Camera_AVIIVA4010                      84
#define MC_ChannelTopology_DUALXMID               10
#define MC_FvalMode_LA                             5
#define MC_LvalMode_DG                             6
#define MC__DIS_LALT                             (MCPARAMID)( 1480 << 14)
#define MC__DIS_LALT_NORMAL                        1
#define MC__DIS_LALT_ALTERNATE                     2
#define MC__DIS_DALT                             (MCPARAMID)( 1481 << 14)
#define MC__DIS_DALT_NORMAL                        1
#define MC__DIS_DALT_ALTERNATE                     2
#define MC_Camera_TI_324A                         85
#define MC_CamConfig_I60SM                       121
#define MC_Manufacturer_NEC                       18
#define MC_CamConfig_P400SM                      122
#define MC_Camera_CV_A1                           86
#define MC_CamConfig_P16SA                       123
#define MC_CamConfig_P16RA                       124
#define MC_CamConfig_P16RA_G                     125
#define MC_CamConfig_P16SM                       126
#define MC_CamConfig_P16RM                       127
#define MC_CamConfig_P16RM_G                     128
#define MC_CamConfig_P16SD                       129
#define MC_CamConfig_P16RD                       130
#define MC_CamConfig_P16RD_G                     131
#define MC_Camera_CV_M77                          87
#define MC_Cable_A15_C17                          22
#define MC_CableName_Triple_Channel_RG_2          22
#define MC_CamConfig_P10RG                       132
#define MC_CamConfig_P10RC                       133
#define MC__CDC_ISIZE_8BIT                         9
#define MC__CDC_ISIZE_10BIT                       10
#define MC__CDC_ISIZE_12BIT                       11
#define MC__CDC_ISIZE_14BIT                       12
#define MC__CDC_ISIZE_16BIT                       13
#define MC__CDC_CLCFG                            (MCPARAMID)( 1482 << 14)
#define MC__CDC_CLCFG_BASE                         1
#define MC__CDC_CLCFG_MEDIUM                       2
#define MC__CDC_MTAP                             (MCPARAMID)( 1483 << 14)
#define MC__CDC_MTAP_ONETAP                        1
#define MC__CDC_MTAP_TWOTAPS                       2
#define MC__CDC_FSLIC                            (MCPARAMID)( 1484 << 14)
#define MC__CBA_DCEN1                            (MCPARAMID)( 1485 << 14)
#define MC__CBA_DCEN1_ENABLED                      1
#define MC__CBA_DCEN1_DISABLED                     2
#define MC__CBA_DCEN2                            (MCPARAMID)( 1486 << 14)
#define MC__CBA_DCEN2_ENABLED                      1
#define MC__CBA_DCEN2_DISABLED                     2
#define MC__CBA_DCEN3                            (MCPARAMID)( 1487 << 14)
#define MC__CBA_DCEN3_ENABLED                      1
#define MC__CBA_DCEN3_DISABLED                     2
#define MC__CDC_FSLIC_ONE256                       1
#define MC__CDC_FSLIC_TWO128                       2
#define MC__CDC_FSLIC_FOUR64                       3
#define MC__CDC_FSLIC_EIGHT32                      4
#define MC_TapStructure_TRIPLE_W2                 16
#define MC__W1_INDEX                             (MCPARAMID)( 1488 << 14)
#define MC__W2_INDEX                             (MCPARAMID)( 1489 << 14)
#define MC__W3_INDEX                             (MCPARAMID)( 1490 << 14)
#define MC__W4_INDEX                             (MCPARAMID)( 1491 << 14)
#define MC__GCL_CLCFG                            (MCPARAMID)( 1492 << 14)
#define MC__GCL_CLCFG_BASE                         1
#define MC__GCL_CLCFG_MEDIUM                       2
#define MC__AllAssyMask                          (MCPARAMID)( 1493 << 14)
#define MC__UsedAssyMask                         (MCPARAMID)( 1494 << 14)
#define MC_TrigLine_TRX                            8
#define MC_TrigLine_TRY                            9
#define MC_TrigLine_TRZ                           10
#define MC__StrobeLine_QB1                         5
#define MC__StrobeLine_QB2                         6
#define MC__StrobeLine_STX                         7
#define MC__StrobeLine_STY                         8
#define MC__StrobeLine_STZ                         9
#define MC_LineTrigLine_TRX                        4
#define MC_LineTrigLine_TRY                        5
#define MC_LineTrigLine_TRZ                        6
#define MC__LineTrigLine_DB1                       7
#define MC__LineTrigLine_TRX                       8
#define MC__LineTrigLine_TRY                       9
#define MC__LineTrigLine_TRZ                      10
#define MC__TRG_LTSEL_DB1                          5
#define MC__TRG_LTSEL_TRX                          6
#define MC__TRG_LTSEL_TRY                          7
#define MC__TRG_LTSEL_TRZ                          8
#define MC_TRXUsage                              (MCPARAMID)( 1495 << 14)
#define MC_TRXUsage_FREE                           1
#define MC_TRXUsage_TRIGGER                        2
#define MC_TRXUsage_LINETRIGGER                    3
#define MC_TRYUsage                              (MCPARAMID)( 1496 << 14)
#define MC_TRYUsage_FREE                           1
#define MC_TRYUsage_TRIGGER                        2
#define MC_TRYUsage_LINETRIGGER                    3
#define MC_TRZUsage                              (MCPARAMID)( 1497 << 14)
#define MC_TRZUsage_FREE                           1
#define MC_TRZUsage_TRIGGER                        2
#define MC_TRZUsage_LINETRIGGER                    3
#define MC_STXUsage                              (MCPARAMID)( 1498 << 14)
#define MC_STXUsage_FREE                           1
#define MC_STXUsage_STROBEX                        2
#define MC_STXUsage_STROBEY                        3
#define MC_STYUsage                              (MCPARAMID)( 1499 << 14)
#define MC_STYUsage_FREE                           1
#define MC_STYUsage_STROBEX                        2
#define MC_STYUsage_STROBEY                        3
#define MC_STZUsage                              (MCPARAMID)( 1500 << 14)
#define MC_STZUsage_FREE                           1
#define MC_STZUsage_STROBEX                        2
#define MC_STZUsage_STROBEY                        3
#define MC_B1Usage                               (MCPARAMID)( 1501 << 14)
#define MC_B1Usage_FREE                            1
#define MC_B1Usage_STROBE                          2
#define MC_B2Usage                               (MCPARAMID)( 1502 << 14)
#define MC_B2Usage_FREE                            1
#define MC_B2Usage_STROBE                          2
#define MC__STR_STR_X_FromSTB_Y                    5
#define MC__STR_STR_X_FromSTB_Y_Inverted           6
#define MC__STR_STR_Y                            (MCPARAMID)( 1503 << 14)
#define MC__STR_STR_Y_LOW                          1
#define MC__STR_STR_Y_HIGH                         2
#define MC__STR_STR_Y_FromSTB_X                    3
#define MC__STR_STR_Y_FromSTB_X_Inverted           4
#define MC__STR_STR_Y_FromSTB_Y                    5
#define MC__STR_STR_Y_FromSTB_Y_Inverted           6
#define MC__STR_STR_Z                            (MCPARAMID)( 1504 << 14)
#define MC__STR_STR_Z_LOW                          1
#define MC__STR_STR_Z_HIGH                         2
#define MC__STR_STR_Z_FromSTB_X                    3
#define MC__STR_STR_Z_FromSTB_X_Inverted           4
#define MC__STR_STR_Z_FromSTB_Y                    5
#define MC__STR_STR_Z_FromSTB_Y_Inverted           6
#define MC__TrigLine_CAMSIGA                       8
#define MC__TrigLine_DB1                           9
#define MC__TrigLine_DB2                          10
#define MC__TrigLine_CAMSIGB                      11
#define MC__TrigLine_TRGX                         12
#define MC__TrigLine_TRGY                         13
#define MC__TrigLine_TRGZ                         14
#define MC__TrigLine_TRX                          15
#define MC__TrigLine_TRY                          16
#define MC__TrigLine_TRZ                          17
#define MC__TRG_FTSEL_D1                          10
#define MC__TRG_FTSEL_D2                          11
#define MC__TRG_FTSEL_TRX                         12
#define MC__TRG_FTSEL_TRY                         13
#define MC__TRG_FTSEL_TRZ                         14
#define MC__LineTrigLine_CAMSIGA                  11
#define MC__LineTrigLine_CAMSIGB                  12
#define MC__TRG_LTSEL_D1                           9
#define MC__TRG_LTSEL_D2                          10
#define MC__CWR_SFA01                            (MCPARAMID)( 1505 << 14)
#define MC__CWR_SFA11                            (MCPARAMID)( 1506 << 14)
#define MC__CWR_SFA02                            (MCPARAMID)( 1507 << 14)
#define MC__CWR_SFA12                            (MCPARAMID)( 1508 << 14)
#define MC__CWR_SFA03                            (MCPARAMID)( 1509 << 14)
#define MC__CWR_SFA13                            (MCPARAMID)( 1510 << 14)
#define MC__CWR_SFA04                            (MCPARAMID)( 1511 << 14)
#define MC__CWR_SFA14                            (MCPARAMID)( 1512 << 14)
#define MC__STARTU4_mw                           (MCPARAMID)( 1513 << 14)
#define MC__STARTD4_mw                           (MCPARAMID)( 1514 << 14)
#define MC__DirX4                                (MCPARAMID)( 1515 << 14)
#define MC__DirY4                                (MCPARAMID)( 1516 << 14)
#define MC__CTA_STEPX4                           (MCPARAMID)( 1517 << 14)
#define MC__CTA_STEPY4                           (MCPARAMID)( 1518 << 14)
#define MC__CWR_WXP1                             (MCPARAMID)( 1519 << 14)
#define MC__CWR_WXP2                             (MCPARAMID)( 1520 << 14)
#define MC__CWR_WXP3                             (MCPARAMID)( 1521 << 14)
#define MC__CWR_WXP4                             (MCPARAMID)( 1522 << 14)
#define MC__CWR_NLA01                            (MCPARAMID)( 1523 << 14)
#define MC__CWR_NLA11                            (MCPARAMID)( 1524 << 14)
#define MC__CWR_NLA02                            (MCPARAMID)( 1525 << 14)
#define MC__CWR_NLA12                            (MCPARAMID)( 1526 << 14)
#define MC__CWR_NLA03                            (MCPARAMID)( 1527 << 14)
#define MC__CWR_NLA13                            (MCPARAMID)( 1528 << 14)
#define MC__CWR_NLA04                            (MCPARAMID)( 1529 << 14)
#define MC__CWR_NLA14                            (MCPARAMID)( 1530 << 14)
#define MC__CWR_NPA01                            (MCPARAMID)( 1531 << 14)
#define MC__CWR_NPA11                            (MCPARAMID)( 1532 << 14)
#define MC__CWR_NPA02                            (MCPARAMID)( 1533 << 14)
#define MC__CWR_NPA12                            (MCPARAMID)( 1534 << 14)
#define MC__CWR_NPA03                            (MCPARAMID)( 1535 << 14)
#define MC__CWR_NPA13                            (MCPARAMID)( 1536 << 14)
#define MC__CWR_NPA04                            (MCPARAMID)( 1537 << 14)
#define MC__CWR_NPA14                            (MCPARAMID)( 1538 << 14)
#define MC__CWR_WYP1                             (MCPARAMID)( 1539 << 14)
#define MC__CWR_WYP2                             (MCPARAMID)( 1540 << 14)
#define MC__CWR_WYP3                             (MCPARAMID)( 1541 << 14)
#define MC__CWR_WYP4                             (MCPARAMID)( 1542 << 14)
#define MC__PITCH4_mw                            (MCPARAMID)( 1543 << 14)
#define MC_Connector_M                             8
#define MC_Connector_A                             9
#define MC_Connector_B                            10
#define MC_ConnectLoc_BOTH                         4
#define MC___Connector_Check                     (MCPARAMID)( 1544 << 14)
#define MC___Connector_Check_PASS                  1
#define MC___Connector_Check_FAIL                  2
#define MC__CDC_TPG                              (MCPARAMID)( 1545 << 14)
#define MC__CDC_TPG_ENABLE                         1
#define MC__CDC_TPG_DISABLE                        2
#define MC__ASSYE11                              (MCPARAMID)( 1546 << 14)
#define MC__ASSYE12                              (MCPARAMID)( 1547 << 14)
#define MC__ASSYE13                              (MCPARAMID)( 1548 << 14)
#define MC__ASSYE14                              (MCPARAMID)( 1549 << 14)
#define MC__ASSYE15                              (MCPARAMID)( 1550 << 14)
#define MC__ASSYE16                              (MCPARAMID)( 1551 << 14)
#define MC__ASSYE17                              (MCPARAMID)( 1552 << 14)
#define MC__ASSYE18                              (MCPARAMID)( 1553 << 14)
#define MC__ASSYE21                              (MCPARAMID)( 1554 << 14)
#define MC__ASSYE22                              (MCPARAMID)( 1555 << 14)
#define MC__ASSYE23                              (MCPARAMID)( 1556 << 14)
#define MC__ASSYE24                              (MCPARAMID)( 1557 << 14)
#define MC__ASSYE25                              (MCPARAMID)( 1558 << 14)
#define MC__ASSYE26                              (MCPARAMID)( 1559 << 14)
#define MC__ASSYE27                              (MCPARAMID)( 1560 << 14)
#define MC__ASSYE28                              (MCPARAMID)( 1561 << 14)
#define MC__ASSYE31                              (MCPARAMID)( 1562 << 14)
#define MC__ASSYE32                              (MCPARAMID)( 1563 << 14)
#define MC__ASSYE33                              (MCPARAMID)( 1564 << 14)
#define MC__ASSYE34                              (MCPARAMID)( 1565 << 14)
#define MC__ASSYE35                              (MCPARAMID)( 1566 << 14)
#define MC__ASSYE36                              (MCPARAMID)( 1567 << 14)
#define MC__ASSYE37                              (MCPARAMID)( 1568 << 14)
#define MC__ASSYE38                              (MCPARAMID)( 1569 << 14)
#define MC__ASSYE41                              (MCPARAMID)( 1570 << 14)
#define MC__ASSYE42                              (MCPARAMID)( 1571 << 14)
#define MC__ASSYE43                              (MCPARAMID)( 1572 << 14)
#define MC__ASSYE44                              (MCPARAMID)( 1573 << 14)
#define MC__ASSYE45                              (MCPARAMID)( 1574 << 14)
#define MC__ASSYE46                              (MCPARAMID)( 1575 << 14)
#define MC__ASSYE47                              (MCPARAMID)( 1576 << 14)
#define MC__ASSYE48                              (MCPARAMID)( 1577 << 14)
#define MC__ASSY41                               (MCPARAMID)( 1578 << 14)
#define MC__ASSY42                               (MCPARAMID)( 1579 << 14)
#define MC__ASSY43                               (MCPARAMID)( 1580 << 14)
#define MC__ASSY44                               (MCPARAMID)( 1581 << 14)
#define MC__ASSYE51                              (MCPARAMID)( 1582 << 14)
#define MC__ASSYE52                              (MCPARAMID)( 1583 << 14)
#define MC__ASSYE53                              (MCPARAMID)( 1584 << 14)
#define MC__ASSYE54                              (MCPARAMID)( 1585 << 14)
#define MC__ASSYE55                              (MCPARAMID)( 1586 << 14)
#define MC__ASSYE56                              (MCPARAMID)( 1587 << 14)
#define MC__ASSYE57                              (MCPARAMID)( 1588 << 14)
#define MC__ASSYE58                              (MCPARAMID)( 1589 << 14)
#define MC__ASSYE61                              (MCPARAMID)( 1590 << 14)
#define MC__ASSYE62                              (MCPARAMID)( 1591 << 14)
#define MC__ASSYE63                              (MCPARAMID)( 1592 << 14)
#define MC__ASSYE64                              (MCPARAMID)( 1593 << 14)
#define MC__ASSYE65                              (MCPARAMID)( 1594 << 14)
#define MC__ASSYE66                              (MCPARAMID)( 1595 << 14)
#define MC__ASSYE67                              (MCPARAMID)( 1596 << 14)
#define MC__ASSYE68                              (MCPARAMID)( 1597 << 14)
#define MC__ASSYE71                              (MCPARAMID)( 1598 << 14)
#define MC__ASSYE72                              (MCPARAMID)( 1599 << 14)
#define MC__ASSYE73                              (MCPARAMID)( 1600 << 14)
#define MC__ASSYE74                              (MCPARAMID)( 1601 << 14)
#define MC__ASSYE75                              (MCPARAMID)( 1602 << 14)
#define MC__ASSYE76                              (MCPARAMID)( 1603 << 14)
#define MC__ASSYE77                              (MCPARAMID)( 1604 << 14)
#define MC__ASSYE78                              (MCPARAMID)( 1605 << 14)
#define MC__ASSYE81                              (MCPARAMID)( 1606 << 14)
#define MC__ASSYE82                              (MCPARAMID)( 1607 << 14)
#define MC__ASSYE83                              (MCPARAMID)( 1608 << 14)
#define MC__ASSYE84                              (MCPARAMID)( 1609 << 14)
#define MC__ASSYE85                              (MCPARAMID)( 1610 << 14)
#define MC__ASSYE86                              (MCPARAMID)( 1611 << 14)
#define MC__ASSYE87                              (MCPARAMID)( 1612 << 14)
#define MC__ASSYE88                              (MCPARAMID)( 1613 << 14)
#define MC__AllMyAssyMask                        (MCPARAMID)( 1614 << 14)
#define MC__c_INDEX                              (MCPARAMID)( 1615 << 14)
#define MC__D5_INDEX                             (MCPARAMID)( 1616 << 14)
#define MC__D6_INDEX                             (MCPARAMID)( 1617 << 14)
#define MC__D7_INDEX                             (MCPARAMID)( 1618 << 14)
#define MC__D8_INDEX                             (MCPARAMID)( 1619 << 14)
#define MC__W5_INDEX                             (MCPARAMID)( 1620 << 14)
#define MC__W6_INDEX                             (MCPARAMID)( 1621 << 14)
#define MC__W7_INDEX                             (MCPARAMID)( 1622 << 14)
#define MC__W8_INDEX                             (MCPARAMID)( 1623 << 14)
#define MC__CWR_SFA05                            (MCPARAMID)( 1624 << 14)
#define MC__CWR_SFA06                            (MCPARAMID)( 1625 << 14)
#define MC__CWR_SFA07                            (MCPARAMID)( 1626 << 14)
#define MC__CWR_SFA08                            (MCPARAMID)( 1627 << 14)
#define MC__CWR_NLA05                            (MCPARAMID)( 1628 << 14)
#define MC__CWR_NLA06                            (MCPARAMID)( 1629 << 14)
#define MC__CWR_NLA07                            (MCPARAMID)( 1630 << 14)
#define MC__CWR_NLA08                            (MCPARAMID)( 1631 << 14)
#define MC__CWR_WYP5                             (MCPARAMID)( 1632 << 14)
#define MC__CWR_WYP6                             (MCPARAMID)( 1633 << 14)
#define MC__CWR_WYP7                             (MCPARAMID)( 1634 << 14)
#define MC__CWR_WYP8                             (MCPARAMID)( 1635 << 14)
#define MC__PITCH5_mw                            (MCPARAMID)( 1636 << 14)
#define MC__PITCH6_mw                            (MCPARAMID)( 1637 << 14)
#define MC__PITCH7_mw                            (MCPARAMID)( 1638 << 14)
#define MC__PITCH8_mw                            (MCPARAMID)( 1639 << 14)
#define MC__STARTU5_mw                           (MCPARAMID)( 1640 << 14)
#define MC__STARTU6_mw                           (MCPARAMID)( 1641 << 14)
#define MC__STARTU7_mw                           (MCPARAMID)( 1642 << 14)
#define MC__STARTU8_mw                           (MCPARAMID)( 1643 << 14)
#define MC__DirX5                                (MCPARAMID)( 1644 << 14)
#define MC__DirX6                                (MCPARAMID)( 1645 << 14)
#define MC__DirX7                                (MCPARAMID)( 1646 << 14)
#define MC__DirX8                                (MCPARAMID)( 1647 << 14)
#define MC__DirY5                                (MCPARAMID)( 1648 << 14)
#define MC__DirY6                                (MCPARAMID)( 1649 << 14)
#define MC__DirY7                                (MCPARAMID)( 1650 << 14)
#define MC__DirY8                                (MCPARAMID)( 1651 << 14)
#define MC__CWR_NPA05                            (MCPARAMID)( 1652 << 14)
#define MC__CWR_NPA06                            (MCPARAMID)( 1653 << 14)
#define MC__CWR_NPA07                            (MCPARAMID)( 1654 << 14)
#define MC__CWR_NPA08                            (MCPARAMID)( 1655 << 14)
#define MC__CWR_WXP5                             (MCPARAMID)( 1656 << 14)
#define MC__CWR_WXP6                             (MCPARAMID)( 1657 << 14)
#define MC__CWR_WXP7                             (MCPARAMID)( 1658 << 14)
#define MC__CWR_WXP8                             (MCPARAMID)( 1659 << 14)
#define MC__CBA_PSHIFT5                          (MCPARAMID)( 1660 << 14)
#define MC__CBA_PSHIFT6                          (MCPARAMID)( 1661 << 14)
#define MC__CBA_PSHIFT7                          (MCPARAMID)( 1662 << 14)
#define MC__CBA_PSHIFT8                          (MCPARAMID)( 1663 << 14)
#define MC__PSHIFT                               (MCPARAMID)( 1664 << 14)
#define MC__MTAP                                 (MCPARAMID)( 1665 << 14)
#define MC_ChannelTopology_OCTALXTAP              11
#define MC__ASSY_EIGHT                             5
#define MC__WIC_EIGHT                              5
#define MC_Camera_XC_ST50CE                       88
#define MC_CamConfig_I50SM                       134
#define MC_Camera_CS8550D                         89
#define MC_CamConfig_I120SM                      135
#define MC_Cable_A15_C18                          23
#define MC_CableName_Single_Channel_RGC_B         23
#define MC__W_STEP                               (MCPARAMID)( 1666 << 14)
#define MC__WSTEP                                (MCPARAMID)( 1667 << 14)
#define MC__FBL_FBLIMIT                          (MCPARAMID)( 1668 << 14)
#define MC__FBSIZE                               (MCPARAMID)( 1669 << 14)
#define MC_Camera_L301kc                          90
#define MC_Camera_XC_ST70CE                       91
#define MC_ChannelTopology_QUADXPAIRTAP           12
#define MC_ChannelTopology_QUADXPAIREND           13
#define MC_ChannelTopology_QUADXPAIRMID           14
#define MC__Live                                 (MCPARAMID)( 1670 << 14)
#define MC__CPHASE1                              (MCPARAMID)( 1671 << 14)
#define MC__CPHASE2                              (MCPARAMID)( 1672 << 14)
#define MC__CPHASE3                              (MCPARAMID)( 1673 << 14)
#define MC__CPHASE4                              (MCPARAMID)( 1674 << 14)
#define MC__CPHASE5                              (MCPARAMID)( 1675 << 14)
#define MC__CPHASE6                              (MCPARAMID)( 1676 << 14)
#define MC__CPHASE7                              (MCPARAMID)( 1677 << 14)
#define MC__CPHASE8                              (MCPARAMID)( 1678 << 14)
#define MC_TapStructure_QUAD_W2                   17
#define MC__WMAX                                 (MCPARAMID)( 1679 << 14)
#define MC__D1_WINDEX                            (MCPARAMID)( 1680 << 14)
#define MC__D2_WINDEX                            (MCPARAMID)( 1681 << 14)
#define MC__D3_WINDEX                            (MCPARAMID)( 1682 << 14)
#define MC__D4_WINDEX                            (MCPARAMID)( 1683 << 14)
#define MC__D5_WINDEX                            (MCPARAMID)( 1684 << 14)
#define MC__D6_WINDEX                            (MCPARAMID)( 1685 << 14)
#define MC__D7_WINDEX                            (MCPARAMID)( 1686 << 14)
#define MC__D8_XINDEX                            (MCPARAMID)( 1687 << 14)
#define MC__D8_WINDEX                            (MCPARAMID)( 1688 << 14)
#define MC__VLC_OVRALIGN                         (MCPARAMID)( 1689 << 14)
#define MC__VLC_OVRALIGN_ONELINE                   1
#define MC__VLC_OVRALIGN_SIXTEENLINES              2
#define MC_Camera_P2_4x_06k40                     92
#define MC_Camera_P2_4x_04k40                     93
#define MC_Camera_P2_4x_08k40                     94
#define MC__Category_Board_Selection              22
#define MC__Category_Input_Output_Control         23
#define MC_InputConfig___17                      (MCPARAMID)( 1690 << 14)
#define MC_InputFunction___17                    (MCPARAMID)( 1691 << 14)
#define MC_InputState___17                       (MCPARAMID)( 1692 << 14)
#define MC_InputStyle___17                       (MCPARAMID)( 1693 << 14)
#define MC_OutputConfig___17                     (MCPARAMID)( 1694 << 14)
#define MC_OutputFunction___17                   (MCPARAMID)( 1695 << 14)
#define MC_OutputState___17                      (MCPARAMID)( 1696 << 14)
#define MC_OutputStyle___17                      (MCPARAMID)( 1697 << 14)
#define MC_InputOwner___17                       (MCPARAMID)( 1698 << 14)
#define MC_OutputOwner___17                      (MCPARAMID)( 1699 << 14)
#define MC_Camera_A102k                           95
#define MC_TimUnitN_PLL                          (MCPARAMID)( 1700 << 14)
#define MC_TimUnitN_PLL_NONE                       1
#define MC_TimUnitN_PLL_NEEDED                     2
#define MC_TimUnitN_DetV                         (MCPARAMID)( 1701 << 14)
#define MC_TimUnitN_DetV_NONE                      1
#define MC_TimUnitN_DetV_NEEDED                    2
#define MC_TimUnitN_DetP                         (MCPARAMID)( 1702 << 14)
#define MC_TimUnitN_DetP_NONE                      1
#define MC_TimUnitN_DetP_NEEDED                    2
#define MC_TimUnitN_ClockSynth                   (MCPARAMID)( 1703 << 14)
#define MC_TimUnitN_ClockSynth_NONE                1
#define MC_TimUnitN_ClockSynth_NEEDED              2
#define MC_TimUnitNUsage                         (MCPARAMID)( 1704 << 14)
#define MC_TimUnitNUsage_UNUSED                    1
#define MC_TimUnitNUsage_EXCLUSIVE                 2
#define MC_TimUnitNUsage_SHARED                    3
#define MC__TRG_FTPOL                            (MCPARAMID)( 1705 << 14)
#define MC__TRG_FTPOL_DIRECT                       4
#define MC__TRG_FTPOL_INVERT                       5
#define MC__TRG_FFTA                             (MCPARAMID)( 1706 << 14)
#define MC__TRG_FFTA_YES                           1
#define MC__TRG_FFTA_NO                            2
#define MC__TRG_NFTA                             (MCPARAMID)( 1707 << 14)
#define MC__TRG_NFTA_YES                           1
#define MC__TRG_NFTA_NO                            2
#define MC__TRG_FTSS                             (MCPARAMID)( 1708 << 14)
#define MC__TRG_FTSS_YES                           1
#define MC__TRG_FTSS_NO                            2
#define MC_CamConfig_P60RD_G                     136
#define MC__BoardType__STREAM                      5
#define MC__BoardType__CLASSIC                     6
#define MC_MY_PARAMETER                          (MCPARAMID)( 1709 << 14)
#define MC_MY_PARAMETER_YES                        1
#define MC_MY_PARAMETER_NO                         2
#define MC_Camera_TM_9701                         96
#define MC_Cable_A15_C19                          24
#define MC_CableName_Single_Channel_R_D           24
#define MC_Camera_KP_F2B                          97
#define MC_Camera_DT4100                          98
#define MC_CamConfig_P10SC                       137
#define MC_Manufacturer_DUNCANTECH                19
#define MC_Camera_SKC_141                         99
#define MC_CamConfig_P15SA                       138
#define MC_CamConfig_P15SM                       139
#define MC_CamConfig_P15RA                       140
#define MC_CamConfig_P15RM                       141
#define MC_CamConfig_P15SD                       142
#define MC_CamConfig_P15RD                       143
#define MC_Camera_XC_7500                        100
#define MC__VerticalSyncMode_MASTER_V              4
#define MC__VerticalSyncMode_MASTER_R              5
#define MC__VerticalSyncMode_MASTER_A              6
#define MC__VerticalSyncMode_FAIL                  7
#define MC___VerticalSyncMode_Check              (MCPARAMID)( 1710 << 14)
#define MC___VerticalSyncMode_Check_PASS           1
#define MC___VerticalSyncMode_Check_FAIL           2
#define MC_CamConfig_P60RM_R                     144
#define MC_Camera_Std_BW_CCIR                    101
#define MC_Camera_Std_BW_EIA                     102
#define MC_Camera_Std_RGB_CCIR                   103
#define MC_Camera_Std_RGB_EIA                    104
#define MC_Manufacturer_STANDARD_CAMERAS          20
#define MC_Camera_KP_M32P                        105
#define MC_Camera_CV_M7CLp                       106
#define MC__MSP                                  (MCPARAMID)( 1711 << 14)
#define MC__MSP_100                              (MCPARAMID)( 1712 << 14)
#define MC_Camera_XC_ST50                        107
#define MC_ColorStorage                          (MCPARAMID)( 1713 << 14)
#define MC_ColorStorage_PACKED                     1
#define MC_Expose_Fld                            (MCPARAMID)( 1714 << 14)
#define MC__STR_STR_X_HOLD                         7
#define MC__STR_STR_Y_HOLD                         7
#define MC__STR_STR_Z_HOLD                         7
#define MC_Camera_InterlaceFR                    108
#define MC_Camera_ProgressiveFR                  109
#define MC_Camera_LongExposeFR                   110
#define MC_Camera_GrabberExposeAR                111
#define MC_Camera_CameraExposeAR                 112
#define MC_CamConfig_IxxSA                       145
#define MC_CamConfig_IxxSM                       146
#define MC_CamConfig_PxxSA                       147
#define MC_CamConfig_PxxSD                       148
#define MC_CamConfig_PxxSM                       149
#define MC_CamConfig_IxxSM_L                     150
#define MC_CamConfig_PxxSM_L                     151
#define MC_CamConfig_PxxRA                       152
#define MC_CamConfig_PxxRA_D                     153
#define MC_CamConfig_PxxRA_M                     154
#define MC_CamConfig_PxxRD                       155
#define MC_CamConfig_PxxRM_A                     156
#define MC_CamConfig_PxxRM_D                     157
#define MC_CamConfig_PxxRM_1                     158
#define MC_CamConfig_PxxRM_2                     159
#define MC_Cable_A15_C00                          25
#define MC_CableName_My_Cable                     25
#define MC_VSyncMode                             (MCPARAMID)( 1715 << 14)
#define MC_VSyncMode_UNKNOWN                       1
#define MC_VSyncMode_MASTER                        2
#define MC_VSyncMode_ANALOG                        3
#define MC_VSyncMode_DIGITAL                       4
#define MC___Individual_Check                    (MCPARAMID)( 1716 << 14)
#define MC___Individual_Check_PASS                 1
#define MC___Individual_Check_FAIL                 2
#define MC_Camera_1600m                          113
#define MC_CamConfig_P33SC                       160
#define MC_CamConfig_P33RG                       161
#define MC__DRS_PPOL                             (MCPARAMID)( 1717 << 14)
#define MC__DRS_PPOL_DIRECT                        1
#define MC__DRS_PPOL_INVERT                        2
#define MC_ColorStorage_PLANAR                     2
#define MC_ImagePlaneCount                       (MCPARAMID)( 1718 << 14)
#define MC_FifoOrdering                          (MCPARAMID)( 1719 << 14)
#define MC_FifoOrdering_PROGRESSIVE                1
#define MC_FifoOrdering_INTERLACEDFIELD            2
#define MC_FifoOrdering_DUALYEND                   3
#define MC__DRS_PSRC                             (MCPARAMID)( 1720 << 14)
#define MC__DRS_PSRC_SPARE                         1
#define MC__DRS_PSRC_LVAL                          2
#define MC__DRS_PSRC_DVAL                          3
#define MC__DRS_PPOL_NONE                          3
#define MC_ParityDetection                       (MCPARAMID)( 1721 << 14)
#define MC_ParityDetection_NONE                    1
#define MC_ParityDetection_FI_SPARE                2
#define MC_ParityDetection_FI_SPARE_INV            3
#define MC_ParityDetection_FIXEDFRAME              4
#define MC_ParityDetection_FIXEDFRAME_INV          5
#define MC__DRS_PSRC_NONE                          4
#define MC_ParityDetection_FI_LVAL                 6
#define MC_ParityDetection_FI_LVAL_INV             7
#define MC_ParityDetection_FI_DVAL                 8
#define MC_ParityDetection_FI_DVAL_INV             9
#define MC__Category_Cluster                      24
#define MC_GrabField_Filter                      (MCPARAMID)( 1722 << 14)
#define MC__SSC_HR70                               6
#define MC_Camera_XC_HR70                        114
#define MC_CamConfig_P30RM_2                     162
#define MC_CamConfig_P30RA_D                     163
#define MC_PixelBurst                            (MCPARAMID)( 1723 << 14)
#define MC_FifoSizeX                             (MCPARAMID)( 1724 << 14)
#define MC_FifoSizeY                             (MCPARAMID)( 1725 << 14)
#define MC_ImageSizingX                          (MCPARAMID)( 1726 << 14)
#define MC_ImageSizingX_FIXED                      1
#define MC_ImageSizingY                          (MCPARAMID)( 1727 << 14)
#define MC_ImageSizingY_FIXED                      1
#define MC_ImageSizingY_VARIABLE                   2
#define MC_CamConfig_P60RA_D                     164
#define MC_CamConfig_P60RM_D                     165
#define MC_CamConfig_P120RM_D                    166
#define MC_CamConfig_P106RM_D                    167
#define MC_CableName_Single_Channel_RG            26
#define MC__CWI_CWI                              (MCPARAMID)( 1728 << 14)
#define MC_CamConfig_P106SM                      168
#define MC__BoardType__ALPHA_cPCI                  7
#define MC__BoardType__ALPHA_EV                    8
#define MC__AssyType                             (MCPARAMID)( 1729 << 14)
#define MC__AssyType__ALPHA                        1
#define MC__AssyType__GAMMA                        2
#define MC_GrabberConfig_0_0_1_1                   8
#define MC_GrabberConfig_0_1_1_0                   9
#define MC_GrabberConfig_1_0_0_1                  10
#define MC_GrabberConfig_1_1_0_0                  11
#define MC_MapTimCon_TXYXY                         9
#define MC_Connector_CAM0                         11
#define MC_Connector_CAM1                         12
#define MC_Connector_CAM2                         13
#define MC_Connector_CAM3                         14
#define MC_ConnectLoc_RIGHTMOST                    5
#define MC_ConnectLoc_MIDDLERIGHT                  6
#define MC_ConnectLoc_MIDDLELEFT                   7
#define MC_ConnectLoc_LEFTMOST                     8
#define MC_TimUnit_DetP                          (MCPARAMID)( 1730 << 14)
#define MC_TimUnit_DetP_NONE                       1
#define MC_TimUnit_DetP_NEEDED                     2
#define MC_TimUnit_PLL                           (MCPARAMID)( 1731 << 14)
#define MC_TimUnit_PLL_NONE                        1
#define MC_TimUnit_PLL_NEEDED                      2
#define MC_TimUnit_DetV                          (MCPARAMID)( 1732 << 14)
#define MC_TimUnit_DetV_NONE                       1
#define MC_TimUnit_DetV_NEEDED                     2
#define MC_Camera_TM_6710CL                      115
#define MC_CamConfig_P120SC                      169
#define MC_CamConfig_P120RG                      170
#define MC_InputConfig                           (MCPARAMID)( 1733 << 14)
#define MC_InputConfig_SOFT                        1
#define MC_InputConfig_FREE                        2
#define MC_InputFunction                         (MCPARAMID)( 1734 << 14)
#define MC_InputState                            (MCPARAMID)( 1735 << 14)
#define MC_InputStyle                            (MCPARAMID)( 1736 << 14)
#define MC_NullSet_Enum_Filter                   (MCPARAMID)( 1737 << 14)
#define MC_InputStyle_TTL_Only_Filter            (MCPARAMID)( 1738 << 14)
#define MC_InputStyle_InsulatedIO_Filter         (MCPARAMID)( 1739 << 14)
#define MC_OutputConfig                          (MCPARAMID)( 1740 << 14)
#define MC_OutputFunction                        (MCPARAMID)( 1741 << 14)
#define MC_OutputState                           (MCPARAMID)( 1742 << 14)
#define MC_OutputState_NONE_Only_Filter          (MCPARAMID)( 1743 << 14)
#define MC_FullSet_Enum_Filter                   (MCPARAMID)( 1744 << 14)
#define MC_OutputState_STX                       (MCPARAMID)( 1745 << 14)
#define MC_OutputState_STX_HOLD                    1
#define MC_OutputState_STX_LOW                     2
#define MC_OutputState_STX_HIGH                    3
#define MC_OutputState_STY                       (MCPARAMID)( 1746 << 14)
#define MC_OutputState_STY_HOLD                    1
#define MC_OutputState_STY_LOW                     2
#define MC_OutputState_STY_HIGH                    3
#define MC_OutputState_STZ                       (MCPARAMID)( 1747 << 14)
#define MC_OutputState_STZ_HOLD                    1
#define MC_OutputState_STZ_LOW                     2
#define MC_OutputState_STZ_HIGH                    3
#define MC_OutputStyle                           (MCPARAMID)( 1748 << 14)
#define MC_OutputStyle_TTL_Only_Filter           (MCPARAMID)( 1749 << 14)
#define MC_OutputStyle_InsulatedIO_Filter        (MCPARAMID)( 1750 << 14)
#define MC_OutputState_OUT1                      (MCPARAMID)( 1751 << 14)
#define MC_OutputState_OUT1_HOLD                   1
#define MC_OutputState_OUT1_LOW                    2
#define MC_OutputState_OUT1_HIGH                   3
#define MC_OutputState_OUT2                      (MCPARAMID)( 1752 << 14)
#define MC_OutputState_OUT2_HOLD                   1
#define MC_OutputState_OUT2_LOW                    2
#define MC_OutputState_OUT2_HIGH                   3
#define MC_OutputState_OUT3                      (MCPARAMID)( 1753 << 14)
#define MC_OutputState_OUT3_HOLD                   1
#define MC_OutputState_OUT3_LOW                    2
#define MC_OutputState_OUT3_HIGH                   3
#define MC_OutputState_OUT4                      (MCPARAMID)( 1754 << 14)
#define MC_OutputState_OUT4_HOLD                   1
#define MC_OutputState_OUT4_LOW                    2
#define MC_OutputState_OUT4_HIGH                   3
#define MC_OutputState_STR_X                     (MCPARAMID)( 1755 << 14)
#define MC_OutputState_STR_X_HOLD                  1
#define MC_OutputState_STR_X_LOW                   2
#define MC_OutputState_STR_X_HIGH                  3
#define MC_OutputState_InsulatedIO_Filter        (MCPARAMID)( 1756 << 14)
#define MC_OutputState_A1                        (MCPARAMID)( 1757 << 14)
#define MC_OutputState_A1_HOLD                     1
#define MC_OutputState_A1_LOW                      2
#define MC_OutputState_A1_HIGH                     3
#define MC_OutputState_A2                        (MCPARAMID)( 1758 << 14)
#define MC_OutputState_A2_HOLD                     1
#define MC_OutputState_A2_LOW                      2
#define MC_OutputState_A2_HIGH                     3
#define MC_Camera_TM_2016_8CL                    116
#define MC_CamConfig_P08SC                       171
#define MC_CamConfig_P08RG                       172
#define MC_CamConfig_P8SC                        173
#define MC_CamConfig_P8RG                        174
#define MC__INITD2_SELV2                         (MCPARAMID)( 1759 << 14)
#define MC__INITD3_SELV3                         (MCPARAMID)( 1760 << 14)
#define MC_GrabberConfig_2_00                     12
#define MC_GrabberConfig_10_10                    13
#define MC_GrabberConfig_10_01                    14
#define MC_GrabberConfig_01_10                    15
#define MC_GrabberConfig_11_00                    16
#define MC_GrabberConfig_0_11                     17
#define MC_GrabberConfig_00_11                    18
#define MC_GrabberConfig_01_01                    19
#define MC_NextInputState                        (MCPARAMID)( 1761 << 14)
#define MC_NextInputState_LOW                      1
#define MC_NextInputState_HIGH                     2
#define MC_Camera_KP_F120CL                      117
#define MC_Camera_KP120CL                        118
#define MC_InputStyle_CMOS_Only_Filter           (MCPARAMID)( 1762 << 14)
#define MC_InputStyle_CHANNELLINK_Filter         (MCPARAMID)( 1763 << 14)
#define MC_OutputStyle_OC_Only_Filter            (MCPARAMID)( 1764 << 14)
#define MC_OutputState_1                         (MCPARAMID)( 1765 << 14)
#define MC_OutputState_1_HOLD                      1
#define MC_OutputState_1_LOW                       2
#define MC_OutputState_1_HIGH                      3
#define MC_OutputState_2                         (MCPARAMID)( 1766 << 14)
#define MC_OutputState_2_HOLD                      1
#define MC_OutputState_2_LOW                       2
#define MC_OutputState_2_HIGH                      3
#define MC_OutputState_3                         (MCPARAMID)( 1767 << 14)
#define MC_OutputState_3_HOLD                      1
#define MC_OutputState_3_LOW                       2
#define MC_OutputState_3_HIGH                      3
#define MC_OutputState_4                         (MCPARAMID)( 1768 << 14)
#define MC_OutputState_4_HOLD                      1
#define MC_OutputState_4_LOW                       2
#define MC_OutputState_4_HIGH                      3
#define MC_OutputState_5                         (MCPARAMID)( 1769 << 14)
#define MC_OutputState_5_HOLD                      1
#define MC_OutputState_5_LOW                       2
#define MC_OutputState_5_HIGH                      3
#define MC_OutputState_6                         (MCPARAMID)( 1770 << 14)
#define MC_OutputState_6_HOLD                      1
#define MC_OutputState_6_LOW                       2
#define MC_OutputState_6_HIGH                      3
#define MC_OutputState_7                         (MCPARAMID)( 1771 << 14)
#define MC_OutputState_7_HOLD                      1
#define MC_OutputState_7_LOW                       2
#define MC_OutputState_7_HIGH                      3
#define MC_OutputState_8                         (MCPARAMID)( 1772 << 14)
#define MC_OutputState_8_HOLD                      1
#define MC_OutputState_8_LOW                       2
#define MC_OutputState_8_HIGH                      3
#define MC_OutputState_9                         (MCPARAMID)( 1773 << 14)
#define MC_OutputState_9_HOLD                      1
#define MC_OutputState_9_LOW                       2
#define MC_OutputState_9_HIGH                      3
#define MC_OutputState_10                        (MCPARAMID)( 1774 << 14)
#define MC_OutputState_10_HOLD                     1
#define MC_OutputState_10_LOW                      2
#define MC_OutputState_10_HIGH                     3
#define MC_OutputState_11                        (MCPARAMID)( 1775 << 14)
#define MC_OutputState_11_HOLD                     1
#define MC_OutputState_11_LOW                      2
#define MC_OutputState_11_HIGH                     3
#define MC_OutputState_12                        (MCPARAMID)( 1776 << 14)
#define MC_OutputState_12_HOLD                     1
#define MC_OutputState_12_LOW                      2
#define MC_OutputState_12_HIGH                     3
#define MC_OutputState_13                        (MCPARAMID)( 1777 << 14)
#define MC_OutputState_13_HOLD                     1
#define MC_OutputState_13_LOW                      2
#define MC_OutputState_13_HIGH                     3
#define MC_OutputState_14                        (MCPARAMID)( 1778 << 14)
#define MC_OutputState_14_HOLD                     1
#define MC_OutputState_14_LOW                      2
#define MC_OutputState_14_HIGH                     3
#define MC_OutputState_15                        (MCPARAMID)( 1779 << 14)
#define MC_OutputState_15_HOLD                     1
#define MC_OutputState_15_LOW                      2
#define MC_OutputState_15_HIGH                     3
#define MC_OutputState_16                        (MCPARAMID)( 1780 << 14)
#define MC_OutputState_16_HOLD                     1
#define MC_OutputState_16_LOW                      2
#define MC_OutputState_16_HIGH                     3
#define MC_OutputState_17                        (MCPARAMID)( 1781 << 14)
#define MC_OutputState_17_HOLD                     1
#define MC_OutputState_17_LOW                      2
#define MC_OutputState_17_HIGH                     3
#define MC_OutputState_18                        (MCPARAMID)( 1782 << 14)
#define MC_OutputState_18_HOLD                     1
#define MC_OutputState_18_LOW                      2
#define MC_OutputState_18_HIGH                     3
#define MC_OutputState_19                        (MCPARAMID)( 1783 << 14)
#define MC_OutputState_19_HOLD                     1
#define MC_OutputState_19_LOW                      2
#define MC_OutputState_19_HIGH                     3
#define MC_OutputState_28                        (MCPARAMID)( 1784 << 14)
#define MC_OutputState_28_HOLD                     1
#define MC_OutputState_28_LOW                      2
#define MC_OutputState_28_HIGH                     3
#define MC_OutputState_29                        (MCPARAMID)( 1785 << 14)
#define MC_OutputState_29_HOLD                     1
#define MC_OutputState_29_LOW                      2
#define MC_OutputState_29_HIGH                     3
#define MC_OutputState_38                        (MCPARAMID)( 1786 << 14)
#define MC_OutputState_38_HOLD                     1
#define MC_OutputState_38_LOW                      2
#define MC_OutputState_38_HIGH                     3
#define MC_OutputState_39                        (MCPARAMID)( 1787 << 14)
#define MC_OutputState_39_HOLD                     1
#define MC_OutputState_39_LOW                      2
#define MC_OutputState_39_HIGH                     3
#define MC_Camera_PAL                            119
#define MC_Camera_NTSC                           120
#define MC_TapStructure_SINGLE_C                  18
#define MC_TapStructure_SINGLE_S                  19
#define MC_DataLink_COMPOSITE                      3
#define MC_Standard_PAL                            3
#define MC_Standard_NTSC                           4
#define MC_Standard_SECAM                          5
#define MC_Hsquare_Px                            (MCPARAMID)( 1788 << 14)
#define MC_TrigMode_PAUSE                          9
#define MC_NextTrigMode_IMMEDIATE                  6
#define MC_NextTrigMode_PAUSE                      7
#define MC_NextTrigMode_TIMER                      8
#define MC_Delay_ms                              (MCPARAMID)( 1789 << 14)
#define MC_NextDelay_ms                          (MCPARAMID)( 1790 << 14)
#define MC_TrigEdge_HIGH                           3
#define MC_TrigEdge_LOW                            4
#define MC_TrigLine_IO                            11
#define MC_TrigIO                                (MCPARAMID)( 1791 << 14)
#define MC_StrobeLine_IO                           7
#define MC_StrobeIO                              (MCPARAMID)( 1792 << 14)
#define MC_Connector_VID1_COMP                    15
#define MC_Connector_VID2_COMP                    16
#define MC_Connector_VID3_COMP                    17
#define MC_Connector_VID4_COMP                    18
#define MC_PixelFormat                           (MCPARAMID)( 1793 << 14)
#define MC_PixelFormat_RGB32                       1
#define MC_PixelFormat_RGB24                       2
#define MC_PixelFormat_RGB16                       3
#define MC_PixelFormat_RGB15                       4
#define MC_PixelFormat_YUV2                        5
#define MC_PixelFormat_Y8                          6
#define MC_PixelFormat_TGB8                        7
#define MC_PixelFormat_RAW8                        8
#define MC_OutputState__xx_                      (MCPARAMID)( 1794 << 14)
#define MC_OutputState__xx__HOLD                   1
#define MC_OutputState__xx__LOW                    2
#define MC_OutputState__xx__HIGH                   3
#define MC_InputStyle_InsulatedIO_Only_Filter    (MCPARAMID)( 1795 << 14)
#define MC_InputPinName                          (MCPARAMID)( 1796 << 14)
#define MC_InputPinName_UNKNOWN                    1
#define MC_InputPinName_IN1                        2
#define MC_InputPinName_IN2                        3
#define MC_InputPinName_IN3                        4
#define MC_InputPinName_IN4                        5
#define MC_InputPinName_TRX                        6
#define MC_InputPinName_TRY                        7
#define MC_InputPinName_TRZ                        8
#define MC_InputPinName_CK                         9
#define MC_InputPinName_RST                       10
#define MC_InputPinName_HIO                       11
#define MC_InputPinName_GATE                      12
#define MC_InputPinName_VIO                       13
#define MC_InputPinName_EXP                       14
#define MC_InputConnectorName                    (MCPARAMID)( 1797 << 14)
#define MC_InputConnectorName_UNKNOWN              1
#define MC_InputConnectorName_TR_ST                2
#define MC_InputConnectorName_CAMX                 3
#define MC_InputConnectorName_CAMY                 4
#define MC_InputConnectorName_CAMZ                 5
#define MC_InputConnectorName_PIO                  6
#define MC_OutputPinName                         (MCPARAMID)( 1798 << 14)
#define MC_OutputPinName_UNKNOWN                   1
#define MC_OutputPinName_OUT1                      2
#define MC_OutputPinName_OUT2                      3
#define MC_OutputPinName_OUT3                      4
#define MC_OutputPinName_OUT4                      5
#define MC_OutputPinName_STX                       6
#define MC_OutputPinName_STY                       7
#define MC_OutputPinName_STZ                       8
#define MC_OutputConnectorName                   (MCPARAMID)( 1799 << 14)
#define MC_OutputConnectorName_UNKNOWN             1
#define MC_OutputConnectorName_TR_ST               2
#define MC_OutputConnectorName_CAMX                3
#define MC_OutputConnectorName_CAMY                4
#define MC_OutputConnectorName_CAMZ                5
#define MC_OutputConnectorName_PIO                 6
#define MC_InputPinName_IO1                       15
#define MC_InputPinName_IO2                       16
#define MC_InputPinName_IO3                       17
#define MC_InputPinName_IO4                       18
#define MC_InputPinName_IO5                       19
#define MC_InputPinName_IO6                       20
#define MC_InputPinName_IO7                       21
#define MC_InputPinName_IO8                       22
#define MC_InputPinName_IO9                       23
#define MC_InputPinName_IO10                      24
#define MC_InputPinName_IO11                      25
#define MC_InputPinName_IO12                      26
#define MC_InputPinName_IO13                      27
#define MC_InputPinName_IO14                      28
#define MC_InputPinName_IO15                      29
#define MC_InputPinName_IO16                      30
#define MC_InputPinName_TRG                       31
#define MC_InputPinName_A1                        32
#define MC_InputPinName_B1                        33
#define MC_InputPinName_A2                        34
#define MC_InputPinName_B2                        35
#define MC_InputPinName_FVAL                      36
#define MC_InputPinName_LVAL                      37
#define MC_InputPinName_DVAL                      38
#define MC_InputPinName_SPARE                     39
#define MC_InputConnectorName_SYSTEM               7
#define MC_InputConnectorName_IO                   8
#define MC_InputConnectorName_CAMERA               9
#define MC_InputConnectorName_CAMERA_A            10
#define MC_InputConnectorName_CAMERA_B            11
#define MC_OutputPinName_OUT5                      9
#define MC_OutputPinName_OUT6                     10
#define MC_OutputPinName_OUT7                     11
#define MC_OutputPinName_OUT8                     12
#define MC_OutputPinName_OUT9                     13
#define MC_OutputPinName_OUT10                    14
#define MC_OutputPinName_OUT11                    15
#define MC_OutputPinName_OUT12                    16
#define MC_OutputPinName_OUT13                    17
#define MC_OutputPinName_OUT14                    18
#define MC_OutputPinName_OUT15                    19
#define MC_OutputPinName_OUT16                    20
#define MC_OutputPinName_STR                      21
#define MC_OutputPinName_A1                       22
#define MC_OutputPinName_B1                       23
#define MC_OutputPinName_A2                       24
#define MC_OutputPinName_B2                       25
#define MC_OutputPinName_CC1                      26
#define MC_OutputPinName_CC2                      27
#define MC_OutputPinName_CC3                      28
#define MC_OutputPinName_CC4                      29
#define MC_OutputConnectorName_SYSTEM              7
#define MC_OutputConnectorName_IO                  8
#define MC_OutputConnectorName_CAMERA              9
#define MC_OutputConnectorName_CAMERA_A           10
#define MC_OutputConnectorName_CAMERA_B           11
#define MC_OutputPinName_IO1                      30
#define MC_OutputPinName_IO2                      31
#define MC_OutputPinName_IO3                      32
#define MC_OutputPinName_IO4                      33
#define MC_OutputPinName_IO5                      34
#define MC_OutputPinName_IO6                      35
#define MC_OutputPinName_IO7                      36
#define MC_OutputPinName_IO8                      37
#define MC_OutputPinName_IO9                      38
#define MC_OutputPinName_IO10                     39
#define MC_OutputPinName_IO11                     40
#define MC_OutputPinName_IO12                     41
#define MC_OutputPinName_IO13                     42
#define MC_OutputPinName_IO14                     43
#define MC_OutputPinName_IO15                     44
#define MC_OutputPinName_IO16                     45
#define MC___CAMLoopBack                         (MCPARAMID)( 1800 << 14)
#define MC___CAMLoopBack_DISABLE                   1
#define MC___CAMLoopBack_ENABLE                    2
#define MC_GrabberConfig_00_2                     20
#define MC_GrabberConfig_10_00                    21
#define MC_GrabberConfig_01_00                    22
#define MC_GrabberConfig_00_10                    23
#define MC_GrabberConfig_00_01                    24
#define MC_GrabberConfig_00_00                    25
#define MC_MapTimDig_TYX                           9
#define MC_MapTimDig_TYY                          10
#define MC__BitMask                              (MCPARAMID)( 1801 << 14)
#define MC_ConnectLoc_SECOND                       9
#define MC_ConnectLoc_THIRD                       10
#define MC_ConnectLoc_FOURTH                      11
#define MC_Camera_CSB4000CL                      121
#define MC_Cable_S15_C00                          27
#define MC_Cable_S15_C01                          28
#define MC_Cable_S15_C02                          29
#define MC_CamConfig_P8RC                        175
#define MC_STOPASMode                            (MCPARAMID)( 1802 << 14)
#define MC_STOPASMode_AUTO                         1
#define MC_STOPASMode_MANUAL                       2
#define MC_OutputPinName_RED                      46
#define MC_OutputPinName_GREEN                    47
#define MC_OutputConnectorName_LEDX               12
#define MC_OutputConnectorName_LEDY               13
#define MC_OutputConnectorName_LEDZ               14
#define MC_OutputState_51                        (MCPARAMID)( 1803 << 14)
#define MC_OutputState_51_HOLD                     1
#define MC_OutputState_51_LOW                      2
#define MC_OutputState_51_HIGH                     3
#define MC_OutputStyle_LED_Filter                (MCPARAMID)( 1804 << 14)
#define MC_OutputState_52                        (MCPARAMID)( 1805 << 14)
#define MC_OutputState_52_HOLD                     1
#define MC_OutputState_52_LOW                      2
#define MC_OutputState_52_HIGH                     3
#define MC_OutputState_53                        (MCPARAMID)( 1806 << 14)
#define MC_OutputState_53_HOLD                     1
#define MC_OutputState_53_LOW                      2
#define MC_OutputState_53_HIGH                     3
#define MC_OutputState_54                        (MCPARAMID)( 1807 << 14)
#define MC_OutputState_54_HOLD                     1
#define MC_OutputState_54_LOW                      2
#define MC_OutputState_54_HIGH                     3
#define MC_OutputState_55                        (MCPARAMID)( 1808 << 14)
#define MC_OutputState_55_HOLD                     1
#define MC_OutputState_55_LOW                      2
#define MC_OutputState_55_HIGH                     3
#define MC_OutputState_56                        (MCPARAMID)( 1809 << 14)
#define MC_OutputState_56_HOLD                     1
#define MC_OutputState_56_LOW                      2
#define MC_OutputState_56_HIGH                     3
#define MC_OutputConnectorName_LED                15
#define MC_OutputConnectorName_LEDA               16
#define MC_OutputConnectorName_LEDB               17
#define MC_BoardTopology_1_11                     21
#define MC_ConfigGrabber                         (MCPARAMID)( 1810 << 14)
#define MC_ConfigGrabber_pX                        1
#define MC_ConfigGrabber_pXBIS                     2
#define MC_ConfigGrabber_pY                        3
#define MC_ConfigGrabber_pYBIS                     4
#define MC_ConfigGrabber_pZ                        5
#define MC_ConfigGrabber_pZBIS                     6
#define MC_ConfigGrabber_mX                        7
#define MC_ConfigGrabber_mXBIS                     8
#define MC_ConfigGrabber_mY                        9
#define MC_ConfigGrabber_mYBIS                    10
#define MC_ConfigGrabber_mZ                       11
#define MC_ConfigGrabber_mZBIS                    12
#define MC_ConfigGrabber_PASS                     13
#define MC_ConfigGrabber_FAIL                     14
#define MC_NextGrabberConfig                     (MCPARAMID)( 1811 << 14)
#define MC_NextGrabberConfig_FAIL                  1
#define MC_NextGrabberConfig_00_00                 2
#define MC_NextGrabberConfig_2_00                  3
#define MC_NextGrabberConfig_00_2                  4
#define MC_NextGrabberConfig_10_00                 5
#define MC_NextGrabberConfig_01_00                 6
#define MC_NextGrabberConfig_00_10                 7
#define MC_NextGrabberConfig_00_01                 8
#define MC_NextGrabberConfig_10_10                 9
#define MC_NextGrabberConfig_01_10                10
#define MC_NextGrabberConfig_10_01                11
#define MC_NextGrabberConfig_01_01                12
#define MC_NextGrabberConfig_2_0                  13
#define MC_NextGrabberConfig_0_2                  14
#define MC_NextGrabberConfig_1_1                  15
#define MC_ConfigGrabber_Filter                  (MCPARAMID)( 1812 << 14)
#define MC_BoardTopology_Filter                  (MCPARAMID)( 1813 << 14)
#define MC_InputConfig_Filter                    (MCPARAMID)( 1814 << 14)
#define MC_ConnectorName                         (MCPARAMID)( 1815 << 14)
#define MC_ConnectorName_UNKNOWN                   1
#define MC_ConnectorName_SYSTEM                    2
#define MC_ConnectorName_IO                        3
#define MC_ConnectorName_CAMERA                    4
#define MC_ConnectorName_CAMERA_A                  5
#define MC_ConnectorName_CAMERA_B                  6
#define MC_ConnectorName_LED                       7
#define MC_ConnectorName_LEDA                      8
#define MC_ConnectorName_LEDB                      9
#define MC_OutputConfig_Filter                   (MCPARAMID)( 1816 << 14)
#define MC_InputConfig_Filter_17                 (MCPARAMID)( 1817 << 14)
#define MC_InputConfig_Filter_21                 (MCPARAMID)( 1818 << 14)
#define MC_InputConfig_Filter_22                 (MCPARAMID)( 1819 << 14)
#define MC_InputConfig_Filter_23                 (MCPARAMID)( 1820 << 14)
#define MC_InputConfig_Filter_24                 (MCPARAMID)( 1821 << 14)
#define MC_InputConfig_Filter_27                 (MCPARAMID)( 1822 << 14)
#define MC_InputConfig_Filter_28                 (MCPARAMID)( 1823 << 14)
#define MC_InputConfig_Filter_29                 (MCPARAMID)( 1824 << 14)
#define MC_OutputConfig_Filter_17                (MCPARAMID)( 1825 << 14)
#define MC_OutputConfig_Filter_28                (MCPARAMID)( 1826 << 14)
#define MC_OutputConfig_Filter_29                (MCPARAMID)( 1827 << 14)
#define MC_OutputConfig_Filter_51                (MCPARAMID)( 1828 << 14)
#define MC_OutputConfig_Filter_52                (MCPARAMID)( 1829 << 14)
#define MC_InputConfig_Filter_1                  (MCPARAMID)( 1830 << 14)
#define MC_InputConfig_Filter_2                  (MCPARAMID)( 1831 << 14)
#define MC_InputConfig_Filter_3                  (MCPARAMID)( 1832 << 14)
#define MC_InputConfig_Filter_4                  (MCPARAMID)( 1833 << 14)
#define MC_InputConfig_Filter_5                  (MCPARAMID)( 1834 << 14)
#define MC_InputConfig_Filter_6                  (MCPARAMID)( 1835 << 14)
#define MC_InputConfig_Filter_7                  (MCPARAMID)( 1836 << 14)
#define MC_InputConfig_Filter_8                  (MCPARAMID)( 1837 << 14)
#define MC_InputConfig_Filter_9                  (MCPARAMID)( 1838 << 14)
#define MC_InputConfig_Filter_10                 (MCPARAMID)( 1839 << 14)
#define MC_InputConfig_Filter_11                 (MCPARAMID)( 1840 << 14)
#define MC_InputConfig_Filter_12                 (MCPARAMID)( 1841 << 14)
#define MC_InputConfig_Filter_13                 (MCPARAMID)( 1842 << 14)
#define MC_InputConfig_Filter_14                 (MCPARAMID)( 1843 << 14)
#define MC_InputConfig_Filter_15                 (MCPARAMID)( 1844 << 14)
#define MC_InputConfig_Filter_16                 (MCPARAMID)( 1845 << 14)
#define MC_InputConfig_Filter_18                 (MCPARAMID)( 1846 << 14)
#define MC_InputConfig_Filter_19                 (MCPARAMID)( 1847 << 14)
#define MC_InputConfig_Filter_31                 (MCPARAMID)( 1848 << 14)
#define MC_InputConfig_Filter_32                 (MCPARAMID)( 1849 << 14)
#define MC_InputConfig_Filter_33                 (MCPARAMID)( 1850 << 14)
#define MC_InputConfig_Filter_34                 (MCPARAMID)( 1851 << 14)
#define MC_InputConfig_Filter_37                 (MCPARAMID)( 1852 << 14)
#define MC_InputConfig_Filter_38                 (MCPARAMID)( 1853 << 14)
#define MC_InputConfig_Filter_39                 (MCPARAMID)( 1854 << 14)
#define MC_OutputConfig_Filter_1                 (MCPARAMID)( 1855 << 14)
#define MC_OutputConfig_Filter_2                 (MCPARAMID)( 1856 << 14)
#define MC_OutputConfig_Filter_3                 (MCPARAMID)( 1857 << 14)
#define MC_OutputConfig_Filter_4                 (MCPARAMID)( 1858 << 14)
#define MC_OutputConfig_Filter_5                 (MCPARAMID)( 1859 << 14)
#define MC_OutputConfig_Filter_6                 (MCPARAMID)( 1860 << 14)
#define MC_OutputConfig_Filter_7                 (MCPARAMID)( 1861 << 14)
#define MC_OutputConfig_Filter_8                 (MCPARAMID)( 1862 << 14)
#define MC_OutputConfig_Filter_9                 (MCPARAMID)( 1863 << 14)
#define MC_OutputConfig_Filter_10                (MCPARAMID)( 1864 << 14)
#define MC_OutputConfig_Filter_11                (MCPARAMID)( 1865 << 14)
#define MC_OutputConfig_Filter_12                (MCPARAMID)( 1866 << 14)
#define MC_OutputConfig_Filter_13                (MCPARAMID)( 1867 << 14)
#define MC_OutputConfig_Filter_14                (MCPARAMID)( 1868 << 14)
#define MC_OutputConfig_Filter_15                (MCPARAMID)( 1869 << 14)
#define MC_OutputConfig_Filter_16                (MCPARAMID)( 1870 << 14)
#define MC_OutputConfig_Filter_18                (MCPARAMID)( 1871 << 14)
#define MC_OutputConfig_Filter_19                (MCPARAMID)( 1872 << 14)
#define MC_OutputConfig_Filter_38                (MCPARAMID)( 1873 << 14)
#define MC_OutputConfig_Filter_39                (MCPARAMID)( 1874 << 14)
#define MC_OutputConfig_Filter_53                (MCPARAMID)( 1875 << 14)
#define MC_OutputConfig_Filter_54                (MCPARAMID)( 1876 << 14)
#define MC_ConnectorName_TR_ST                    10
#define MC_ConnectorName_CAMX                     11
#define MC_ConnectorName_CAMY                     12
#define MC_ConnectorName_CAMZ                     13
#define MC_ConnectorName_PIO                      14
#define MC_ConnectorName_LEDX                     15
#define MC_ConnectorName_LEDY                     16
#define MC_ConnectorName_LEDZ                     17
#define MC_InputConfig_Filter_25                 (MCPARAMID)( 1877 << 14)
#define MC_InputConfig_Filter_26                 (MCPARAMID)( 1878 << 14)
#define MC_InputConfig_Filter_35                 (MCPARAMID)( 1879 << 14)
#define MC_InputConfig_Filter_36                 (MCPARAMID)( 1880 << 14)
#define MC_InputConfig_Filter_42                 (MCPARAMID)( 1881 << 14)
#define MC_InputConfig_Filter_43                 (MCPARAMID)( 1882 << 14)
#define MC_InputConfig_Filter_44                 (MCPARAMID)( 1883 << 14)
#define MC_InputConfig_Filter_45                 (MCPARAMID)( 1884 << 14)
#define MC_InputConfig_Filter_46                 (MCPARAMID)( 1885 << 14)
#define MC_InputConfig_Filter_47                 (MCPARAMID)( 1886 << 14)
#define MC_OutputConfig_Filter_55                (MCPARAMID)( 1887 << 14)
#define MC_OutputConfig_Filter_56                (MCPARAMID)( 1888 << 14)
#define MC_InputFunction_UNKNOWN                   1
#define MC_InputFunction_SOFT                      2
#define MC_InputFunction_OUTPUT                    3
#define MC_InputFunction_TRIG                      4
#define MC_InputFunction_LINETRIG                  5
#define MC_InputFunction_HSYNC                     6
#define MC_InputFunction_VSYNC                     7
#define MC_InputFunction_CLOCK                     8
#define MC_InputFunction_NONE                      9
#define MC_InputFunction_CAMERA                   10
#define MC_InputState_NONE                         1
#define MC_InputState_LOW                          2
#define MC_InputState_HIGH                         3
#define MC_InputState_WENTLOW                      4
#define MC_InputState_WENTHIGH                     5
#define MC_InputStyle_TTL                          1
#define MC_InputStyle_ITTL                         2
#define MC_InputStyle_I12V                         3
#define MC_InputStyle_RS422                        4
#define MC_InputStyle_LVDS                         5
#define MC_InputStyle_DIFF                         6
#define MC_OutputConfig_SOFT                       1
#define MC_OutputConfig_FREE                       2
#define MC_OutputFunction_UNKNOWN                  1
#define MC_OutputFunction_SOFT                     2
#define MC_OutputFunction_INPUT                    3
#define MC_OutputFunction_WATCHDOG                 4
#define MC_OutputFunction_ALARM                    5
#define MC_OutputFunction_SYSTEM                   6
#define MC_OutputFunction_TIED                     7
#define MC_OutputFunction_STROBE                   8
#define MC_OutputFunction_RESET                    9
#define MC_OutputFunction_AUXRESET                10
#define MC_OutputFunction_HDRIVE                  11
#define MC_OutputFunction_VDRIVE                  12
#define MC_OutputFunction_CLOCK                   13
#define MC_OutputFunction_NONE                    14
#define MC_OutputState_NONE                        4
#define MC_OutputState_LOW                         5
#define MC_OutputState_HIGH                        6
#define MC_OutputState_TOGGLE                      7
#define MC_OutputStyle_TTL                         1
#define MC_OutputStyle_ITTL                        2
#define MC_OutputStyle_IOC                         3
#define MC_OutputStyle_IOE                         4
#define MC_OutputStyle_RELAY                       5
#define MC_OutputStyle_LED                         6
#define MC_InputFunction_FVAL                     11
#define MC_InputFunction_LVAL                     12
#define MC_InputFunction_DVAL                     13
#define MC_InputFunction_SPARE                    14
#define MC_InputStyle_CHANNELLINK                  7
#define MC_InputStyle_CMOS                         8
#define MC_OutputStyle_OC                          7
#define MC_InputStyle_Filter17                   (MCPARAMID)( 1889 << 14)
#define MC_InputStyle_Filter_17                  (MCPARAMID)( 1890 << 14)
#define MC_InputStyle_Filter18                   (MCPARAMID)( 1891 << 14)
#define MC_InputStyle_Filter_18                  (MCPARAMID)( 1892 << 14)
#define MC_InputStyle_Filter19                   (MCPARAMID)( 1893 << 14)
#define MC_InputStyle_Filter_19                  (MCPARAMID)( 1894 << 14)
#define MC_OutputStyle_Filter17                  (MCPARAMID)( 1895 << 14)
#define MC_OutputStyle_Filter_17                 (MCPARAMID)( 1896 << 14)
#define MC_OutputStyle_Filter18                  (MCPARAMID)( 1897 << 14)
#define MC_OutputStyle_Filter_18                 (MCPARAMID)( 1898 << 14)
#define MC_OutputStyle_Filter19                  (MCPARAMID)( 1899 << 14)
#define MC_OutputStyle_Filter_19                 (MCPARAMID)( 1900 << 14)
#define MC_InputStyle_Filter_1                   (MCPARAMID)( 1901 << 14)
#define MC_InputStyle_Filter_2                   (MCPARAMID)( 1902 << 14)
#define MC_InputStyle_Filter_3                   (MCPARAMID)( 1903 << 14)
#define MC_InputStyle_Filter_4                   (MCPARAMID)( 1904 << 14)
#define MC_OutputStyle_Filter_1                  (MCPARAMID)( 1905 << 14)
#define MC_OutputStyle_Filter_2                  (MCPARAMID)( 1906 << 14)
#define MC_OutputStyle_Filter_3                  (MCPARAMID)( 1907 << 14)
#define MC_OutputStyle_Filter_4                  (MCPARAMID)( 1908 << 14)
#define MC_InputStyle_Filter_28                  (MCPARAMID)( 1909 << 14)
#define MC_InputStyle_Filter_29                  (MCPARAMID)( 1910 << 14)
#define MC_OutputStyle_Filter_28                 (MCPARAMID)( 1911 << 14)
#define MC_OutputStyle_Filter_29                 (MCPARAMID)( 1912 << 14)
#define MC_InputStyle_Filter_5                   (MCPARAMID)( 1913 << 14)
#define MC_InputStyle_Filter_6                   (MCPARAMID)( 1914 << 14)
#define MC_InputStyle_Filter_7                   (MCPARAMID)( 1915 << 14)
#define MC_InputStyle_Filter_8                   (MCPARAMID)( 1916 << 14)
#define MC_InputStyle_Filter_9                   (MCPARAMID)( 1917 << 14)
#define MC_InputStyle_Filter_10                  (MCPARAMID)( 1918 << 14)
#define MC_InputStyle_Filter_11                  (MCPARAMID)( 1919 << 14)
#define MC_InputStyle_Filter_12                  (MCPARAMID)( 1920 << 14)
#define MC_InputStyle_Filter_13                  (MCPARAMID)( 1921 << 14)
#define MC_InputStyle_Filter_14                  (MCPARAMID)( 1922 << 14)
#define MC_InputStyle_Filter_15                  (MCPARAMID)( 1923 << 14)
#define MC_InputStyle_Filter_16                  (MCPARAMID)( 1924 << 14)
#define MC_InputStyle_Filter_38                  (MCPARAMID)( 1925 << 14)
#define MC_InputStyle_Filter_39                  (MCPARAMID)( 1926 << 14)
#define MC_OutputStyle_Filter_5                  (MCPARAMID)( 1927 << 14)
#define MC_OutputStyle_Filter_6                  (MCPARAMID)( 1928 << 14)
#define MC_OutputStyle_Filter_7                  (MCPARAMID)( 1929 << 14)
#define MC_OutputStyle_Filter_8                  (MCPARAMID)( 1930 << 14)
#define MC_OutputStyle_Filter_9                  (MCPARAMID)( 1931 << 14)
#define MC_OutputStyle_Filter_10                 (MCPARAMID)( 1932 << 14)
#define MC_OutputStyle_Filter_11                 (MCPARAMID)( 1933 << 14)
#define MC_OutputStyle_Filter_12                 (MCPARAMID)( 1934 << 14)
#define MC_OutputStyle_Filter_13                 (MCPARAMID)( 1935 << 14)
#define MC_OutputStyle_Filter_14                 (MCPARAMID)( 1936 << 14)
#define MC_OutputStyle_Filter_15                 (MCPARAMID)( 1937 << 14)
#define MC_OutputStyle_Filter_16                 (MCPARAMID)( 1938 << 14)
#define MC_OutputStyle_Filter_38                 (MCPARAMID)( 1939 << 14)
#define MC_OutputStyle_Filter_39                 (MCPARAMID)( 1940 << 14)
#define MC_TimUnitN_USEDXBIS                       7
#define MC_TimUnitN_USEDYBIS                       8
#define MC_GrabberConfig_1_1_0                    26
#define MC_GrabberConfig_1_0_1                    27
#define MC_GrabberConfig_0_1_1                    28
#define MC_GrabberConfig_1_0_0                    29
#define MC_GrabberConfig_0_1_0                    30
#define MC_GrabberConfig_0_0_1                    31
#define MC_GrabberConfig_2_0_2                    32
#define MC_GrabberConfig_0_2_2                    33
#define MC_GrabberConfig_2_0_0                    34
#define MC_GrabberConfig_0_2_0                    35
#define MC_GrabberConfig_0_0_2                    36
#define MC_GrabberConfig_3_0_0                    37
#define MC_GrabberConfig_0_3_0                    38
#define MC_GrabberConfig_1_0_2                    39
#define MC_GrabberConfig_0_1_2                    40
#define MC_GrabberConfig_2_0_1                    41
#define MC_GrabberConfig_0_2_1                    42
#define MC_GrabberConfig_1_3_0                    43
#define MC_NextGrabberConfig_00_00_00             16
#define MC_NextGrabberConfig_1_1_1                17
#define MC_NextGrabberConfig_1_1_2                18
#define MC_NextGrabberConfig_2_2_0                19
#define MC_NextGrabberConfig_0_3_1                20
#define MC_OutputState_Filter_17                 (MCPARAMID)( 1941 << 14)
#define MC_OutputState_Filter_18                 (MCPARAMID)( 1942 << 14)
#define MC_OutputState_Filter_19                 (MCPARAMID)( 1943 << 14)
#define MC_OutputState_Filter_51                 (MCPARAMID)( 1944 << 14)
#define MC_OutputState_Filter_52                 (MCPARAMID)( 1945 << 14)
#define MC_OutputState_Filter_53                 (MCPARAMID)( 1946 << 14)
#define MC_OutputState_Filter_54                 (MCPARAMID)( 1947 << 14)
#define MC_OutputState_Filter_28                 (MCPARAMID)( 1948 << 14)
#define MC_OutputState_Filter_29                 (MCPARAMID)( 1949 << 14)
#define MC_OutputState_Filter_1                  (MCPARAMID)( 1950 << 14)
#define MC_OutputState_Filter_2                  (MCPARAMID)( 1951 << 14)
#define MC_OutputState_Filter_3                  (MCPARAMID)( 1952 << 14)
#define MC_OutputState_Filter_4                  (MCPARAMID)( 1953 << 14)
#define MC_OutputState_Filter_5                  (MCPARAMID)( 1954 << 14)
#define MC_OutputState_Filter_6                  (MCPARAMID)( 1955 << 14)
#define MC_OutputState_Filter_7                  (MCPARAMID)( 1956 << 14)
#define MC_OutputState_Filter_8                  (MCPARAMID)( 1957 << 14)
#define MC_OutputState_Filter_9                  (MCPARAMID)( 1958 << 14)
#define MC_OutputState_Filter_10                 (MCPARAMID)( 1959 << 14)
#define MC_OutputState_Filter_11                 (MCPARAMID)( 1960 << 14)
#define MC_OutputState_Filter_12                 (MCPARAMID)( 1961 << 14)
#define MC_OutputState_Filter_13                 (MCPARAMID)( 1962 << 14)
#define MC_OutputState_Filter_14                 (MCPARAMID)( 1963 << 14)
#define MC_OutputState_Filter_15                 (MCPARAMID)( 1964 << 14)
#define MC_OutputState_Filter_16                 (MCPARAMID)( 1965 << 14)
#define MC_OutputState_Filter_38                 (MCPARAMID)( 1966 << 14)
#define MC_OutputState_Filter_39                 (MCPARAMID)( 1967 << 14)
#define MC_NextGrabberConfig_1_1_0                21
#define MC_NextGrabberConfig_1_0_1                22
#define MC_NextGrabberConfig_0_1_1                23
#define MC_NextGrabberConfig_1_0_0                24
#define MC_NextGrabberConfig_0_1_0                25
#define MC_NextGrabberConfig_0_0_1                26
#define MC_NextGrabberConfig_2_0_2                27
#define MC_NextGrabberConfig_0_2_2                28
#define MC_NextGrabberConfig_2_0_0                29
#define MC_NextGrabberConfig_0_2_0                30
#define MC_NextGrabberConfig_0_0_2                31
#define MC_NextGrabberConfig_3_0_0                32
#define MC_NextGrabberConfig_0_3_0                33
#define MC_NextGrabberConfig_1_0_2                34
#define MC_NextGrabberConfig_0_1_2                35
#define MC_NextGrabberConfig_2_0_1                36
#define MC_NextGrabberConfig_0_2_1                37
#define MC_NextGrabberConfig_1_3_0                38
#define MC_GrabberConfig_00_00_00                 44
#define MC_OutputState_Filter_55                 (MCPARAMID)( 1968 << 14)
#define MC_OutputState_Filter_56                 (MCPARAMID)( 1969 << 14)
#define MC_BoardTopology_2_0                      22
#define MC_GrabberConfig_11_10_00                 45
#define MC_GrabberConfig_11_01_00                 46
#define MC_GrabberConfig_11_00_10                 47
#define MC_GrabberConfig_11_00_01                 48
#define MC_GrabberConfig_10_11_00                 49
#define MC_GrabberConfig_10_10_10                 50
#define MC_GrabberConfig_10_10_01                 51
#define MC_GrabberConfig_10_01_10                 52
#define MC_GrabberConfig_10_O1_01                 53
#define MC_GrabberConfig_10_00_11                 54
#define MC_GrabberConfig_01_11_00                 55
#define MC_GrabberConfig_01_10_10                 56
#define MC_GrabberConfig_01_10_01                 57
#define MC_GrabberConfig_01_01_10                 58
#define MC_GrabberConfig_01_01_01                 59
#define MC_GrabberConfig_01_00_11                 60
#define MC_GrabberConfig_00_11_10                 61
#define MC_GrabberConfig_00_11_01                 62
#define MC_GrabberConfig_00_10_11                 63
#define MC_GrabberConfig_00_01_11                 64
#define MC_GrabberConfig_11_00_00                 65
#define MC_GrabberConfig_10_10_00                 66
#define MC_GrabberConfig_10_01_00                 67
#define MC_GrabberConfig_10_00_10                 68
#define MC_GrabberConfig_10_00_01                 69
#define MC_GrabberConfig_01_10_00                 70
#define MC_GrabberConfig_01_01_00                 71
#define MC_GrabberConfig_01_00_10                 72
#define MC_GrabberConfig_01_00_01                 73
#define MC_GrabberConfig_00_11_00                 74
#define MC_GrabberConfig_00_10_10                 75
#define MC_GrabberConfig_00_10_01                 76
#define MC_GrabberConfig_00_01_10                 77
#define MC_GrabberConfig_00_01_01                 78
#define MC_GrabberConfig_00_00_11                 79
#define MC_GrabberConfig_10_00_00                 80
#define MC_GrabberConfig_01_00_00                 81
#define MC_GrabberConfig_00_01_00                 82
#define MC_GrabberConfig_00_00_10                 83
#define MC_GrabberConfig_00_00_01                 84
#define MC_GrabberConfig_10_01_01                 85
#define MC_GrabberConfig_00_10_00                 86
#define MC_NextGrabberConfig_11_10_00             39
#define MC_NextGrabberConfig_11_01_00             40
#define MC_NextGrabberConfig_11_00_10             41
#define MC_NextGrabberConfig_11_00_01             42
#define MC_NextGrabberConfig_10_11_00             43
#define MC_NextGrabberConfig_10_10_10             44
#define MC_NextGrabberConfig_10_10_01             45
#define MC_NextGrabberConfig_10_01_10             46
#define MC_NextGrabberConfig_10_01_01             47
#define MC_NextGrabberConfig_10_00_11             48
#define MC_NextGrabberConfig_01_11_00             49
#define MC_NextGrabberConfig_01_10_10             50
#define MC_NextGrabberConfig_01_10_01             51
#define MC_NextGrabberConfig_01_01_10             52
#define MC_NextGrabberConfig_01_01_01             53
#define MC_NextGrabberConfig_01_00_11             54
#define MC_NextGrabberConfig_00_11_10             55
#define MC_NextGrabberConfig_00_11_01             56
#define MC_NextGrabberConfig_00_10_11             57
#define MC_NextGrabberConfig_00_01_11             58
#define MC_NextGrabberConfig_11_00_00             59
#define MC_NextGrabberConfig_10_10_00             60
#define MC_NextGrabberConfig_10_01_00             61
#define MC_NextGrabberConfig_10_00_10             62
#define MC_NextGrabberConfig_10_00_01             63
#define MC_NextGrabberConfig_01_10_00             64
#define MC_NextGrabberConfig_01_01_00             65
#define MC_NextGrabberConfig_01_00_10             66
#define MC_NextGrabberConfig_01_00_01             67
#define MC_NextGrabberConfig_00_11_00             68
#define MC_NextGrabberConfig_00_10_10             69
#define MC_NextGrabberConfig_00_10_01             70
#define MC_NextGrabberConfig_00_01_10             71
#define MC_NextGrabberConfig_00_01_01             72
#define MC_NextGrabberConfig_00_00_11             73
#define MC_NextGrabberConfig_10_00_00             74
#define MC_NextGrabberConfig_01_00_00             75
#define MC_NextGrabberConfig_00_10_00             76
#define MC_NextGrabberConfig_00_01_00             77
#define MC_NextGrabberConfig_00_00_10             78
#define MC_NextGrabberConfig_00_00_01             79
#define MC_MapDigTim_AA                            9
#define MC_MapDigTim_AB                           10
#define MC_MapDigTim_BA                           11
#define MC_MapDigTim_BB                           12
#define MC_DesignNumber                          (MCPARAMID)( 1970 << 14)
#define MC_DesignNumber_A                          1
#define MC_DesignNumber_B                          2
#define MC__Board_Type                           (MCPARAMID)( 1971 << 14)
#define MC__Board_Type__ALPHA                      1
#define MC__Board_Type__GAMMA                      2
#define MC__Board_Type__ALPHA_cPCI                 3
#define MC_TimUnitNUsage_SHARE                     4
#define MC__BoardType__ALPHA_A                     9
#define MC__BoardType__ALPHA_B                    10
#define MC__DIGTIM                               (MCPARAMID)( 1972 << 14)
#define MC_BoardTopologyRead                     (MCPARAMID)( 1973 << 14)
#define MC_BoardTopologyRead_1_1                   1
#define MC_BoardTopologyRead_2_1                   2
#define MC_BoardTopologyRead_2_2                   3
#define MC_BoardTopologyRead_1_11                  4
#define MC_BoardTopologyRead_2_11                  5
#define MC_BoardTopologyRead_11_11                 6
#define MC_BoardTopologyRead_0_2                   7
#define MC_BoardTopologyRead_2_0                   8
#define MC_ChannelIndex                          (MCPARAMID)( 1974 << 14)
#define MC_BoardIndex                            (MCPARAMID)( 1975 << 14)
#define MC_GrabberIndex                          (MCPARAMID)( 1976 << 14)
#define MC_ConnectorIndex                        (MCPARAMID)( 1977 << 14)
#define MC_BayerOnly_Filter                      (MCPARAMID)( 1978 << 14)
#define MC__Board_Type__IOTA                       4
#define MC_Spectrum_Filter                       (MCPARAMID)( 1979 << 14)
#define MC__BoardType__IOTA                       11
#define MC___SyncMode_Check                      (MCPARAMID)( 1980 << 14)
#define MC___SyncMode_Check_PASS                   1
#define MC___SyncMode_Check_FAIL                   2
#define MC___ADresolution_Check                  (MCPARAMID)( 1981 << 14)
#define MC___ADresolution_Check_PASS               1
#define MC___ADresolution_Check_FAIL               2
#define MC___CalPat_Check                        (MCPARAMID)( 1982 << 14)
#define MC___CalPat_Check_PASS                     1
#define MC___CalPat_Check_FAIL                     2
#define MC_BoardTopology_1_                       23
#define MC__PRM2_T2OVR                           (MCPARAMID)( 1983 << 14)
#define MC__PRM2_T2OVR_PROTECT                     1
#define MC__PRM2_T2OVR_NOPROTECT                   2
#define MC__HBC_POST                             (MCPARAMID)( 1984 << 14)
#define MC__HBC_HPOST                            (MCPARAMID)( 1985 << 14)
#define MC__DRS_CSOL_FVALS                         5
#define MC__HDC_DCINIT                           (MCPARAMID)( 1986 << 14)
#define MC__HDC_DCINIT_SOL                         1
#define MC__HDC_DCINIT_LOOP                        2
#define MC_Camera_PC_640CL                       122
#define MC_CamConfig_P60RC                       176
#define MC_Camera_1M28_SA                        123
#define MC_CamConfig_P27SC                       177
#define MC_CamConfig_P27RC                       178
#define MC__TrueExp_T2                           (MCPARAMID)( 1987 << 14)
#define MC__Upstream                             (MCPARAMID)( 1988 << 14)
#define MC__Upstream_ON                            1
#define MC__Upstream_OFF                           2
#define MC__DTC_VUS_CST                          (MCPARAMID)( 1989 << 14)
#define MC__DTC_VUS_CST_INPUT                      1
#define MC__DTC_VUS_CST_CUS2                       2
#define MC__DTC_VUS_CST_CUS2INV                    3
#define MC__DTC_VUS_CST_SUS2                       4
#define MC__DTC_VUS_CST_SUS2INV                    5
#define MC__DTC_VUS_CST_LOW                        6
#define MC__DTC_VUS_CST_HIGH                       7
#define MC__DTC_VUS_CST_KEEP                       8
#define MC__DTC_VUS_END                          (MCPARAMID)( 1990 << 14)
#define MC__DTC_VUS_END_INPUT                      1
#define MC__DTC_VUS_END_CUS2                       2
#define MC__DTC_VUS_END_CUS2INV                    3
#define MC__DTC_VUS_END_SUS2                       4
#define MC__DTC_VUS_END_SUS2INV                    5
#define MC__DTC_VUS_END_LOW                        6
#define MC__DTC_VUS_END_HIGH                       7
#define MC__DTC_VUS_END_KEEP                       8
#define MC__DTC_RUS_CST                          (MCPARAMID)( 1991 << 14)
#define MC__DTC_RUS_CST_INPUT                      1
#define MC__DTC_RUS_CST_CUS2                       2
#define MC__DTC_RUS_CST_CUS2INV                    3
#define MC__DTC_RUS_CST_SUS2                       4
#define MC__DTC_RUS_CST_SUS2INV                    5
#define MC__DTC_RUS_CST_LOW                        6
#define MC__DTC_RUS_CST_HIGH                       7
#define MC__DTC_RUS_CST_KEEP                       8
#define MC__DTC_RUS_END                          (MCPARAMID)( 1992 << 14)
#define MC__DTC_RUS_END_INPUT                      1
#define MC__DTC_RUS_END_CUS2                       2
#define MC__DTC_RUS_END_CUS2INV                    3
#define MC__DTC_RUS_END_SUS2                       4
#define MC__DTC_RUS_END_SUS2INV                    5
#define MC__DTC_RUS_END_LOW                        6
#define MC__DTC_RUS_END_HIGH                       7
#define MC__DTC_RUS_END_KEEP                       8
#define MC_Camera_2M30_SA                        124
#define MC_RequiredGrabbers                      (MCPARAMID)( 1993 << 14)
#define MC_RequiredGrabber                       (MCPARAMID)( 1994 << 14)
#define MC_RequiredGrabber_ONE                     1
#define MC_RequiredGrabber_TWO                     2
#define MC_RequiredGrabber_THREE                   3
#define MC_RequiredGrabber_FOUR                    4
#define MC_NextConfigGrabber                     (MCPARAMID)( 1995 << 14)
#define MC_NextConfigGrabber_NONE                  1
#define MC_NextConfigGrabber_mX                    2
#define MC_NextConfigGrabber_mXBIS                 3
#define MC_NextConfigGrabber_mY                    4
#define MC_NextConfigGrabber_mYBIS                 5
#define MC_NextConfigGrabber_mZ                    6
#define MC_NextConfigGrabber_mZBIS                 7
#define MC__NCGKey                               (MCPARAMID)( 1996 << 14)
#define MC__NCGKey_STD                             1
#define MC__NCGKey_ALT                             2
#define MC_TimUnitNConfig                        (MCPARAMID)( 1997 << 14)
#define MC_TimUnitNConfig_FREE                     1
#define MC_TimUnitNConfig_A0_00                    2
#define MC_TimUnitNConfig_0A_00                    3
#define MC_TimUnitNConfig_00_A0                    4
#define MC_TimUnitNConfig_00_0A                    5
#define MC_TimUnitNConfig_C0_00                    6
#define MC_TimUnitNConfig_C0_M0                    7
#define MC_TimUnitNConfig_00_C0                    8
#define MC_TimUnitNConfig_M0_C0                    9
#define MC_ConfigTimUnitN                        (MCPARAMID)( 1998 << 14)
#define MC_ConfigTimUnitN_UNUSED                   1
#define MC_ConfigTimUnitN_ANALOG                   2
#define MC_ConfigTimUnitN_MASTER                   3
#define MC_NextTimUnitNConfig                    (MCPARAMID)( 1999 << 14)
#define MC_NextTimUnitNConfig_FAIL                 1
#define MC_NextTimUnitNConfig_FREE                 2
#define MC_NextTimUnitNConfig_A0_00                3
#define MC_NextTimUnitNConfig_0A_00                4
#define MC_NextTimUnitNConfig_00_A0                5
#define MC_NextTimUnitNConfig_00_0A                6
#define MC_NextTimUnitNConfig_C0_00                7
#define MC_NextTimUnitNConfig_C0_M0                8
#define MC_NextTimUnitNConfig_00_C0                9
#define MC_NextTimUnitNConfig_M0_C0               10
#define MC_TimUnitNCheck                         (MCPARAMID)( 2000 << 14)
#define MC_TimUnitNCheck_PASS                      1
#define MC_TimUnitNCheck_FAIL                      2
#define MC_ConfigClkSynthFreq                    (MCPARAMID)( 2001 << 14)
#define MC_ClkSynthFreq                          (MCPARAMID)( 2002 << 14)
#define MC_ChannelResourcesTimeout               (MCPARAMID)( 2003 << 14)
#define MC_BoardTopology_MONO                     24
#define MC_BoardTopology_DUO                      25
#define MC_ConfigGrabberFailure                  (MCPARAMID)( 2004 << 14)
#define MC_ConfigGrabberFailure_NONE               1
#define MC_ConfigGrabberFailure_Connector_InUse    2
#define MC_ConfigGrabberFailure_TUN_InUse          3
#define MC_ConfigGrabberFailure_TUN_ShareMaster    4
#define MC_ConfigGrabberFailure_Out_of_ADC_resource   5
#define MC_ConfigGrabberFailure_Invalid_Config_PS   6
#define MC_ConfigGrabberFailure_Invalid_Config     7
#define MC_NextGrabberConfig_0_0_0_0              80
#define MC_NextGrabberConfig_1_0_0_0              81
#define MC_NextGrabberConfig_0_1_0_0              82
#define MC_NextGrabberConfig_0_0_1_0              83
#define MC_NextGrabberConfig_0_0_0_1              84
#define MC_NextGrabberConfig_1_1_0_0              85
#define MC_NextGrabberConfig_1_0_0_1              86
#define MC_NextGrabberConfig_0_1_1_0              87
#define MC_NextGrabberConfig_0_0_1_1              88
#define MC_GrabberConfig_0_0_0_0                  87
#define MC_GrabberConfig_1_0_0_0                  88
#define MC_GrabberConfig_0_1_0_0                  89
#define MC_GrabberConfig_0_0_1_0                  90
#define MC_GrabberConfig_0_0_0_1                  91
#define MC_SequencesR1_JumpNEXTACQ               (MCPARAMID)( 2005 << 14)
#define MC_SequencesR1_JumpNEXTACQ_ACQR2           1
#define MC_SequencesR1_JumpNEXTACQ_IDLER2          2
#define MC_Camera_A302b                          125
#define MC_INITC_GPTCOUNT                        (MCPARAMID)( 2006 << 14)
#define MC__GrabMode                             (MCPARAMID)( 2007 << 14)
#define MC__GrabMode_RAW                           1
#define MC__GrabMode_XY                            2
#define MC__RawGrabSizeX_Px                      (MCPARAMID)( 2008 << 14)
#define MC__NotLive                              (MCPARAMID)( 2009 << 14)
#define MC__nLive                                (MCPARAMID)( 2010 << 14)
#define MC__STB_Qx1SRC_FromSTB_Y                   5
#define MC__STB_Qx1SRC_FromSTB_Y_Inverted          6
#define MC__STB_Qx2SRC_FromSTB_Y                   5
#define MC__STB_Qx2SRC_FromSTB_Y_Inverted          6
#define MC_B1Usage_TRIGGER                         3
#define MC_B1Usage_LINETRIGGER                     4
#define MC__BoardType__PICOLO_PRO2                12
#define MC__BoardType__PICOLO                     13
#define MC_BreakEffect                           (MCPARAMID)( 2011 << 14)
#define MC_BreakEffect_ABORT                       1
#define MC_BreakEffect_FINISH                      2
#define MC_INITC_GPTCOUNT_ms                     (MCPARAMID)( 2012 << 14)
#define MC_GrabberPartition                      (MCPARAMID)( 2013 << 14)
#define MC_GrabberPartition_A                      1
#define MC_GrabberPartition_B                      2
#define MC_GrabberPartition_C                      3
#define MC_GrabberPartition_D                      4
#define MC_GrabberPartition_E                      5
#define MC_GrabberPartition_F                      6
#define MC_GrabberPartition_G                      7
#define MC_GrabberPartition_H                      8
#define MC_GrabberPartition_I                      9
#define MC_NextGrabberPartition                  (MCPARAMID)( 2014 << 14)
#define MC_NextGrabberPartition_A                  1
#define MC_NextGrabberPartition_B                  2
#define MC_NextGrabberPartition_C                  3
#define MC_NextGrabberPartition_D                  4
#define MC_NextGrabberPartition_E                  5
#define MC_NextGrabberPartition_F                  6
#define MC_NextGrabberPartition_G                  7
#define MC_NextGrabberPartition_H                  8
#define MC_NextGrabberPartition_I                  9
#define MC_NextGrabberPartition_HOLD              10
#define MC_ConfigGrabberFailure_InvalidPartition   8
#define MC_NextGrabberPartition_A111              11
#define MC_NextGrabberPartition_B222              12
#define MC_NextGrabberPartition_C222              13
#define MC_NextGrabberPartition_D222              14
#define MC_GrabberPartition_A111                  10
#define MC_GrabberPartition_B222                  11
#define MC_GrabberPartition_C222                  12
#define MC_GrabberPartition_D222                  13
#define MC_NextGrabberPartition_A112              15
#define MC_NextGrabberPartition_B221              16
#define MC_NextGrabberPartition_C221              17
#define MC_NextGrabberPartition_D221              18
#define MC_NextGrabberPartition_E330              19
#define MC_NextGrabberPartition_F330              20
#define MC_GrabberPartition_A112                  14
#define MC_GrabberPartition_B221                  15
#define MC_GrabberPartition_C221                  16
#define MC_GrabberPartition_D221                  17
#define MC_GrabberPartition_E330                  18
#define MC_GrabberPartition_F330                  19
#define MC_GrabberPartition_A131                  20
#define MC_GrabberPartition_F131                  21
#define MC_GrabberPartition_G131                  22
#define MC_GrabberPartition_C231                  23
#define MC_GrabberPartition_F231                  24
#define MC_GrabberPartition_H111111               25
#define MC_GrabberPartition_I111111               26
#define MC_NextGrabberPartition_A131              21
#define MC_NextGrabberPartition_F131              22
#define MC_NextGrabberPartition_G131              23
#define MC_NextGrabberPartition_C231              24
#define MC_NextGrabberPartition_F231              25
#define MC_NextGrabberPartition_H111111           26
#define MC_NextGrabberPartition_I111111           27
#define MC___BISConnector_Check                  (MCPARAMID)( 2015 << 14)
#define MC___BISConnector_Check_PASS               1
#define MC___BISConnector_Check_FAIL               2
#define MC___TAG_Check                           (MCPARAMID)( 2016 << 14)
#define MC___TAG_Check_PASS                        1
#define MC___TAG_Check_FAIL                        2
#define MC__HBC_HPHAS                            (MCPARAMID)( 2017 << 14)
#define MC__Category_Sequence_Control             25
#define MC___SequenceLoad_Check                  (MCPARAMID)( 2018 << 14)
#define MC___SequenceLoad_Check_PASS               1
#define MC___SequenceLoad_Check_FAIL               2
#define MC___WaitCamSync                         (MCPARAMID)( 2019 << 14)
#define MC___WaitCamSync_OFF                       1
#define MC___WaitCamSync_ON                        2
#define MC_TXState                               (MCPARAMID)( 2020 << 14)
#define MC_TXState_STOPPED                         1
#define MC_TXState_RUNNING                         2
#define MC_TYState                               (MCPARAMID)( 2021 << 14)
#define MC_TYState_STOPPED                         1
#define MC_TYState_RUNNING                         2
#define MC_TUState                               (MCPARAMID)( 2022 << 14)
#define MC_TUState_STOPPED                         1
#define MC_TUState_RUNNING                         2
#define MC__CamConfigX                           (MCPARAMID)( 2023 << 14)
#define MC__CamConfigY                           (MCPARAMID)( 2024 << 14)
#define MC__CamConfig                            (MCPARAMID)( 2025 << 14)
#define MC_PartialPage                           (MCPARAMID)( 2026 << 14)
#define MC_LineCount                             (MCPARAMID)( 2027 << 14)
#define MC__VLC_LCSNS_PARTIALPAGE                  3
#define MC__VLC_PartialLCNT                      (MCPARAMID)( 2028 << 14)
#define MC__STM1_T1SCAL_200ns                      7
#define MC__PRM1_T1POS_SIG1On                    (MCPARAMID)( 2029 << 14)
#define MC__PRM1_T1POS_SIG1Off                   (MCPARAMID)( 2030 << 14)
#define MC__SCC_CC1_T1SIG1                         9
#define MC__SCC_CC1_T1SIG2                        10
#define MC__SCC_CC1_T1SIG1n                       11
#define MC__SCC_CC1_T1SIG2n                       12
#define MC__SCC_CC2_T1SIG1                         9
#define MC__SCC_CC2_T1SIG2                        10
#define MC__SCC_CC2_T1SIG1n                       11
#define MC__SCC_CC2_T1SIG2n                       12
#define MC__SCC_CC3_T1SIG1                        13
#define MC__SCC_CC3_T1SIG2                        14
#define MC__SCC_CC3_T1SIG1n                       15
#define MC__SCC_CC3_T1SIG2n                       16
#define MC__SCC_CC4_T1SIG1                        11
#define MC__SCC_CC4_T1SIG2                        12
#define MC__SCC_CC4_T1SIG1n                       13
#define MC__SCC_CC4_T1SIG2n                       14
#define MC__PRM1_T1POS_xx                        (MCPARAMID)( 2031 << 14)
#define MC__PRM1_T1DEF_xx                        (MCPARAMID)( 2032 << 14)
#define MC__PRM1_T1DEF_01                        (MCPARAMID)( 2033 << 14)
#define MC__PRM1_T1POS_01                        (MCPARAMID)( 2034 << 14)
#define MC__PRM1_T1DEF_02                        (MCPARAMID)( 2035 << 14)
#define MC__PRM1_T1POS_02                        (MCPARAMID)( 2036 << 14)
#define MC__PRM1_T1DEF_03                        (MCPARAMID)( 2037 << 14)
#define MC__PRM1_T1POS_03                        (MCPARAMID)( 2038 << 14)
#define MC__PRM1_T1DEF_04                        (MCPARAMID)( 2039 << 14)
#define MC__PRM1_T1POS_04                        (MCPARAMID)( 2040 << 14)
#define MC__PRM1_T1DEF_05                        (MCPARAMID)( 2041 << 14)
#define MC__PRM1_T1POS_05                        (MCPARAMID)( 2042 << 14)
#define MC__PRM1_T1DEF_06                        (MCPARAMID)( 2043 << 14)
#define MC__PRM1_T1POS_06                        (MCPARAMID)( 2044 << 14)
#define MC__PRM1_T1DEF_07                        (MCPARAMID)( 2045 << 14)
#define MC__PRM1_T1POS_07                        (MCPARAMID)( 2046 << 14)
#define MC__PRM1_T1DEF_08                        (MCPARAMID)( 2047 << 14)
#define MC__PRM1_T1POS_08                        (MCPARAMID)( 2048 << 14)
#define MC__PRM1_T1DEF_09                        (MCPARAMID)( 2049 << 14)
#define MC__PRM1_T1POS_09                        (MCPARAMID)( 2050 << 14)
#define MC__PRM1_T1DEF_10                        (MCPARAMID)( 2051 << 14)
#define MC__PRM1_T1POS_10                        (MCPARAMID)( 2052 << 14)
#define MC__PRM1_T1DEF_11                        (MCPARAMID)( 2053 << 14)
#define MC__PRM1_T1POS_11                        (MCPARAMID)( 2054 << 14)
#define MC__PRM1_T1DEF_12                        (MCPARAMID)( 2055 << 14)
#define MC__PRM1_T1POS_12                        (MCPARAMID)( 2056 << 14)
#define MC__PRM1_T1DEF_13                        (MCPARAMID)( 2057 << 14)
#define MC__PRM1_T1POS_13                        (MCPARAMID)( 2058 << 14)
#define MC__PRM1_T1DEF_14                        (MCPARAMID)( 2059 << 14)
#define MC__PRM1_T1POS_14                        (MCPARAMID)( 2060 << 14)
#define MC__PRM1_T1DEF_15                        (MCPARAMID)( 2061 << 14)
#define MC__PRM1_T1POS_15                        (MCPARAMID)( 2062 << 14)
#define MC__PRM1_T1DEF_16                        (MCPARAMID)( 2063 << 14)
#define MC__PRM1_T1POS_16                        (MCPARAMID)( 2064 << 14)
#define MC__RESETOn_T1                           (MCPARAMID)( 2065 << 14)
#define MC__RESETOff_T1                          (MCPARAMID)( 2066 << 14)
#define MC__AUXRESETOn_T1                        (MCPARAMID)( 2067 << 14)
#define MC__AUXRESETOff_T1                       (MCPARAMID)( 2068 << 14)
#define MC__STROBEOn_T1                          (MCPARAMID)( 2069 << 14)
#define MC__STROBEOff_T1                         (MCPARAMID)( 2070 << 14)
#define MC__USEROn_T1                            (MCPARAMID)( 2071 << 14)
#define MC__USEROff_T1                           (MCPARAMID)( 2072 << 14)
#define MC__SQ1_T1                               (MCPARAMID)( 2073 << 14)
#define MC__T1Avail_T1                           (MCPARAMID)( 2074 << 14)
#define MC__STROBEWidth_T1                       (MCPARAMID)( 2075 << 14)
#define MC__TrueExp_T1                           (MCPARAMID)( 2076 << 14)
#define MC__Category_Timers_Control               26
#define MC__ResetDur_T1                          (MCPARAMID)( 2077 << 14)
#define MC__T1Span_T1                            (MCPARAMID)( 2078 << 14)
#define MC__ReadoutDur_T1                        (MCPARAMID)( 2079 << 14)
#define MC_LUT0                                  (MCPARAMID)( 2080 << 14)
#define MC_TOTOa                                 (MCPARAMID)( 2081 << 14)
#define MC_TOTOa_NO_VALUE                          1
#define MC_TOTOa_NO_VALUE2                         2
#define MC_TOTOb                                 (MCPARAMID)( 2082 << 14)
#define MC_TOTOb_NO_VALUE                          1
#define MC_TOTOb_NO_VALUE2                         2
#define MC_TOTOc                                 (MCPARAMID)( 2083 << 14)
#define MC_TOTOc_NO_VALUE                          1
#define MC_TOTOc_NO_VALUE2                         2
#define MC__LUT0                                 (MCPARAMID)( 2084 << 14)
#define MC__LUT1                                 (MCPARAMID)( 2085 << 14)
#define MC__LUT2                                 (MCPARAMID)( 2086 << 14)
#define MC__LUTMODE                              (MCPARAMID)( 2087 << 14)
#define MC__LUTMODE_BYPASS                         1
#define MC__LUTMODE_SINGLE                         2
#define MC__LUTMODE_TRIPLE                         3
#define MC__LUT0_0                                 1
#define MC__LUT0_1                                 2
#define MC__LUT0_2                                 3
#define MC__LUT0_3                                 4
#define MC__LUT0_4                                 5
#define MC__LUT0_titi                              6
#define MC__LUT0_tutu                              7
#define MC__LUT1_titi                              1
#define MC__LUT1_tutu                              2
#define MC__LUT2_titi                              1
#define MC__LUT2_tutu                              2
#define MC__LUTAVAILABLE                         (MCPARAMID)( 2088 << 14)
#define MC__LUTAVAILABLE_NONE                      1
#define MC__LUTAVAILABLE_SINGLE8                   2
#define MC__LUTAVAILABLE_TRIPLE8                   3
#define MC__LUTAVAILABLE_SINGLE10                  4
#define MC__LUTAVAILABLE_TRIPLE10                  5
#define MC__T2POS                                (MCPARAMID)( 2089 << 14)
#define MC__PRM2_T2POS                           (MCPARAMID)( 2090 << 14)
#define MC__STM2_T2CLK                           (MCPARAMID)( 2091 << 14)
#define MC__STM2_T2CLK_T1CLK                       1
#define MC__STM2_T2CLK_LTRIG                       2
#define MC__STM2_T2CLK_PPLS                        3
#define MC__STM2_T2SEL_FTRIGS                      7
#define MC__STM2_T2SEL_SAP                         8
#define MC__STM2_T2SEL_EAP                         9
#define MC__STB_Qx1SRC_T1SIG3                      7
#define MC__STB_Qx1SRC_T1SIG4                      8
#define MC__STB_Qx1POL                           (MCPARAMID)( 2092 << 14)
#define MC__STB_Qx1POL_DIRECT                      1
#define MC__STB_Qx1POL_INVERT                      2
#define MC__STB_Qx2SRC_T1SIG3                      7
#define MC__STB_Qx2SRC_T1SIG4                      8
#define MC__STB_Qx2POL                           (MCPARAMID)( 2093 << 14)
#define MC__STB_Qx2POL_DIRECT                      1
#define MC__STB_Qx2POL_INVERT                      2
#define MC__STB_Qx1POL_HOLD                        3
#define MC__STB_Qx2POL_HOLD                        3
#define MC__STR_STXPOL                           (MCPARAMID)( 2094 << 14)
#define MC__STR_STXPOL_DIRECT                      1
#define MC__STR_STXPOL_INVERT                      2
#define MC__STR_STXPOL_HOLD                        3
#define MC__STR_STXSRC                           (MCPARAMID)( 2095 << 14)
#define MC__STR_STXSRC_LOW                         1
#define MC__STR_STXSRC_T1SIG3_X                    2
#define MC__STR_STXSRC_T1SIG4_X                    3
#define MC__STR_STXSRC_HOLD                        4
#define MC__STM1_T1SEL                           (MCPARAMID)( 2096 << 14)
#define MC__STM1_T1SEL_FTRIGS                      1
#define MC__STM1_T1SEL_LTRIGS                      2
#define MC__STM1_T1SEL_PPLS                        3
#define MC__STM1_T1SEL_OFF                         4
#define MC__STR_STXSPOL                          (MCPARAMID)( 2097 << 14)
#define MC__STR_STXSPOL_DIRECT                     1
#define MC__STR_STXSPOL_INVERT                     2
#define MC__STR_STXSPOL_HOLD                       3
#define MC__STR_STXSRC_T1SIG3_Y                    5
#define MC__STR_STXSRC_T1SIG4_Y                    6
#define MC__STR_STYSPOL                          (MCPARAMID)( 2098 << 14)
#define MC__STR_STYSPOL_DIRECT                     1
#define MC__STR_STYSPOL_INVERT                     2
#define MC__STR_STYSPOL_HOLD                       3
#define MC__STR_STZSPOL                          (MCPARAMID)( 2099 << 14)
#define MC__STR_STZSPOL_DIRECT                     1
#define MC__STR_STZSPOL_INVERT                     2
#define MC__STR_STZSPOL_HOLD                       3
#define MC__STR_STYPOL                           (MCPARAMID)( 2100 << 14)
#define MC__STR_STYPOL_DIRECT                      1
#define MC__STR_STYPOL_INVERT                      2
#define MC__STR_STYPOL_HOLD                        3
#define MC__STR_STZPOL                           (MCPARAMID)( 2101 << 14)
#define MC__STR_STZPOL_DIRECT                      1
#define MC__STR_STZPOL_INVERT                      2
#define MC__STR_STZPOL_HOLD                        3
#define MC__STR_STYSRC                           (MCPARAMID)( 2102 << 14)
#define MC__STR_STYSRC_LOW                         1
#define MC__STR_STYSRC_T1SIG3_X                    2
#define MC__STR_STYSRC_T1SIG4_X                    3
#define MC__STR_STYSRC_T1SIG3_Y                    4
#define MC__STR_STYSRC_T1SIG4_Y                    5
#define MC__STR_STYSRC_HOLD                        6
#define MC__STR_STZSRC                           (MCPARAMID)( 2103 << 14)
#define MC__STR_STZSRC_LOW                         1
#define MC__STR_STZSRC_T1SIG3_X                    2
#define MC__STR_STZSRC_T1SIG4_X                    3
#define MC__STR_STZSRC_T1SIG3_Y                    4
#define MC__STR_STZSRC_T1SIG4_Y                    5
#define MC__STR_STZSRC_HOLD                        6
#define MC__STB_Qx1SRC_T1SIG3_Inverted             9
#define MC__STB_Qx1SRC_T1SIG4_Inverted            10
#define MC__STB_Qx1SRC_HOLD                       11
#define MC__STB_Qx2SRC_T1SIG3_Inverted             9
#define MC__STB_Qx2SRC_T1SIG4_Inverted            10
#define MC__STB_Qx2SRC_HOLD                       11
#define MC__INITC_USY                            (MCPARAMID)( 2104 << 14)
#define MC__INITC_USY_TY2Y                         1
#define MC__INITC_USY_TX2Y                         2
#define MC__4xFsc_Color_kHz                      (MCPARAMID)( 2105 << 14)
#define MC__SampledPixels_Ln                     (MCPARAMID)( 2106 << 14)
#define MC__STEPX1                               (MCPARAMID)( 2107 << 14)
#define MC__STEPX2                               (MCPARAMID)( 2108 << 14)
#define MC__STEPX3                               (MCPARAMID)( 2109 << 14)
#define MC__STEPY1                               (MCPARAMID)( 2110 << 14)
#define MC__STEPY2                               (MCPARAMID)( 2111 << 14)
#define MC__STEPY3                               (MCPARAMID)( 2112 << 14)
#define MC_Connector_STEREOXY                     19
#define MC_NextConfigGrabber_mSTEREOXY             8
#define MC_ConfigGrabber_pSTEREOXY                15
#define MC_ConfigGrabber_mSTEREOXY                16
#define MC__Cameras                              (MCPARAMID)( 2113 << 14)
#define MC__TkPx                                 (MCPARAMID)( 2114 << 14)
#define MC__Images                               (MCPARAMID)( 2115 << 14)
#define MC_NextGrabberConfig_STEREOXY             89
#define MC_GrabberConfig_STEREOXY                 92
#define MC_OutputConfig_Filter_21                (MCPARAMID)( 2116 << 14)
#define MC_OutputState_Filter_21                 (MCPARAMID)( 2117 << 14)
#define MC_OutputState_21                        (MCPARAMID)( 2118 << 14)
#define MC_OutputState_21_HOLD                     1
#define MC_OutputState_21_LOW                      2
#define MC_OutputState_21_HIGH                     3
#define MC_OutputStyle_Filter_21                 (MCPARAMID)( 2119 << 14)
#define MC_OutputConfig_Filter_22                (MCPARAMID)( 2120 << 14)
#define MC_OutputState_Filter_22                 (MCPARAMID)( 2121 << 14)
#define MC_OutputState_22                        (MCPARAMID)( 2122 << 14)
#define MC_OutputState_22_HOLD                     1
#define MC_OutputState_22_LOW                      2
#define MC_OutputState_22_HIGH                     3
#define MC_OutputStyle_Filter_22                 (MCPARAMID)( 2123 << 14)
#define MC_OutputConfig_Filter_23                (MCPARAMID)( 2124 << 14)
#define MC_OutputState_Filter_23                 (MCPARAMID)( 2125 << 14)
#define MC_OutputState_23                        (MCPARAMID)( 2126 << 14)
#define MC_OutputState_23_HOLD                     1
#define MC_OutputState_23_LOW                      2
#define MC_OutputState_23_HIGH                     3
#define MC_OutputStyle_Filter_23                 (MCPARAMID)( 2127 << 14)
#define MC_OutputConfig_Filter_24                (MCPARAMID)( 2128 << 14)
#define MC_OutputState_Filter_24                 (MCPARAMID)( 2129 << 14)
#define MC_OutputState_24                        (MCPARAMID)( 2130 << 14)
#define MC_OutputState_24_HOLD                     1
#define MC_OutputState_24_LOW                      2
#define MC_OutputState_24_HIGH                     3
#define MC_OutputStyle_Filter_24                 (MCPARAMID)( 2131 << 14)
#define MC_OutputConfig_Filter_31                (MCPARAMID)( 2132 << 14)
#define MC_OutputState_Filter_31                 (MCPARAMID)( 2133 << 14)
#define MC_OutputState_31                        (MCPARAMID)( 2134 << 14)
#define MC_OutputState_31_HOLD                     1
#define MC_OutputState_31_LOW                      2
#define MC_OutputState_31_HIGH                     3
#define MC_OutputStyle_Filter_31                 (MCPARAMID)( 2135 << 14)
#define MC_OutputConfig_Filter_32                (MCPARAMID)( 2136 << 14)
#define MC_OutputState_Filter_32                 (MCPARAMID)( 2137 << 14)
#define MC_OutputState_32                        (MCPARAMID)( 2138 << 14)
#define MC_OutputState_32_HOLD                     1
#define MC_OutputState_32_LOW                      2
#define MC_OutputState_32_HIGH                     3
#define MC_OutputStyle_Filter_32                 (MCPARAMID)( 2139 << 14)
#define MC_OutputConfig_Filter_33                (MCPARAMID)( 2140 << 14)
#define MC_OutputState_Filter_33                 (MCPARAMID)( 2141 << 14)
#define MC_OutputState_33                        (MCPARAMID)( 2142 << 14)
#define MC_OutputState_33_HOLD                     1
#define MC_OutputState_33_LOW                      2
#define MC_OutputState_33_HIGH                     3
#define MC_OutputStyle_Filter_33                 (MCPARAMID)( 2143 << 14)
#define MC_OutputConfig_Filter_34                (MCPARAMID)( 2144 << 14)
#define MC_OutputState_Filter_34                 (MCPARAMID)( 2145 << 14)
#define MC_OutputState_34                        (MCPARAMID)( 2146 << 14)
#define MC_OutputState_34_HOLD                     1
#define MC_OutputState_34_LOW                      2
#define MC_OutputState_34_HIGH                     3
#define MC_OutputStyle_Filter_34                 (MCPARAMID)( 2147 << 14)
#define MC_OutputStyle_LVDS                        8
#define MC_OffsetD1WaitAft                       (MCPARAMID)( 2148 << 14)
#define MC_INITD1State                           (MCPARAMID)( 2149 << 14)
#define MC_INITD1Signature1                      (MCPARAMID)( 2150 << 14)
#define MC_INITD1Signature2                      (MCPARAMID)( 2151 << 14)
#define MC_INITD1Condition                       (MCPARAMID)( 2152 << 14)
#define MC_TrigDelay_us                          (MCPARAMID)( 2153 << 14)
#define MC_TriggerDelay_Tk                       (MCPARAMID)( 2154 << 14)
#define MC_TrigDelay_Tk                          (MCPARAMID)( 2155 << 14)
#define MC_TrigDelay_E                           (MCPARAMID)( 2156 << 14)
#define MC_TrueTrigDelay_Tk                      (MCPARAMID)( 2157 << 14)
#define MC_TrueTrigDelay_us                      (MCPARAMID)( 2158 << 14)
#define MC__SampleClk_KHz                        (MCPARAMID)( 2159 << 14)
#define MC_TrigDelay_T1                          (MCPARAMID)( 2160 << 14)
#define MC_INITCrecord                           (MCPARAMID)( 2161 << 14)
#define MC_INITCsignature                        (MCPARAMID)( 2162 << 14)
#define MC_INITCcondition                        (MCPARAMID)( 2163 << 14)
#define MC_OUTPUTrecord                          (MCPARAMID)( 2164 << 14)
#define MC_OUT17index                            (MCPARAMID)( 2165 << 14)
#define MC_OUT17signature                        (MCPARAMID)( 2166 << 14)
#define MC_OUT17condition                        (MCPARAMID)( 2167 << 14)
#define MC_OUT18index                            (MCPARAMID)( 2168 << 14)
#define MC_OUT18signature                        (MCPARAMID)( 2169 << 14)
#define MC_OUT18condition                        (MCPARAMID)( 2170 << 14)
#define MC_OUT19index                            (MCPARAMID)( 2171 << 14)
#define MC_OUT19signature                        (MCPARAMID)( 2172 << 14)
#define MC_OUT19condition                        (MCPARAMID)( 2173 << 14)
#define MC_MANTRIGcondition                      (MCPARAMID)( 2174 << 14)
#define MC__HactiveMax_Px                        (MCPARAMID)( 2175 << 14)
#define MC_ImageXStep_Px                         (MCPARAMID)( 2176 << 14)
#define MC_ImageYStep_Ln                         (MCPARAMID)( 2177 << 14)
#define MC_RoundedOffsetX_Px                     (MCPARAMID)( 2178 << 14)
#define MC_RoundedOffsetY_Ln                     (MCPARAMID)( 2179 << 14)
#define MC_FifoOffsetX                           (MCPARAMID)( 2180 << 14)
#define MC_FifoOffsetY                           (MCPARAMID)( 2181 << 14)
#define MC_HTotal_Px                             (MCPARAMID)( 2182 << 14)
#define MC_ImageSizingX_VARIABLE                   2
#define MC_ImageOffset_X                         (MCPARAMID)( 2183 << 14)
#define MC_ImageOffset_Y                         (MCPARAMID)( 2184 << 14)
#define MC_ImageOffsetX                          (MCPARAMID)( 2185 << 14)
#define MC_ImageOffsetY                          (MCPARAMID)( 2186 << 14)
#define MC__Category__Grabber_LUT                 27
#define MC__Category_zGrabber_LUT                 28
#define MC__STM1_T1SEL_OnLTRIGS                    5
#define MC__STM1_T1SEL_OnLTRIGE                    6
#define MC__STM1_T1SEL_OnPPLS                      7
#define MC__STM1_T1SEL_OnGO1                       8
#define MC__STM1_T1SEL_OnEND2                      9
#define MC__STM2_T2CLK_EOL                         4
#define MC__STROBEWidth_us                       (MCPARAMID)( 2187 << 14)
#define MC__StrobeStart_us                       (MCPARAMID)( 2188 << 14)
#define MC__EXPOSEStart_T1                       (MCPARAMID)( 2189 << 14)
#define MC_Camera_VCC_810                        126
#define MC_PreStrobe_us                          (MCPARAMID)( 2190 << 14)
#define MC_ImagePlaneSize                        (MCPARAMID)( 2191 << 14)
#define MC__EXPOn2STROBEOff_T1                   (MCPARAMID)( 2192 << 14)
#define MC__PREEXPWidth_T1                       (MCPARAMID)( 2193 << 14)
#define MC__DRS_CSOL_LTriggeredLVALS               6
#define MC__SrobeWidth_us                        (MCPARAMID)( 2194 << 14)
#define MC__ExposeRecovery_T1                    (MCPARAMID)( 2195 << 14)
#define MC__MaxTimer1TriggerRate_Hz              (MCPARAMID)( 2196 << 14)
#define MC__EXPOn_T1                             (MCPARAMID)( 2197 << 14)
#define MC__EXPOff_T1                            (MCPARAMID)( 2198 << 14)
#define MC__HactiveRef_Px                        (MCPARAMID)( 2199 << 14)
#define MC__VactiveRef_Ln                        (MCPARAMID)( 2200 << 14)
#define MC__RoundedActiveSizeX                   (MCPARAMID)( 2201 << 14)
#define MC__RoundedActiveSizeY                   (MCPARAMID)( 2202 << 14)
#define MC_ActiveXStep_Px                        (MCPARAMID)( 2203 << 14)
#define MC__PREEXPWidth_us                       (MCPARAMID)( 2204 << 14)
#define MC__StrobeStop_us                        (MCPARAMID)( 2205 << 14)
#define MC___MAXIMUM_T1                          (MCPARAMID)( 2206 << 14)
#define MC_Camera_VCC_850A                       127
#define MC_Camera_VCC_870A                       128
#define MC__CTD_TDSCAL                           (MCPARAMID)( 2207 << 14)
#define MC__CTD_TDSCAL_1us                         1
#define MC__CTD_TDSCAL_10us                        2
#define MC__CTD_TDSCAL_100us                       3
#define MC__CTD_TDSCAL_1ms                         4
#define MC__TD_us                                (MCPARAMID)( 2208 << 14)
#define MC_TrigDelay_TD                          (MCPARAMID)( 2209 << 14)
#define MC__CTD_TDCLK                            (MCPARAMID)( 2210 << 14)
#define MC__CTD_TDCLK_PRESCAL                      1
#define MC__CTD_TDCLK_LTRIG                        2
#define MC__CTD_TDCLK_PPLS                         3
#define MC__CTD_TDCLK_EOL                          4
#define MC__CTD_TDMOD                            (MCPARAMID)( 2211 << 14)
#define MC__CTD_TDMOD_Bypass                       1
#define MC__CTD_TDMOD_Enable                       2
#define MC__CTD_TDCNT                            (MCPARAMID)( 2212 << 14)
#define MC__CTD_TDSCAL_ns                        (MCPARAMID)( 2213 << 14)
#define MC_TrueTrigDelay_ns                      (MCPARAMID)( 2214 << 14)
#define MC_Connector_VID1                         20
#define MC_Connector_VID2                         21
#define MC_Connector_VID3                         22
#define MC_Connector_VID4                         23
#define MC_Connector_VID5                         24
#define MC_Connector_VID6                         25
#define MC_Connector_VID7                         26
#define MC_Connector_VID8                         27
#define MC_Connector_VID9                         28
#define MC_Connector_VID10                        29
#define MC_Connector_VID11                        30
#define MC_Connector_VID12                        31
#define MC_Connector_VID13                        32
#define MC_Connector_VID14                        33
#define MC_Connector_VID15                        34
#define MC_Connector_VID16                        35
#define MC_TrigLine_PG                            12
#define MC_TrigLine_LTACT                         13
#define MC__TrigLine_PG                           18
#define MC__TrigLine_LTACT                        19
#define MC__TRG_FTSEL_PG                          15
#define MC__TRG_FTSEL_LTACT                       16
#define MC_PGRCUsage                             (MCPARAMID)( 2215 << 14)
#define MC_PGRCUsage_Unused                        1
#define MC_PGRCUsage_PG_FT                         2
#define MC_PGRCUsage_LTActFT                       3
#define MC_PGRCUsage_PG_LT                         4
#define MC_PGRCUsage_PG_PT                         5
#define MC_PGRCUsage_RC_LTActPT                    6
#define MC__PG_Check                             (MCPARAMID)( 2216 << 14)
#define MC__PG_Check_PASS                          1
#define MC__PG_Check_FAIL                          2
#define MC__LTACT_Check                          (MCPARAMID)( 2217 << 14)
#define MC__LTACT_Check_PASS                       1
#define MC__LTACT_Check_FAIL                       2
#define MC__TrigLine_PGA                          20
#define MC__TrigLine_LTACTA                       21
#define MC__TrigLine_PGB                          22
#define MC__TrigLine_LTACTB                       23
#define MC__PGRCUsage_Check                      (MCPARAMID)( 2218 << 14)
#define MC__PGRCUsage_Check_PASS                   1
#define MC__PGRCUsage_Check_FAIL                   2
#define MC_PostReadoutRecovery_us                (MCPARAMID)( 2219 << 14)
#define MC__EAP2EXPOn_us                         (MCPARAMID)( 2220 << 14)
#define MC__EAP2EXPOn_T1                         (MCPARAMID)( 2221 << 14)
#define MC__Category_Grabber_LUT                  29
#define MC__DRS_CSOL_PickedOutLVALS                7
#define MC_FrameRate_mHz                         (MCPARAMID)( 2222 << 14)
#define MC_FrameDur_us                           (MCPARAMID)( 2223 << 14)
#define MC_STXUsage_PPLS                           4
#define MC_STYUsage_PPLS                           4
#define MC__STR_STXSRC_PPLS_X                      7
#define MC__STR_STYSRC_PPLS_Y                      7
#define MC_STRUsage_PPLS                           3
#define MC_ColorFormat                           (MCPARAMID)( 2224 << 14)
#define MC_ColorFormat_RGB24                       1
#define MC_ColorFormat_BGR24                       2
#define MC_ColorFormat_RGB32                       3
#define MC_ColorFormat_BGR32                       4
#define MC_ColorFormat_RGB16                       5
#define MC_ColorFormat_RGB15                       6
#define MC_ColorFormat_Y8                          7
#define MC_ColorFormat_YUV422                      8
#define MC_ColorGain                             (MCPARAMID)( 2225 << 14)
#define MC_ColorGainTrimU                        (MCPARAMID)( 2226 << 14)
#define MC_ColorGainTrimV                        (MCPARAMID)( 2227 << 14)
#define MC_ColorGainTrimHue                      (MCPARAMID)( 2228 << 14)
#define MC__Contrast                             (MCPARAMID)( 2229 << 14)
#define MC__Brightness                           (MCPARAMID)( 2230 << 14)
#define MC__SaturationU                          (MCPARAMID)( 2231 << 14)
#define MC__SaturationV                          (MCPARAMID)( 2232 << 14)
#define MC__Hue                                  (MCPARAMID)( 2233 << 14)
#define MC_Camera_COLIBRI2048CL                  129
#define MC_CamConfig_L2048RGM                    179
#define MC_Manufacturer_TVI                       21
#define MC_Camera_CAMERA_CCIR                    130
#define MC_Camera_CAMERA_EIA                     131
#define MC_Camera_CAMERA_PAL                     132
#define MC_Camera_CAMERA_NTSC                    133
#define MC____Camera                             (MCPARAMID)( 2234 << 14)
#define MC____Camera_CCIR                          1
#define MC____Camera_EIA                           2
#define MC____Camera_PAL                           3
#define MC____Camera_NTSC                          4
#define MC__NormalSizeX_px                       (MCPARAMID)( 2235 << 14)
#define MC__NormalOffsetX_Px                     (MCPARAMID)( 2236 << 14)
#define MC__SamplingScaleX                       (MCPARAMID)( 2237 << 14)
#define MC__UserScaleX                           (MCPARAMID)( 2238 << 14)
#define MC__FullScaleX                           (MCPARAMID)( 2239 << 14)
#define MC__FullOffsetX_Px                       (MCPARAMID)( 2240 << 14)
#define MC_ColorGainTrimHue_Filter               (MCPARAMID)( 2241 << 14)
#define MC_Camera_COLIBRI1024CL                  134
#define MC_Camera_MyCameraLink                   135
#define MC_CamConfig_L1024RGM                    180
#define MC_CamConfig_PxxSC                       181
#define MC_CamConfig_PxxRC                       182
#define MC_CamConfig_PxxRG                       183
#define MC_CamConfig_IxxSC                       184
#define MC_CamConfig_LxxxxSP                     185
#define MC_CamConfig_LxxxxRC                     186
#define MC_CamConfig_LxxxxRG                     187
#define MC__FullOffsetY_Ln                       (MCPARAMID)( 2242 << 14)
#define MC__NormalSizeY_Ln                       (MCPARAMID)( 2243 << 14)
#define MC__FullScaleY                           (MCPARAMID)( 2244 << 14)
#define MC__FullFrameSizeY_Ln                    (MCPARAMID)( 2245 << 14)
#define MC_Camera_PRICOLOR1024C                  136
#define MC_Camera_PRICOLOR2048C                  137
#define MC_dummydhfjsdhk                         (MCPARAMID)( 2246 << 14)
#define MC_Camera_AViiVA_C2CL4010                138
#define MC_CamConfig_L1365RG                     188
#define MC_CamConfig_L4096RGS                    189
#define MC_OutputState_WENTLOW                     8
#define MC_OutputState_WENTHIGH                    9
#define MC_OutputState_PULSE                      10
#define MC_Camera_CV_M4CLp                       139
#define MC_Camera_VCC_8350                       140
#define MC_Camera_VCC_8550                       141
#define MC_CamConfig_P60RM_A                     190
#define MC_OutputConfig_Filter_41                (MCPARAMID)( 2247 << 14)
#define MC_OutputState_Filter_41                 (MCPARAMID)( 2248 << 14)
#define MC_OutputState_41                        (MCPARAMID)( 2249 << 14)
#define MC_OutputState_41_HOLD                     1
#define MC_OutputState_41_LOW                      2
#define MC_OutputState_41_HIGH                     3
#define MC_OutputConfig_Filter_42                (MCPARAMID)( 2250 << 14)
#define MC_OutputState_Filter_42                 (MCPARAMID)( 2251 << 14)
#define MC_OutputState_42                        (MCPARAMID)( 2252 << 14)
#define MC_OutputState_42_HOLD                     1
#define MC_OutputState_42_LOW                      2
#define MC_OutputState_42_HIGH                     3
#define MC_ColorStorage_WORD                       3
#define MC_ColorStorage_Filter                   (MCPARAMID)( 2253 << 14)
#define MC_ImagePixelAlign_Filter                (MCPARAMID)( 2254 << 14)
#define MC__CameraColorFormat                    (MCPARAMID)( 2255 << 14)
#define MC__CameraColorFormat_MONOCHROME           1
#define MC__CameraColorFormat_BAYER                2
#define MC__CameraColorFormat_ParallelRGB          3
#define MC__CameraColorFormat_UNKNOWN              4
#define MC_ColorFormat_GRABBER                     9
#define MC_ColorFormat_Y10                        10
#define MC_ColorFormat_Y12                        11
#define MC_ColorFormat_Y14                        12
#define MC_ColorFormat_Y16                        13
#define MC_ColorFormat_BAYER8                     14
#define MC_ColorFormat_BAYER10                    15
#define MC_ColorFormat_BAYER12                    16
#define MC_ColorFormat_BAYER14                    17
#define MC_ColorFormat_BAYER16                    18
#define MC_ColorFormat_RGB30                      19
#define MC_ColorFormat_RGB36                      20
#define MC_ColorFormat_RGB42                      21
#define MC_ColorFormat_RGB48                      22
#define MC_ColorFormat_ARGB32                     23
#define MC_ColorFormat_RAW8                       24
#define MC_ColorFormat_RAW10                      25
#define MC_ColorFormat_RAW12                      26
#define MC_ColorFormat_RAW14                      27
#define MC_ColorFormat_RAW16                      28
#define MC_ColorFormat_Filter                    (MCPARAMID)( 2256 << 14)
#define MC___ColorFormat_Check                   (MCPARAMID)( 2257 << 14)
#define MC___ColorFormat_Check_PASS                1
#define MC___ColorFormat_Check_FAIL                2
#define MC__BoardType__PICOLO_PRO3I               14
#define MC_ConnectorCount                        (MCPARAMID)( 2258 << 14)
#define MC_ColorFormat_RGB24PL                    29
#define MC_ColorFormat_RGB30PL                    30
#define MC_ColorFormat_RGB36PL                    31
#define MC_ColorFormat_RGB42PL                    32
#define MC_ColorFormat_RGB48PL                    33
#define MC_ColorFormat_                          (MCPARAMID)( 2259 << 14)
#define MC_ColorFormat__Y8                        34
#define MC_ColorFormat__Y10                       35
#define MC_ColorFormat__Y12                       36
#define MC_ColorFormat__Y14                       37
#define MC_ColorFormat__Y16                       38
#define MC_ColorFormat__BAYER8                    39
#define MC_ColorFormat__BAYER10                   40
#define MC_ColorFormat__BAYER12                   41
#define MC_ColorFormat__BAYER14                   42
#define MC_ColorFormat__BAYER16                   43
#define MC_ColorFormat__RGB24                     44
#define MC_ColorFormat__ARGB32                    45
#define MC_ColorFormat__RGB24PL                   46
#define MC_ColorFormat__RGB30PL                   47
#define MC_ColorFormat__RGB36PL                   48
#define MC_ColorFormat__RGB42PL                   49
#define MC_ColorFormat__RGB48PL                   50
#define MC_ColorFormat__RAW8                      51
#define MC_ColorFormat__RAW10                     52
#define MC_ColorFormat__RAW12                     53
#define MC_ColorFormat__RAW14                     54
#define MC_ColorFormat__RAW16                     55
#define MC_ColorFormat__GRABBER                   56
#define MC_InputConfig_Filter_20                 (MCPARAMID)( 2260 << 14)
#define MC_InputStyle_Filter_20                  (MCPARAMID)( 2261 << 14)
#define MC_InputPinName_IO17                      40
#define MC_InputPinName_IO18                      41
#define MC_InputPinName_IO19                      42
#define MC_InputPinName_IO20                      43
#define MC_OutputPinName_IO17                     48
#define MC_OutputPinName_IO18                     49
#define MC_OutputPinName_IO19                     50
#define MC_OutputPinName_IO20                     51
#define MC_InputMaxId_1                          (MCPARAMID)( 2262 << 14)
#define MC_InputMaxId_2                          (MCPARAMID)( 2263 << 14)
#define MC_InputMaxId_3                          (MCPARAMID)( 2264 << 14)
#define MC_InputMaxId_4                          (MCPARAMID)( 2265 << 14)
#define MC_InputMaxId_5                          (MCPARAMID)( 2266 << 14)
#define MC_InputMaxId_6                          (MCPARAMID)( 2267 << 14)
#define MC_InputMaxId_7                          (MCPARAMID)( 2268 << 14)
#define MC_InputMaxId_8                          (MCPARAMID)( 2269 << 14)
#define MC_InputMaxId_9                          (MCPARAMID)( 2270 << 14)
#define MC_InputMaxId_10                         (MCPARAMID)( 2271 << 14)
#define MC_InputMaxId_11                         (MCPARAMID)( 2272 << 14)
#define MC_InputMaxId_12                         (MCPARAMID)( 2273 << 14)
#define MC_InputMaxId_13                         (MCPARAMID)( 2274 << 14)
#define MC_InputMaxId_14                         (MCPARAMID)( 2275 << 14)
#define MC_InputMaxId_15                         (MCPARAMID)( 2276 << 14)
#define MC_InputMaxId_16                         (MCPARAMID)( 2277 << 14)
#define MC_InputMaxId_17                         (MCPARAMID)( 2278 << 14)
#define MC_InputMaxId_18                         (MCPARAMID)( 2279 << 14)
#define MC_InputMaxId_19                         (MCPARAMID)( 2280 << 14)
#define MC_InputMaxId_20                         (MCPARAMID)( 2281 << 14)
#define MC_OutputConfig_Filter_20                (MCPARAMID)( 2282 << 14)
#define MC_OutputState_Filter_20                 (MCPARAMID)( 2283 << 14)
#define MC_OutputStyle_Filter_20                 (MCPARAMID)( 2284 << 14)
#define MC_OutputState_20                        (MCPARAMID)( 2285 << 14)
#define MC_OutputState_20_HOLD                     1
#define MC_OutputState_20_LOW                      2
#define MC_OutputState_20_HIGH                     3
#define MC_MIO_0_Present                         (MCPARAMID)( 2286 << 14)
#define MC_MIO_1_Present                         (MCPARAMID)( 2287 << 14)
#define MC_MIO_2_Present                         (MCPARAMID)( 2288 << 14)
#define MC_MIO_3_Present                         (MCPARAMID)( 2289 << 14)
#define MC_MIO_4_Present                         (MCPARAMID)( 2290 << 14)
#define MC___InputId_1                           (MCPARAMID)( 2291 << 14)
#define MC___InputId_2                           (MCPARAMID)( 2292 << 14)
#define MC___InputId_3                           (MCPARAMID)( 2293 << 14)
#define MC___InputId_4                           (MCPARAMID)( 2294 << 14)
#define MC___InputId_5                           (MCPARAMID)( 2295 << 14)
#define MC___InputId_6                           (MCPARAMID)( 2296 << 14)
#define MC___InputId_7                           (MCPARAMID)( 2297 << 14)
#define MC___InputId_8                           (MCPARAMID)( 2298 << 14)
#define MC___InputId_9                           (MCPARAMID)( 2299 << 14)
#define MC___InputId_10                          (MCPARAMID)( 2300 << 14)
#define MC___InputId_11                          (MCPARAMID)( 2301 << 14)
#define MC___InputId_12                          (MCPARAMID)( 2302 << 14)
#define MC___InputId_13                          (MCPARAMID)( 2303 << 14)
#define MC___InputId_14                          (MCPARAMID)( 2304 << 14)
#define MC___InputId_15                          (MCPARAMID)( 2305 << 14)
#define MC___InputId_16                          (MCPARAMID)( 2306 << 14)
#define MC___InputId_17                          (MCPARAMID)( 2307 << 14)
#define MC___InputId_18                          (MCPARAMID)( 2308 << 14)
#define MC___InputId_19                          (MCPARAMID)( 2309 << 14)
#define MC___InputId_20                          (MCPARAMID)( 2310 << 14)
#define MC___OutputId_1                          (MCPARAMID)( 2311 << 14)
#define MC_OutputMaxId_1                         (MCPARAMID)( 2312 << 14)
#define MC___OutputId_2                          (MCPARAMID)( 2313 << 14)
#define MC_OutputMaxId_2                         (MCPARAMID)( 2314 << 14)
#define MC___OutputId_3                          (MCPARAMID)( 2315 << 14)
#define MC_OutputMaxId_3                         (MCPARAMID)( 2316 << 14)
#define MC___OutputId_4                          (MCPARAMID)( 2317 << 14)
#define MC_OutputMaxId_4                         (MCPARAMID)( 2318 << 14)
#define MC___OutputId_5                          (MCPARAMID)( 2319 << 14)
#define MC_OutputMaxId_5                         (MCPARAMID)( 2320 << 14)
#define MC___OutputId_6                          (MCPARAMID)( 2321 << 14)
#define MC_OutputMaxId_6                         (MCPARAMID)( 2322 << 14)
#define MC___OutputId_7                          (MCPARAMID)( 2323 << 14)
#define MC_OutputMaxId_7                         (MCPARAMID)( 2324 << 14)
#define MC___OutputId_8                          (MCPARAMID)( 2325 << 14)
#define MC_OutputMaxId_8                         (MCPARAMID)( 2326 << 14)
#define MC___OutputId_9                          (MCPARAMID)( 2327 << 14)
#define MC_OutputMaxId_9                         (MCPARAMID)( 2328 << 14)
#define MC___OutputId_10                         (MCPARAMID)( 2329 << 14)
#define MC_OutputMaxId_10                        (MCPARAMID)( 2330 << 14)
#define MC___OutputId_11                         (MCPARAMID)( 2331 << 14)
#define MC_OutputMaxId_11                        (MCPARAMID)( 2332 << 14)
#define MC___OutputId_12                         (MCPARAMID)( 2333 << 14)
#define MC_OutputMaxId_12                        (MCPARAMID)( 2334 << 14)
#define MC___OutputId_13                         (MCPARAMID)( 2335 << 14)
#define MC_OutputMaxId_13                        (MCPARAMID)( 2336 << 14)
#define MC___OutputId_14                         (MCPARAMID)( 2337 << 14)
#define MC_OutputMaxId_14                        (MCPARAMID)( 2338 << 14)
#define MC___OutputId_15                         (MCPARAMID)( 2339 << 14)
#define MC_OutputMaxId_15                        (MCPARAMID)( 2340 << 14)
#define MC___OutputId_16                         (MCPARAMID)( 2341 << 14)
#define MC_OutputMaxId_16                        (MCPARAMID)( 2342 << 14)
#define MC___OutputId_17                         (MCPARAMID)( 2343 << 14)
#define MC_OutputMaxId_17                        (MCPARAMID)( 2344 << 14)
#define MC___OutputId_18                         (MCPARAMID)( 2345 << 14)
#define MC_OutputMaxId_18                        (MCPARAMID)( 2346 << 14)
#define MC___OutputId_19                         (MCPARAMID)( 2347 << 14)
#define MC_OutputMaxId_19                        (MCPARAMID)( 2348 << 14)
#define MC___OutputId_20                         (MCPARAMID)( 2349 << 14)
#define MC_OutputMaxId_20                        (MCPARAMID)( 2350 << 14)
#define MC___InputId_21                          (MCPARAMID)( 2351 << 14)
#define MC_InputMaxId_21                         (MCPARAMID)( 2352 << 14)
#define MC_InputStyle_Filter_21                  (MCPARAMID)( 2353 << 14)
#define MC___InputId_22                          (MCPARAMID)( 2354 << 14)
#define MC_InputMaxId_22                         (MCPARAMID)( 2355 << 14)
#define MC_InputStyle_Filter_22                  (MCPARAMID)( 2356 << 14)
#define MC___InputId_23                          (MCPARAMID)( 2357 << 14)
#define MC_InputMaxId_23                         (MCPARAMID)( 2358 << 14)
#define MC_InputStyle_Filter_23                  (MCPARAMID)( 2359 << 14)
#define MC___InputId_24                          (MCPARAMID)( 2360 << 14)
#define MC_InputMaxId_24                         (MCPARAMID)( 2361 << 14)
#define MC_InputStyle_Filter_24                  (MCPARAMID)( 2362 << 14)
#define MC___InputId_25                          (MCPARAMID)( 2363 << 14)
#define MC_InputMaxId_25                         (MCPARAMID)( 2364 << 14)
#define MC_InputStyle_Filter_25                  (MCPARAMID)( 2365 << 14)
#define MC___InputId_26                          (MCPARAMID)( 2366 << 14)
#define MC_InputMaxId_26                         (MCPARAMID)( 2367 << 14)
#define MC_InputStyle_Filter_26                  (MCPARAMID)( 2368 << 14)
#define MC___InputId_27                          (MCPARAMID)( 2369 << 14)
#define MC_InputMaxId_27                         (MCPARAMID)( 2370 << 14)
#define MC_InputStyle_Filter_27                  (MCPARAMID)( 2371 << 14)
#define MC___InputId_28                          (MCPARAMID)( 2372 << 14)
#define MC_InputMaxId_28                         (MCPARAMID)( 2373 << 14)
#define MC___InputId_29                          (MCPARAMID)( 2374 << 14)
#define MC_InputMaxId_29                         (MCPARAMID)( 2375 << 14)
#define MC_InputConfig_Filter_30                 (MCPARAMID)( 2376 << 14)
#define MC___InputId_30                          (MCPARAMID)( 2377 << 14)
#define MC_InputMaxId_30                         (MCPARAMID)( 2378 << 14)
#define MC_InputStyle_Filter_30                  (MCPARAMID)( 2379 << 14)
#define MC___InputId_31                          (MCPARAMID)( 2380 << 14)
#define MC_InputMaxId_31                         (MCPARAMID)( 2381 << 14)
#define MC_InputStyle_Filter_31                  (MCPARAMID)( 2382 << 14)
#define MC___InputId_32                          (MCPARAMID)( 2383 << 14)
#define MC_InputMaxId_32                         (MCPARAMID)( 2384 << 14)
#define MC_InputStyle_Filter_32                  (MCPARAMID)( 2385 << 14)
#define MC___InputId_33                          (MCPARAMID)( 2386 << 14)
#define MC_InputMaxId_33                         (MCPARAMID)( 2387 << 14)
#define MC_InputStyle_Filter_33                  (MCPARAMID)( 2388 << 14)
#define MC___InputId_34                          (MCPARAMID)( 2389 << 14)
#define MC_InputMaxId_34                         (MCPARAMID)( 2390 << 14)
#define MC_InputStyle_Filter_34                  (MCPARAMID)( 2391 << 14)
#define MC___InputId_35                          (MCPARAMID)( 2392 << 14)
#define MC_InputMaxId_35                         (MCPARAMID)( 2393 << 14)
#define MC_InputStyle_Filter_35                  (MCPARAMID)( 2394 << 14)
#define MC___InputId_36                          (MCPARAMID)( 2395 << 14)
#define MC_InputMaxId_36                         (MCPARAMID)( 2396 << 14)
#define MC_InputStyle_Filter_36                  (MCPARAMID)( 2397 << 14)
#define MC___InputId_37                          (MCPARAMID)( 2398 << 14)
#define MC_InputMaxId_37                         (MCPARAMID)( 2399 << 14)
#define MC_InputStyle_Filter_37                  (MCPARAMID)( 2400 << 14)
#define MC___InputId_38                          (MCPARAMID)( 2401 << 14)
#define MC_InputMaxId_38                         (MCPARAMID)( 2402 << 14)
#define MC___InputId_39                          (MCPARAMID)( 2403 << 14)
#define MC_InputMaxId_39                         (MCPARAMID)( 2404 << 14)
#define MC_InputConfig_Filter_40                 (MCPARAMID)( 2405 << 14)
#define MC___InputId_40                          (MCPARAMID)( 2406 << 14)
#define MC_InputMaxId_40                         (MCPARAMID)( 2407 << 14)
#define MC_InputStyle_Filter_40                  (MCPARAMID)( 2408 << 14)
#define MC_InputPinName_I1_0                      44
#define MC_InputPinName_I2_0                      45
#define MC_InputPinName_I3_0                      46
#define MC_InputPinName_I4_0                      47
#define MC_InputPinName_I1_1                      48
#define MC_InputPinName_I2_1                      49
#define MC_InputPinName_I3_1                      50
#define MC_InputPinName_I4_1                      51
#define MC_InputPinName_I1_2                      52
#define MC_InputPinName_I2_2                      53
#define MC_InputPinName_I3_2                      54
#define MC_InputPinName_I4_2                      55
#define MC_InputPinName_I1_3                      56
#define MC_InputPinName_I2_3                      57
#define MC_InputPinName_I3_3                      58
#define MC_InputPinName_I4_3                      59
#define MC_InputPinName_I1_4                      60
#define MC_InputPinName_I2_4                      61
#define MC_InputPinName_I3_4                      62
#define MC_InputPinName_I4_4                      63
#define MC___OutputId_21                         (MCPARAMID)( 2409 << 14)
#define MC_OutputMaxId_21                        (MCPARAMID)( 2410 << 14)
#define MC___OutputId_22                         (MCPARAMID)( 2411 << 14)
#define MC_OutputMaxId_22                        (MCPARAMID)( 2412 << 14)
#define MC___OutputId_23                         (MCPARAMID)( 2413 << 14)
#define MC_OutputMaxId_23                        (MCPARAMID)( 2414 << 14)
#define MC___OutputId_24                         (MCPARAMID)( 2415 << 14)
#define MC_OutputMaxId_24                        (MCPARAMID)( 2416 << 14)
#define MC_OutputConfig_Filter_25                (MCPARAMID)( 2417 << 14)
#define MC___OutputId_25                         (MCPARAMID)( 2418 << 14)
#define MC_OutputMaxId_25                        (MCPARAMID)( 2419 << 14)
#define MC_OutputState_Filter_25                 (MCPARAMID)( 2420 << 14)
#define MC_OutputStyle_Filter_25                 (MCPARAMID)( 2421 << 14)
#define MC_OutputState_25                        (MCPARAMID)( 2422 << 14)
#define MC_OutputState_25_HOLD                     1
#define MC_OutputState_25_LOW                      2
#define MC_OutputState_25_HIGH                     3
#define MC_OutputConfig_Filter_26                (MCPARAMID)( 2423 << 14)
#define MC___OutputId_26                         (MCPARAMID)( 2424 << 14)
#define MC_OutputMaxId_26                        (MCPARAMID)( 2425 << 14)
#define MC_OutputState_Filter_26                 (MCPARAMID)( 2426 << 14)
#define MC_OutputStyle_Filter_26                 (MCPARAMID)( 2427 << 14)
#define MC_OutputState_26                        (MCPARAMID)( 2428 << 14)
#define MC_OutputState_26_HOLD                     1
#define MC_OutputState_26_LOW                      2
#define MC_OutputState_26_HIGH                     3
#define MC_OutputConfig_Filter_27                (MCPARAMID)( 2429 << 14)
#define MC___OutputId_27                         (MCPARAMID)( 2430 << 14)
#define MC_OutputMaxId_27                        (MCPARAMID)( 2431 << 14)
#define MC_OutputState_Filter_27                 (MCPARAMID)( 2432 << 14)
#define MC_OutputStyle_Filter_27                 (MCPARAMID)( 2433 << 14)
#define MC_OutputState_27                        (MCPARAMID)( 2434 << 14)
#define MC_OutputState_27_HOLD                     1
#define MC_OutputState_27_LOW                      2
#define MC_OutputState_27_HIGH                     3
#define MC___OutputId_28                         (MCPARAMID)( 2435 << 14)
#define MC_OutputMaxId_28                        (MCPARAMID)( 2436 << 14)
#define MC___OutputId_29                         (MCPARAMID)( 2437 << 14)
#define MC_OutputMaxId_29                        (MCPARAMID)( 2438 << 14)
#define MC_OutputConfig_Filter_30                (MCPARAMID)( 2439 << 14)
#define MC___OutputId_30                         (MCPARAMID)( 2440 << 14)
#define MC_OutputMaxId_30                        (MCPARAMID)( 2441 << 14)
#define MC_OutputState_Filter_30                 (MCPARAMID)( 2442 << 14)
#define MC_OutputStyle_Filter_30                 (MCPARAMID)( 2443 << 14)
#define MC_OutputState_30                        (MCPARAMID)( 2444 << 14)
#define MC_OutputState_30_HOLD                     1
#define MC_OutputState_30_LOW                      2
#define MC_OutputState_30_HIGH                     3
#define MC___OutputId_31                         (MCPARAMID)( 2445 << 14)
#define MC_OutputMaxId_31                        (MCPARAMID)( 2446 << 14)
#define MC___OutputId_32                         (MCPARAMID)( 2447 << 14)
#define MC_OutputMaxId_32                        (MCPARAMID)( 2448 << 14)
#define MC___OutputId_33                         (MCPARAMID)( 2449 << 14)
#define MC_OutputMaxId_33                        (MCPARAMID)( 2450 << 14)
#define MC___OutputId_34                         (MCPARAMID)( 2451 << 14)
#define MC_OutputMaxId_34                        (MCPARAMID)( 2452 << 14)
#define MC_OutputConfig_Filter_35                (MCPARAMID)( 2453 << 14)
#define MC___OutputId_35                         (MCPARAMID)( 2454 << 14)
#define MC_OutputMaxId_35                        (MCPARAMID)( 2455 << 14)
#define MC_OutputState_Filter_35                 (MCPARAMID)( 2456 << 14)
#define MC_OutputStyle_Filter_35                 (MCPARAMID)( 2457 << 14)
#define MC_OutputState_35                        (MCPARAMID)( 2458 << 14)
#define MC_OutputState_35_HOLD                     1
#define MC_OutputState_35_LOW                      2
#define MC_OutputState_35_HIGH                     3
#define MC_OutputConfig_Filter_36                (MCPARAMID)( 2459 << 14)
#define MC___OutputId_36                         (MCPARAMID)( 2460 << 14)
#define MC_OutputMaxId_36                        (MCPARAMID)( 2461 << 14)
#define MC_OutputState_Filter_36                 (MCPARAMID)( 2462 << 14)
#define MC_OutputStyle_Filter_36                 (MCPARAMID)( 2463 << 14)
#define MC_OutputState_36                        (MCPARAMID)( 2464 << 14)
#define MC_OutputState_36_HOLD                     1
#define MC_OutputState_36_LOW                      2
#define MC_OutputState_36_HIGH                     3
#define MC_OutputConfig_Filter_37                (MCPARAMID)( 2465 << 14)
#define MC___OutputId_37                         (MCPARAMID)( 2466 << 14)
#define MC_OutputMaxId_37                        (MCPARAMID)( 2467 << 14)
#define MC_OutputState_Filter_37                 (MCPARAMID)( 2468 << 14)
#define MC_OutputStyle_Filter_37                 (MCPARAMID)( 2469 << 14)
#define MC_OutputState_37                        (MCPARAMID)( 2470 << 14)
#define MC_OutputState_37_HOLD                     1
#define MC_OutputState_37_LOW                      2
#define MC_OutputState_37_HIGH                     3
#define MC___OutputId_38                         (MCPARAMID)( 2471 << 14)
#define MC_OutputMaxId_38                        (MCPARAMID)( 2472 << 14)
#define MC___OutputId_39                         (MCPARAMID)( 2473 << 14)
#define MC_OutputMaxId_39                        (MCPARAMID)( 2474 << 14)
#define MC_OutputConfig_Filter_40                (MCPARAMID)( 2475 << 14)
#define MC___OutputId_40                         (MCPARAMID)( 2476 << 14)
#define MC_OutputMaxId_40                        (MCPARAMID)( 2477 << 14)
#define MC_OutputState_Filter_40                 (MCPARAMID)( 2478 << 14)
#define MC_OutputStyle_Filter_40                 (MCPARAMID)( 2479 << 14)
#define MC_OutputState_40                        (MCPARAMID)( 2480 << 14)
#define MC_OutputState_40_HOLD                     1
#define MC_OutputState_40_LOW                      2
#define MC_OutputState_40_HIGH                     3
#define MC_OutputPinName_O1_0                     52
#define MC_OutputPinName_O2_0                     53
#define MC_OutputPinName_O3_0                     54
#define MC_OutputPinName_O4_0                     55
#define MC_OutputPinName_O1_1                     56
#define MC_OutputPinName_O2_1                     57
#define MC_OutputPinName_O3_1                     58
#define MC_OutputPinName_O4_1                     59
#define MC_OutputPinName_O1_2                     60
#define MC_OutputPinName_O2_2                     61
#define MC_OutputPinName_O3_2                     62
#define MC_OutputPinName_O4_2                     63
#define MC_OutputPinName_O1_3                     64
#define MC_OutputPinName_O2_3                     65
#define MC_OutputPinName_O3_3                     66
#define MC_OutputPinName_O4_3                     67
#define MC_OutputPinName_O1_4                     68
#define MC_OutputPinName_O2_4                     69
#define MC_OutputPinName_O3_4                     70
#define MC_OutputPinName_O4_4                     71
#define MC_ColorTrap                             (MCPARAMID)( 2481 << 14)
#define MC_ColorTrap_ENABLE                        1
#define MC_ColorTrap_DISABLE                       2
#define MC_ColorKiller                           (MCPARAMID)( 2482 << 14)
#define MC_ColorKiller_ENABLE                      1
#define MC_ColorKiller_DISABLE                     2
#define MC_DataCoring                            (MCPARAMID)( 2483 << 14)
#define MC_DataCoring_NONE                         1
#define MC_DataCoring_CORING8                      2
#define MC_DataCoring_CORING16                     3
#define MC_DataCoring_CORING32                     4
#define MC_DataRange                             (MCPARAMID)( 2484 << 14)
#define MC_DataRange_FULL                          1
#define MC_DataRange_RESTRICT                      2
#define MC_GammaRemoval                          (MCPARAMID)( 2485 << 14)
#define MC_GammaRemoval_ENABLE                     1
#define MC_GammaRemoval_DISABLE                    2
#define MC_MaxInputIndex                         (MCPARAMID)( 2486 << 14)
#define MC_MaxOutputIndex                        (MCPARAMID)( 2487 << 14)
#define MC_BoardTopology_1_11_0                   26
#define MC_BoardTopology_1_01_2                   27
#define MC_BoardTopology_1_2_0                    28
#define MC_Connector_YC                           36
#define MC_InputPinName_I1                        64
#define MC_InputPinName_I2                        65
#define MC_InputPinName_I3                        66
#define MC_InputPinName_I4                        67
#define MC_OutputPinName_O1                       72
#define MC_OutputPinName_O2                       73
#define MC_OutputPinName_O3                       74
#define MC_OutputPinName_O4                       75
#define MC_InputConfig_Filter_MC_MV0_IN1         (MCPARAMID)( 2488 << 14)
#define MC___InputId_MC_MV0_IN1                  (MCPARAMID)( 2489 << 14)
#define MC_InputMaxId_MC_MV0_IN1                 (MCPARAMID)( 2490 << 14)
#define MC_InputStyle_Filter_MC_MV0_IN1          (MCPARAMID)( 2491 << 14)
#define MC_InputConfig_Filter_MC_MV0_IN2         (MCPARAMID)( 2492 << 14)
#define MC___InputId_MC_MV0_IN2                  (MCPARAMID)( 2493 << 14)
#define MC_InputMaxId_MC_MV0_IN2                 (MCPARAMID)( 2494 << 14)
#define MC_InputStyle_Filter_MC_MV0_IN2          (MCPARAMID)( 2495 << 14)
#define MC_InputConfig_Filter_MC_MV0_IN3         (MCPARAMID)( 2496 << 14)
#define MC___InputId_MC_MV0_IN3                  (MCPARAMID)( 2497 << 14)
#define MC_InputMaxId_MC_MV0_IN3                 (MCPARAMID)( 2498 << 14)
#define MC_InputStyle_Filter_MC_MV0_IN3          (MCPARAMID)( 2499 << 14)
#define MC_InputConfig_Filter_MC_MV0_IN4         (MCPARAMID)( 2500 << 14)
#define MC___InputId_MC_MV0_IN4                  (MCPARAMID)( 2501 << 14)
#define MC_InputMaxId_MC_MV0_IN4                 (MCPARAMID)( 2502 << 14)
#define MC_InputStyle_Filter_MC_MV0_IN4          (MCPARAMID)( 2503 << 14)
#define MC_InputConfig_Filter_MC_MV0_IN5         (MCPARAMID)( 2504 << 14)
#define MC___InputId_MC_MV0_IN5                  (MCPARAMID)( 2505 << 14)
#define MC_InputMaxId_MC_MV0_IN5                 (MCPARAMID)( 2506 << 14)
#define MC_InputStyle_Filter_MC_MV0_IN5          (MCPARAMID)( 2507 << 14)
#define MC_InputConfig_Filter_MC_MV1_IN1         (MCPARAMID)( 2508 << 14)
#define MC___InputId_MC_MV1_IN1                  (MCPARAMID)( 2509 << 14)
#define MC_InputMaxId_MC_MV1_IN1                 (MCPARAMID)( 2510 << 14)
#define MC_InputStyle_Filter_MC_MV1_IN1          (MCPARAMID)( 2511 << 14)
#define MC_InputConfig_Filter_MC_MV1_IN2         (MCPARAMID)( 2512 << 14)
#define MC___InputId_MC_MV1_IN2                  (MCPARAMID)( 2513 << 14)
#define MC_InputMaxId_MC_MV1_IN2                 (MCPARAMID)( 2514 << 14)
#define MC_InputStyle_Filter_MC_MV1_IN2          (MCPARAMID)( 2515 << 14)
#define MC_InputConfig_Filter_MC_MV1_IN3         (MCPARAMID)( 2516 << 14)
#define MC___InputId_MC_MV1_IN3                  (MCPARAMID)( 2517 << 14)
#define MC_InputMaxId_MC_MV1_IN3                 (MCPARAMID)( 2518 << 14)
#define MC_InputStyle_Filter_MC_MV1_IN3          (MCPARAMID)( 2519 << 14)
#define MC_InputConfig_Filter_MC_MV1_IN4         (MCPARAMID)( 2520 << 14)
#define MC___InputId_MC_MV1_IN4                  (MCPARAMID)( 2521 << 14)
#define MC_InputMaxId_MC_MV1_IN4                 (MCPARAMID)( 2522 << 14)
#define MC_InputStyle_Filter_MC_MV1_IN4          (MCPARAMID)( 2523 << 14)
#define MC_InputConfig_Filter_MC_MV1_IN5         (MCPARAMID)( 2524 << 14)
#define MC___InputId_MC_MV1_IN5                  (MCPARAMID)( 2525 << 14)
#define MC_InputMaxId_MC_MV1_IN5                 (MCPARAMID)( 2526 << 14)
#define MC_InputStyle_Filter_MC_MV1_IN5          (MCPARAMID)( 2527 << 14)
#define MC_InputConfig_Filter_MC_MV2_IN1         (MCPARAMID)( 2528 << 14)
#define MC___InputId_MC_MV2_IN1                  (MCPARAMID)( 2529 << 14)
#define MC_InputMaxId_MC_MV2_IN1                 (MCPARAMID)( 2530 << 14)
#define MC_InputStyle_Filter_MC_MV2_IN1          (MCPARAMID)( 2531 << 14)
#define MC_InputConfig_Filter_MC_MV2_IN2         (MCPARAMID)( 2532 << 14)
#define MC___InputId_MC_MV2_IN2                  (MCPARAMID)( 2533 << 14)
#define MC_InputMaxId_MC_MV2_IN2                 (MCPARAMID)( 2534 << 14)
#define MC_InputStyle_Filter_MC_MV2_IN2          (MCPARAMID)( 2535 << 14)
#define MC_InputConfig_Filter_MC_MV2_IN3         (MCPARAMID)( 2536 << 14)
#define MC___InputId_MC_MV2_IN3                  (MCPARAMID)( 2537 << 14)
#define MC_InputMaxId_MC_MV2_IN3                 (MCPARAMID)( 2538 << 14)
#define MC_InputStyle_Filter_MC_MV2_IN3          (MCPARAMID)( 2539 << 14)
#define MC_InputConfig_Filter_MC_MV2_IN4         (MCPARAMID)( 2540 << 14)
#define MC___InputId_MC_MV2_IN4                  (MCPARAMID)( 2541 << 14)
#define MC_InputMaxId_MC_MV2_IN4                 (MCPARAMID)( 2542 << 14)
#define MC_InputStyle_Filter_MC_MV2_IN4          (MCPARAMID)( 2543 << 14)
#define MC_InputConfig_Filter_MC_MV2_IN5         (MCPARAMID)( 2544 << 14)
#define MC___InputId_MC_MV2_IN5                  (MCPARAMID)( 2545 << 14)
#define MC_InputMaxId_MC_MV2_IN5                 (MCPARAMID)( 2546 << 14)
#define MC_InputStyle_Filter_MC_MV2_IN5          (MCPARAMID)( 2547 << 14)
#define MC_InputConfig_Filter_MC_MIO0_IN1        (MCPARAMID)( 2548 << 14)
#define MC___InputId_MC_MIO0_IN1                 (MCPARAMID)( 2549 << 14)
#define MC_InputMaxId_MC_MIO0_IN1                (MCPARAMID)( 2550 << 14)
#define MC_InputStyle_Filter_MC_MIO0_IN1         (MCPARAMID)( 2551 << 14)
#define MC_InputConfig_Filter_MC_MIO0_IN2        (MCPARAMID)( 2552 << 14)
#define MC___InputId_MC_MIO0_IN2                 (MCPARAMID)( 2553 << 14)
#define MC_InputMaxId_MC_MIO0_IN2                (MCPARAMID)( 2554 << 14)
#define MC_InputStyle_Filter_MC_MIO0_IN2         (MCPARAMID)( 2555 << 14)
#define MC_InputConfig_Filter_MC_MIO0_IN3        (MCPARAMID)( 2556 << 14)
#define MC___InputId_MC_MIO0_IN3                 (MCPARAMID)( 2557 << 14)
#define MC_InputMaxId_MC_MIO0_IN3                (MCPARAMID)( 2558 << 14)
#define MC_InputStyle_Filter_MC_MIO0_IN3         (MCPARAMID)( 2559 << 14)
#define MC_InputConfig_Filter_MC_MIO0_IN4        (MCPARAMID)( 2560 << 14)
#define MC___InputId_MC_MIO0_IN4                 (MCPARAMID)( 2561 << 14)
#define MC_InputMaxId_MC_MIO0_IN4                (MCPARAMID)( 2562 << 14)
#define MC_InputStyle_Filter_MC_MIO0_IN4         (MCPARAMID)( 2563 << 14)
#define MC_InputConfig_Filter_MC_MIO1_IN1        (MCPARAMID)( 2564 << 14)
#define MC___InputId_MC_MIO1_IN1                 (MCPARAMID)( 2565 << 14)
#define MC_InputMaxId_MC_MIO1_IN1                (MCPARAMID)( 2566 << 14)
#define MC_InputStyle_Filter_MC_MIO1_IN1         (MCPARAMID)( 2567 << 14)
#define MC_InputConfig_Filter_MC_MIO1_IN2        (MCPARAMID)( 2568 << 14)
#define MC___InputId_MC_MIO1_IN2                 (MCPARAMID)( 2569 << 14)
#define MC_InputMaxId_MC_MIO1_IN2                (MCPARAMID)( 2570 << 14)
#define MC_InputStyle_Filter_MC_MIO1_IN2         (MCPARAMID)( 2571 << 14)
#define MC_InputConfig_Filter_MC_MIO1_IN3        (MCPARAMID)( 2572 << 14)
#define MC___InputId_MC_MIO1_IN3                 (MCPARAMID)( 2573 << 14)
#define MC_InputMaxId_MC_MIO1_IN3                (MCPARAMID)( 2574 << 14)
#define MC_InputStyle_Filter_MC_MIO1_IN3         (MCPARAMID)( 2575 << 14)
#define MC_InputConfig_Filter_MC_MIO1_IN4        (MCPARAMID)( 2576 << 14)
#define MC___InputId_MC_MIO1_IN4                 (MCPARAMID)( 2577 << 14)
#define MC_InputMaxId_MC_MIO1_IN4                (MCPARAMID)( 2578 << 14)
#define MC_InputStyle_Filter_MC_MIO1_IN4         (MCPARAMID)( 2579 << 14)
#define MC_InputConfig_Filter_MC_MIO2_IN1        (MCPARAMID)( 2580 << 14)
#define MC___InputId_MC_MIO2_IN1                 (MCPARAMID)( 2581 << 14)
#define MC_InputMaxId_MC_MIO2_IN1                (MCPARAMID)( 2582 << 14)
#define MC_InputStyle_Filter_MC_MIO2_IN1         (MCPARAMID)( 2583 << 14)
#define MC_InputConfig_Filter_MC_MIO2_IN2        (MCPARAMID)( 2584 << 14)
#define MC___InputId_MC_MIO2_IN2                 (MCPARAMID)( 2585 << 14)
#define MC_InputMaxId_MC_MIO2_IN2                (MCPARAMID)( 2586 << 14)
#define MC_InputStyle_Filter_MC_MIO2_IN2         (MCPARAMID)( 2587 << 14)
#define MC_InputConfig_Filter_MC_MIO2_IN3        (MCPARAMID)( 2588 << 14)
#define MC___InputId_MC_MIO2_IN3                 (MCPARAMID)( 2589 << 14)
#define MC_InputMaxId_MC_MIO2_IN3                (MCPARAMID)( 2590 << 14)
#define MC_InputStyle_Filter_MC_MIO2_IN3         (MCPARAMID)( 2591 << 14)
#define MC_InputConfig_Filter_MC_MIO2_IN4        (MCPARAMID)( 2592 << 14)
#define MC___InputId_MC_MIO2_IN4                 (MCPARAMID)( 2593 << 14)
#define MC_InputMaxId_MC_MIO2_IN4                (MCPARAMID)( 2594 << 14)
#define MC_InputStyle_Filter_MC_MIO2_IN4         (MCPARAMID)( 2595 << 14)
#define MC_InputConfig_Filter_MC_MIO3_IN1        (MCPARAMID)( 2596 << 14)
#define MC___InputId_MC_MIO3_IN1                 (MCPARAMID)( 2597 << 14)
#define MC_InputMaxId_MC_MIO3_IN1                (MCPARAMID)( 2598 << 14)
#define MC_InputStyle_Filter_MC_MIO3_IN1         (MCPARAMID)( 2599 << 14)
#define MC_InputConfig_Filter_MC_MIO3_IN2        (MCPARAMID)( 2600 << 14)
#define MC___InputId_MC_MIO3_IN2                 (MCPARAMID)( 2601 << 14)
#define MC_InputMaxId_MC_MIO3_IN2                (MCPARAMID)( 2602 << 14)
#define MC_InputStyle_Filter_MC_MIO3_IN2         (MCPARAMID)( 2603 << 14)
#define MC_InputConfig_Filter_MC_MIO3_IN3        (MCPARAMID)( 2604 << 14)
#define MC___InputId_MC_MIO3_IN3                 (MCPARAMID)( 2605 << 14)
#define MC_InputMaxId_MC_MIO3_IN3                (MCPARAMID)( 2606 << 14)
#define MC_InputStyle_Filter_MC_MIO3_IN3         (MCPARAMID)( 2607 << 14)
#define MC_InputConfig_Filter_MC_MIO3_IN4        (MCPARAMID)( 2608 << 14)
#define MC___InputId_MC_MIO3_IN4                 (MCPARAMID)( 2609 << 14)
#define MC_InputMaxId_MC_MIO3_IN4                (MCPARAMID)( 2610 << 14)
#define MC_InputStyle_Filter_MC_MIO3_IN4         (MCPARAMID)( 2611 << 14)
#define MC_InputConfig_Filter_MC_MIO4_IN1        (MCPARAMID)( 2612 << 14)
#define MC___InputId_MC_MIO4_IN1                 (MCPARAMID)( 2613 << 14)
#define MC_InputMaxId_MC_MIO4_IN1                (MCPARAMID)( 2614 << 14)
#define MC_InputStyle_Filter_MC_MIO4_IN1         (MCPARAMID)( 2615 << 14)
#define MC_InputConfig_Filter_MC_MIO4_IN2        (MCPARAMID)( 2616 << 14)
#define MC___InputId_MC_MIO4_IN2                 (MCPARAMID)( 2617 << 14)
#define MC_InputMaxId_MC_MIO4_IN2                (MCPARAMID)( 2618 << 14)
#define MC_InputStyle_Filter_MC_MIO4_IN2         (MCPARAMID)( 2619 << 14)
#define MC_InputConfig_Filter_MC_MIO4_IN3        (MCPARAMID)( 2620 << 14)
#define MC___InputId_MC_MIO4_IN3                 (MCPARAMID)( 2621 << 14)
#define MC_InputMaxId_MC_MIO4_IN3                (MCPARAMID)( 2622 << 14)
#define MC_InputStyle_Filter_MC_MIO4_IN3         (MCPARAMID)( 2623 << 14)
#define MC_InputConfig_Filter_MC_MIO4_IN4        (MCPARAMID)( 2624 << 14)
#define MC___InputId_MC_MIO4_IN4                 (MCPARAMID)( 2625 << 14)
#define MC_InputMaxId_MC_MIO4_IN4                (MCPARAMID)( 2626 << 14)
#define MC_InputStyle_Filter_MC_MIO4_IN4         (MCPARAMID)( 2627 << 14)
#define MC_OutputConfig_Filter_MC_MV0_OUT1       (MCPARAMID)( 2628 << 14)
#define MC___OutputId_MC_MV0_OUT1                (MCPARAMID)( 2629 << 14)
#define MC_OutputMaxId_MC_MV0_OUT1               (MCPARAMID)( 2630 << 14)
#define MC_OutputState_Filter_MC_MV0_OUT1        (MCPARAMID)( 2631 << 14)
#define MC_OutputStyle_Filter_MC_MV0_OUT1        (MCPARAMID)( 2632 << 14)
#define MC_OutputState_MC_MV0_OUT1               (MCPARAMID)( 2633 << 14)
#define MC_OutputState_MC_MV0_OUT1_HOLD            1
#define MC_OutputState_MC_MV0_OUT1_LOW             2
#define MC_OutputState_MC_MV0_OUT1_HIGH            3
#define MC_OutputConfig_Filter_MC_MV0_OUT2       (MCPARAMID)( 2634 << 14)
#define MC___OutputId_MC_MV0_OUT2                (MCPARAMID)( 2635 << 14)
#define MC_OutputMaxId_MC_MV0_OUT2               (MCPARAMID)( 2636 << 14)
#define MC_OutputState_Filter_MC_MV0_OUT2        (MCPARAMID)( 2637 << 14)
#define MC_OutputStyle_Filter_MC_MV0_OUT2        (MCPARAMID)( 2638 << 14)
#define MC_OutputState_MC_MV0_OUT2               (MCPARAMID)( 2639 << 14)
#define MC_OutputState_MC_MV0_OUT2_HOLD            1
#define MC_OutputState_MC_MV0_OUT2_LOW             2
#define MC_OutputState_MC_MV0_OUT2_HIGH            3
#define MC_OutputConfig_Filter_MC_MV0_OUT3       (MCPARAMID)( 2640 << 14)
#define MC___OutputId_MC_MV0_OUT3                (MCPARAMID)( 2641 << 14)
#define MC_OutputMaxId_MC_MV0_OUT3               (MCPARAMID)( 2642 << 14)
#define MC_OutputState_Filter_MC_MV0_OUT3        (MCPARAMID)( 2643 << 14)
#define MC_OutputStyle_Filter_MC_MV0_OUT3        (MCPARAMID)( 2644 << 14)
#define MC_OutputState_MC_MV0_OUT3               (MCPARAMID)( 2645 << 14)
#define MC_OutputState_MC_MV0_OUT3_HOLD            1
#define MC_OutputState_MC_MV0_OUT3_LOW             2
#define MC_OutputState_MC_MV0_OUT3_HIGH            3
#define MC_OutputConfig_Filter_MC_MV0_OUT4       (MCPARAMID)( 2646 << 14)
#define MC___OutputId_MC_MV0_OUT4                (MCPARAMID)( 2647 << 14)
#define MC_OutputMaxId_MC_MV0_OUT4               (MCPARAMID)( 2648 << 14)
#define MC_OutputState_Filter_MC_MV0_OUT4        (MCPARAMID)( 2649 << 14)
#define MC_OutputStyle_Filter_MC_MV0_OUT4        (MCPARAMID)( 2650 << 14)
#define MC_OutputState_MC_MV0_OUT4               (MCPARAMID)( 2651 << 14)
#define MC_OutputState_MC_MV0_OUT4_HOLD            1
#define MC_OutputState_MC_MV0_OUT4_LOW             2
#define MC_OutputState_MC_MV0_OUT4_HIGH            3
#define MC_OutputConfig_Filter_MC_MV0_OUT5       (MCPARAMID)( 2652 << 14)
#define MC___OutputId_MC_MV0_OUT5                (MCPARAMID)( 2653 << 14)
#define MC_OutputMaxId_MC_MV0_OUT5               (MCPARAMID)( 2654 << 14)
#define MC_OutputState_Filter_MC_MV0_OUT5        (MCPARAMID)( 2655 << 14)
#define MC_OutputStyle_Filter_MC_MV0_OUT5        (MCPARAMID)( 2656 << 14)
#define MC_OutputState_MC_MV0_OUT5               (MCPARAMID)( 2657 << 14)
#define MC_OutputState_MC_MV0_OUT5_HOLD            1
#define MC_OutputState_MC_MV0_OUT5_LOW             2
#define MC_OutputState_MC_MV0_OUT5_HIGH            3
#define MC_OutputConfig_Filter_MC_MV1_OUT1       (MCPARAMID)( 2658 << 14)
#define MC___OutputId_MC_MV1_OUT1                (MCPARAMID)( 2659 << 14)
#define MC_OutputMaxId_MC_MV1_OUT1               (MCPARAMID)( 2660 << 14)
#define MC_OutputState_Filter_MC_MV1_OUT1        (MCPARAMID)( 2661 << 14)
#define MC_OutputStyle_Filter_MC_MV1_OUT1        (MCPARAMID)( 2662 << 14)
#define MC_OutputState_MC_MV1_OUT1               (MCPARAMID)( 2663 << 14)
#define MC_OutputState_MC_MV1_OUT1_HOLD            1
#define MC_OutputState_MC_MV1_OUT1_LOW             2
#define MC_OutputState_MC_MV1_OUT1_HIGH            3
#define MC_OutputConfig_Filter_MC_MV1_OUT2       (MCPARAMID)( 2664 << 14)
#define MC___OutputId_MC_MV1_OUT2                (MCPARAMID)( 2665 << 14)
#define MC_OutputMaxId_MC_MV1_OUT2               (MCPARAMID)( 2666 << 14)
#define MC_OutputState_Filter_MC_MV1_OUT2        (MCPARAMID)( 2667 << 14)
#define MC_OutputStyle_Filter_MC_MV1_OUT2        (MCPARAMID)( 2668 << 14)
#define MC_OutputState_MC_MV1_OUT2               (MCPARAMID)( 2669 << 14)
#define MC_OutputState_MC_MV1_OUT2_HOLD            1
#define MC_OutputState_MC_MV1_OUT2_LOW             2
#define MC_OutputState_MC_MV1_OUT2_HIGH            3
#define MC_OutputConfig_Filter_MC_MV1_OUT3       (MCPARAMID)( 2670 << 14)
#define MC___OutputId_MC_MV1_OUT3                (MCPARAMID)( 2671 << 14)
#define MC_OutputMaxId_MC_MV1_OUT3               (MCPARAMID)( 2672 << 14)
#define MC_OutputState_Filter_MC_MV1_OUT3        (MCPARAMID)( 2673 << 14)
#define MC_OutputStyle_Filter_MC_MV1_OUT3        (MCPARAMID)( 2674 << 14)
#define MC_OutputState_MC_MV1_OUT3               (MCPARAMID)( 2675 << 14)
#define MC_OutputState_MC_MV1_OUT3_HOLD            1
#define MC_OutputState_MC_MV1_OUT3_LOW             2
#define MC_OutputState_MC_MV1_OUT3_HIGH            3
#define MC_OutputConfig_Filter_MC_MV1_OUT4       (MCPARAMID)( 2676 << 14)
#define MC___OutputId_MC_MV1_OUT4                (MCPARAMID)( 2677 << 14)
#define MC_OutputMaxId_MC_MV1_OUT4               (MCPARAMID)( 2678 << 14)
#define MC_OutputState_Filter_MC_MV1_OUT4        (MCPARAMID)( 2679 << 14)
#define MC_OutputStyle_Filter_MC_MV1_OUT4        (MCPARAMID)( 2680 << 14)
#define MC_OutputState_MC_MV1_OUT4               (MCPARAMID)( 2681 << 14)
#define MC_OutputState_MC_MV1_OUT4_HOLD            1
#define MC_OutputState_MC_MV1_OUT4_LOW             2
#define MC_OutputState_MC_MV1_OUT4_HIGH            3
#define MC_OutputConfig_Filter_MC_MV1_OUT5       (MCPARAMID)( 2682 << 14)
#define MC___OutputId_MC_MV1_OUT5                (MCPARAMID)( 2683 << 14)
#define MC_OutputMaxId_MC_MV1_OUT5               (MCPARAMID)( 2684 << 14)
#define MC_OutputState_Filter_MC_MV1_OUT5        (MCPARAMID)( 2685 << 14)
#define MC_OutputStyle_Filter_MC_MV1_OUT5        (MCPARAMID)( 2686 << 14)
#define MC_OutputState_MC_MV1_OUT5               (MCPARAMID)( 2687 << 14)
#define MC_OutputState_MC_MV1_OUT5_HOLD            1
#define MC_OutputState_MC_MV1_OUT5_LOW             2
#define MC_OutputState_MC_MV1_OUT5_HIGH            3
#define MC_OutputConfig_Filter_MC_MV2_OUT1       (MCPARAMID)( 2688 << 14)
#define MC___OutputId_MC_MV2_OUT1                (MCPARAMID)( 2689 << 14)
#define MC_OutputMaxId_MC_MV2_OUT1               (MCPARAMID)( 2690 << 14)
#define MC_OutputState_Filter_MC_MV2_OUT1        (MCPARAMID)( 2691 << 14)
#define MC_OutputStyle_Filter_MC_MV2_OUT1        (MCPARAMID)( 2692 << 14)
#define MC_OutputState_MC_MV2_OUT1               (MCPARAMID)( 2693 << 14)
#define MC_OutputState_MC_MV2_OUT1_HOLD            1
#define MC_OutputState_MC_MV2_OUT1_LOW             2
#define MC_OutputState_MC_MV2_OUT1_HIGH            3
#define MC_OutputConfig_Filter_MC_MV2_OUT2       (MCPARAMID)( 2694 << 14)
#define MC___OutputId_MC_MV2_OUT2                (MCPARAMID)( 2695 << 14)
#define MC_OutputMaxId_MC_MV2_OUT2               (MCPARAMID)( 2696 << 14)
#define MC_OutputState_Filter_MC_MV2_OUT2        (MCPARAMID)( 2697 << 14)
#define MC_OutputStyle_Filter_MC_MV2_OUT2        (MCPARAMID)( 2698 << 14)
#define MC_OutputState_MC_MV2_OUT2               (MCPARAMID)( 2699 << 14)
#define MC_OutputState_MC_MV2_OUT2_HOLD            1
#define MC_OutputState_MC_MV2_OUT2_LOW             2
#define MC_OutputState_MC_MV2_OUT2_HIGH            3
#define MC_OutputConfig_Filter_MC_MV2_OUT3       (MCPARAMID)( 2700 << 14)
#define MC___OutputId_MC_MV2_OUT3                (MCPARAMID)( 2701 << 14)
#define MC_OutputMaxId_MC_MV2_OUT3               (MCPARAMID)( 2702 << 14)
#define MC_OutputState_Filter_MC_MV2_OUT3        (MCPARAMID)( 2703 << 14)
#define MC_OutputStyle_Filter_MC_MV2_OUT3        (MCPARAMID)( 2704 << 14)
#define MC_OutputState_MC_MV2_OUT3               (MCPARAMID)( 2705 << 14)
#define MC_OutputState_MC_MV2_OUT3_HOLD            1
#define MC_OutputState_MC_MV2_OUT3_LOW             2
#define MC_OutputState_MC_MV2_OUT3_HIGH            3
#define MC_OutputConfig_Filter_MC_MV2_OUT4       (MCPARAMID)( 2706 << 14)
#define MC___OutputId_MC_MV2_OUT4                (MCPARAMID)( 2707 << 14)
#define MC_OutputMaxId_MC_MV2_OUT4               (MCPARAMID)( 2708 << 14)
#define MC_OutputState_Filter_MC_MV2_OUT4        (MCPARAMID)( 2709 << 14)
#define MC_OutputStyle_Filter_MC_MV2_OUT4        (MCPARAMID)( 2710 << 14)
#define MC_OutputState_MC_MV2_OUT4               (MCPARAMID)( 2711 << 14)
#define MC_OutputState_MC_MV2_OUT4_HOLD            1
#define MC_OutputState_MC_MV2_OUT4_LOW             2
#define MC_OutputState_MC_MV2_OUT4_HIGH            3
#define MC_OutputConfig_Filter_MC_MV2_OUT5       (MCPARAMID)( 2712 << 14)
#define MC___OutputId_MC_MV2_OUT5                (MCPARAMID)( 2713 << 14)
#define MC_OutputMaxId_MC_MV2_OUT5               (MCPARAMID)( 2714 << 14)
#define MC_OutputState_Filter_MC_MV2_OUT5        (MCPARAMID)( 2715 << 14)
#define MC_OutputStyle_Filter_MC_MV2_OUT5        (MCPARAMID)( 2716 << 14)
#define MC_OutputState_MC_MV2_OUT5               (MCPARAMID)( 2717 << 14)
#define MC_OutputState_MC_MV2_OUT5_HOLD            1
#define MC_OutputState_MC_MV2_OUT5_LOW             2
#define MC_OutputState_MC_MV2_OUT5_HIGH            3
#define MC_OutputConfig_Filter_MC_MIO0_OUT1      (MCPARAMID)( 2718 << 14)
#define MC___OutputId_MC_MIO0_OUT1               (MCPARAMID)( 2719 << 14)
#define MC_OutputMaxId_MC_MIO0_OUT1              (MCPARAMID)( 2720 << 14)
#define MC_OutputState_Filter_MC_MIO0_OUT1       (MCPARAMID)( 2721 << 14)
#define MC_OutputStyle_Filter_MC_MIO0_OUT1       (MCPARAMID)( 2722 << 14)
#define MC_OutputState_MC_MIO0_OUT1              (MCPARAMID)( 2723 << 14)
#define MC_OutputState_MC_MIO0_OUT1_HOLD           1
#define MC_OutputState_MC_MIO0_OUT1_LOW            2
#define MC_OutputState_MC_MIO0_OUT1_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO0_OUT2      (MCPARAMID)( 2724 << 14)
#define MC___OutputId_MC_MIO0_OUT2               (MCPARAMID)( 2725 << 14)
#define MC_OutputMaxId_MC_MIO0_OUT2              (MCPARAMID)( 2726 << 14)
#define MC_OutputState_Filter_MC_MIO0_OUT2       (MCPARAMID)( 2727 << 14)
#define MC_OutputStyle_Filter_MC_MIO0_OUT2       (MCPARAMID)( 2728 << 14)
#define MC_OutputState_MC_MIO0_OUT2              (MCPARAMID)( 2729 << 14)
#define MC_OutputState_MC_MIO0_OUT2_HOLD           1
#define MC_OutputState_MC_MIO0_OUT2_LOW            2
#define MC_OutputState_MC_MIO0_OUT2_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO0_OUT3      (MCPARAMID)( 2730 << 14)
#define MC___OutputId_MC_MIO0_OUT3               (MCPARAMID)( 2731 << 14)
#define MC_OutputMaxId_MC_MIO0_OUT3              (MCPARAMID)( 2732 << 14)
#define MC_OutputState_Filter_MC_MIO0_OUT3       (MCPARAMID)( 2733 << 14)
#define MC_OutputStyle_Filter_MC_MIO0_OUT3       (MCPARAMID)( 2734 << 14)
#define MC_OutputState_MC_MIO0_OUT3              (MCPARAMID)( 2735 << 14)
#define MC_OutputState_MC_MIO0_OUT3_HOLD           1
#define MC_OutputState_MC_MIO0_OUT3_LOW            2
#define MC_OutputState_MC_MIO0_OUT3_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO0_OUT4      (MCPARAMID)( 2736 << 14)
#define MC___OutputId_MC_MIO0_OUT4               (MCPARAMID)( 2737 << 14)
#define MC_OutputMaxId_MC_MIO0_OUT4              (MCPARAMID)( 2738 << 14)
#define MC_OutputState_Filter_MC_MIO0_OUT4       (MCPARAMID)( 2739 << 14)
#define MC_OutputStyle_Filter_MC_MIO0_OUT4       (MCPARAMID)( 2740 << 14)
#define MC_OutputState_MC_MIO0_OUT4              (MCPARAMID)( 2741 << 14)
#define MC_OutputState_MC_MIO0_OUT4_HOLD           1
#define MC_OutputState_MC_MIO0_OUT4_LOW            2
#define MC_OutputState_MC_MIO0_OUT4_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO1_OUT1      (MCPARAMID)( 2742 << 14)
#define MC___OutputId_MC_MIO1_OUT1               (MCPARAMID)( 2743 << 14)
#define MC_OutputMaxId_MC_MIO1_OUT1              (MCPARAMID)( 2744 << 14)
#define MC_OutputState_Filter_MC_MIO1_OUT1       (MCPARAMID)( 2745 << 14)
#define MC_OutputStyle_Filter_MC_MIO1_OUT1       (MCPARAMID)( 2746 << 14)
#define MC_OutputState_MC_MIO1_OUT1              (MCPARAMID)( 2747 << 14)
#define MC_OutputState_MC_MIO1_OUT1_HOLD           1
#define MC_OutputState_MC_MIO1_OUT1_LOW            2
#define MC_OutputState_MC_MIO1_OUT1_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO1_OUT2      (MCPARAMID)( 2748 << 14)
#define MC___OutputId_MC_MIO1_OUT2               (MCPARAMID)( 2749 << 14)
#define MC_OutputMaxId_MC_MIO1_OUT2              (MCPARAMID)( 2750 << 14)
#define MC_OutputState_Filter_MC_MIO1_OUT2       (MCPARAMID)( 2751 << 14)
#define MC_OutputStyle_Filter_MC_MIO1_OUT2       (MCPARAMID)( 2752 << 14)
#define MC_OutputState_MC_MIO1_OUT2              (MCPARAMID)( 2753 << 14)
#define MC_OutputState_MC_MIO1_OUT2_HOLD           1
#define MC_OutputState_MC_MIO1_OUT2_LOW            2
#define MC_OutputState_MC_MIO1_OUT2_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO1_OUT3      (MCPARAMID)( 2754 << 14)
#define MC___OutputId_MC_MIO1_OUT3               (MCPARAMID)( 2755 << 14)
#define MC_OutputMaxId_MC_MIO1_OUT3              (MCPARAMID)( 2756 << 14)
#define MC_OutputState_Filter_MC_MIO1_OUT3       (MCPARAMID)( 2757 << 14)
#define MC_OutputStyle_Filter_MC_MIO1_OUT3       (MCPARAMID)( 2758 << 14)
#define MC_OutputState_MC_MIO1_OUT3              (MCPARAMID)( 2759 << 14)
#define MC_OutputState_MC_MIO1_OUT3_HOLD           1
#define MC_OutputState_MC_MIO1_OUT3_LOW            2
#define MC_OutputState_MC_MIO1_OUT3_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO1_OUT4      (MCPARAMID)( 2760 << 14)
#define MC___OutputId_MC_MIO1_OUT4               (MCPARAMID)( 2761 << 14)
#define MC_OutputMaxId_MC_MIO1_OUT4              (MCPARAMID)( 2762 << 14)
#define MC_OutputState_Filter_MC_MIO1_OUT4       (MCPARAMID)( 2763 << 14)
#define MC_OutputStyle_Filter_MC_MIO1_OUT4       (MCPARAMID)( 2764 << 14)
#define MC_OutputState_MC_MIO1_OUT4              (MCPARAMID)( 2765 << 14)
#define MC_OutputState_MC_MIO1_OUT4_HOLD           1
#define MC_OutputState_MC_MIO1_OUT4_LOW            2
#define MC_OutputState_MC_MIO1_OUT4_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO2_OUT1      (MCPARAMID)( 2766 << 14)
#define MC___OutputId_MC_MIO2_OUT1               (MCPARAMID)( 2767 << 14)
#define MC_OutputMaxId_MC_MIO2_OUT1              (MCPARAMID)( 2768 << 14)
#define MC_OutputState_Filter_MC_MIO2_OUT1       (MCPARAMID)( 2769 << 14)
#define MC_OutputStyle_Filter_MC_MIO2_OUT1       (MCPARAMID)( 2770 << 14)
#define MC_OutputState_MC_MIO2_OUT1              (MCPARAMID)( 2771 << 14)
#define MC_OutputState_MC_MIO2_OUT1_HOLD           1
#define MC_OutputState_MC_MIO2_OUT1_LOW            2
#define MC_OutputState_MC_MIO2_OUT1_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO2_OUT2      (MCPARAMID)( 2772 << 14)
#define MC___OutputId_MC_MIO2_OUT2               (MCPARAMID)( 2773 << 14)
#define MC_OutputMaxId_MC_MIO2_OUT2              (MCPARAMID)( 2774 << 14)
#define MC_OutputState_Filter_MC_MIO2_OUT2       (MCPARAMID)( 2775 << 14)
#define MC_OutputStyle_Filter_MC_MIO2_OUT2       (MCPARAMID)( 2776 << 14)
#define MC_OutputState_MC_MIO2_OUT2              (MCPARAMID)( 2777 << 14)
#define MC_OutputState_MC_MIO2_OUT2_HOLD           1
#define MC_OutputState_MC_MIO2_OUT2_LOW            2
#define MC_OutputState_MC_MIO2_OUT2_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO2_OUT3      (MCPARAMID)( 2778 << 14)
#define MC___OutputId_MC_MIO2_OUT3               (MCPARAMID)( 2779 << 14)
#define MC_OutputMaxId_MC_MIO2_OUT3              (MCPARAMID)( 2780 << 14)
#define MC_OutputState_Filter_MC_MIO2_OUT3       (MCPARAMID)( 2781 << 14)
#define MC_OutputStyle_Filter_MC_MIO2_OUT3       (MCPARAMID)( 2782 << 14)
#define MC_OutputState_MC_MIO2_OUT3              (MCPARAMID)( 2783 << 14)
#define MC_OutputState_MC_MIO2_OUT3_HOLD           1
#define MC_OutputState_MC_MIO2_OUT3_LOW            2
#define MC_OutputState_MC_MIO2_OUT3_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO2_OUT4      (MCPARAMID)( 2784 << 14)
#define MC___OutputId_MC_MIO2_OUT4               (MCPARAMID)( 2785 << 14)
#define MC_OutputMaxId_MC_MIO2_OUT4              (MCPARAMID)( 2786 << 14)
#define MC_OutputState_Filter_MC_MIO2_OUT4       (MCPARAMID)( 2787 << 14)
#define MC_OutputStyle_Filter_MC_MIO2_OUT4       (MCPARAMID)( 2788 << 14)
#define MC_OutputState_MC_MIO2_OUT4              (MCPARAMID)( 2789 << 14)
#define MC_OutputState_MC_MIO2_OUT4_HOLD           1
#define MC_OutputState_MC_MIO2_OUT4_LOW            2
#define MC_OutputState_MC_MIO2_OUT4_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO3_OUT1      (MCPARAMID)( 2790 << 14)
#define MC___OutputId_MC_MIO3_OUT1               (MCPARAMID)( 2791 << 14)
#define MC_OutputMaxId_MC_MIO3_OUT1              (MCPARAMID)( 2792 << 14)
#define MC_OutputState_Filter_MC_MIO3_OUT1       (MCPARAMID)( 2793 << 14)
#define MC_OutputStyle_Filter_MC_MIO3_OUT1       (MCPARAMID)( 2794 << 14)
#define MC_OutputState_MC_MIO3_OUT1              (MCPARAMID)( 2795 << 14)
#define MC_OutputState_MC_MIO3_OUT1_HOLD           1
#define MC_OutputState_MC_MIO3_OUT1_LOW            2
#define MC_OutputState_MC_MIO3_OUT1_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO3_OUT2      (MCPARAMID)( 2796 << 14)
#define MC___OutputId_MC_MIO3_OUT2               (MCPARAMID)( 2797 << 14)
#define MC_OutputMaxId_MC_MIO3_OUT2              (MCPARAMID)( 2798 << 14)
#define MC_OutputState_Filter_MC_MIO3_OUT2       (MCPARAMID)( 2799 << 14)
#define MC_OutputStyle_Filter_MC_MIO3_OUT2       (MCPARAMID)( 2800 << 14)
#define MC_OutputState_MC_MIO3_OUT2              (MCPARAMID)( 2801 << 14)
#define MC_OutputState_MC_MIO3_OUT2_HOLD           1
#define MC_OutputState_MC_MIO3_OUT2_LOW            2
#define MC_OutputState_MC_MIO3_OUT2_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO3_OUT3      (MCPARAMID)( 2802 << 14)
#define MC___OutputId_MC_MIO3_OUT3               (MCPARAMID)( 2803 << 14)
#define MC_OutputMaxId_MC_MIO3_OUT3              (MCPARAMID)( 2804 << 14)
#define MC_OutputState_Filter_MC_MIO3_OUT3       (MCPARAMID)( 2805 << 14)
#define MC_OutputStyle_Filter_MC_MIO3_OUT3       (MCPARAMID)( 2806 << 14)
#define MC_OutputState_MC_MIO3_OUT3              (MCPARAMID)( 2807 << 14)
#define MC_OutputState_MC_MIO3_OUT3_HOLD           1
#define MC_OutputState_MC_MIO3_OUT3_LOW            2
#define MC_OutputState_MC_MIO3_OUT3_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO3_OUT4      (MCPARAMID)( 2808 << 14)
#define MC___OutputId_MC_MIO3_OUT4               (MCPARAMID)( 2809 << 14)
#define MC_OutputMaxId_MC_MIO3_OUT4              (MCPARAMID)( 2810 << 14)
#define MC_OutputState_Filter_MC_MIO3_OUT4       (MCPARAMID)( 2811 << 14)
#define MC_OutputStyle_Filter_MC_MIO3_OUT4       (MCPARAMID)( 2812 << 14)
#define MC_OutputState_MC_MIO3_OUT4              (MCPARAMID)( 2813 << 14)
#define MC_OutputState_MC_MIO3_OUT4_HOLD           1
#define MC_OutputState_MC_MIO3_OUT4_LOW            2
#define MC_OutputState_MC_MIO3_OUT4_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO4_OUT1      (MCPARAMID)( 2814 << 14)
#define MC___OutputId_MC_MIO4_OUT1               (MCPARAMID)( 2815 << 14)
#define MC_OutputMaxId_MC_MIO4_OUT1              (MCPARAMID)( 2816 << 14)
#define MC_OutputState_Filter_MC_MIO4_OUT1       (MCPARAMID)( 2817 << 14)
#define MC_OutputStyle_Filter_MC_MIO4_OUT1       (MCPARAMID)( 2818 << 14)
#define MC_OutputState_MC_MIO4_OUT1              (MCPARAMID)( 2819 << 14)
#define MC_OutputState_MC_MIO4_OUT1_HOLD           1
#define MC_OutputState_MC_MIO4_OUT1_LOW            2
#define MC_OutputState_MC_MIO4_OUT1_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO4_OUT2      (MCPARAMID)( 2820 << 14)
#define MC___OutputId_MC_MIO4_OUT2               (MCPARAMID)( 2821 << 14)
#define MC_OutputMaxId_MC_MIO4_OUT2              (MCPARAMID)( 2822 << 14)
#define MC_OutputState_Filter_MC_MIO4_OUT2       (MCPARAMID)( 2823 << 14)
#define MC_OutputStyle_Filter_MC_MIO4_OUT2       (MCPARAMID)( 2824 << 14)
#define MC_OutputState_MC_MIO4_OUT2              (MCPARAMID)( 2825 << 14)
#define MC_OutputState_MC_MIO4_OUT2_HOLD           1
#define MC_OutputState_MC_MIO4_OUT2_LOW            2
#define MC_OutputState_MC_MIO4_OUT2_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO4_OUT3      (MCPARAMID)( 2826 << 14)
#define MC___OutputId_MC_MIO4_OUT3               (MCPARAMID)( 2827 << 14)
#define MC_OutputMaxId_MC_MIO4_OUT3              (MCPARAMID)( 2828 << 14)
#define MC_OutputState_Filter_MC_MIO4_OUT3       (MCPARAMID)( 2829 << 14)
#define MC_OutputStyle_Filter_MC_MIO4_OUT3       (MCPARAMID)( 2830 << 14)
#define MC_OutputState_MC_MIO4_OUT3              (MCPARAMID)( 2831 << 14)
#define MC_OutputState_MC_MIO4_OUT3_HOLD           1
#define MC_OutputState_MC_MIO4_OUT3_LOW            2
#define MC_OutputState_MC_MIO4_OUT3_HIGH           3
#define MC_OutputConfig_Filter_MC_MIO4_OUT4      (MCPARAMID)( 2832 << 14)
#define MC___OutputId_MC_MIO4_OUT4               (MCPARAMID)( 2833 << 14)
#define MC_OutputMaxId_MC_MIO4_OUT4              (MCPARAMID)( 2834 << 14)
#define MC_OutputState_Filter_MC_MIO4_OUT4       (MCPARAMID)( 2835 << 14)
#define MC_OutputStyle_Filter_MC_MIO4_OUT4       (MCPARAMID)( 2836 << 14)
#define MC_OutputState_MC_MIO4_OUT4              (MCPARAMID)( 2837 << 14)
#define MC_OutputState_MC_MIO4_OUT4_HOLD           1
#define MC_OutputState_MC_MIO4_OUT4_LOW            2
#define MC_OutputState_MC_MIO4_OUT4_HIGH           3
#define MC_PreStrobe_Tk                          (MCPARAMID)( 2838 << 14)
#define MC__STRWidth_Tk                          (MCPARAMID)( 2839 << 14)
#define MC__EXPOn2STROBEOff_E                    (MCPARAMID)( 2840 << 14)
#define MC__PREEXPWidth_E                        (MCPARAMID)( 2841 << 14)
#define MC_PinHIO_Usage                          (MCPARAMID)( 2842 << 14)
#define MC_PinHIO_Usage_NONE                       1
#define MC_PinHIO_Usage_INPUT                      2
#define MC_PinHIO_Usage_LOW                        3
#define MC_PinHIO_Usage_HIGH                       4
#define MC_PinHIO_Usage_HDRIVE                     5
#define MC_PinHIO_Usage_HSYNC                      6
#define MC_PinVIO_Usage                          (MCPARAMID)( 2843 << 14)
#define MC_PinVIO_Usage_NONE                       1
#define MC_PinVIO_Usage_INPUT                      2
#define MC_PinVIO_Usage_LOW                        3
#define MC_PinVIO_Usage_HIGH                       4
#define MC_PinVIO_Usage_VDRIVE                     5
#define MC_PinVIO_Usage_RESET                      6
#define MC_PinVIO_Usage_AUXRESET                   7
#define MC_PinVIO_Usage_VSYNC                      8
#define MC_PinGATE_Usage                         (MCPARAMID)( 2844 << 14)
#define MC_PinGATE_Usage_NONE                      1
#define MC_PinGATE_Usage_INPUT                     2
#define MC_PinGATE_Usage_LOW                       3
#define MC_PinGATE_Usage_HIGH                      4
#define MC_PinGATE_Usage_HSYNC                     5
#define MC_PinGATE_Usage_VSYNC                     6
#define MC_PinEXP_Usage                          (MCPARAMID)( 2845 << 14)
#define MC_PinEXP_Usage_NONE                       1
#define MC_PinEXP_Usage_INPUT                      2
#define MC_PinEXP_Usage_LOW                        3
#define MC_PinEXP_Usage_HIGH                       4
#define MC_PinEXP_Usage_HDRIVE                     5
#define MC_PinEXP_Usage_HSYNC                      6
#define MC_PinRST_Usage                          (MCPARAMID)( 2846 << 14)
#define MC_PinRST_Usage_NONE                       1
#define MC_PinRST_Usage_INPUT                      2
#define MC_PinRST_Usage_LOW                        3
#define MC_PinRST_Usage_HIGH                       4
#define MC_PinRST_Usage_VDRIVE                     5
#define MC_PinRST_Usage_RESET                      6
#define MC_PinRST_Usage_AUXRESET                   7
#define MC_PinRST_Usage_VSYNC                      8
#define MC_CameraControlSignalSet                (MCPARAMID)( 2847 << 14)
#define MC_CameraControlSignalSet_NONE             1
#define MC_CameraControlSignalSet_RESET            2
#define MC_CameraControlSignalSet_RESET_VSYNC      3
#define MC_CameraControlSignalSet_HDRIVE_VDRIVE    4
#define MC_CameraControlSignalSet_HDRIVE_RESET     5
#define MC_CameraControlSignalSet_HDRIVE_RESET_VSYNC   6
#define MC_CameraControlSignalSet_HDRIVE_RESET_AUXRESET   7
#define MC_CameraControlSignalSet_CLK_HSYNC_VSYNC   8
#define MC_CameraControlSignalSet_RESET_CLK_HSYNC_VSYNC   9
#define MC_CameraControlSignalSet_INVALID         10
#define MC_CameraSignalSet                       (MCPARAMID)( 2848 << 14)
#define MC_CameraSignalSet_A1                      1
#define MC_CameraSignalSet_B1                      2
#define MC_CameraSignalSet_C1                      3
#define MC_CameraSignalSet_D1                      4
#define MC_CameraSignalSet_E1                      5
#define MC_CameraSignalSet_F1                      6
#define MC_CameraSignalSet_G1                      7
#define MC_CameraSignalSet_H1                      8
#define MC_CameraSignalSet_I1                      9
#define MC_CameraSignalSet_A2                     10
#define MC_CameraSignalSet_B2                     11
#define MC_CameraSignalSet_C2                     12
#define MC_CameraSignalSet_D2                     13
#define MC_CameraSignalSet_E2                     14
#define MC_CameraSignalSet_F2                     15
#define MC_CameraSignalSet_G2                     16
#define MC_CameraSignalSet_H2                     17
#define MC_CameraSignalSet_I2                     18
#define MC_CameraSignalSet_A3                     19
#define MC_CameraSignalSet_B3                     20
#define MC_CameraSignalSet_C3                     21
#define MC_CameraSignalSet_D3                     22
#define MC_CameraSignalSet_E3                     23
#define MC_CameraSignalSet_F3                     24
#define MC_CameraSignalSet_G3                     25
#define MC_CameraSignalSet_INVALID                26
#define MC_ConnectorConfigX                      (MCPARAMID)( 2849 << 14)
#define MC_ConnectorConfigX_FREE                   1
#define MC_ConnectorConfigX_A1                     2
#define MC_ConnectorConfigX_B1                     3
#define MC_ConnectorConfigX_C1                     4
#define MC_ConnectorConfigX_D1                     5
#define MC_ConnectorConfigX_E1                     6
#define MC_ConnectorConfigX_F1                     7
#define MC_ConnectorConfigX_G1                     8
#define MC_ConnectorConfigX_H1                     9
#define MC_ConnectorConfigX_I1                    10
#define MC_ConnectorConfigX_A2                    11
#define MC_ConnectorConfigX_B2                    12
#define MC_ConnectorConfigX_C2                    13
#define MC_ConnectorConfigX_D2                    14
#define MC_ConnectorConfigX_E2                    15
#define MC_ConnectorConfigX_F2                    16
#define MC_ConnectorConfigX_G2                    17
#define MC_ConnectorConfigX_H2                    18
#define MC_ConnectorConfigX_I2                    19
#define MC_ConnectorConfigX_A3                    20
#define MC_ConnectorConfigX_B3                    21
#define MC_ConnectorConfigX_C3                    22
#define MC_ConnectorConfigX_D3                    23
#define MC_ConnectorConfigX_E3                    24
#define MC_ConnectorConfigX_F3                    25
#define MC_ConnectorConfigX_G3                    26
#define MC_ConnectorConfigX_A1_A1                 27
#define MC_ConnectorConfigX_B1_A1                 28
#define MC_ConnectorConfigX_B1_B1                 29
#define MC_ConnectorConfigX_C1_A1                 30
#define MC_ConnectorConfigX_C1_B1                 31
#define MC_ConnectorConfigX_C1_C1                 32
#define MC_ConnectorConfigX_D1_A1                 33
#define MC_ConnectorConfigX_D1_B1                 34
#define MC_ConnectorConfigX_D1_C1                 35
#define MC_ConnectorConfigX_D1_D1                 36
#define MC_ConnectorConfigX_E1_A1                 37
#define MC_ConnectorConfigX_E1_B1                 38
#define MC_ConnectorConfigX_E1_C1                 39
#define MC_ConnectorConfigX_E1_D1                 40
#define MC_ConnectorConfigX_E1_E1                 41
#define MC_ConnectorConfigX_F1_A1                 42
#define MC_ConnectorConfigX_F1_B1                 43
#define MC_ConnectorConfigX_F1_D1                 44
#define MC_ConnectorConfigX_F1_E1                 45
#define MC_ConnectorConfigX_F1_F1                 46
#define MC_ConnectorConfigX_G1_A1                 47
#define MC_ConnectorConfigX_G1_G1                 48
#define MC_ConnectorConfigX_H1_A1                 49
#define MC_ConnectorConfigX_H1_B1                 50
#define MC_ConnectorConfigX_H1_C1                 51
#define MC_ConnectorConfigX_H1_D1                 52
#define MC_ConnectorConfigX_H1_E1                 53
#define MC_ConnectorConfigX_H1_F1                 54
#define MC_ConnectorConfigX_H1_G1                 55
#define MC_ConnectorConfigX_I1_A1                 56
#define MC_ConnectorConfigX_I1_B1                 57
#define MC_ConnectorConfigX_I1_D1                 58
#define MC_ConnectorConfigX_I1_E1                 59
#define MC_ConnectorConfigX_Filter               (MCPARAMID)( 2850 << 14)
#define MC_ConnectorConfigY                      (MCPARAMID)( 2851 << 14)
#define MC_ConnectorConfigY_FREE                   1
#define MC_ConnectorConfigY_A1                     2
#define MC_ConnectorConfigY_B1                     3
#define MC_ConnectorConfigY_C1                     4
#define MC_ConnectorConfigY_D1                     5
#define MC_ConnectorConfigY_E1                     6
#define MC_ConnectorConfigY_F1                     7
#define MC_ConnectorConfigY_G1                     8
#define MC_ConnectorConfigY_H1                     9
#define MC_ConnectorConfigY_I1                    10
#define MC_ConnectorConfigY_A2                    11
#define MC_ConnectorConfigY_B2                    12
#define MC_ConnectorConfigY_C2                    13
#define MC_ConnectorConfigY_D2                    14
#define MC_ConnectorConfigY_E2                    15
#define MC_ConnectorConfigY_F2                    16
#define MC_ConnectorConfigY_G2                    17
#define MC_ConnectorConfigY_H2                    18
#define MC_ConnectorConfigY_I2                    19
#define MC_ConnectorConfigY_A1_A1                 20
#define MC_ConnectorConfigY_B1_A1                 21
#define MC_ConnectorConfigY_B1_B1                 22
#define MC_ConnectorConfigY_C1_A1                 23
#define MC_ConnectorConfigY_C1_B1                 24
#define MC_ConnectorConfigY_C1_C1                 25
#define MC_ConnectorConfigY_D1_A1                 26
#define MC_ConnectorConfigY_D1_B1                 27
#define MC_ConnectorConfigY_D1_C1                 28
#define MC_ConnectorConfigY_D1_D1                 29
#define MC_ConnectorConfigY_E1_A1                 30
#define MC_ConnectorConfigY_E1_B1                 31
#define MC_ConnectorConfigY_E1_C1                 32
#define MC_ConnectorConfigY_E1_D1                 33
#define MC_ConnectorConfigY_E1_E1                 34
#define MC_ConnectorConfigY_F1_A1                 35
#define MC_ConnectorConfigY_F1_B1                 36
#define MC_ConnectorConfigY_F1_D1                 37
#define MC_ConnectorConfigY_F1_E1                 38
#define MC_ConnectorConfigY_F1_F1                 39
#define MC_ConnectorConfigY_G1_A1                 40
#define MC_ConnectorConfigY_G1_G1                 41
#define MC_ConnectorConfigY_H1_A1                 42
#define MC_ConnectorConfigY_H1_B1                 43
#define MC_ConnectorConfigY_H1_C1                 44
#define MC_ConnectorConfigY_H1_D1                 45
#define MC_ConnectorConfigY_H1_E1                 46
#define MC_ConnectorConfigY_H1_F1                 47
#define MC_ConnectorConfigY_H1_G1                 48
#define MC_ConnectorConfigY_I1_A1                 49
#define MC_ConnectorConfigY_I1_B1                 50
#define MC_ConnectorConfigY_I1_D1                 51
#define MC_ConnectorConfigY_I1_E1                 52
#define MC_ConnectorConfigY_Filter               (MCPARAMID)( 2852 << 14)
#define MC_ConnectorConfigY_A3                    53
#define MC_ConnectorConfigY_B3                    54
#define MC_ConnectorConfigY_C3                    55
#define MC_ConnectorConfigY_D3                    56
#define MC_ConnectorConfigY_E3                    57
#define MC_ConnectorConfigY_F3                    58
#define MC_ConnectorConfigY_G3                    59
#define MC_ConnectorConfigZ                      (MCPARAMID)( 2853 << 14)
#define MC_ConnectorConfigZ_FREE                   1
#define MC_ConnectorConfigZ_A1                     2
#define MC_ConnectorConfigZ_B1                     3
#define MC_ConnectorConfigZ_C1                     4
#define MC_ConnectorConfigZ_D1                     5
#define MC_ConnectorConfigZ_E1                     6
#define MC_ConnectorConfigZ_F1                     7
#define MC_ConnectorConfigZ_G1                     8
#define MC_ConnectorConfigZ_H1                     9
#define MC_ConnectorConfigZ_I1                    10
#define MC_ConnectorConfigZ_A2                    11
#define MC_ConnectorConfigZ_B2                    12
#define MC_ConnectorConfigZ_C2                    13
#define MC_ConnectorConfigZ_D2                    14
#define MC_ConnectorConfigZ_E2                    15
#define MC_ConnectorConfigZ_F2                    16
#define MC_ConnectorConfigZ_G2                    17
#define MC_ConnectorConfigZ_H2                    18
#define MC_ConnectorConfigZ_I2                    19
#define MC_ConnectorConfigZ_A1_A1                 20
#define MC_ConnectorConfigZ_B1_A1                 21
#define MC_ConnectorConfigZ_B1_B1                 22
#define MC_ConnectorConfigZ_C1_A1                 23
#define MC_ConnectorConfigZ_C1_B1                 24
#define MC_ConnectorConfigZ_C1_C1                 25
#define MC_ConnectorConfigZ_D1_A1                 26
#define MC_ConnectorConfigZ_D1_B1                 27
#define MC_ConnectorConfigZ_D1_C1                 28
#define MC_ConnectorConfigZ_D1_D1                 29
#define MC_ConnectorConfigZ_E1_A1                 30
#define MC_ConnectorConfigZ_E1_B1                 31
#define MC_ConnectorConfigZ_E1_C1                 32
#define MC_ConnectorConfigZ_E1_D1                 33
#define MC_ConnectorConfigZ_E1_E1                 34
#define MC_ConnectorConfigZ_F1_A1                 35
#define MC_ConnectorConfigZ_F1_B1                 36
#define MC_ConnectorConfigZ_F1_D1                 37
#define MC_ConnectorConfigZ_F1_E1                 38
#define MC_ConnectorConfigZ_F1_F1                 39
#define MC_ConnectorConfigZ_G1_A1                 40
#define MC_ConnectorConfigZ_G1_G1                 41
#define MC_ConnectorConfigZ_H1_A1                 42
#define MC_ConnectorConfigZ_H1_B1                 43
#define MC_ConnectorConfigZ_H1_C1                 44
#define MC_ConnectorConfigZ_H1_D1                 45
#define MC_ConnectorConfigZ_H1_E1                 46
#define MC_ConnectorConfigZ_H1_F1                 47
#define MC_ConnectorConfigZ_H1_G1                 48
#define MC_ConnectorConfigZ_I1_A1                 49
#define MC_ConnectorConfigZ_I1_B1                 50
#define MC_ConnectorConfigZ_I1_D1                 51
#define MC_ConnectorConfigZ_I1_E1                 52
#define MC_ConnectorConfigZ_Filter               (MCPARAMID)( 2854 << 14)
#define MC_ConnectorConfig                       (MCPARAMID)( 2855 << 14)
#define MC_ConnectorConfig_FREE                   60
#define MC_ConnectorConfig_A1                     61
#define MC_ConnectorConfig_B1                     62
#define MC_ConnectorConfig_C1                     63
#define MC_ConnectorConfig_D1                     64
#define MC_ConnectorConfig_E1                     65
#define MC_ConnectorConfig_F1                     66
#define MC_ConnectorConfig_G1                     67
#define MC_ConnectorConfig_H1                     68
#define MC_ConnectorConfig_I1                     69
#define MC_ConnectorConfig_A2                     70
#define MC_ConnectorConfig_B2                     71
#define MC_ConnectorConfig_C2                     72
#define MC_ConnectorConfig_D2                     73
#define MC_ConnectorConfig_E2                     74
#define MC_ConnectorConfig_F2                     75
#define MC_ConnectorConfig_G2                     76
#define MC_ConnectorConfig_H2                     77
#define MC_ConnectorConfig_I2                     78
#define MC_ConnectorConfig_A3                     79
#define MC_ConnectorConfig_B3                     80
#define MC_ConnectorConfig_C3                     81
#define MC_ConnectorConfig_D3                     82
#define MC_ConnectorConfig_E3                     83
#define MC_ConnectorConfig_F3                     84
#define MC_ConnectorConfig_G3                     85
#define MC_ConnectorConfig_A1_A1                  86
#define MC_ConnectorConfig_B1_A1                  87
#define MC_ConnectorConfig_B1_B1                  88
#define MC_ConnectorConfig_C1_A1                  89
#define MC_ConnectorConfig_C1_B1                  90
#define MC_ConnectorConfig_C1_C1                  91
#define MC_ConnectorConfig_D1_A1                  92
#define MC_ConnectorConfig_D1_B1                  93
#define MC_ConnectorConfig_D1_C1                  94
#define MC_ConnectorConfig_D1_D1                  95
#define MC_ConnectorConfig_E1_A1                  96
#define MC_ConnectorConfig_E1_B1                  97
#define MC_ConnectorConfig_E1_C1                  98
#define MC_ConnectorConfig_E1_D1                  99
#define MC_ConnectorConfig_E1_E1                 100
#define MC_ConnectorConfig_F1_A1                 101
#define MC_ConnectorConfig_F1_B1                 102
#define MC_ConnectorConfig_F1_D1                 103
#define MC_ConnectorConfig_F1_E1                 104
#define MC_ConnectorConfig_F1_F1                 105
#define MC_ConnectorConfig_G1_A1                 106
#define MC_ConnectorConfig_G1_G1                 107
#define MC_ConnectorConfig_H1_A1                 108
#define MC_ConnectorConfig_H1_B1                 109
#define MC_ConnectorConfig_H1_C1                 110
#define MC_ConnectorConfig_H1_D1                 111
#define MC_ConnectorConfig_H1_E1                 112
#define MC_ConnectorConfig_H1_F1                 113
#define MC_ConnectorConfig_H1_G1                 114
#define MC_ConnectorConfig_I1_A1                 115
#define MC_ConnectorConfig_I1_B1                 116
#define MC_ConnectorConfig_I1_D1                 117
#define MC_ConnectorConfig_I1_E1                 118
#define MC_CameraSignalSetX                      (MCPARAMID)( 2856 << 14)
#define MC_CameraSignalSetXBIS                   (MCPARAMID)( 2857 << 14)
#define MC_CameraSignalSetY                      (MCPARAMID)( 2858 << 14)
#define MC_CameraSignalSetYBIS                   (MCPARAMID)( 2859 << 14)
#define MC_ConnectorXTopology                    (MCPARAMID)( 2860 << 14)
#define MC_ConnectorYTopology                    (MCPARAMID)( 2861 << 14)
#define MC_CameraSignalSetZ                      (MCPARAMID)( 2862 << 14)
#define MC_CameraSignalSetZBIS                   (MCPARAMID)( 2863 << 14)
#define MC_ConnectorZTopology                    (MCPARAMID)( 2864 << 14)
#define MC_ConnectorPort                         (MCPARAMID)( 2865 << 14)
#define MC_ConnectorPort_PRIMARY                   1
#define MC_ConnectorPort_SECONDARY                 2
#define MC_ConnectorTopology                     (MCPARAMID)( 2866 << 14)
#define MC_ConnectorCameraCount                  (MCPARAMID)( 2867 << 14)
#define MC_RCable                                (MCPARAMID)( 2868 << 14)
#define MC_RCable_NONE                             1
#define MC_RCable_A15_C01                          2
#define MC_RCable_A15_C02                          3
#define MC_RCable_A15_C03                          4
#define MC_RCable_A15_C04                          5
#define MC_RCable_A15_C05                          6
#define MC_RCable_A15_C06                          7
#define MC_RCable_A15_C07                          8
#define MC_RCable_A15_C08                          9
#define MC_RCable_A15_C09                         10
#define MC_RCable_A15_C10                         11
#define MC_RCable_A15_C11                         12
#define MC_RCable_A15_C12                         13
#define MC_RCable_A15_C13                         14
#define MC_RCable_A15_C14                         15
#define MC_RCable_A15_C15                         16
#define MC_RCable_A15_C16                         17
#define MC_RCable_A15_C17                         18
#define MC_RCable_A15_C18                         19
#define MC_RCable_A15_C19                         20
#define MC_CamCable_Check                        (MCPARAMID)( 2869 << 14)
#define MC_CamCable_Check_PASS                     1
#define MC_CamCable_Check_FAIL                     2
#define MC_Cable_A15_C110000000                   30
#define MC_Cable_A15_C110010000                   31
#define MC_Cable_A15_C110210000                   32
#define MC_Cable_A15_C111100000                   33
#define MC_Cable_A15_C111010000                   34
#define MC_Cable_A15_C111210000                   35
#define MC_Cable_A15_C111020000                   36
#define MC_Cable_A15_C112200000                   37
#define MC_Cable_A15_C112210000                   38
#define MC_Cable_A15_C210000000                   39
#define MC_Cable_A15_C210010000                   40
#define MC_Cable_A15_C210210000                   41
#define MC_Cable_A15_C211100000                   42
#define MC_Cable_A15_C211010000                   43
#define MC_Cable_A15_C211210000                   44
#define MC_Cable_A15_C211020000                   45
#define MC_Cable_A15_C212200000                   46
#define MC_Cable_A15_C212210000                   47
#define MC_Cable_A15_C310000000                   48
#define MC_Cable_A15_C310010000                   49
#define MC_Cable_A15_C310210000                   50
#define MC_Cable_A15_C311100000                   51
#define MC_Cable_A15_C311010000                   52
#define MC_Cable_A15_C311210000                   53
#define MC_Cable_A15_C311020000                   54
#define MC_Cable_A15_C110001000                   55
#define MC_Cable_A15_C110011000                   56
#define MC_Cable_A15_C110211000                   57
#define MC_Cable_A15_C111101000                   58
#define MC_Cable_A15_C111011000                   59
#define MC_Cable_A15_C111211000                   60
#define MC_Cable_A15_C111021000                   61
#define MC_Cable_A15_C112201000                   62
#define MC_Cable_A15_C112211000                   63
#define MC_Cable_A15_C110011001                   64
#define MC_Cable_A15_C110211001                   65
#define MC_Cable_A15_C111101001                   66
#define MC_Cable_A15_C111011001                   67
#define MC_Cable_A15_C111211001                   68
#define MC_Cable_A15_C112201001                   69
#define MC_Cable_A15_C112211001                   70
#define MC_Cable_A15_C110211021                   71
#define MC_Cable_A15_C111101021                   72
#define MC_Cable_A15_C111011021                   73
#define MC_Cable_A15_C112201021                   74
#define MC_Cable_A15_C111101110                   75
#define MC_Cable_A15_C111011110                   76
#define MC_Cable_A15_C111211110                   77
#define MC_Cable_A15_C112201110                   78
#define MC_Cable_A15_C112211110                   79
#define MC_Cable_A15_C111011101                   80
#define MC_Cable_A15_C111211101                   81
#define MC_Cable_A15_C112201101                   82
#define MC_Cable_A15_C112211101                   83
#define MC_Cable_A15_C111211121                   84
#define MC_Cable_A15_C112201121                   85
#define MC_Cable_A15_C111021102                   86
#define MC_Cable_A15_C112201102                   87
#define MC_CableName_One_Camera_Single_Channel_A  27
#define MC_CableName_One_Camera_Single_Channel_B  28
#define MC_CableName_One_Camera_Single_Channel_C  29
#define MC_CableName_One_Camera_Single_Channel_D  30
#define MC_CableName_One_Camera_Single_Channel_E  31
#define MC_CableName_One_Camera_Single_Channel_F  32
#define MC_CableName_One_Camera_Single_Channel_G  33
#define MC_CableName_One_Camera_Single_Channel_H  34
#define MC_CableName_One_Camera_Single_Channel_I  35
#define MC_CableName_One_Camera_Dual_Channel_A    36
#define MC_CableName_One_Camera_Dual_Channel_B    37
#define MC_CableName_One_Camera_Dual_Channel_C    38
#define MC_CableName_One_Camera_Dual_Channel_D    39
#define MC_CableName_One_Camera_Dual_Channel_E    40
#define MC_CableName_One_Camera_Dual_Channel_F    41
#define MC_CableName_One_Camera_Dual_Channel_G    42
#define MC_CableName_One_Camera_Dual_Channel_H    43
#define MC_CableName_One_Camera_Dual_Channel_I    44
#define MC_CableName_One_Camera_Triple_Channel_A  45
#define MC_CableName_One_Camera_Triple_Channel_B  46
#define MC_CableName_One_Camera_Triple_Channel_C  47
#define MC_CableName_One_Camera_Triple_Channel_D  48
#define MC_CableName_One_Camera_Triple_Channel_E  49
#define MC_CableName_One_Camera_Triple_Channel_F  50
#define MC_CableName_One_Camera_Triple_Channel_G  51
#define MC_CableName_Two_Cameras_Single_Channel_AA  52
#define MC_CableName_Two_Cameras_Single_Channel_BA  53
#define MC_CableName_Two_Cameras_Single_Channel_CA  54
#define MC_CableName_Two_Cameras_Single_Channel_DA  55
#define MC_CableName_Two_Cameras_Single_Channel_EA  56
#define MC_CableName_Two_Cameras_Single_Channel_FA  57
#define MC_CableName_Two_Cameras_Single_Channel_GA  58
#define MC_CableName_Two_Cameras_Single_Channel_HA  59
#define MC_CableName_Two_Cameras_Single_Channel_IA  60
#define MC_CableName_Two_Cameras_Single_Channel_BB  61
#define MC_CableName_Two_Cameras_Single_Channel_CB  62
#define MC_CableName_Two_Cameras_Single_Channel_DB  63
#define MC_CableName_Two_Cameras_Single_Channel_EB  64
#define MC_CableName_Two_Cameras_Single_Channel_FB  65
#define MC_CableName_Two_Cameras_Single_Channel_HB  66
#define MC_CableName_Two_Cameras_Single_Channel_IB  67
#define MC_CableName_Two_Cameras_Single_Channel_CC  68
#define MC_CableName_Two_Cameras_Single_Channel_DC  69
#define MC_CableName_Two_Cameras_Single_Channel_EC  70
#define MC_CableName_Two_Cameras_Single_Channel_HC  71
#define MC_CableName_Two_Cameras_Single_Channel_DD  72
#define MC_CableName_Two_Cameras_Single_Channel_ED  73
#define MC_CableName_Two_Cameras_Single_Channel_FD  74
#define MC_CableName_Two_Cameras_Single_Channel_HD  75
#define MC_CableName_Two_Cameras_Single_Channel_ID  76
#define MC_CableName_Two_Cameras_Single_Ehannel_EE  77
#define MC_CableName_Two_Cameras_Single_Ehannel_FE  78
#define MC_CableName_Two_Cameras_Single_Ehannel_HE  79
#define MC_CableName_Two_Cameras_Single_Ehannel_IE  80
#define MC_CableName_Two_Cameras_Single_Channel_FF  81
#define MC_CableName_Two_Cameras_Single_Channel_HF  82
#define MC_CableName_Two_Cameras_Single_Ehannel_GG  83
#define MC_CableName_Two_Cameras_Single_Ehannel_HG  84
#define MC_CCCount                               (MCPARAMID)( 2870 << 14)
#define MC_CCCount_ONE                             1
#define MC_CCCount_TWO                             2
#define MC_CableType                             (MCPARAMID)( 2871 << 14)
#define MC_Cable_A15_T2A                          88
#define MC_Cable_A15_T2B                          89
#define MC_Cable_A15_T2C                          90
#define MC_Cable_A15_T2D                          91
#define MC_Cable_A15_T2E                          92
#define MC_Cable_A15_T2F                          93
#define MC_Cable_A15_T2G                          94
#define MC_Cable_A15_T2H                          95
#define MC_Cable_A15_T2I                          96
#define MC_Cable_A15_T1A                          97
#define MC_Cable_A15_T1B                          98
#define MC_Cable_A15_T1C                          99
#define MC_Cable_A15_T1D                         100
#define MC_Cable_A15_T1E                         101
#define MC_Cable_A15_T1F                         102
#define MC_Cable_A15_T1G                         103
#define MC_Cable_A15_T1H                         104
#define MC_Cable_A15_T1I                         105
#define MC_Cable_A15_T3A                         106
#define MC_Cable_A15_T3B                         107
#define MC_Cable_A15_T3C                         108
#define MC_Cable_A15_T3D                         109
#define MC_Cable_A15_T3E                         110
#define MC_Cable_A15_T3F                         111
#define MC_Cable_A15_T3G                         112
#define MC_Cable_A15_T11AA                       113
#define MC_Cable_A15_T11BA                       114
#define MC_Cable_A15_T11BB                       115
#define MC_Cable_A15_T11CA                       116
#define MC_Cable_A15_T11CB                       117
#define MC_Cable_A15_T11CC                       118
#define MC_Cable_A15_T11DA                       119
#define MC_Cable_A15_T11DB                       120
#define MC_Cable_A15_T11DC                       121
#define MC_Cable_A15_T11DD                       122
#define MC_Cable_A15_T11EA                       123
#define MC_Cable_A15_T11EB                       124
#define MC_Cable_A15_T11EC                       125
#define MC_Cable_A15_T11ED                       126
#define MC_Cable_A15_T11EE                       127
#define MC_Cable_A15_T11FA                       128
#define MC_Cable_A15_T11FB                       129
#define MC_Cable_A15_T11FD                       130
#define MC_Cable_A15_T11FE                       131
#define MC_Cable_A15_T11FF                       132
#define MC_Cable_A15_T11GA                       133
#define MC_Cable_A15_T11GG                       134
#define MC_Cable_A15_T11HA                       135
#define MC_Cable_A15_T11HB                       136
#define MC_Cable_A15_T11HC                       137
#define MC_Cable_A15_T11HD                       138
#define MC_Cable_A15_T11HE                       139
#define MC_Cable_A15_T11HF                       140
#define MC_Cable_A15_T11HG                       141
#define MC_Cable_A15_T11IA                       142
#define MC_Cable_A15_T11IB                       143
#define MC_Cable_A15_T11ID                       144
#define MC_Cable_A15_T11IE                       145
#define MC_CableName_Two_Cameras_Single_Channel_EE  85
#define MC_CableName_Two_Cameras_Single_Channel_FE  86
#define MC_CableName_Two_Cameras_Single_Channel_GG  87
#define MC_CableName_Two_Cameras_Single_Channel_HE  88
#define MC_CableName_Two_Cameras_Single_Channel_HG  89
#define MC_CableName_Two_Cameras_Single_Channel_IE  90
#define MC_CableXTopology                        (MCPARAMID)( 2872 << 14)
#define MC_CableYTopology                        (MCPARAMID)( 2873 << 14)
#define MC_CableTopology                         (MCPARAMID)( 2874 << 14)
#define MC_CableZTopology                        (MCPARAMID)( 2875 << 14)
#define MC_Camera_CV_M30                         142
#define MC_CamConfig_P120SA                      191
#define MC_CamConfig_P120RA                      192
#define MC_CableModel                            (MCPARAMID)( 2876 << 14)
#define MC_CableModel_SPECIFIC                     1
#define MC_CableModel_GENERIC                      2
#define MC__PrimaryTopology                      (MCPARAMID)( 2877 << 14)
#define MC__SecondaryTopology                    (MCPARAMID)( 2878 << 14)
#define MC__MyTopology                           (MCPARAMID)( 2879 << 14)
#define MC_CableTopology_CSS_Check               (MCPARAMID)( 2880 << 14)
#define MC_CableTopology_CSS_Check_PASS            1
#define MC_CableTopology_CSS_Check_FAIL            2
#define MC_CableTopology_Swap_Check              (MCPARAMID)( 2881 << 14)
#define MC_CableTopology_Swap_Check_PASS           1
#define MC_CableTopology_Swap_Check_FAIL           2
#define MC_CableTopology_Validity_Check          (MCPARAMID)( 2882 << 14)
#define MC_CableTopology_Validity_Check_PASS       1
#define MC_CableTopology_Validity_Check_FAIL       2
#define MC___CableTopology_Check                 (MCPARAMID)( 2883 << 14)
#define MC___CableTopology_Check_PASS              1
#define MC___CableTopology_Check_FAIL              2
#define MC___CamCable_Check                      (MCPARAMID)( 2884 << 14)
#define MC___CamCable_Check_PASS                   1
#define MC___CamCable_Check_FAIL                   2
#define MC_RCableV                               (MCPARAMID)( 2885 << 14)
#define MC_RCableV_A                               1
#define MC_RCableV_B                               2
#define MC_CorrectedCableTopology                (MCPARAMID)( 2886 << 14)
#define MC__CableTopology                        (MCPARAMID)( 2887 << 14)
#define MC_INITD1Signature                       (MCPARAMID)( 2888 << 14)
#define MC_INITD2Signature                       (MCPARAMID)( 2889 << 14)
#define MC_DigUnitRecord                         (MCPARAMID)( 2890 << 14)
#define MC_INITD2Condition                       (MCPARAMID)( 2891 << 14)
#define MC_GainCtl_p6DB                            9
#define MC_GainCtl_p5DB                           10
#define MC_GainCtl_p4DB                           11
#define MC_GainCtl_Filter                        (MCPARAMID)( 2892 << 14)
#define MC__NominalGain                          (MCPARAMID)( 2893 << 14)
#define MC_GainLinMin                            (MCPARAMID)( 2894 << 14)
#define MC_GainLinMax                            (MCPARAMID)( 2895 << 14)
#define MC_GainDBMin                             (MCPARAMID)( 2896 << 14)
#define MC_GainDBMax                             (MCPARAMID)( 2897 << 14)
#define MC_CamConfig_P240RA                      193
#define MC__PhaseLength                          (MCPARAMID)( 2898 << 14)
#define MC_SceneLength                           (MCPARAMID)( 2899 << 14)
#define MC__BoardType__PICOLO_TETRA               15
#define MC__BoardType__PICOLO_JETSTREAM           16
#define MC_InputMaxId_                           (MCPARAMID)( 2900 << 14)
#define MC_OutputMaxId_                          (MCPARAMID)( 2901 << 14)
#define MC_Operation_LONGPAGE                      8
#define MC_SGASet                                (MCPARAMID)( 2902 << 14)
#define MC__GAP_MODE                             (MCPARAMID)( 2903 << 14)
#define MC__GAP_MODE_SINGLE_SEQ                    1
#define MC__GAP_MODE_MULTIPLE_SEQ                  2
#define MC__COVER_MODE                           (MCPARAMID)( 2904 << 14)
#define MC__COVER_MODE_ON                          1
#define MC__COVER_MODE_OFF                         2
#define MC_STZUsage_COVERX                         4
#define MC_STZUsage_COVERY                         5
#define MC__STR_STZSRC_COVER_X                     7
#define MC__STR_STZSRC_COVER_Y                     8
#define MC_STZUsage_TRIGX                          6
#define MC_STZUsage_TRIGY                          7
#define MC__STR_STZSRC_TRIG_X                      9
#define MC__STR_STZSRC_TRIG_Y                     10
#define MC_EndTrigEdge                           (MCPARAMID)( 2905 << 14)
#define MC_EndTrigEdge_GOHIGH                      1
#define MC_EndTrigEdge_GOLOW                       2
#define MC_EndTrigLine                           (MCPARAMID)( 2906 << 14)
#define MC_EndTrigLine_NOM                         1
#define MC_EndTrigLine_ALT1                        2
#define MC_EndTrigLine_ALT2                        3
#define MC_EndTrigLine_PG                          4
#define MC_EndTrigLine_LTACT                       5
#define MC_EndTrigLine_TRX                         6
#define MC_EndTrigLine_TRY                         7
#define MC_EndTrigLine_TRZ                         8
#define MC_EndTrigLine_NONE                        9
#define MC_Camera_YD5040                         143
#define MC_EndTrigLine_TRG                        10
#define MC__SP_Factor_Min_1                      (MCPARAMID)( 2907 << 14)
#define MC__SP_Factor_AMin_PG                    (MCPARAMID)( 2908 << 14)
#define MC__SP_Factor_AMin_RC                    (MCPARAMID)( 2909 << 14)
#define MC__SP_Factor_RMAx_RC                    (MCPARAMID)( 2910 << 14)
#define MC_CamConfig_L4096RP                     194
#define MC_PCIDeviceID                           (MCPARAMID)( 2911 << 14)
#define MC_PCIVendorID                           (MCPARAMID)( 2912 << 14)
#define MC_PCISubDeviceID                        (MCPARAMID)( 2913 << 14)
#define MC_PCISubVendorID                        (MCPARAMID)( 2914 << 14)
#define MC___TrigLine_Check                      (MCPARAMID)( 2915 << 14)
#define MC___TrigLine_Check_PASS                   1
#define MC___TrigLine_Check_FAIL                   2
#define MC_EndTrigMode                           (MCPARAMID)( 2916 << 14)
#define MC_EndTrigMode_AUTO                        1
#define MC_EndTrigMode_HARD                        2
#define MC_HFRModeOnly_Filter                    (MCPARAMID)( 2917 << 14)
#define MC__FrameCountModulo                     (MCPARAMID)( 2918 << 14)
#define MC_SetLength_Fr                          (MCPARAMID)( 2919 << 14)
#define MC__HFR_MODE                             (MCPARAMID)( 2920 << 14)
#define MC__HFR_MODE_ON                            1
#define MC__HFR_MODE_OFF                           2
#define MC__TotalSetLength                       (MCPARAMID)( 2921 << 14)
#define MC_FrameGrabSizeY_Ln                     (MCPARAMID)( 2922 << 14)
#define MC_AsyncOverlapLoadSet                   (MCPARAMID)( 2923 << 14)
#define MC__SequenceLoadSet                      (MCPARAMID)( 2924 << 14)
#define MC__SequenceLoadSet_NONE                   1
#define MC__SequenceLoadSet_S1                     2
#define MC__SequenceLoadSet_S2                     3
#define MC__SequenceLoadSet_I1                     4
#define MC__SequenceLoadSet_I2                     5
#define MC__SequenceLoadSet_M                      6
#define MC__SequenceLoadSet_V                      7
#define MC__SequenceLoadSet_O                      8
#define MC__SequenceLoadSet_Z                      9
#define MC__SequenceLoadSet_X1                    10
#define MC__SequenceLoadSet_X2                    11
#define MC_NONELoadSet                           (MCPARAMID)( 2925 << 14)
#define MC_CamConfig_P60RM_O                     195
#define MC__TotalFrameCount                      (MCPARAMID)( 2926 << 14)
#define MC__SequenceLoadSet_W                     12
#define MC__ACQW_Line1_Dur                       (MCPARAMID)( 2927 << 14)
#define MC__ACQW_Acq_Dur                         (MCPARAMID)( 2928 << 14)
#define MC__ACQW_Line3_Dur                       (MCPARAMID)( 2929 << 14)
#define MC__ACQW_Line5_Dur                       (MCPARAMID)( 2930 << 14)
#define MC_ASYNCI2LoadSet                        (MCPARAMID)( 2931 << 14)
#define MC_FieldParityOrder                      (MCPARAMID)( 2932 << 14)
#define MC_FieldParityOrder_UNDEFINED              1
#define MC_FieldParityOrder_DWUP                   2
#define MC_FieldParityOrder_UPDW                   3
#define MC_AnalogGrabPosY_Ln                     (MCPARAMID)( 2933 << 14)
#define MC_FrameSetLength_Fr                     (MCPARAMID)( 2934 << 14)
#define MC_ACReset                               (MCPARAMID)( 2935 << 14)
#define MC_ACReset_NO                              1
#define MC_ACReset_YES                             2
#define MC_ACResetWidth_us                       (MCPARAMID)( 2936 << 14)
#define MC_ACResetPostDelay_us                   (MCPARAMID)( 2937 << 14)
#define MC__PLL_LOCK_TIME_ms                     (MCPARAMID)( 2938 << 14)
#define MC_INITC1_GPTCOUNT_us                    (MCPARAMID)( 2939 << 14)
#define MC_INITC1_GPTCOUNT                       (MCPARAMID)( 2940 << 14)
#define MC_INITC2_GPTCOUNT_us                    (MCPARAMID)( 2941 << 14)
#define MC_INITC2_GPTCOUNT                       (MCPARAMID)( 2942 << 14)
#define MC_Light                                 (MCPARAMID)( 2943 << 14)
#define MC_Camera_AViiVA_M4CL6007                144
#define MC__BoardType__COLORSCAN                  17
#define MC_Strobe_Filter                         (MCPARAMID)( 2944 << 14)
#define MC_SHC_DarkBackground                    (MCPARAMID)( 2945 << 14)
#define MC_SHC_LightBackground                   (MCPARAMID)( 2946 << 14)
#define MC_SHC_Dark                              (MCPARAMID)( 2947 << 14)
#define MC_SHC_Light                             (MCPARAMID)( 2948 << 14)
#define MC_SHC_UseIndex                          (MCPARAMID)( 2949 << 14)
#define MC_SHC_StoreIndex                        (MCPARAMID)( 2950 << 14)
#define MC_LUT_Table                             (MCPARAMID)( 2951 << 14)
#define MC_LUT_Contrast                          (MCPARAMID)( 2952 << 14)
#define MC_LUT_Brightness                        (MCPARAMID)( 2953 << 14)
#define MC_LUT_Visibility                        (MCPARAMID)( 2954 << 14)
#define MC_LUT_Negative                          (MCPARAMID)( 2955 << 14)
#define MC_LUT_Negative_TRUE                       1
#define MC_LUT_Negative_FALSE                      2
#define MC_LUT_UseIndex                          (MCPARAMID)( 2956 << 14)
#define MC_LUT_StoreIndex                        (MCPARAMID)( 2957 << 14)
#define MC_SHC_UsePhysicalIndex                  (MCPARAMID)( 2958 << 14)
#define MC_LUT_UsePhysicalIndex                  (MCPARAMID)( 2959 << 14)
#define MC_SHC_OffsetAdjust                      (MCPARAMID)( 2960 << 14)
#define MC_CamConfig_LxxxxRP                     196
#define MC_CamConfig_L2098RP                     197
#define MC_CamConfig_L2048RP                     198
#define MC_CamConfig_L7500SP                     199
#define MC_CamConfig_L7500RC                     200
#define MC_CamConfig_L7500RG                     201
#define MC_CamConfig_L7500RP                     202
#define MC_CamConfig_L8192RP                     203
#define MC_Camera_NUCL4096D                      145
#define MC_Camera_NUCL7500D                      146
#define MC_Camera_YD5060                         147
#define MC_CamConfig_L6144RP                     204
#define MC_Manufacturer_NED                       22
#define MC_ColorRegistration_RGB                   5
#define MC_ColorRegistration_GBR                   6
#define MC_ColorRegistration_BRG                   7
#define MC_ColorGap                              (MCPARAMID)( 2961 << 14)
#define MC_STARTR_GPTCOUNT_us                    (MCPARAMID)( 2962 << 14)
#define MC_STARTR_GPTCOUNT                       (MCPARAMID)( 2963 << 14)
#define MC__SEQE_E                               (MCPARAMID)( 2964 << 14)
#define MC_PostExpose_us                         (MCPARAMID)( 2965 << 14)
#define MC_PostExpose_Tk                         (MCPARAMID)( 2966 << 14)
#define MC_PostExpose_E                          (MCPARAMID)( 2967 << 14)
#define MC__CSC_NROT                             (MCPARAMID)( 2968 << 14)
#define MC__CSC_LNCPT                            (MCPARAMID)( 2969 << 14)
#define MC__LCA_R1                               (MCPARAMID)( 2970 << 14)
#define MC__LCA_R2                               (MCPARAMID)( 2971 << 14)
#define MC__LCA_R3                               (MCPARAMID)( 2972 << 14)
#define MC__LCA_R4                               (MCPARAMID)( 2973 << 14)
#define MC__LCA_G1                               (MCPARAMID)( 2974 << 14)
#define MC__LCA_G2                               (MCPARAMID)( 2975 << 14)
#define MC__LCA_G3                               (MCPARAMID)( 2976 << 14)
#define MC__LCA_G4                               (MCPARAMID)( 2977 << 14)
#define MC__LCA_B1                               (MCPARAMID)( 2978 << 14)
#define MC__LCA_B2                               (MCPARAMID)( 2979 << 14)
#define MC__LCA_B3                               (MCPARAMID)( 2980 << 14)
#define MC__LCA_B4                               (MCPARAMID)( 2981 << 14)
#define MC__CSC_FMT                              (MCPARAMID)( 2982 << 14)
#define MC__TilesX                               (MCPARAMID)( 2983 << 14)
#define MC__TilesY                               (MCPARAMID)( 2984 << 14)
#define MC_ScanDirection                         (MCPARAMID)( 2985 << 14)
#define MC_ScanDirection_FORWARD                   1
#define MC_ScanDirection_REVERSE                   2
#define MC__ScanDelayR_Ln                        (MCPARAMID)( 2986 << 14)
#define MC__ScanDelayG_Ln                        (MCPARAMID)( 2987 << 14)
#define MC__ScanDelayB_Ln                        (MCPARAMID)( 2988 << 14)
#define MC__RBT_DAV                              (MCPARAMID)( 2989 << 14)
#define MC__RBT_OVF                              (MCPARAMID)( 2990 << 14)
#define MC__BAD_LBAD                             (MCPARAMID)( 2991 << 14)
#define MC__BAD_CBAD                             (MCPARAMID)( 2992 << 14)
#define MC_CreationModel                         (MCPARAMID)( 2993 << 14)
#define MC_CreationModel_COLORSCAN_M               1
#define MC_CreationModel_VALUE_M                   2
#define MC_CreationModel_EXPERT_M                  3
#define MC_CreationModel_EXPERT_A                  4
#define MC_CreationModel_EXPERT_B                  5
#define MC_CreationModel_ALPHA_X                   6
#define MC_CreationModel_ALPHA_XBIS                7
#define MC_CreationModel_ALPHA_Y                   8
#define MC_CreationModel_ALPHA_YBIS                9
#define MC_CreationModel_IOTA_X                   10
#define MC_CreationModel_GAMMA_X                  11
#define MC_CreationModel_GAMMA_XBIS               12
#define MC_CreationModel_GAMMA_Y                  13
#define MC_CreationModel_GAMMA_YBIS               14
#define MC_CreationModel_GAMMA_Z                  15
#define MC_CreationModel_GAMMA_ZBIS               16
#define MC_CreationModel_FAIL                     17
#define MC_TileSizeX_Px                          (MCPARAMID)( 2994 << 14)
#define MC_TileCountX                            (MCPARAMID)( 2995 << 14)
#define MC_TileSizeY_Ln                          (MCPARAMID)( 2996 << 14)
#define MC_TileCountY                            (MCPARAMID)( 2997 << 14)
#define MC_ImageFlipX_Filter                     (MCPARAMID)( 2998 << 14)
#define MC_ImageFlipY_Filter                     (MCPARAMID)( 2999 << 14)
#define MC__BoardType__PICOLO_JETX                18
#define MC_Camera_MyColorScanCameraLink          148
#define MC_CamConfig_LxxxxSC                     205
#define MC_CamConfig_LxxxxRG2                    206
#define MC_CamConfig_L1024SC                     207
#define MC_CamConfig_L2048SC                     208
#define MC_CamConfig_L2098SC                     209
#define MC_CamConfig_L4096SC                     210
#define MC_CamConfig_L6144SC                     211
#define MC_CamConfig_L7500SC                     212
#define MC_CamConfig_L8192SC                     213
#define MC_CameraRateMode                        (MCPARAMID)( 3000 << 14)
#define MC_CameraRateMode_FREERUNNING              1
#define MC_CameraRateMode_CONTROLLED               2
#define MC_CameraRateMode_UNKNOWN                  3
#define MC_LineCaptureMode                       (MCPARAMID)( 3001 << 14)
#define MC_LineCaptureMode_ALL                     1
#define MC_LineCaptureMode_PICK                    2
#define MC___CameraRateMode_Check                (MCPARAMID)( 3002 << 14)
#define MC___CameraRateMode_Check_PASS             1
#define MC___CameraRateMode_Check_FAIL             2
#define MC___LineRateMode_Check                  (MCPARAMID)( 3003 << 14)
#define MC___LineRateMode_Check_PASS               1
#define MC___LineRateMode_Check_FAIL               2
#define MC_CrossPitch                            (MCPARAMID)( 3004 << 14)
#define MC_CrossPitch_Filter                     (MCPARAMID)( 3005 << 14)
#define MC_ScanDelayCompensation                 (MCPARAMID)( 3006 << 14)
#define MC_ScanDelayCompensation_DISABLED          1
#define MC_ScanDelayCompensation_ENABLED           2
#define MC__ScanDelay_Ln                         (MCPARAMID)( 3007 << 14)
#define MC__GrabberOffset                        (MCPARAMID)( 3008 << 14)
#define MC_ColorFormat_JPEG                       57
#define MC__CamConfig_INVALID                      1
#define MC__CamConfig_AREA_SP                      2
#define MC__CamConfig_AREA_RP                      3
#define MC__CamConfig_AREA_SC                      4
#define MC__CamConfig_AREA_RC                      5
#define MC__CamConfig_AREA_RG                      6
#define MC__CamConfig_AREA_RG2                     7
#define MC__CamConfig_LINE_SP                      8
#define MC__CamConfig_LINE_RP                      9
#define MC__CamConfig_LINE_SC                     10
#define MC__CamConfig_LINE_RC                     11
#define MC__CamConfig_LINE_RG                     12
#define MC__CamConfig_LINE_RG2                    13
#define MC__CamConfig_TDI_SP                      14
#define MC__CamConfig_TDI_RP                      15
#define MC___CameraConfig_Check                  (MCPARAMID)( 3009 << 14)
#define MC___CameraConfig_Check_PASS               1
#define MC___CameraConfig_Check_FAIL               2
#define MC__CSC_SEQ                              (MCPARAMID)( 3010 << 14)
#define MC_ColorScanBypass                       (MCPARAMID)( 3011 << 14)
#define MC_ColorScanBypass_OFF                     1
#define MC_ColorScanBypass_ON                      2
#define MC__CSC_BYP                              (MCPARAMID)( 3012 << 14)
#define MC__CSC_SQM                              (MCPARAMID)( 3013 << 14)
#define MC__STM1_T1SEL_T1END                      10
#define MC__STM1_LRSEL                           (MCPARAMID)( 3014 << 14)
#define MC__STM1_LRSEL_FTRIGS                      1
#define MC__STM1_LRSEL_LTRIGS                      2
#define MC__STM1_LRSEL_PPLS                        3
#define MC__STM1_LRSEL_OFF                         4
#define MC_SHC_InDataWidth                       (MCPARAMID)( 3015 << 14)
#define MC_SHC_OutDataWidth                      (MCPARAMID)( 3016 << 14)
#define MC_LUT_InDataWidth                       (MCPARAMID)( 3017 << 14)
#define MC_LUT_OutDataWidth                      (MCPARAMID)( 3018 << 14)
#define MC_Camera_AViiVA_M4CL8007                149
#define MC_BoardTopology_UNIFORM                  29
#define MC_BoardTopology_1_2                      30
#define MC_BoardTopology_3_0                      31
#define MC_BoardTopology_0_3                      32
#define MC_CreationModel_COLORSCAN                18
#define MC_CreationModel_0x801DFFFF               19
#define MC_CreationModel_0                        20
#define MC_CreationModel_0x8009FFFF               21
#define MC_CreationModel_0x800AFFFF               22
#define MC_CreationModel_0x800BFFFF               23
#define MC_CreationModel_0x800CFFFF               24
#define MC_CreationModel_MC_CHANNEL_GAMMA_X       25
#define MC_CreationModel_MC_CHANNEL_GAMMA_XBIS    26
#define MC_CreationModel_MC_CHANNEL_GAMMA_Y       27
#define MC_CreationModel_MC_CHANNEL_GAMMA_YBIS    28
#define MC_CreationModel_MC_CHANNEL_GAMMA_Z       29
#define MC_CreationModel_MC_CHANNEL_GAMMA_ZBIS    30
#define MC_BoardInUse                            (MCPARAMID)( 3019 << 14)
#define MC__NormalOffsetXParity                  (MCPARAMID)( 3020 << 14)
#define MC_ChannelCount                          (MCPARAMID)( 3021 << 14)
#define MC_Camera_CV_A33                         150
#define MC_CamConfig_P117SC                      214
#define MC_CamConfig_P117RG                      215
#define MC___PCIID_Check                         (MCPARAMID)( 3022 << 14)
#define MC___PCIID_Check_PASS                      1
#define MC___PCIID_Check_FAIL                      2
#define MC__PCIBridge                            (MCPARAMID)( 3023 << 14)
#define MC__PCIBridge_PLX9054                      1
#define MC__PCIBridge_PLX9656                      2
#define MC__PCIBridge_UNKNOWN                      3
#define MC_Camera_A402k                          151
#define MC__Category_Signaling                    30
#define MC_AcquisitionCleanup                    (MCPARAMID)( 3024 << 14)
#define MC_AcquisitionCleanup_DISABLED             1
#define MC_AcquisitionCleanup_ENABLED              2
#define MC_RecycleIfNecessary                    (MCPARAMID)( 3025 << 14)
#define MC_RecycleIfNecessary_YES                  1
#define MC_RecycleIfNecessary_NO                   2
#define MC_Camera_CS6910CL                       152
#define MC___FieldPeriod                         (MCPARAMID)( 3026 << 14)
#define MC___SwitchingGrabDelay                  (MCPARAMID)( 3027 << 14)
#define MC_HardTrigOnly_Filter                   (MCPARAMID)( 3028 << 14)
#define MC_NextGrabField_Filter                  (MCPARAMID)( 3029 << 14)
#define MC_GrabFld_Filter                        (MCPARAMID)( 3030 << 14)
#define MC__NextGrabFieldParity                  (MCPARAMID)( 3031 << 14)
#define MC__NextGrabFieldParity_ANY                1
#define MC__NextGrabFieldParity_UP                 2
#define MC__NextGrabFieldParity_DOWN               3
#define MC__NextGrabFieldParity_KEEP               4
#define MC__NextGrabFieldParity_CHANGE             5
#define MC__R1FieldNumber                        (MCPARAMID)( 3032 << 14)
#define MC__R1Parity                             (MCPARAMID)( 3033 << 14)
#define MC__R1Parity_UP                            1
#define MC__R1Parity_DOWN                          2
#define MC__Category_Sequence_Interlace_Master    31
#define MC__Vref_BACQR1_H                        (MCPARAMID)( 3034 << 14)
#define MC__Vref_BACQR2_H                        (MCPARAMID)( 3035 << 14)
#define MC__BACQR1_EACQR1_H                      (MCPARAMID)( 3036 << 14)
#define MC__BACQR2_EACQR2_H                      (MCPARAMID)( 3037 << 14)
#define MC__Vref_EACQR1_H                        (MCPARAMID)( 3038 << 14)
#define MC__Vref_EACQR2_H                        (MCPARAMID)( 3039 << 14)
#define MC__EACQR1_BACQR2_H                      (MCPARAMID)( 3040 << 14)
#define MC__VDRIVEDur_H                          (MCPARAMID)( 3041 << 14)
#define MC__SYNC_IM_VRSTOn_Pos                   (MCPARAMID)( 3042 << 14)
#define MC__SYNC_IM_VRSTOff_Pos                  (MCPARAMID)( 3043 << 14)
#define MC__SYNC_IM_ACQR1On_Pos                  (MCPARAMID)( 3044 << 14)
#define MC__SYNC_IM_ACQR1Off_Pos                 (MCPARAMID)( 3045 << 14)
#define MC__SYNC_IM_VRSTMIDOn_Pos                (MCPARAMID)( 3046 << 14)
#define MC__SYNC_IM_VRSTMIDOff_Pos               (MCPARAMID)( 3047 << 14)
#define MC__SYNC_IM_ACQR2On_Pos                  (MCPARAMID)( 3048 << 14)
#define MC__SYNC_IM_ACQR2Off_Pos                 (MCPARAMID)( 3049 << 14)
#define MC__SYNC_IM_R1_Line1_RPT                 (MCPARAMID)( 3050 << 14)
#define MC__SYNC_IM_R1_Line2_RPT                 (MCPARAMID)( 3051 << 14)
#define MC__SYNC_IM_R1_Line3_RPT                 (MCPARAMID)( 3052 << 14)
#define MC__SYNC_IM_R1_Line4_RPT                 (MCPARAMID)( 3053 << 14)
#define MC__SYNC_IM_R2_Line1_RPT                 (MCPARAMID)( 3054 << 14)
#define MC__SYNC_IM_R2_Line2_RPT                 (MCPARAMID)( 3055 << 14)
#define MC__SYNC_IM_R2_Line3_RPT                 (MCPARAMID)( 3056 << 14)
#define MC__SYNC_IM_R2_Line4_RPT                 (MCPARAMID)( 3057 << 14)
#define MC__SYNC_IM_IDLER1_Line1_RPT             (MCPARAMID)( 3058 << 14)
#define MC__SYNC_IM_IDLER1_Line2_RPT             (MCPARAMID)( 3059 << 14)
#define MC__SYNC_IM_IDLER1_Line3_RPT             (MCPARAMID)( 3060 << 14)
#define MC__SYNC_IM_IDLER2_Line1_RPT             (MCPARAMID)( 3061 << 14)
#define MC__SYNC_IM_IDLER2_Line2_RPT             (MCPARAMID)( 3062 << 14)
#define MC__SYNC_IM_IDLER2_Line3_RPT             (MCPARAMID)( 3063 << 14)
#define MC__SYNC_IM_ACQR_Line1_RPT               (MCPARAMID)( 3064 << 14)
#define MC__SYNC_IM_ACQR1_Line2_RPT              (MCPARAMID)( 3065 << 14)
#define MC__SYNC_IM_ACQR1_Line3_RPT              (MCPARAMID)( 3066 << 14)
#define MC__SYNC_IM_ACQR1_Line4_RPT              (MCPARAMID)( 3067 << 14)
#define MC__SYNC_IM_ACQR1_Line5_RPT              (MCPARAMID)( 3068 << 14)
#define MC__SYNC_IM_ACQR2_Line2_RPT              (MCPARAMID)( 3069 << 14)
#define MC__SYNC_IM_ACQR2_Line3_RPT              (MCPARAMID)( 3070 << 14)
#define MC__SYNC_IM_ACQR2_Line4_RPT              (MCPARAMID)( 3071 << 14)
#define MC__SYNC_IM_ACQR2_Line5_RPT              (MCPARAMID)( 3072 << 14)
#define MC_F0                                    (MCPARAMID)( 3073 << 14)
#define MC_F1                                    (MCPARAMID)( 3074 << 14)
#define MC_F2                                    (MCPARAMID)( 3075 << 14)
#define MC_I0                                    (MCPARAMID)( 3076 << 14)
#define MC__Period_Min_us                        (MCPARAMID)( 3077 << 14)
#define MC__Period_Min_PG                        (MCPARAMID)( 3078 << 14)
#define MC__STB_x1STYL_HOLD                        6
#define MC__STB_x2STYL_HOLD                        6
#define MC___MSFWarning_Check                    (MCPARAMID)( 3079 << 14)
#define MC___MSFWarning_Check_PASS                 1
#define MC___MSFWarning_Check_FAIL                 2
#define MC___TrigFilter_Check                    (MCPARAMID)( 3080 << 14)
#define MC___TrigFilter_Check_PASS                 1
#define MC___TrigFilter_Check_FAIL                 2
#define MC___LineTrigFilter_Check                (MCPARAMID)( 3081 << 14)
#define MC___LineTrigFilter_Check_PASS             1
#define MC___LineTrigFilter_Check_FAIL             2
#define MC_DecimationFactorY                     (MCPARAMID)( 3082 << 14)
#define MC_InputConfig_Filter_MC_IN1             (MCPARAMID)( 3083 << 14)
#define MC___InputId_MC_IN1                      (MCPARAMID)( 3084 << 14)
#define MC_OutputConfig_Filter_MC_OUT1           (MCPARAMID)( 3085 << 14)
#define MC___OutputId_MC_OUT1                    (MCPARAMID)( 3086 << 14)
#define MC_OutputState_Filter_MC_OUT1            (MCPARAMID)( 3087 << 14)
#define MC_OutputStyle_Filter_MC_OUT1            (MCPARAMID)( 3088 << 14)
#define MC_OutputState_MC_OUT1                   (MCPARAMID)( 3089 << 14)
#define MC_OutputState_MC_OUT1_HOLD                1
#define MC_OutputState_MC_OUT1_LOW                 2
#define MC_OutputState_MC_OUT1_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT2           (MCPARAMID)( 3090 << 14)
#define MC___OutputId_MC_OUT2                    (MCPARAMID)( 3091 << 14)
#define MC_OutputState_Filter_MC_OUT2            (MCPARAMID)( 3092 << 14)
#define MC_OutputStyle_Filter_MC_OUT2            (MCPARAMID)( 3093 << 14)
#define MC_OutputState_MC_OUT2                   (MCPARAMID)( 3094 << 14)
#define MC_OutputState_MC_OUT2_HOLD                1
#define MC_OutputState_MC_OUT2_LOW                 2
#define MC_OutputState_MC_OUT2_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT3           (MCPARAMID)( 3095 << 14)
#define MC___OutputId_MC_OUT3                    (MCPARAMID)( 3096 << 14)
#define MC_OutputState_Filter_MC_OUT3            (MCPARAMID)( 3097 << 14)
#define MC_OutputStyle_Filter_MC_OUT3            (MCPARAMID)( 3098 << 14)
#define MC_OutputState_MC_OUT3                   (MCPARAMID)( 3099 << 14)
#define MC_OutputState_MC_OUT3_HOLD                1
#define MC_OutputState_MC_OUT3_LOW                 2
#define MC_OutputState_MC_OUT3_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT4           (MCPARAMID)( 3100 << 14)
#define MC___OutputId_MC_OUT4                    (MCPARAMID)( 3101 << 14)
#define MC_OutputState_Filter_MC_OUT4            (MCPARAMID)( 3102 << 14)
#define MC_OutputStyle_Filter_MC_OUT4            (MCPARAMID)( 3103 << 14)
#define MC_OutputState_MC_OUT4                   (MCPARAMID)( 3104 << 14)
#define MC_OutputState_MC_OUT4_HOLD                1
#define MC_OutputState_MC_OUT4_LOW                 2
#define MC_OutputState_MC_OUT4_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT5           (MCPARAMID)( 3105 << 14)
#define MC___OutputId_MC_OUT5                    (MCPARAMID)( 3106 << 14)
#define MC_OutputState_Filter_MC_OUT5            (MCPARAMID)( 3107 << 14)
#define MC_OutputStyle_Filter_MC_OUT5            (MCPARAMID)( 3108 << 14)
#define MC_OutputState_MC_OUT5                   (MCPARAMID)( 3109 << 14)
#define MC_OutputState_MC_OUT5_HOLD                1
#define MC_OutputState_MC_OUT5_LOW                 2
#define MC_OutputState_MC_OUT5_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT6           (MCPARAMID)( 3110 << 14)
#define MC___OutputId_MC_OUT6                    (MCPARAMID)( 3111 << 14)
#define MC_OutputState_Filter_MC_OUT6            (MCPARAMID)( 3112 << 14)
#define MC_OutputStyle_Filter_MC_OUT6            (MCPARAMID)( 3113 << 14)
#define MC_OutputState_MC_OUT6                   (MCPARAMID)( 3114 << 14)
#define MC_OutputState_MC_OUT6_HOLD                1
#define MC_OutputState_MC_OUT6_LOW                 2
#define MC_OutputState_MC_OUT6_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT7           (MCPARAMID)( 3115 << 14)
#define MC___OutputId_MC_OUT7                    (MCPARAMID)( 3116 << 14)
#define MC_OutputState_Filter_MC_OUT7            (MCPARAMID)( 3117 << 14)
#define MC_OutputStyle_Filter_MC_OUT7            (MCPARAMID)( 3118 << 14)
#define MC_OutputState_MC_OUT7                   (MCPARAMID)( 3119 << 14)
#define MC_OutputState_MC_OUT7_HOLD                1
#define MC_OutputState_MC_OUT7_LOW                 2
#define MC_OutputState_MC_OUT7_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT8           (MCPARAMID)( 3120 << 14)
#define MC___OutputId_MC_OUT8                    (MCPARAMID)( 3121 << 14)
#define MC_OutputState_Filter_MC_OUT8            (MCPARAMID)( 3122 << 14)
#define MC_OutputStyle_Filter_MC_OUT8            (MCPARAMID)( 3123 << 14)
#define MC_OutputState_MC_OUT8                   (MCPARAMID)( 3124 << 14)
#define MC_OutputState_MC_OUT8_HOLD                1
#define MC_OutputState_MC_OUT8_LOW                 2
#define MC_OutputState_MC_OUT8_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT9           (MCPARAMID)( 3125 << 14)
#define MC___OutputId_MC_OUT9                    (MCPARAMID)( 3126 << 14)
#define MC_OutputState_Filter_MC_OUT9            (MCPARAMID)( 3127 << 14)
#define MC_OutputStyle_Filter_MC_OUT9            (MCPARAMID)( 3128 << 14)
#define MC_OutputState_MC_OUT9                   (MCPARAMID)( 3129 << 14)
#define MC_OutputState_MC_OUT9_HOLD                1
#define MC_OutputState_MC_OUT9_LOW                 2
#define MC_OutputState_MC_OUT9_HIGH                3
#define MC_OutputConfig_Filter_MC_OUT10          (MCPARAMID)( 3130 << 14)
#define MC___OutputId_MC_OUT10                   (MCPARAMID)( 3131 << 14)
#define MC_OutputState_Filter_MC_OUT10           (MCPARAMID)( 3132 << 14)
#define MC_OutputStyle_Filter_MC_OUT10           (MCPARAMID)( 3133 << 14)
#define MC_OutputState_MC_OUT10                  (MCPARAMID)( 3134 << 14)
#define MC_OutputState_MC_OUT10_HOLD               1
#define MC_OutputState_MC_OUT10_LOW                2
#define MC_OutputState_MC_OUT10_HIGH               3
#define MC_OutputConfig_Filter_MC_OUT11          (MCPARAMID)( 3135 << 14)
#define MC___OutputId_MC_OUT11                   (MCPARAMID)( 3136 << 14)
#define MC_OutputState_Filter_MC_OUT11           (MCPARAMID)( 3137 << 14)
#define MC_OutputStyle_Filter_MC_OUT11           (MCPARAMID)( 3138 << 14)
#define MC_OutputState_MC_OUT11                  (MCPARAMID)( 3139 << 14)
#define MC_OutputState_MC_OUT11_HOLD               1
#define MC_OutputState_MC_OUT11_LOW                2
#define MC_OutputState_MC_OUT11_HIGH               3
#define MC_OutputConfig_Filter_MC_OUT12          (MCPARAMID)( 3140 << 14)
#define MC___OutputId_MC_OUT12                   (MCPARAMID)( 3141 << 14)
#define MC_OutputState_Filter_MC_OUT12           (MCPARAMID)( 3142 << 14)
#define MC_OutputStyle_Filter_MC_OUT12           (MCPARAMID)( 3143 << 14)
#define MC_OutputState_MC_OUT12                  (MCPARAMID)( 3144 << 14)
#define MC_OutputState_MC_OUT12_HOLD               1
#define MC_OutputState_MC_OUT12_LOW                2
#define MC_OutputState_MC_OUT12_HIGH               3
#define MC_OutputConfig_Filter_MC_OUT13          (MCPARAMID)( 3145 << 14)
#define MC___OutputId_MC_OUT13                   (MCPARAMID)( 3146 << 14)
#define MC_OutputState_Filter_MC_OUT13           (MCPARAMID)( 3147 << 14)
#define MC_OutputStyle_Filter_MC_OUT13           (MCPARAMID)( 3148 << 14)
#define MC_OutputState_MC_OUT13                  (MCPARAMID)( 3149 << 14)
#define MC_OutputState_MC_OUT13_HOLD               1
#define MC_OutputState_MC_OUT13_LOW                2
#define MC_OutputState_MC_OUT13_HIGH               3
#define MC_INTERLACERR4LoadSet                   (MCPARAMID)( 3150 << 14)
#define MC__ASYNC_IRR4_VRST1Off_Pos              (MCPARAMID)( 3151 << 14)
#define MC__ASYNC_IRR4_VRST2MIDOn_Pos            (MCPARAMID)( 3152 << 14)
#define MC__ASYNC_IRR4_VRST2MIDOff_Pos           (MCPARAMID)( 3153 << 14)
#define MC__ASYNC_IRR4_VRST3On_Pos               (MCPARAMID)( 3154 << 14)
#define MC__ASYNC_IRR4_VRST3Off_Pos              (MCPARAMID)( 3155 << 14)
#define MC__ASYNC_IRR4_ACQR1On_Pos               (MCPARAMID)( 3156 << 14)
#define MC__ASYNC_IRR4_ACQR1Off_Pos              (MCPARAMID)( 3157 << 14)
#define MC__ASYNC_IRR4_VRST4MIDOn_Pos            (MCPARAMID)( 3158 << 14)
#define MC__ASYNC_IRR4_VRSTMIDOff_Pos            (MCPARAMID)( 3159 << 14)
#define MC__ASYNC_IRR4_ACQR2On_Pos               (MCPARAMID)( 3160 << 14)
#define MC__ASYNC_IRR4_ACQR2Off_Pos              (MCPARAMID)( 3161 << 14)
#define MC__ASYNC_IRR4_Field1_Line1_RPT          (MCPARAMID)( 3162 << 14)
#define MC__ASYNC_IRR4_Field1_Line2_RPT          (MCPARAMID)( 3163 << 14)
#define MC__ASYNC_IRR4_Field2_Line1_RPT          (MCPARAMID)( 3164 << 14)
#define MC__ASYNC_IRR4_Field2_Line3_RPT          (MCPARAMID)( 3165 << 14)
#define MC__ASYNC_IRR4_Field3_Line1_RPT          (MCPARAMID)( 3166 << 14)
#define MC__ASYNC_IRR4_Field3_Line2_RPT          (MCPARAMID)( 3167 << 14)
#define MC__ASYNC_IRR4_Field3_Line3_RPT          (MCPARAMID)( 3168 << 14)
#define MC__ASYNC_IRR4_Field3_Line4_RPT          (MCPARAMID)( 3169 << 14)
#define MC__ASYNC_IRR4_Field4_Line1_RPT          (MCPARAMID)( 3170 << 14)
#define MC__ASYNC_IRR4_Field4_Line2_RPT          (MCPARAMID)( 3171 << 14)
#define MC__ASYNC_IRR4_Field4_Line3_RPT          (MCPARAMID)( 3172 << 14)
#define MC__SequenceLoadSet_RR4                   13
#define MC__Category_Sequence_Interlace_RR4       32
#define MC__ASYNC_IRR4_VRST4MIDOff_Pos           (MCPARAMID)( 3173 << 14)
#define MC__ASYNC_IRR4_Field2_Line2_RPT          (MCPARAMID)( 3174 << 14)
#define MC__ASYNC_IRR4_Field4_Line4_RPT          (MCPARAMID)( 3175 << 14)
#define MC_CamConfig_IxxRM_4                     216
#define MC_ChannelTopology_QUADXQUAD              15
#define MC_Camera_A403k                          153
#define MC___ExposeReadout_Check                 (MCPARAMID)( 3176 << 14)
#define MC___ExposeReadout_Check_PASS              1
#define MC___ExposeReadout_Check_FAIL              2
#define MC__CamConfig_AREA_RG1                    16
#define MC__ExposeReadout                        (MCPARAMID)( 3177 << 14)
#define MC__ExposeReadout_INVALID                  1
#define MC__ExposeReadout_AREA_SP                  2
#define MC__ExposeReadout_AREA_RP                  3
#define MC__ExposeReadout_AREA_SC                  4
#define MC__ExposeReadout_AREA_RC                  5
#define MC__ExposeReadout_AREA_RG                  6
#define MC__ExposeReadout_AREA_RG1                 7
#define MC__ExposeReadout_AREA_RG2                 8
#define MC__RESETSource                          (MCPARAMID)( 3178 << 14)
#define MC__RESETSource_CUS2                       1
#define MC__RESETSource_SUS2                       2
#define MC_ExposureController                    (MCPARAMID)( 3179 << 14)
#define MC_ExposureController_GRABBER              1
#define MC_ExposureController_CAMERA               2
#define MC_ExposureController_NONE                 3
#define MC_Camera_InterlaceRR                    154
#define MC_CamConfig_IxxRM                       217
#define MC_Camera_4000m                          155
#define MC_CamConfig_P16SC                       218
#define MC_CamConfig_P16RG                       219
#define MC_CamConfig_I50SM_R                     220
#define MC_CamConfig_I60SM_R                     221
#define MC_CamConfig_IxxSM_R                     222
#define MC__ExposeReadout_AREA_SL                  9
#define MC___LongPage_Check                      (MCPARAMID)( 3180 << 14)
#define MC___LongPage_Check_PASS                   1
#define MC___LongPage_Check_FAIL                   2
#define MC___LongPage_BoardCheck                 (MCPARAMID)( 3181 << 14)
#define MC___LongPage_BoardCheck_PASS              1
#define MC___LongPage_BoardCheck_FAIL              2
#define MC___LongPage_ParamCoherencyCheck        (MCPARAMID)( 3182 << 14)
#define MC___LongPage_ParamCoherencyCheck_PASS     1
#define MC___LongPage_ParamCoherencyCheck_FAIL     2
#define MC__CSC_LNCPT_RESIDUE                    (MCPARAMID)( 3183 << 14)
#define MC_ResidualTileCountY                    (MCPARAMID)( 3184 << 14)
#define MC_Camera_KP_F100BCL                     156
#define MC_B2Usage_TRIGGER                         3
#define MC_Camera_XC_ES30                        157
#define MC_Camera_XC_ES30CE                      158
#define MC_Camera_2000m                          159
#define MC_Camera_TM_4000CL                      160
#define MC_CamConfig_P32SC                       223
#define MC_CamConfig_P32RG                       224
#define MC__BoardType__PICOLO_TETRAX              19
#define MC__BoardType__JUNIOR_4                   20
#define MC_Camera_SI_M100                        161
#define MC_CamConfig_P17SA                       225
#define MC_CamConfig_P17RA                       226
#define MC_CamConfig_P17RA_G                     227
#define MC_Manufacturer_COSTAR                    23
#define MC_Camera_CS8541D                        162
#define MC__Board_Type__HARMONY                    5
#define MC__BoardType__HARMONY                    21
#define MC_GrabberIx                             (MCPARAMID)( 3185 << 14)
#define MC_Tap                                   (MCPARAMID)( 3186 << 14)
#define MC_HSLane                                (MCPARAMID)( 3187 << 14)
#define MC_VSLane                                (MCPARAMID)( 3188 << 14)
#define MC_ASR                                   (MCPARAMID)( 3189 << 14)
#define MC_TLD_S                                 (MCPARAMID)( 3190 << 14)
#define MC_HPD_S                                 (MCPARAMID)( 3191 << 14)
#define MC_SPD_S                                 (MCPARAMID)( 3192 << 14)
#define MC_OffsetGate_S                          (MCPARAMID)( 3193 << 14)
#define MC_EMN                                   (MCPARAMID)( 3194 << 14)
#define MC_EMX                                   (MCPARAMID)( 3195 << 14)
#define MC_OMN                                   (MCPARAMID)( 3196 << 14)
#define MC_OMX                                   (MCPARAMID)( 3197 << 14)
#define MC_TLD                                   (MCPARAMID)( 3198 << 14)
#define MC__TLD_S                                (MCPARAMID)( 3199 << 14)
#define MC_SPD                                   (MCPARAMID)( 3200 << 14)
#define MC__SPD_S                                (MCPARAMID)( 3201 << 14)
#define MC_HPD                                   (MCPARAMID)( 3202 << 14)
#define MC__HPD_S                                (MCPARAMID)( 3203 << 14)
#define MC_SSB                                   (MCPARAMID)( 3204 << 14)
#define MC_SBP                                   (MCPARAMID)( 3205 << 14)
#define MC__OffsetGate_S                         (MCPARAMID)( 3206 << 14)
#define MC_SVA                                   (MCPARAMID)( 3207 << 14)
#define MC_SSA                                   (MCPARAMID)( 3208 << 14)
#define MC_VCC                                   (MCPARAMID)( 3209 << 14)
#define MC_LAC                                   (MCPARAMID)( 3210 << 14)
#define MC_TAC                                   (MCPARAMID)( 3211 << 14)
#define MC_MNS_R                                 (MCPARAMID)( 3212 << 14)
#define MC__MNS                                  (MCPARAMID)( 3213 << 14)
#define MC_MNS                                   (MCPARAMID)( 3214 << 14)
#define MC_MXS_R                                 (MCPARAMID)( 3215 << 14)
#define MC__MXS                                  (MCPARAMID)( 3216 << 14)
#define MC_MXS                                   (MCPARAMID)( 3217 << 14)
#define MC_VSC                                   (MCPARAMID)( 3218 << 14)
#define MC_VSC_INTERLACE                           1
#define MC_VSC_PROGRESSIVE                         2
#define MC_CDC                                   (MCPARAMID)( 3219 << 14)
#define MC_CDC_PAL                                 1
#define MC_CDC_NTSC                                2
#define MC_CDC_MONOCHROME                          3
#define MC_CDC_PAL_TRAP                            4
#define MC_CDC_NTSC_TRAP                           5
#define MC_SPC                                   (MCPARAMID)( 3220 << 14)
#define MC_SPC_PAL_SYNC                            1
#define MC_SPC_PAL_EVEN                            2
#define MC_SPC_PAL_ODD                             3
#define MC_SPC_NTSC_SYNC                           4
#define MC_SPC_NTSC_EVEN                           5
#define MC_SPC_NTSC_ODD                            6
#define MC_ChannelIx                             (MCPARAMID)( 3221 << 14)
#define MC__SyncPhase                            (MCPARAMID)( 3222 << 14)
#define MC__SyncPhase_EVEN                         1
#define MC__SyncPhase_ODD                          2
#define MC_DRP_R                                 (MCPARAMID)( 3223 << 14)
#define MC_RHL_R                                 (MCPARAMID)( 3224 << 14)
#define MC_RHA                                   (MCPARAMID)( 3225 << 14)
#define MC_RHL                                   (MCPARAMID)( 3226 << 14)
#define MC_RHD                                   (MCPARAMID)( 3227 << 14)
#define MC_RHT                                   (MCPARAMID)( 3228 << 14)
#define MC_RVA                                   (MCPARAMID)( 3229 << 14)
#define MC_RVL                                   (MCPARAMID)( 3230 << 14)
#define MC_RVD                                   (MCPARAMID)( 3231 << 14)
#define MC_RVT                                   (MCPARAMID)( 3232 << 14)
#define MC_RHD_0                                 (MCPARAMID)( 3233 << 14)
#define MC_RHD_1                                 (MCPARAMID)( 3234 << 14)
#define MC_RHD_2                                 (MCPARAMID)( 3235 << 14)
#define MC_DummyRHD_0                            (MCPARAMID)( 3236 << 14)
#define MC_DummyRHD_1                            (MCPARAMID)( 3237 << 14)
#define MC_DummyRHD_2                            (MCPARAMID)( 3238 << 14)
#define MC_AlphaComponent                        (MCPARAMID)( 3239 << 14)
#define MC_DRL                                   (MCPARAMID)( 3240 << 14)
#define MC__Gain                                 (MCPARAMID)( 3241 << 14)
#define MC__Offset                               (MCPARAMID)( 3242 << 14)
#define MC_SBS                                   (MCPARAMID)( 3243 << 14)
#define MC_URG_0                                 (MCPARAMID)( 3244 << 14)
#define MC__Gain_0                               (MCPARAMID)( 3245 << 14)
#define MC_URG_1                                 (MCPARAMID)( 3246 << 14)
#define MC__Gain_1                               (MCPARAMID)( 3247 << 14)
#define MC_URG_2                                 (MCPARAMID)( 3248 << 14)
#define MC__Gain_2                               (MCPARAMID)( 3249 << 14)
#define MC_URO_0                                 (MCPARAMID)( 3250 << 14)
#define MC__Offset_0                             (MCPARAMID)( 3251 << 14)
#define MC_URO_1                                 (MCPARAMID)( 3252 << 14)
#define MC__Offset_1                             (MCPARAMID)( 3253 << 14)
#define MC_URO_2                                 (MCPARAMID)( 3254 << 14)
#define MC__Offset_2                             (MCPARAMID)( 3255 << 14)
#define MC_KernelIx                              (MCPARAMID)( 3256 << 14)
#define MC_CVN                                   (MCPARAMID)( 3257 << 14)
#define MC_KAS                                   (MCPARAMID)( 3258 << 14)
#define MC_Kernel                                (MCPARAMID)( 3259 << 14)
#define MC_Kernel_F12_CT_NTSC                      1
#define MC_Kernel_F12_S1_NTSC                      2
#define MC_Kernel_F13_CT_NTSC                      3
#define MC_Kernel_F13_CT_PAL                       4
#define MC_Kernel_F13_S1_NTSC                      5
#define MC_Kernel_F13_S1_PAL                       6
#define MC_Kernel_F13_S2_PAL                       7
#define MC_Kernel_F15_CT_PAL                       8
#define MC_Kernel_F15_S1_PAL                       9
#define MC_Kernel_F18_S1_HIRES                    10
#define MC_Kernel_F20_S1_HIRES                    11
#define MC_Kernel_F23_S1_HIRES                    12
#define MC_Kernel_F25_S1_HIRES                    13
#define MC_Kernel_F25_S1_NTSC                     14
#define MC_Kernel_F28_S1_HIRES                    15
#define MC_Kernel_F30_S1_PAL                      16
#define MC_Kernel_F32_S1_HIRES                    17
#define MC_Kernel_F35_S1_HIRES                    18
#define MC_Kernel_F40_S1_HIRES                    19
#define MC__SyncPhase_ANY                          3
#define MC_JpegQuality                           (MCPARAMID)( 3260 << 14)
#define MC_Module_12_Present                     (MCPARAMID)( 3261 << 14)
#define MC_ModuleVideoAddress_                   (MCPARAMID)( 3262 << 14)
#define MC_InputStyle_Filter_MC_IN1              (MCPARAMID)( 3263 << 14)
#define MC_InputConfig_Filter_MC_IN2             (MCPARAMID)( 3264 << 14)
#define MC___InputId_MC_IN2                      (MCPARAMID)( 3265 << 14)
#define MC_InputStyle_Filter_MC_IN2              (MCPARAMID)( 3266 << 14)
#define MC_InputConfig_Filter_MC_IN3             (MCPARAMID)( 3267 << 14)
#define MC___InputId_MC_IN3                      (MCPARAMID)( 3268 << 14)
#define MC_InputStyle_Filter_MC_IN3              (MCPARAMID)( 3269 << 14)
#define MC_InputConfig_Filter_MC_IN4             (MCPARAMID)( 3270 << 14)
#define MC___InputId_MC_IN4                      (MCPARAMID)( 3271 << 14)
#define MC_InputStyle_Filter_MC_IN4              (MCPARAMID)( 3272 << 14)
#define MC_InputConfig_Filter_MC_IN5             (MCPARAMID)( 3273 << 14)
#define MC___InputId_MC_IN5                      (MCPARAMID)( 3274 << 14)
#define MC_InputStyle_Filter_MC_IN5              (MCPARAMID)( 3275 << 14)
#define MC__ChannelActivationDelay               (MCPARAMID)( 3276 << 14)
#define MC_Camera_XC_56                          163
#define MC_Camera_MV_D640                        164
#define MC_Camera_MV_D1024                       165
#define MC_CamConfig_P200SC                      228
#define MC_CamConfig_P200RG                      229
#define MC_CamConfig_P75SC                       230
#define MC_CamConfig_P75RG                       231
#define MC_Manufacturer_PHOTONFOCUS               24
#define MC_AcqStep_Px                            (MCPARAMID)( 3277 << 14)
#define MC_CamConfig_P200RC                      232
#define MC_GrabWindow_FIT                          5
#define MC_MIO_SB_Present                        (MCPARAMID)( 3278 << 14)
#define MC_InputConfig_Filter_MC_MIOSB_IN1       (MCPARAMID)( 3279 << 14)
#define MC___InputId_MC_MIOSB_IN1                (MCPARAMID)( 3280 << 14)
#define MC_InputStyle_Filter_MC_MIOSB_IN1        (MCPARAMID)( 3281 << 14)
#define MC_InputConfig_Filter_MC_MIOSB_IN2       (MCPARAMID)( 3282 << 14)
#define MC___InputId_MC_MIOSB_IN2                (MCPARAMID)( 3283 << 14)
#define MC_InputStyle_Filter_MC_MIOSB_IN2        (MCPARAMID)( 3284 << 14)
#define MC_InputConfig_Filter_MC_MIOSB_IN3       (MCPARAMID)( 3285 << 14)
#define MC___InputId_MC_MIOSB_IN3                (MCPARAMID)( 3286 << 14)
#define MC_InputStyle_Filter_MC_MIOSB_IN3        (MCPARAMID)( 3287 << 14)
#define MC_InputConfig_Filter_MC_MIOSB_IN4       (MCPARAMID)( 3288 << 14)
#define MC___InputId_MC_MIOSB_IN4                (MCPARAMID)( 3289 << 14)
#define MC_InputStyle_Filter_MC_MIOSB_IN4        (MCPARAMID)( 3290 << 14)
#define MC_InputConfig_Filter_MC_MIOSB_IN5       (MCPARAMID)( 3291 << 14)
#define MC___InputId_MC_MIOSB_IN5                (MCPARAMID)( 3292 << 14)
#define MC_InputStyle_Filter_MC_MIOSB_IN5        (MCPARAMID)( 3293 << 14)
#define MC_InputConfig_Filter_MC_MIOSB_IN6       (MCPARAMID)( 3294 << 14)
#define MC___InputId_MC_MIOSB_IN6                (MCPARAMID)( 3295 << 14)
#define MC_InputStyle_Filter_MC_MIOSB_IN6        (MCPARAMID)( 3296 << 14)
#define MC_OutputConfig_Filter_MC_MIOSB_OUT1     (MCPARAMID)( 3297 << 14)
#define MC___OutputId_MC_MIOSB_OUT1              (MCPARAMID)( 3298 << 14)
#define MC_OutputState_Filter_MC_MIOSB_OUT1      (MCPARAMID)( 3299 << 14)
#define MC_OutputStyle_Filter_MC_MIOSB_OUT1      (MCPARAMID)( 3300 << 14)
#define MC_OutputState_MC_MIOSB_OUT1             (MCPARAMID)( 3301 << 14)
#define MC_OutputState_MC_MIOSB_OUT1_HOLD          1
#define MC_OutputState_MC_MIOSB_OUT1_LOW           2
#define MC_OutputState_MC_MIOSB_OUT1_HIGH          3
#define MC_OutputConfig_Filter_MC_MIOSB_OUT2     (MCPARAMID)( 3302 << 14)
#define MC___OutputId_MC_MIOSB_OUT2              (MCPARAMID)( 3303 << 14)
#define MC_OutputState_Filter_MC_MIOSB_OUT2      (MCPARAMID)( 3304 << 14)
#define MC_OutputStyle_Filter_MC_MIOSB_OUT2      (MCPARAMID)( 3305 << 14)
#define MC_OutputState_MC_MIOSB_OUT2             (MCPARAMID)( 3306 << 14)
#define MC_OutputState_MC_MIOSB_OUT2_HOLD          1
#define MC_OutputState_MC_MIOSB_OUT2_LOW           2
#define MC_OutputState_MC_MIOSB_OUT2_HIGH          3
#define MC_OutputConfig_Filter_MC_MIOSB_OUT3     (MCPARAMID)( 3307 << 14)
#define MC___OutputId_MC_MIOSB_OUT3              (MCPARAMID)( 3308 << 14)
#define MC_OutputState_Filter_MC_MIOSB_OUT3      (MCPARAMID)( 3309 << 14)
#define MC_OutputStyle_Filter_MC_MIOSB_OUT3      (MCPARAMID)( 3310 << 14)
#define MC_OutputState_MC_MIOSB_OUT3             (MCPARAMID)( 3311 << 14)
#define MC_OutputState_MC_MIOSB_OUT3_HOLD          1
#define MC_OutputState_MC_MIOSB_OUT3_LOW           2
#define MC_OutputState_MC_MIOSB_OUT3_HIGH          3
#define MC_OutputConfig_Filter_MC_MIOSB_OUT4     (MCPARAMID)( 3312 << 14)
#define MC___OutputId_MC_MIOSB_OUT4              (MCPARAMID)( 3313 << 14)
#define MC_OutputState_Filter_MC_MIOSB_OUT4      (MCPARAMID)( 3314 << 14)
#define MC_OutputStyle_Filter_MC_MIOSB_OUT4      (MCPARAMID)( 3315 << 14)
#define MC_OutputState_MC_MIOSB_OUT4             (MCPARAMID)( 3316 << 14)
#define MC_OutputState_MC_MIOSB_OUT4_HOLD          1
#define MC_OutputState_MC_MIOSB_OUT4_LOW           2
#define MC_OutputState_MC_MIOSB_OUT4_HIGH          3
#define MC_OutputConfig_Filter_MC_MIOSB_OUT5     (MCPARAMID)( 3317 << 14)
#define MC___OutputId_MC_MIOSB_OUT5              (MCPARAMID)( 3318 << 14)
#define MC_OutputState_Filter_MC_MIOSB_OUT5      (MCPARAMID)( 3319 << 14)
#define MC_OutputStyle_Filter_MC_MIOSB_OUT5      (MCPARAMID)( 3320 << 14)
#define MC_OutputState_MC_MIOSB_OUT5             (MCPARAMID)( 3321 << 14)
#define MC_OutputState_MC_MIOSB_OUT5_HOLD          1
#define MC_OutputState_MC_MIOSB_OUT5_LOW           2
#define MC_OutputState_MC_MIOSB_OUT5_HIGH          3
#define MC_OutputConfig_Filter_MC_MIOSB_OUT6     (MCPARAMID)( 3322 << 14)
#define MC___OutputId_MC_MIOSB_OUT6              (MCPARAMID)( 3323 << 14)
#define MC_OutputState_Filter_MC_MIOSB_OUT6      (MCPARAMID)( 3324 << 14)
#define MC_OutputStyle_Filter_MC_MIOSB_OUT6      (MCPARAMID)( 3325 << 14)
#define MC_OutputState_MC_MIOSB_OUT6             (MCPARAMID)( 3326 << 14)
#define MC_OutputState_MC_MIOSB_OUT6_HOLD          1
#define MC_OutputState_MC_MIOSB_OUT6_LOW           2
#define MC_OutputState_MC_MIOSB_OUT6_HIGH          3
#define MC_InputPinName_I5                        68
#define MC_InputPinName_I6                        69
#define MC_OutputPinName_O5                       76
#define MC_OutputPinName_O6                       77
#define MC_FLT                                   (MCPARAMID)( 3327 << 14)
#define MC_FLT_OFF                                 1
#define MC_FLT_ON                                  2
#define MC__DigitizersMask                       (MCPARAMID)( 3328 << 14)
#define MC_IDP_CFG                               (MCPARAMID)( 3329 << 14)
#define MC_TRM                                   (MCPARAMID)( 3330 << 14)
#define MC_TRM_OFF                                 1
#define MC_TRM_ON                                  2
#define MC__VideoLanesMask                       (MCPARAMID)( 3331 << 14)
#define MC_IDP_TRM                               (MCPARAMID)( 3332 << 14)
#define MC_BufferSize                            (MCPARAMID)( 3333 << 14)
#define MC_MinBufferSize                         (MCPARAMID)( 3334 << 14)
#define MC_MinBufferPitch                        (MCPARAMID)( 3335 << 14)
#define MC_BufferPitch                           (MCPARAMID)( 3336 << 14)
#define MC__ScaleFactor                          (MCPARAMID)( 3337 << 14)
#define MC_GainTrim1_Filter                      (MCPARAMID)( 3338 << 14)
#define MC_GainTrim2_Filter                      (MCPARAMID)( 3339 << 14)
#define MC_GainTrim3_Filter                      (MCPARAMID)( 3340 << 14)
#define MC_OffsetTrim1_Filter                    (MCPARAMID)( 3341 << 14)
#define MC_OffsetTrim2_Filter                    (MCPARAMID)( 3342 << 14)
#define MC_OffsetTrim3_Filter                    (MCPARAMID)( 3343 << 14)
#define MC_ConnectorName_DIGITAL_IO               18
#define MC_ConnectorName_DB9                      19
#define MC_Scaling                               (MCPARAMID)( 3344 << 14)
#define MC_Scaling_ENABLE                          1
#define MC_Scaling_DISABLE                         2
#define MC_Camera_CV_M9CL                        166
#define MC_CamConfig_P30RG_O                     233
#define MC_Camera_XC_HR57                        167
#define MC_Camera_XC_HR58                        168
#define MC_Camera_VCC_8350CL                     169
#define MC_Camera_VCC_8550CL                     170
#define MC_Camera_VCC_8750CL                     171
#define MC_Camera_VCC_8850CL                     172
#define MC_Camera_1600c                          173
#define MC_CamConfig_P12SC                       234
#define MC_CamConfig_P12RG                       235
#define MC_CamConfig_P30RC                       236
#define MC_CamConfig_P16RC                       237
#define MC_CamConfig_P12RC                       238
#define MC_Camera_1600c_S                        174
#define MC_Camera_1600c_D                        175
#define MC_Camera_1600c_S_RGB                    176
#define MC_Camera_1600c_D_RGB                    177
#define MC_CamConfig_P17SC                       239
#define MC_CamConfig_P17RG                       240
#define MC_CamConfig_P34SC                       241
#define MC_CamConfig_P34RG                       242
#define MC_TapStructure_HEX_B2                    20
#define MC_ChannelTopology_MEDIUM_2T24_1X2_1Y     16
#define MC__ASSY_SIX                               6
#define MC__UserScaleY                           (MCPARAMID)( 3345 << 14)
#define MC_InputConfig_Filter_MC_IN6             (MCPARAMID)( 3346 << 14)
#define MC___InputId_MC_IN6                      (MCPARAMID)( 3347 << 14)
#define MC_InputStyle_Filter_MC_IN6              (MCPARAMID)( 3348 << 14)
#define MC_InputConfig_Filter_MC_IN7             (MCPARAMID)( 3349 << 14)
#define MC___InputId_MC_IN7                      (MCPARAMID)( 3350 << 14)
#define MC_InputStyle_Filter_MC_IN7              (MCPARAMID)( 3351 << 14)
#define MC_InputConfig_Filter_MC_IN8             (MCPARAMID)( 3352 << 14)
#define MC___InputId_MC_IN8                      (MCPARAMID)( 3353 << 14)
#define MC_InputStyle_Filter_MC_IN8              (MCPARAMID)( 3354 << 14)
#define MC_InputConfig_Filter_MC_IN9             (MCPARAMID)( 3355 << 14)
#define MC___InputId_MC_IN9                      (MCPARAMID)( 3356 << 14)
#define MC_InputStyle_Filter_MC_IN9              (MCPARAMID)( 3357 << 14)
#define MC_InputConfig_Filter_MC_IN10            (MCPARAMID)( 3358 << 14)
#define MC___InputId_MC_IN10                     (MCPARAMID)( 3359 << 14)
#define MC_InputStyle_Filter_MC_IN10             (MCPARAMID)( 3360 << 14)
#define MC_InputConfig_Filter_MC_IN11            (MCPARAMID)( 3361 << 14)
#define MC___InputId_MC_IN11                     (MCPARAMID)( 3362 << 14)
#define MC_InputStyle_Filter_MC_IN11             (MCPARAMID)( 3363 << 14)
#define MC_InputConfig_Filter_MC_IN12            (MCPARAMID)( 3364 << 14)
#define MC___InputId_MC_IN12                     (MCPARAMID)( 3365 << 14)
#define MC_InputStyle_Filter_MC_IN12             (MCPARAMID)( 3366 << 14)
#define MC_InputConfig_Filter_MC_IN13            (MCPARAMID)( 3367 << 14)
#define MC___InputId_MC_IN13                     (MCPARAMID)( 3368 << 14)
#define MC_InputStyle_Filter_MC_IN13             (MCPARAMID)( 3369 << 14)
#define MC_ConnectorName_IO_LINES                 20
#define MC_ConnectorName_IO_SCREW_TERMINAL        21
#define MC_Camera_1000m_D                        178
#define MC_Camera_1000m_S                        179
#define MC_Camera_1600m_D                        180
#define MC_Camera_1600m_S                        181
#define MC_Camera_2000m_D                        182
#define MC_Camera_2000m_S                        183
#define MC_Camera_4000m_D                        184
#define MC_Camera_4000m_S                        185
#define MC_ConnectorName_CTL                      22
#define MC_RCable_A15_C20                         21
#define MC_Cable_A15_C20                         146
#define MC_CableName_Single_Channel_Teli_Remote_Head  91
#define MC__Board_Type__MELODY                     6
#define MC__BoardType__MELODY                     22
#define MC_BoardTopology_1                        33
#define MC_CamConfig_P17SD                       243
#define MC_CamConfig_P17RD_G                     244
#define MC_CamConfig_P17RD                       245
#define MC_ColorFormat_YV12                       58
#define MC_HSamplePeriod                         (MCPARAMID)( 3370 << 14)
#define MC_VSamplePeriod                         (MCPARAMID)( 3371 << 14)
#define MC_Camera_NSUF7400CL                     186
#define MC_CamConfig_L12500RP                    246
#define MC_ConverterMute                         (MCPARAMID)( 3372 << 14)
#define MC_ConverterMute_OFF                       1
#define MC_ConverterMute_ON                        2
#define MC__CPG_PGMOD_PM_CONTROLLED_LR             4
#define MC_ColorFormat_YVU9                       59
#define MC_ComponentSwap                         (MCPARAMID)( 3373 << 14)
#define MC_Camera_SU51                           187
#define MC_Camera_SU74                           188
#define MC_CamConfig_L7400RP                     247
#define MC_CamConfig_L5150SP                     248
#define MC_CamConfig_L5150RP                     249
#define MC_CamConfig_L7400SP                     250
#define MC_ColorFormat_YUV9                       60
#define MC_ColorFormat_YUV422PL                   61
#define MC_ColorFormat_YUV411PL                   62
#define MC_ColorFormat_IYUV                       63
#define MC_ColorFormat_I420                       64
#define MC_ColorFormat_Y42B                       65
#define MC_ColorFormat_Y41B                       66
#define MC_Camera_KP_F200CL                      189
#define MC_OnMinSpeed                            (MCPARAMID)( 3374 << 14)
#define MC_OnMinSpeed_IDLING                       1
#define MC_OnMinSpeed_MUTING                       2
#define MC_ColorFormat_YUV411                     67
#define MC_FrameRate_Hz                          (MCPARAMID)( 3375 << 14)
#define MC_PhaseTrigMode                         (MCPARAMID)( 3376 << 14)
#define MC_PhaseTrigMode_IMMEDIATE                 1
#define MC_PhaseTrigMode_HARD                      2
#define MC_PhaseTrigMode_SOFT                      3
#define MC_PhaseTrigMode_COMBINED                  4
#define MC_PhaseTrigMode_TIMER                     5
#define MC_TimerPeriodFl_ms                      (MCPARAMID)( 3377 << 14)
#define MC_TimerPeriod_ms                        (MCPARAMID)( 3378 << 14)
#define MC_StandardFrameRate_Hz                  (MCPARAMID)( 3379 << 14)
#define MC__FrameRate_Hz                         (MCPARAMID)( 3380 << 14)
#define MC__ImageWidth                           (MCPARAMID)( 3381 << 14)
#define MC__FifoWidth                            (MCPARAMID)( 3382 << 14)
#define MC__EndOfLineWidth                       (MCPARAMID)( 3383 << 14)
#define MC__ConvolverOutputSize                  (MCPARAMID)( 3384 << 14)
#define MC_TimerPeriodFl_us                      (MCPARAMID)( 3385 << 14)
#define MC_TimerPeriod_us                        (MCPARAMID)( 3386 << 14)
#define MC_SeqTrigMode                           (MCPARAMID)( 3387 << 14)
#define MC_SeqTrigMode_IMMEDIATE                   1
#define MC_SeqTrigMode_HARD                        2
#define MC_SeqTrigMode_SOFT                        3
#define MC_SeqTrigMode_COMBINED                    4
#define MC_ControlledFrameRate                   (MCPARAMID)( 3388 << 14)
#define MC_ControlledFrameRate_YES                 1
#define MC_ControlledFrameRate_NO                  2
#define MC_SeqCount                              (MCPARAMID)( 3389 << 14)
#define MC__NextTrigMode                         (MCPARAMID)( 3390 << 14)
#define MC__NextTrigMode_IMMEDIATE                 1
#define MC__NextTrigMode_HARD                      2
#define MC__NextTrigMode_SOFT                      3
#define MC__NextTrigMode_COMBINED                  4
#define MC_EndTrigEdge_HIGH                        3
#define MC_EndTrigEdge_LOW                         4
#define MC__DRS_CACQ_FRAME                         3
#define MC__TrigLineSupported                    (MCPARAMID)( 3391 << 14)
#define MC__TrigLineSupported_YES                  1
#define MC__TrigLineSupported_NO                   2
#define MC_Camera_2000c_D                        190
#define MC_TransferInfoLocation                  (MCPARAMID)( 3392 << 14)
#define MC_TransferInfoLocation_LOCAL              1
#define MC_TransferInfoLocation_HOST               2
#define MC__CDC_TPGTAP1                          (MCPARAMID)( 3393 << 14)
#define MC__CDC_TPGTAP2                          (MCPARAMID)( 3394 << 14)
#define MC__CDC_TPGTAP3                          (MCPARAMID)( 3395 << 14)
#define MC__Board_Type__DELTA                      7
#define MC__BoardType__DELTA                      23
#define MC_GrabberConfig_1_0_1_0                  93
#define MC_GrabberConfig_0_1_0_1                  94
#define MC_Connector_X1                          119
#define MC_Connector_X2                          120
#define MC_Connector_Y1                          121
#define MC_Connector_Y2                          122
#define MC_NextGrabberConfig_1_0_1_0              90
#define MC_NextGrabberConfig_0_1_0_1              91
#define MC_ConnectorName_CAMX1                    23
#define MC_ConnectorName_CAMX2                    24
#define MC_ConnectorName_CAMY1                    25
#define MC_ConnectorName_CAMY2                    26
#define MC_BoardTopology_1_3                      34
#define MC_BoardTopology_3_1                      35
#define MC__Category_Synchronization              33
#define MC__Category_Acquisition_control          34
#define MC_AcquisitionMode                       (MCPARAMID)( 3396 << 14)
#define MC_AcquisitionMode_SNAPSHOT                1
#define MC_AcquisitionMode_HFR                     2
#define MC_AcquisitionMode_PAGE                    3
#define MC_AcquisitionMode_WEB                     4
#define MC_AcquisitionMode_LONGPAGE                5
#define MC_AcquisitionMode_Filter                (MCPARAMID)( 3397 << 14)
#define MC_ActivityLength_Sq                     (MCPARAMID)( 3398 << 14)
#define MC_SeqLength_Ph                          (MCPARAMID)( 3399 << 14)
#define MC_SeqLength_Sl                          (MCPARAMID)( 3400 << 14)
#define MC_SeqLength_Ln                          (MCPARAMID)( 3401 << 14)
#define MC_PhaseLength_Sl                        (MCPARAMID)( 3402 << 14)
#define MC_Operation_UNUSED                        9
#define MC__WFC_ACQCNT                           (MCPARAMID)( 3403 << 14)
#define MC__WSC_TotalFrameCount                  (MCPARAMID)( 3404 << 14)
#define MC_PageLength_LowLimit_Ln                (MCPARAMID)( 3405 << 14)
#define MC_ActivityLength                        (MCPARAMID)( 3406 << 14)
#define MC_SeqLength_Fr                          (MCPARAMID)( 3407 << 14)
#define MC_SeqLength_Pg                          (MCPARAMID)( 3408 << 14)
#define MC_PhaseLength_Fr                        (MCPARAMID)( 3409 << 14)
#define MC_SIMSTARTCHSet                         (MCPARAMID)( 3410 << 14)
#define MC_Dummy                                 (MCPARAMID)( 3411 << 14)
#define MC_PhaseLength_Optimal_Fr                (MCPARAMID)( 3412 << 14)
#define MC_PhaseLength_Minimal_Fr                (MCPARAMID)( 3413 << 14)
#define MC_PageLength_Optimal_Ln                 (MCPARAMID)( 3414 << 14)
#define MC_PageLength_Minimal_Ln                 (MCPARAMID)( 3415 << 14)
#define MC_KST                                   (MCPARAMID)( 3416 << 14)
#define MC_KST_PREDEFINED                          1
#define MC_KST_CUSTOM                              2
#define MC_KST_FROMFILE                            3
#define MC_SHP                                   (MCPARAMID)( 3417 << 14)
#define MC_SHP_LOWPASS                             1
#define MC_SHP_COLORTRAP                           2
#define MC_SHP_PASSBAND                            3
#define MC_SHP_PEAKING                             4
#define MC_SHP_PEAKTRAP                            5
#define MC_PhaseLength_Pg                        (MCPARAMID)( 3418 << 14)
#define MC_KASR                                  (MCPARAMID)( 3419 << 14)
#define MC_KDN                                   (MCPARAMID)( 3420 << 14)
#define MC_BWF                                   (MCPARAMID)( 3421 << 14)
#define MC_CBF                                   (MCPARAMID)( 3422 << 14)
#define MC_PWF                                   (MCPARAMID)( 3423 << 14)
#define MC_CFF                                   (MCPARAMID)( 3424 << 14)
#define MC_CWF                                   (MCPARAMID)( 3425 << 14)
#define MC_SSN                                   (MCPARAMID)( 3426 << 14)
#define MC_EndTrigMode_Filter                    (MCPARAMID)( 3427 << 14)
#define MC_BreakEffect_Filter                    (MCPARAMID)( 3428 << 14)
#define MC_HMode                                 (MCPARAMID)( 3429 << 14)
#define MC_HMode_ANALOG_LANE1                      1
#define MC_HMode_DIGITAL_PULSED                    2
#define MC_HMode_DIGITAL_MIXED                     3
#define MC_HMode_LOCAL                             4
#define MC_VMode                                 (MCPARAMID)( 3430 << 14)
#define MC_VMode_ANALOG_LANE1                      1
#define MC_VMode_DIGITAL_PULSED                    2
#define MC_VMode_DIGITAL_MIXED                     3
#define MC_VMode_LOCAL                             4
#define MC_HReference                            (MCPARAMID)( 3431 << 14)
#define MC_HReference_CAMERA                       1
#define MC_HReference_LOCAL                        2
#define MC_HReference_REMOTE                       3
#define MC_VReference                            (MCPARAMID)( 3432 << 14)
#define MC_VReference_CAMERA                       1
#define MC_VReference_LOCAL                        2
#define MC_VReference_REMOTE                       3
#define MC_KernelAddress                         (MCPARAMID)( 3433 << 14)
#define MC_KernelNB                              (MCPARAMID)( 3434 << 14)
#define MC___HFR_Check                           (MCPARAMID)( 3435 << 14)
#define MC___HFR_Check_PASS                        1
#define MC___HFR_Check_FAIL                        2
#define MC___HFR_BoardCheck                      (MCPARAMID)( 3436 << 14)
#define MC___HFR_BoardCheck_PASS                   1
#define MC___HFR_BoardCheck_FAIL                   2
#define MC_AcquisitionMode_INVALID                 6
#define MC___FilteredParams_Check                (MCPARAMID)( 3437 << 14)
#define MC___FilteredParams_Check_PASS             1
#define MC___FilteredParams_Check_FAIL             2
#define MC_LogFilePath                           (MCPARAMID)( 3438 << 14)
#define MC__AutomaticParamsCheck                 (MCPARAMID)( 3439 << 14)
#define MC__AutomaticParamsCheck_YES               1
#define MC__AutomaticParamsCheck_NO                2
#define MC__FilteredParams_Check                 (MCPARAMID)( 3440 << 14)
#define MC__FilteredParams_Check_PASS              1
#define MC__FilteredParams_Check_FAIL              2
#define MC_ParamsConsistency                     (MCPARAMID)( 3441 << 14)
#define MC_ParamsConsistency_PASS                  1
#define MC_ParamsConsistency_FAIL                  2
#define MC_ParamsErrorLog                        (MCPARAMID)( 3442 << 14)
#define MC_ParamsConsistencyCheck                (MCPARAMID)( 3443 << 14)
#define MC_ParamsConsistencyCheck_AUTO             1
#define MC_ParamsConsistencyCheck_MANUAL           2
#define MC_TargetFrameRate_Hz                    (MCPARAMID)( 3444 << 14)
#define MC_AcquisitionMode_VIDEO                   7
#define MC_NextTrigMode_PERIODIC                   9
#define MC_TrigLineIndex                         (MCPARAMID)( 3445 << 14)
#define MC_EndTrigLineIndex                      (MCPARAMID)( 3446 << 14)
#define MC_EndTrigCtl                            (MCPARAMID)( 3447 << 14)
#define MC_EndTrigCtl_TTL                          1
#define MC__BCC_Value                            (MCPARAMID)( 3448 << 14)
#define MC__BCC_Value_PASS                         1
#define MC__BCC_Value_FAIL                         2
#define MC__BCC_Expert                           (MCPARAMID)( 3449 << 14)
#define MC__BCC_Expert_PASS                        1
#define MC__BCC_Expert_FAIL                        2
#define MC__BCC_Expert2                          (MCPARAMID)( 3450 << 14)
#define MC__BCC_Expert2_PASS                       1
#define MC__BCC_Expert2_FAIL                       2
#define MC__BCC_ColorScan                        (MCPARAMID)( 3451 << 14)
#define MC__BCC_ColorScan_PASS                     1
#define MC__BCC_ColorScan_FAIL                     2
#define MC_PerSecond_Fr                          (MCPARAMID)( 3452 << 14)
#define MC_Camera_XCLmV500                       191
#define MC_Camera_XCLmX700                       192
#define MC_Camera_XCLmU1000                      193
#define MC_Camera_XCLmU1000C                     194
#define MC_CableName_CameraLink_Miniature         92
#define MC_Camera_XCL_V500                       195
#define MC_Camera_XCL_X700                       196
#define MC_Camera_XCL_U1000                      197
#define MC_Camera_XCL_U1000C                     198
#define MC_Cable_CL_C04                          147
#define MC_Elapsed_Fr                            (MCPARAMID)( 3453 << 14)
#define MC_Remaining_Fr                          (MCPARAMID)( 3454 << 14)
#define MC_Elapsed_Pg                            (MCPARAMID)( 3455 << 14)
#define MC_Elapsed_Ln                            (MCPARAMID)( 3456 << 14)
#define MC_Remaining_Pg                          (MCPARAMID)( 3457 << 14)
#define MC_Remaining_Ln                          (MCPARAMID)( 3458 << 14)
#define MC_Camera_CS8550i_01                     199
#define MC_Camera_CS8550i                        200
#define MC_Camera_KP_F30                         201
#define MC_Camera_KP_F30x                        202
#define MC_CamConfig_P70RA                       251
#define MC_CamConfig_P70RM                       252
#define MC_CamConfig_P70SA                       253
#define MC_CamConfig_P70SM                       254
#define MC_TrigCtl_DIFF                            7
#define MC_StrobeCtl_DIFF                          6
#define MC_MDMPEnable                            (MCPARAMID)( 3459 << 14)
#define MC_MDMPEnable_TRUE                         1
#define MC_MDMPEnable_FALSE                        2
#define MC__Category_D3_Signal_Properties         35
#define MC__Category_D3_Kernel_Properties         36
#define MC__Category_D3_Configuration             37
#define MC__Category_D3_Resampler                 38
#define MC__Category_D3_Resampling                39
#define MC__BoardType__SYMPHONY                   24
#define MC_STARTCHSet                            (MCPARAMID)( 3460 << 14)
#define MC_InputPinName_ENHANCED_IO1              70
#define MC_InputPinName_ENHANCED_IO2              71
#define MC_InputPinName_ENHANCED_IO3              72
#define MC_InputPinName_ENHANCED_IO4              73
#define MC_InputPinName_TR                        74
#define MC_InputPinName_CC1                       75
#define MC_InputPinName_CC2                       76
#define MC_InputPinName_CC3                       77
#define MC_InputPinName_CC4                       78
#define MC_InputPinName_CC5                       79
#define MC_InputPinLocked                        (MCPARAMID)( 3461 << 14)
#define MC_InputPinLocked_TRUE                     1
#define MC_InputPinLocked_FALSE                    2
#define MC_OutputState_LOOP1                      11
#define MC_OutputState_LOOP2                      12
#define MC_OutputPinName_Enhanced_IO1             78
#define MC_OutputPinName_Enhanced_IO2             79
#define MC_OutputPinName_Enhanced_IO3             80
#define MC_OutputPinName_Enhanced_IO4             81
#define MC_OutputPinName_ST                       82
#define MC_OutputPinName_CC5                      83
#define MC_OutputState_17_LOOP1                    4
#define MC_OutputState_17_LOOP2                    5
#define MC_OutputState_18_LOOP1                    4
#define MC_OutputState_18_LOOP2                    5
#define MC_OutputState_1_LOOP1                     6
#define MC_OutputState_1_LOOP2                     7
#define MC_OutputState_2_LOOP1                     4
#define MC_OutputState_2_LOOP2                     5
#define MC_OutputState_3_LOOP1                     4
#define MC_OutputState_3_LOOP2                     5
#define MC_OutputState_4_LOOP1                     4
#define MC_OutputState_4_LOOP2                     5
#define MC_OutputState_22_LOOP1                    4
#define MC_OutputState_22_LOOP2                    5
#define MC_OutputState_23_LOOP1                    4
#define MC_OutputState_23_LOOP2                    5
#define MC_OutputState_24_LOOP1                    4
#define MC_OutputState_24_LOOP2                    5
#define MC_OutputState_25_LOOP1                    4
#define MC_OutputState_25_LOOP2                    5
#define MC_OutputState_26_LOOP1                    4
#define MC_OutputState_26_LOOP2                    5
#define MC_OutputState_32_LOOP1                    4
#define MC_OutputState_32_LOOP2                    5
#define MC_OutputState_33_LOOP1                    4
#define MC_OutputState_33_LOOP2                    5
#define MC_OutputState_34_LOOP1                    4
#define MC_OutputState_34_LOOP2                    5
#define MC_OutputState_35_LOOP1                    4
#define MC_OutputState_35_LOOP2                    5
#define MC_OutputState_36_LOOP1                    4
#define MC_OutputState_36_LOOP2                    5
#define MC_OutputStyle_DIFF                        9
#define MC_MDMPDec                               (MCPARAMID)( 3462 << 14)
#define MC_MDMPOffset                            (MCPARAMID)( 3463 << 14)
#define MC_HdriveLine_CC1                          8
#define MC_HdriveLine_CC2                          9
#define MC_HdriveLine_CC3                         10
#define MC_HdriveLine_CC4                         11
#define MC_HdriveLine_CC5                         12
#define MC_VdriveLine_CC1                          8
#define MC_VdriveLine_CC2                          9
#define MC_VdriveLine_CC3                         10
#define MC_VdriveLine_CC4                         11
#define MC_VdriveLine_CC5                         12
#define MC_ResetLine_CC5                          12
#define MC_AuxResetLine_CC5                       12
#define MC_HsyncLine_CC1                           8
#define MC_HsyncLine_CC2                           9
#define MC_HsyncLine_CC3                          10
#define MC_HsyncLine_CC4                          11
#define MC_HsyncLine_CC5                          12
#define MC_VsyncLine_CC1                           8
#define MC_VsyncLine_CC2                           9
#define MC_VsyncLine_CC3                          10
#define MC_VsyncLine_CC4                          11
#define MC_VsyncLine_CC5                          12
#define MC_CsyncLine                             (MCPARAMID)( 3464 << 14)
#define MC_CsyncLine_NC                            1
#define MC_CsyncLine_CC1                           2
#define MC_CsyncLine_CC2                           3
#define MC_CsyncLine_CC3                           4
#define MC_CsyncLine_CC4                           5
#define MC_CsyncLine_CC5                           6
#define MC_GainG                                 (MCPARAMID)( 3465 << 14)
#define MC_GainR                                 (MCPARAMID)( 3466 << 14)
#define MC_GainB                                 (MCPARAMID)( 3467 << 14)
#define MC_OffsetG                               (MCPARAMID)( 3468 << 14)
#define MC_OffsetR                               (MCPARAMID)( 3469 << 14)
#define MC_OffsetB                               (MCPARAMID)( 3470 << 14)
#define MC_PinCC1_Usage                          (MCPARAMID)( 3471 << 14)
#define MC_PinCC1_Usage_NONE                       1
#define MC_PinCC1_Usage_INPUT                      2
#define MC_PinCC1_Usage_LOW                        3
#define MC_PinCC1_Usage_HIGH                       4
#define MC_PinCC1_Usage_VDRIVE                     5
#define MC_PinCC1_Usage_RESET                      6
#define MC_PinCC1_Usage_AUXRESET                   7
#define MC_PinCC1_Usage_HDRIVE                     8
#define MC_PinCC1_Dir                            (MCPARAMID)( 3472 << 14)
#define MC_PinCC1_Dir_INPUT                        1
#define MC_PinCC1_Dir_OUTPUT                       2
#define MC_PinCC1_PinCC2_STYLE                   (MCPARAMID)( 3473 << 14)
#define MC_PinCC1_PinCC2_STYLE_TTL                 1
#define MC_PinCC1_PinCC2_STYLE_LVDS                2
#define MC_PinCC1_Source                         (MCPARAMID)( 3474 << 14)
#define MC_PinCC1_Source_LOW                       1
#define MC_PinCC1_Source_HIGH                      2
#define MC_PinCC1_Source_HDRIVE                    3
#define MC_PinCC1_Source_VDRIVE                    4
#define MC_PinCC1_Source_RESET                     5
#define MC_PinCC1_Source_AUXRESET                  6
#define MC_PinCC1_Source_UNKNOWN                   7
#define MC_PinCC3_PinCC4_Style                   (MCPARAMID)( 3475 << 14)
#define MC_PinCC3_PinCC4_Style_TTL                 1
#define MC_PinCC3_PinCC4_Style_LVDS                2
#define MC_PinCC2_Dir                            (MCPARAMID)( 3476 << 14)
#define MC_PinCC2_Dir_INPUT                        1
#define MC_PinCC2_Dir_OUTPUT                       2
#define MC_PinCC2_Source                         (MCPARAMID)( 3477 << 14)
#define MC_PinCC2_Source_LOW                       1
#define MC_PinCC2_Source_HIGH                      2
#define MC_PinCC2_Source_HDRIVE                    3
#define MC_PinCC2_Source_VDRIVE                    4
#define MC_PinCC2_Source_RESET                     5
#define MC_PinCC2_Source_AUXRESET                  6
#define MC_PinCC2_Source_UNKNOWN                   7
#define MC_PinCC3_Dir                            (MCPARAMID)( 3478 << 14)
#define MC_PinCC3_Dir_INPUT                        1
#define MC_PinCC3_Dir_OUTPUT                       2
#define MC_PinCC3_Source                         (MCPARAMID)( 3479 << 14)
#define MC_PinCC3_Source_LOW                       1
#define MC_PinCC3_Source_HIGH                      2
#define MC_PinCC3_Source_HDRIVE                    3
#define MC_PinCC3_Source_VDRIVE                    4
#define MC_PinCC3_Source_RESET                     5
#define MC_PinCC3_Source_AUXRESET                  6
#define MC_PinCC3_Source_UNKNOWN                   7
#define MC_PinCC4_Dir                            (MCPARAMID)( 3480 << 14)
#define MC_PinCC4_Dir_INPUT                        1
#define MC_PinCC4_Dir_OUTPUT                       2
#define MC_PinCC4_Source                         (MCPARAMID)( 3481 << 14)
#define MC_PinCC4_Source_LOW                       1
#define MC_PinCC4_Source_HIGH                      2
#define MC_PinCC4_Source_HDRIVE                    3
#define MC_PinCC4_Source_VDRIVE                    4
#define MC_PinCC4_Source_RESET                     5
#define MC_PinCC4_Source_AUXRESET                  6
#define MC_PinCC4_Source_UNKNOWN                   7
#define MC_PinCC5_Dir                            (MCPARAMID)( 3482 << 14)
#define MC_PinCC5_Dir_INPUT                        1
#define MC_PinCC5_Dir_OUTPUT                       2
#define MC_PinCC5_Source                         (MCPARAMID)( 3483 << 14)
#define MC_PinCC5_Source_LOW                       1
#define MC_PinCC5_Source_HIGH                      2
#define MC_PinCC5_Source_HDRIVE                    3
#define MC_PinCC5_Source_VDRIVE                    4
#define MC_PinCC5_Source_RESET                     5
#define MC_PinCC5_Source_AUXRESET                  6
#define MC_PinCC5_Source_UNKNOWN                   7
#define MC_PinSMIO1_Dir                          (MCPARAMID)( 3484 << 14)
#define MC_PinSMIO1_Dir_INPUT                      1
#define MC_PinSMIO1_Dir_OUTPUT                     2
#define MC_PinSMIO1_Dir_UNKNOWN                    3
#define MC_PinSMIO1_Source                       (MCPARAMID)( 3485 << 14)
#define MC_PinSMIO1_Source_LOW                     1
#define MC_PinSMIO1_Source_HIGH                    2
#define MC_PinSMIO1_Source_STROBE                  3
#define MC_PinSMIO1_Source_UNKNOWN                 4
#define MC_PinSMIO2_Dir                          (MCPARAMID)( 3486 << 14)
#define MC_PinSMIO2_Dir_INPUT                      1
#define MC_PinSMIO2_Dir_OUTPUT                     2
#define MC_PinSMIO2_Dir_UNKNOWN                    3
#define MC_PinSMIO2_Source                       (MCPARAMID)( 3487 << 14)
#define MC_PinSMIO2_Source_LOW                     1
#define MC_PinSMIO2_Source_HIGH                    2
#define MC_PinSMIO2_Source_STROBE                  3
#define MC_PinSMIO2_Source_UNKNOWN                 4
#define MC_PinSTR_Source                         (MCPARAMID)( 3488 << 14)
#define MC_PinSTR_Source_LOW                       1
#define MC_PinSTR_Source_HIGH                      2
#define MC_PinSTR_Source_STROBE                    3
#define MC_PinSTR_Source_UNKNOWN                   4
#define MC_TrigLine_IO1                           14
#define MC_TrigLine_IO2                           15
#define MC_TrigLine_IO3                           16
#define MC_TrigLine_IO4                           17
#define MC__TrigLine_IO1                          24
#define MC__TrigLine_IO2                          25
#define MC__TrigLine_IO3                          26
#define MC__TrigLine_IO4                          27
#define MC_StrobeLine_IO1                          8
#define MC_StrobeLine_IO2                          9
#define MC_StrobeLine_IO3                         10
#define MC_StrobeLine_IO4                         11
#define MC_StrobeLine_STX                         12
#define MC_StrobeLine_STY                         13
#define MC__StrobeLine_IO1                        10
#define MC__StrobeLine_IO2                        11
#define MC__StrobeLine_IO3                        12
#define MC__StrobeLine_IO4                        13
#define MC_PinSMIO3_Dir                          (MCPARAMID)( 3489 << 14)
#define MC_PinSMIO3_Dir_INPUT                      1
#define MC_PinSMIO3_Dir_OUTPUT                     2
#define MC_PinSMIO3_Dir_UNKNOWN                    3
#define MC_PinSMIO3_Source                       (MCPARAMID)( 3490 << 14)
#define MC_PinSMIO3_Source_LOW                     1
#define MC_PinSMIO3_Source_HIGH                    2
#define MC_PinSMIO3_Source_STROBE                  3
#define MC_PinSMIO3_Source_UNKNOWN                 4
#define MC_PinSMIO4_Dir                          (MCPARAMID)( 3491 << 14)
#define MC_PinSMIO4_Dir_INPUT                      1
#define MC_PinSMIO4_Dir_OUTPUT                     2
#define MC_PinSMIO4_Dir_UNKNOWN                    3
#define MC_PinSMIO4_Source                       (MCPARAMID)( 3492 << 14)
#define MC_PinSMIO4_Source_LOW                     1
#define MC_PinSMIO4_Source_HIGH                    2
#define MC_PinSMIO4_Source_STROBE                  3
#define MC_PinSMIO4_Source_UNKNOWN                 4
#define MC_PinSTX_Source                         (MCPARAMID)( 3493 << 14)
#define MC_PinSTX_Source_LOW                       1
#define MC_PinSTX_Source_HIGH                      2
#define MC_PinSTX_Source_STROBE                    3
#define MC_PinSTX_Source_UNKNOWN                   4
#define MC_PinSTY_Source                         (MCPARAMID)( 3494 << 14)
#define MC_PinSTY_Source_LOW                       1
#define MC_PinSTY_Source_HIGH                      2
#define MC_PinSTY_Source_STROBE                    3
#define MC_PinSTY_Source_UNKNOWN                   4
#define MC_TrigCtl_LVDS                            8
#define MC_StrobeCtl_OPTO                          7
#define MC_TrigLine_TR                            18
#define MC_StrobeLine_ST                          14
#define MC_OutputStyle_OPTO                       10
#define MC_HsyncCtl_LVDS                           5
#define MC_VsyncCtl_LVDS                           5
#define MC_TDScale_100ns                         (MCPARAMID)( 3495 << 14)
#define MC_TrigDelay_TDSCL                       (MCPARAMID)( 3496 << 14)
#define MC_TrigDelay_TDScale                     (MCPARAMID)( 3497 << 14)
#define MC__EScale_100ns                         (MCPARAMID)( 3498 << 14)
#define MC__Expose_E                             (MCPARAMID)( 3499 << 14)
#define MC__PostExpose_E                         (MCPARAMID)( 3500 << 14)
#define MC__RESETOn_E                            (MCPARAMID)( 3501 << 14)
#define MC__RESETOff_E                           (MCPARAMID)( 3502 << 14)
#define MC__OpenVsyncGate_E                      (MCPARAMID)( 3503 << 14)
#define MC__SScale_100ns                         (MCPARAMID)( 3504 << 14)
#define MC_EXPOn2STROBEOff_E                     (MCPARAMID)( 3505 << 14)
#define MC__PreStrobe_E                          (MCPARAMID)( 3506 << 14)
#define MC__PREEXP_us                            (MCPARAMID)( 3507 << 14)
#define MC__EXP_us                               (MCPARAMID)( 3508 << 14)
#define MC__POSTEXP_us                           (MCPARAMID)( 3509 << 14)
#define MC__PREEXP_E                             (MCPARAMID)( 3510 << 14)
#define MC__EXP_E                                (MCPARAMID)( 3511 << 14)
#define MC__POSTEXP_E                            (MCPARAMID)( 3512 << 14)
#define MC__SSpan_us                             (MCPARAMID)( 3513 << 14)
#define MC__EXP_S                                (MCPARAMID)( 3514 << 14)
#define MC__PreStrobe_S                          (MCPARAMID)( 3515 << 14)
#define MC__STR_S                                (MCPARAMID)( 3516 << 14)
#define MC_EXPOn2STROBEOff_S                     (MCPARAMID)( 3517 << 14)
#define MC_EXPOn2STROff_S                        (MCPARAMID)( 3518 << 14)
#define MC__EXPOn2STROff_S                       (MCPARAMID)( 3519 << 14)
#define MC__STPOS_DSB                            (MCPARAMID)( 3520 << 14)
#define MC__STPOS_ASB                            (MCPARAMID)( 3521 << 14)
#define MC__STPOS_SLO                            (MCPARAMID)( 3522 << 14)
#define MC__STPOS_End                            (MCPARAMID)( 3523 << 14)
#define MC__ETPOS_AuxResetOn                     (MCPARAMID)( 3524 << 14)
#define MC__ETPOS_AuxResetOff                    (MCPARAMID)( 3525 << 14)
#define MC__ETPOS_ResetOn                        (MCPARAMID)( 3526 << 14)
#define MC__ETPOS_ResetOff                       (MCPARAMID)( 3527 << 14)
#define MC__ETPOS_OpenVsyncGate                  (MCPARAMID)( 3528 << 14)
#define MC__ETPOS_CloseVsyncGate                 (MCPARAMID)( 3529 << 14)
#define MC__ETPOS_End                            (MCPARAMID)( 3530 << 14)
#define MC_Readout_us                            (MCPARAMID)( 3531 << 14)
#define MC__RDO_us                               (MCPARAMID)( 3532 << 14)
#define MC__RSpan_us                             (MCPARAMID)( 3533 << 14)
#define MC__RScale_100ns                         (MCPARAMID)( 3534 << 14)
#define MC__RDO_E                                (MCPARAMID)( 3535 << 14)
#define MC__RTPOS_SR                             (MCPARAMID)( 3536 << 14)
#define MC__RTPOS_NSLA                           (MCPARAMID)( 3537 << 14)
#define MC__RTPOS_End                            (MCPARAMID)( 3538 << 14)
#define MC__Category_Readout_Control              40
#define MC__TrueExp_100ns                        (MCPARAMID)( 3539 << 14)
#define MC__ExposeTrimFactor                     (MCPARAMID)( 3540 << 14)
#define MC__PREEXP_100ns                         (MCPARAMID)( 3541 << 14)
#define MC__EXP_100ns                            (MCPARAMID)( 3542 << 14)
#define MC__POSTEXP_100ns                        (MCPARAMID)( 3543 << 14)
#define MC__ESpan_100ns                          (MCPARAMID)( 3544 << 14)
#define MC_Readout_100ns                         (MCPARAMID)( 3545 << 14)
#define MC__RDO_100ns                            (MCPARAMID)( 3546 << 14)
#define MC__RSpan_100s                           (MCPARAMID)( 3547 << 14)
#define MC__SSpan_100ns                          (MCPARAMID)( 3548 << 14)
#define MC__RSpan_100ns                          (MCPARAMID)( 3549 << 14)
#define MC_TDTScale_100ns                        (MCPARAMID)( 3550 << 14)
#define MC__ETSpan_100ns                         (MCPARAMID)( 3551 << 14)
#define MC__ETScale_100ns                        (MCPARAMID)( 3552 << 14)
#define MC__RTSpan_100ns                         (MCPARAMID)( 3553 << 14)
#define MC__RTScale_100ns                        (MCPARAMID)( 3554 << 14)
#define MC__STSpan_100ns                         (MCPARAMID)( 3555 << 14)
#define MC__STScale_100ns                        (MCPARAMID)( 3556 << 14)
#define MC_TrigDelay_T                           (MCPARAMID)( 3557 << 14)
#define MC__ETPOS_EndExpose                      (MCPARAMID)( 3558 << 14)
#define MC_HCsyncToClamp_ns                      (MCPARAMID)( 3559 << 14)
#define MC_ClampDur_ns                           (MCPARAMID)( 3560 << 14)
#define MC_SyncPattern                           (MCPARAMID)( 3561 << 14)
#define MC_SyncPattern_PALSYNC                     1
#define MC_SyncPattern_NTSCSYNC                    2
#define MC_SyncPattern_PALEVEN                     3
#define MC_SyncPattern_PALODD                      4
#define MC_SyncPattern_NTSCEVEN                    5
#define MC_SyncPattern_NTSCODD                     6
#define MC_VideoFilter_Filter                    (MCPARAMID)( 3562 << 14)
#define MC_VrefSearchWindowLeft_IT               (MCPARAMID)( 3563 << 14)
#define MC_VrefSearchWindowRight_IT              (MCPARAMID)( 3564 << 14)
#define MC_Vsync2Vref_IT                         (MCPARAMID)( 3565 << 14)
#define MC_VrefSearchWindowLeft_TT               (MCPARAMID)( 3566 << 14)
#define MC_VrefSearchWindowRight_TT              (MCPARAMID)( 3567 << 14)
#define MC_Vsync2Vref_TT                         (MCPARAMID)( 3568 << 14)
#define MC_VideoFilter_COLORTRAP                   6
#define MC_VsyncLNB                              (MCPARAMID)( 3569 << 14)
#define MC_Expose_Filter                         (MCPARAMID)( 3570 << 14)
#define MC_Readout_Filter                        (MCPARAMID)( 3571 << 14)
#define MC__RDO_R                                (MCPARAMID)( 3572 << 14)
#define MC__RTSS                                 (MCPARAMID)( 3573 << 14)
#define MC__RTSS_OpenVsyncGate                     1
#define MC__RTSS_GatedVsync                        2
#define MC__VsyncFilter                          (MCPARAMID)( 3574 << 14)
#define MC__VsyncFilter_OFF                        1
#define MC__VsyncFilter_ON                         2
#define MC__VsyncFilter_MEDIUM                     3
#define MC__VsyncFilter_STRONG                     4
#define MC__PREEXP_S                             (MCPARAMID)( 3575 << 14)
#define MC__TrigDelay_S                          (MCPARAMID)( 3576 << 14)
#define MC_Gain_Filter                           (MCPARAMID)( 3577 << 14)
#define MC_Camera_IK_TF1                         203
#define MC_Camera_IK_TF5                         204
#define MC_Camera_IK_TF7                         205
#define MC_Manufacturer_TOSHIBA                   25
#define MC_RCable_A15_C21                         22
#define MC_Cable_A15_C21                         148
#define MC_CableName_Triple_Channel_RGB           93
#define MC_SeqLength_Fr_Filter                   (MCPARAMID)( 3578 << 14)
#define MC_SeqLength_Pg_Filter                   (MCPARAMID)( 3579 << 14)
#define MC_SeqLength_Ln_Filter                   (MCPARAMID)( 3580 << 14)
#define MC_PhaseLength_Fr_Filter                 (MCPARAMID)( 3581 << 14)
#define MC_CCE_Filter                            (MCPARAMID)( 3582 << 14)
#define MC___PageLength_Error_Check              (MCPARAMID)( 3583 << 14)
#define MC___PageLength_Error_Check_PASS           1
#define MC___PageLength_Error_Check_FAIL           2
#define MC__Category_Camera_Advanced_Features     41
#define MC_CamConfig_PxxRG_PartialScan           255
#define MC_SonyXCL_V500PartialScan_Filter        (MCPARAMID)( 3584 << 14)
#define MC_SonyXCL_X700PartialScan_Filter        (MCPARAMID)( 3585 << 14)
#define MC_SonyXCL_U1000PartialScan_Filter       (MCPARAMID)( 3586 << 14)
#define MC_SonyXCL_U1000CPartialScan_Filter      (MCPARAMID)( 3587 << 14)
#define MC_SonyXCL_V500_FPS                      (MCPARAMID)( 3588 << 14)
#define MC_SonyXCL_V500_RPS                      (MCPARAMID)( 3589 << 14)
#define MC_SonyXCL_X700_FPS                      (MCPARAMID)( 3590 << 14)
#define MC_SonyXCL_X700_RPS                      (MCPARAMID)( 3591 << 14)
#define MC_SonyXCL_U1000_Start                   (MCPARAMID)( 3592 << 14)
#define MC_SonyXCL_U1000_End                     (MCPARAMID)( 3593 << 14)
#define MC_SonyXCL_U1000C_Start                  (MCPARAMID)( 3594 << 14)
#define MC_SonyXCL_U1000C_End                    (MCPARAMID)( 3595 << 14)
#define MC_SonyXCL_V500PartialScanFrameRate_mHz  (MCPARAMID)( 3596 << 14)
#define MC_SonyXCL_V500PartialScanVactive_Ln     (MCPARAMID)( 3597 << 14)
#define MC_SonyXCL_X700PartialScanFrameRate_mHz  (MCPARAMID)( 3598 << 14)
#define MC_SonyXCL_X700PartialScanVactive_Ln     (MCPARAMID)( 3599 << 14)
#define MC_SonyXCL_U1000PartialScanFrameRate_mHz (MCPARAMID)( 3600 << 14)
#define MC_SonyXCL_U1000PartialScanVactive_Ln    (MCPARAMID)( 3601 << 14)
#define MC_SonyXCL_U1000CPartialScanFrameRate_mHz (MCPARAMID)( 3602 << 14)
#define MC_SonyXCL_U1000CPartialScanVactive_Ln   (MCPARAMID)( 3603 << 14)
#define MC_DvalMode_DID2P0                         4
#define MC__HDC_DCADV_INTERNAL_D2P0                3
#define MC_LUT__Data                             (MCPARAMID)( 3604 << 14)
#define MC__BoardType__AVENUE                     25
#define MC_TrigLine_ISOA1                         19
#define MC_TrigLine_ISOA2                         20
#define MC_TrigLine_TRA1                          21
#define MC_TrigLine_TRA2                          22
#define MC_EndTrigLine_IO1                        11
#define MC_EndTrigLine_IO2                        12
#define MC_EndTrigLine_IO3                        13
#define MC_EndTrigLine_IO4                        14
#define MC_EndTrigLine_ISOA1                      15
#define MC_EndTrigLine_ISOA2                      16
#define MC_EndTrigLine_TRA1                       17
#define MC_EndTrigLine_TRA2                       18
#define MC__TrigLine_ISOA1                        28
#define MC__TrigLine_ISOA2                        29
#define MC__TrigLine_TRA1                         30
#define MC__TrigLine_TRA2                         31
#define MC_StrobeLine_ISOA1                       15
#define MC_StrobeLine_ISOA2                       16
#define MC_StrobeLine_STA                         17
#define MC__StrobeLine_ISOA1                      14
#define MC__StrobeLine_ISOA2                      15
#define MC__StrobeLine_STA                        16
#define MC_LineTrigCtl_LVDS                        4
#define MC_LineTrigLine_IO1                        7
#define MC_LineTrigLine_IO2                        8
#define MC_LineTrigLine_IO3                        9
#define MC_LineTrigLine_IO4                       10
#define MC_LineTrigLine_ISOA1                     11
#define MC_LineTrigLine_ISOA2                     12
#define MC_LineTrigLine_TRA1                      13
#define MC_LineTrigLine_TRA2                      14
#define MC__LineTrigLine_IO1                      13
#define MC__LineTrigLine_IO2                      14
#define MC__LineTrigLine_IO3                      15
#define MC__LineTrigLine_IO4                      16
#define MC__LineTrigLine_ISOA1                    17
#define MC__LineTrigLine_ISOA2                    18
#define MC__LineTrigLine_TRA1                     19
#define MC__LineTrigLine_TRA2                     20
#define MC__TRG_LTSEL_A1                          11
#define MC__TRG_LTSEL_A2                          12
#define MC__TRG_LTSEL_TRG1                        13
#define MC__TRG_LTSEL_TRG2                        14
#define MC__TRG_LTSEL_IO1                         15
#define MC__TRG_LTSEL_IO2                         16
#define MC__TRG_LTSEL_IO3                         17
#define MC__TRG_LTSEL_IO4                         18
#define MC__TRG_FTSEL_TRG1                        17
#define MC__TRG_FTSEL_TRG2                        18
#define MC__TRG_FTSEL_IO1                         19
#define MC__TRG_FTSEL_IO2                         20
#define MC__TRG_FTSEL_IO3                         21
#define MC__TRG_FTSEL_IO4                         22
#define MC_IO1Usage                              (MCPARAMID)( 3605 << 14)
#define MC_IO1Usage_FREE                           1
#define MC_IO1Usage_STROBE                         2
#define MC_IO1Usage_TRIGGER                        3
#define MC_IO1Usage_LINETRIGGER                    4
#define MC_IO2Usage                              (MCPARAMID)( 3606 << 14)
#define MC_IO2Usage_FREE                           1
#define MC_IO2Usage_STROBE                         2
#define MC_IO2Usage_TRIGGER                        3
#define MC_IO2Usage_LINETRIGGER                    4
#define MC_IO3Usage                              (MCPARAMID)( 3607 << 14)
#define MC_IO3Usage_FREE                           1
#define MC_IO3Usage_STROBE                         2
#define MC_IO3Usage_TRIGGER                        3
#define MC_IO3Usage_LINETRIGGER                    4
#define MC_IO4Usage                              (MCPARAMID)( 3608 << 14)
#define MC_IO4Usage_FREE                           1
#define MC_IO4Usage_STROBE                         2
#define MC_IO4Usage_TRIGGER                        3
#define MC_IO4Usage_LINETRIGGER                    4
#define MC_ISOA1Usage                            (MCPARAMID)( 3609 << 14)
#define MC_ISOA1Usage_FREE                         1
#define MC_ISOA1Usage_STROBE                       2
#define MC_ISOA1Usage_TRIGGER                      3
#define MC_ISOA1Usage_LINETRIGGER                  4
#define MC_ISOA2Usage                            (MCPARAMID)( 3610 << 14)
#define MC_ISOA2Usage_FREE                         1
#define MC_ISOA2Usage_STROBE                       2
#define MC_ISOA2Usage_TRIGGER                      3
#define MC_ISOA2Usage_LINETRIGGER                  4
#define MC_TRA1Usage                             (MCPARAMID)( 3611 << 14)
#define MC_TRA1Usage_FREE                          1
#define MC_TRA1Usage_STROBE                        2
#define MC_TRA1Usage_TRIGGER                       3
#define MC_TRA1Usage_LINETRIGGER                   4
#define MC_TRA2Usage                             (MCPARAMID)( 3612 << 14)
#define MC_TRA2Usage_FREE                          1
#define MC_TRA2Usage_STROBE                        2
#define MC_TRA2Usage_TRIGGER                       3
#define MC_TRA2Usage_LINETRIGGER                   4
#define MC_STAUsage                              (MCPARAMID)( 3613 << 14)
#define MC_STAUsage_FREE                           1
#define MC_STAUsage_STROBE                         2
#define MC_STAUsage_TRIGGER                        3
#define MC_STAUsage_LINETRIGGER                    4
#define MC__STR_STR1POL                          (MCPARAMID)( 3614 << 14)
#define MC__STR_STR1POL_DIRECT                     1
#define MC__STR_STR1POL_INVERT                     2
#define MC__STR_STR1POL_HOLD                       3
#define MC__STR_STR1SRC                          (MCPARAMID)( 3615 << 14)
#define MC__STR_STR1SRC_LOW                        1
#define MC__STR_STR1SRC_T1SIG3_X                   2
#define MC__STR_STR1SRC_T1SIG4_X                   3
#define MC__STR_STR1SRC_PPLS_X                     4
#define MC__STR_STR1SRC_HOLD                       5
#define MC__STB_A1STYL                           (MCPARAMID)( 3616 << 14)
#define MC__STB_A1STYL_TTLIN                       1
#define MC__STB_A1STYL_12VIN                       2
#define MC__STB_A1STYL_TTLOUT                      3
#define MC__STB_A1STYL_OCOUT                       4
#define MC__STB_A1STYL_OEOUT                       5
#define MC__STB_A1STYL_HOLD                        6
#define MC__STB_A2STYL                           (MCPARAMID)( 3617 << 14)
#define MC__STB_A2STYL_TTLIN                       1
#define MC__STB_A2STYL_12VIN                       2
#define MC__STB_A2STYL_TTLOUT                      3
#define MC__STB_A2STYL_OCOUT                       4
#define MC__STB_A2STYL_OEOUT                       5
#define MC__STB_A2STYL_HOLD                        6
#define MC__STB_QA1SRC                           (MCPARAMID)( 3618 << 14)
#define MC__STB_QA1SRC_LOW                         1
#define MC__STB_QA1SRC_T1SIG3                      2
#define MC__STB_QA1SRC_T1SIG4                      3
#define MC__STB_QA1SRC_HIGH                        4
#define MC__STB_QA1SRC_T1SIG3_Inverted             5
#define MC__STB_QA1SRC_T1SIG4_Inverted             6
#define MC__STB_QA1SRC_HOLD                        7
#define MC__STB_QA2SRC                           (MCPARAMID)( 3619 << 14)
#define MC__STB_QA2SRC_LOW                         1
#define MC__STB_QA2SRC_T1SIG3                      2
#define MC__STB_QA2SRC_T1SIG4                      3
#define MC__STB_QA2SRC_HIGH                        4
#define MC__STB_QA2SRC_T1SIG3_Inverted             5
#define MC__STB_QA2SRC_T1SIG4_Inverted             6
#define MC__STB_QA2SRC_HOLD                        7
#define MC__STB_QA1POL                           (MCPARAMID)( 3620 << 14)
#define MC__STB_QA1POL_DIRECT                      1
#define MC__STB_QA1POL_INVERT                      2
#define MC__STB_QA1POL_HOLD                        3
#define MC__STB_QA2POL                           (MCPARAMID)( 3621 << 14)
#define MC__STB_QA2POL_DIRECT                      1
#define MC__STB_QA2POL_INVERT                      2
#define MC__STB_QA2POL_HOLD                        3
#define MC_InputPinName_TRA1                      80
#define MC_InputPinName_TRA2                      81
#define MC_InputPinName_ISOA1                     82
#define MC_InputPinName_ISOA2                     83
#define MC_OutputPinName_STA                      84
#define MC_OutputPinName_ISOA1                    85
#define MC_OutputPinName_ISOA2                    86
#define MC_OutputState_LOOP                       13
#define MC_OutputState_1_LOOP                      8
#define MC_OutputState_2_LOOP                      6
#define MC_OutputState_3_LOOP                      6
#define MC_OutputState_4_LOOP                      6
#define MC_OutputState_LOOP3                      14
#define MC_OutputState_LOOP4                      15
#define MC_OutputState_17_LOOP3                    6
#define MC_OutputState_17_LOOP4                    7
#define MC_OutputState_21_LOOP1                    4
#define MC_OutputState_21_LOOP2                    5
#define MC_OutputState_21_LOOP3                    6
#define MC_OutputState_21_LOOP4                    7
#define MC_OutputState_22_LOOP3                    6
#define MC_OutputState_22_LOOP4                    7
#define MC_OutputState_23_LOOP3                    6
#define MC_OutputState_23_LOOP4                    7
#define MC_OutputState_24_LOOP3                    6
#define MC_OutputState_24_LOOP4                    7
#define MC_ISOA1Usage_USER                         5
#define MC_ISOA2Usage_USER                         5
#define MC_EndTrigLine_Filter                    (MCPARAMID)( 3622 << 14)
#define MC_EndTrigCtl_Filter                     (MCPARAMID)( 3623 << 14)
#define MC_EndTrigCtl_LVDS                         2
#define MC_EndTrigCtl_ITTL                         3
#define MC_EndTrigCtl_I12V                         4
#define MC_StrobeLine_STR                         18
#define MC_ColorFormat_UINT32                     68
#define MC_CamConfig_L4080SP                     256
#define MC_CamConfig_L4080RC                     257
#define MC_CamConfig_L4080RG                     258
#define MC__CSIO_CSIO1Out                        (MCPARAMID)( 3624 << 14)
#define MC__CSIO_CSIO1Out_T1SIG3                   1
#define MC__CSIO_CSIO1Out_T1SIG4                   2
#define MC__CSIO_CSIO1Out_PPLS                     3
#define MC__CSIO_CSIO1Out_HOLD                     4
#define MC__CSIO_CSIO1Dir                        (MCPARAMID)( 3625 << 14)
#define MC__CSIO_CSIO1Dir_DIRECT                   1
#define MC__CSIO_CSIO1Dir_INVERT                   2
#define MC__CSIO_CSIO1Dir_HOLD                     3
#define MC__CSIO_CSIO2Out                        (MCPARAMID)( 3626 << 14)
#define MC__CSIO_CSIO2Out_T1SIG3                   1
#define MC__CSIO_CSIO2Out_T1SIG4                   2
#define MC__CSIO_CSIO2Out_PPLS                     3
#define MC__CSIO_CSIO2Out_HOLD                     4
#define MC__CSIO_CSIO2Dir                        (MCPARAMID)( 3627 << 14)
#define MC__CSIO_CSIO2Dir_DIRECT                   1
#define MC__CSIO_CSIO2Dir_INVERT                   2
#define MC__CSIO_CSIO2Dir_HOLD                     3
#define MC__CSIO_CSIO3Out                        (MCPARAMID)( 3628 << 14)
#define MC__CSIO_CSIO3Out_T1SIG3                   1
#define MC__CSIO_CSIO3Out_T1SIG4                   2
#define MC__CSIO_CSIO3Out_PPLS                     3
#define MC__CSIO_CSIO3Out_HOLD                     4
#define MC__CSIO_CSIO3Dir                        (MCPARAMID)( 3629 << 14)
#define MC__CSIO_CSIO3Dir_DIRECT                   1
#define MC__CSIO_CSIO3Dir_INVERT                   2
#define MC__CSIO_CSIO3Dir_HOLD                     3
#define MC__CSIO_CSIO4Out                        (MCPARAMID)( 3630 << 14)
#define MC__CSIO_CSIO4Out_T1SIG3                   1
#define MC__CSIO_CSIO4Out_T1SIG4                   2
#define MC__CSIO_CSIO4Out_PPLS                     3
#define MC__CSIO_CSIO4Out_HOLD                     4
#define MC__CSIO_CSIO4Dir                        (MCPARAMID)( 3631 << 14)
#define MC__CSIO_CSIO4Dir_DIRECT                   1
#define MC__CSIO_CSIO4Dir_INVERT                   2
#define MC__CSIO_CSIO4Dir_HOLD                     3
#define MC__CSIO_CSIO1Out_T1SIG3X                  5
#define MC__CSIO_CSIO1Out_T1SIG4X                  6
#define MC__CSIO_CSIO2Out_T1SIG3X                  5
#define MC__CSIO_CSIO2Out_T1SIG4X                  6
#define MC__CSIO_CSIO3Out_T1SIG3X                  5
#define MC__CSIO_CSIO3Out_T1SIG4X                  6
#define MC__CSIO_CSIO4Out_T1SIG3X                  5
#define MC__CSIO_CSIO4Out_T1SIG4X                  6
#define MC__CSIO_CSIO1Dir_IO_Output                4
#define MC__CSIO_CSIO1Dir_IO_nOutput               5
#define MC__CSIO_CSIO1Dir_IO_Input                 6
#define MC__CSIO_CSIO2Dir_IO_Output                4
#define MC__CSIO_CSIO2Dir_IO_nOutput               5
#define MC__CSIO_CSIO2Dir_IO_Input                 6
#define MC__CSIO_CSIO3Dir_IO_Output                4
#define MC__CSIO_CSIO3Dir_IO_nOutput               5
#define MC__CSIO_CSIO3Dir_IO_Input                 6
#define MC__CSIO_CSIO4Dir_IO_Output                4
#define MC__CSIO_CSIO4Dir_IO_nOutput               5
#define MC__CSIO_CSIO4Dir_IO_Input                 6
#define MC__CSIO_CSIO1Out_PPLSX                    7
#define MC__CSIO_CSIO2Out_PPLSX                    7
#define MC__CSIO_CSIO3Out_PPLSX                    7
#define MC__CSIO_CSIO4Out_PPLSX                    7
#define MC_ColorFormat_FLOAT32                    69
#define MC_Toto                                  (MCPARAMID)( 3632 << 14)
#define MC_LineTrigLine_Filter                   (MCPARAMID)( 3633 << 14)
#define MC_OutputState_18_LOOP3                    6
#define MC_OutputState_18_LOOP4                    7
#define MC_OutputState_19_LOOP1                    4
#define MC_OutputState_19_LOOP2                    5
#define MC_OutputState_19_LOOP3                    6
#define MC_OutputState_19_LOOP4                    7
#define MC_OutputState_31_LOOP1                    4
#define MC_OutputState_31_LOOP2                    5
#define MC_OutputState_31_LOOP3                    6
#define MC_OutputState_31_LOOP4                    7
#define MC_OutputState_32_LOOP3                    6
#define MC_OutputState_32_LOOP4                    7
#define MC_OutputState_33_LOOP3                    6
#define MC_OutputState_33_LOOP4                    7
#define MC_OutputState_34_LOOP3                    6
#define MC_OutputState_34_LOOP4                    7
#define MC_Camera_MV_D1024_80_CL_8               206
#define MC_Camera_MV_D1024_160_CL_8              207
#define MC_Camera_MV_D640_66_CL_10               208
#define MC_Camera_MV_D640C_66_CL_10              209
#define MC_Camera_MV_D640_33_CL_10               210
#define MC_Camera_MV_D640C_33_CL_10              211
#define MC_Camera_TMC_4000CL                     212
#define MC_CamConfig_P30SC_Base                  259
#define MC_CamConfig_P30RG_Base                  260
#define MC_CamConfig_P30RG_O_Base                261
#define MC_CamConfig_P30SC_Medium                262
#define MC_CamConfig_P30RG_Medium                263
#define MC_CamConfig_P30RG_O_Medium              264
#define MC_CamConfig_L512SC                      265
#define MC_CamConfig_L512RP                      266
#define MC_CamConfig_P15RC                       267
#define MC_CamConfig_P100SC                      268
#define MC_CamConfig_P100RC                      269
#define MC_CamConfig_P150SC                      270
#define MC_CamConfig_P150RG                      271
#define MC_CamConfig_L1024RG_Base                272
#define MC_CamConfig_L1024RG_Medium              273
#define MC_CamConfig_L2048RG_Base                274
#define MC_CamConfig_L2048RG_Medium              275
#define MC_CamConfig_L1024RP                     276
#define MC_CamConfig_L4080SC                     277
#define MC_CamConfig_L4080RP                     278
#define MC_Manufacturer_SVS_VISTEK                26
#define MC_PageLength_TileHeight_Key             (MCPARAMID)( 3634 << 14)
#define MC___PageLength_TileHeight_Check         (MCPARAMID)( 3635 << 14)
#define MC___PageLength_TileHeight_Check_PASS      1
#define MC___PageLength_TileHeight_Check_FAIL      2
#define MC_ProductionTest                        (MCPARAMID)( 3636 << 14)
#define MC_ProductionTest_DISABLED                 1
#define MC_ProductionTest_ENABLED                  2
#define MC__ReadoutDur_us                        (MCPARAMID)( 3637 << 14)
#define MC_ForceTrig_ENDTRIG                       2
#define MC_ForceTrig_Filter                      (MCPARAMID)( 3638 << 14)
#define MC_EndTrigFilter                         (MCPARAMID)( 3639 << 14)
#define MC_EndTrigFilter_OFF                       1
#define MC_EndTrigFilter_MEDIUM                    2
#define MC_EndTrigFilter_STRONG                    3
#define MC_EndTrigFilter_ON                        4
#define MC_EndTrigFilter_Filter                  (MCPARAMID)( 3640 << 14)
#define MC__EndTrigLine                          (MCPARAMID)( 3641 << 14)
#define MC__EndTrigLine_NONE                       1
#define MC__EndTrigLine_IO1                        2
#define MC__EndTrigLine_IO2                        3
#define MC__EndTrigLine_IO3                        4
#define MC__EndTrigLine_IO4                        5
#define MC__EndTrigLine_ISOA1                      6
#define MC__EndTrigLine_ISOA2                      7
#define MC__EndTrigLine_TRA1                       8
#define MC__EndTrigLine_TRA2                       9
#define MC__EndTrigLine_LTACT                     10
#define MC__EndTrigLine_PG                        11
#define MC__TRG_EFTPOL                           (MCPARAMID)( 3642 << 14)
#define MC__TRG_EFTPOL_DIRECT                      1
#define MC__TRG_EFTPOL_INVERT                      2
#define MC__TRG_EFTSEL                           (MCPARAMID)( 3643 << 14)
#define MC__TRG_EFTSEL_NA                          1
#define MC__TRG_EFTSEL_D1                          2
#define MC__TRG_EFTSEL_D2                          3
#define MC__TRG_EFTSEL_PG                          4
#define MC__TRG_EFTSEL_LTACT                       5
#define MC__TRG_EFTSEL_TRX                         6
#define MC__TRG_EFTSEL_TRY                         7
#define MC__TRG_EFTSEL_TRZ                         8
#define MC__TRG_EFTSEL_DA1                         9
#define MC__TRG_EFTSEL_DA2                        10
#define MC__TRG_EFTSEL_TRG1                       11
#define MC__TRG_EFTSEL_TRG2                       12
#define MC__TRG_EFTSEL_IO1                        13
#define MC__TRG_EFTSEL_IO2                        14
#define MC__TRG_EFTSEL_IO3                        15
#define MC__TRG_EFTSEL_IO4                        16
#define MC__EndTrigLine_DA1                       12
#define MC__EndTrigLine_DA2                       13
#define MC__EndTrigLine_PGA                       14
#define MC__EndTrigLine_DB1                       15
#define MC__EndTrigLine_DB2                       16
#define MC__EndTrigLine_PGB                       17
#define MC__EndTrigLine_TRX                       18
#define MC__EndTrigLine_TRY                       19
#define MC__EndTrigLine_TRZ                       20
#define MC_SimMANTRIGSet                         (MCPARAMID)( 3644 << 14)
#define MC__EndTrigLineNeeded                    (MCPARAMID)( 3645 << 14)
#define MC__EndTrigLineNeeded_NO                   1
#define MC__EndTrigLineNeeded_YES                  2
#define MC__VCOFrequency                         (MCPARAMID)( 3646 << 14)
#define MC__SSC_CV_A1                              7
#define MC__CBA_DIRX_w                           (MCPARAMID)( 3647 << 14)
#define MC_PartialPageLength_Ln                  (MCPARAMID)( 3648 << 14)
#define MC__LQS_COUNT0                           (MCPARAMID)( 3649 << 14)
#define MC__LQS_COUNT1                           (MCPARAMID)( 3650 << 14)
#define MC__LQS_COUNT2                           (MCPARAMID)( 3651 << 14)
#define MC_PPBUFSize_GrabSizeXStep_Px            (MCPARAMID)( 3652 << 14)
#define MC_ADR_GrabSizeXStep_Px                  (MCPARAMID)( 3653 << 14)
#define MC__ADR_ComponentSize_Byte               (MCPARAMID)( 3654 << 14)
#define MC__ADR_SliceSize_Byte                   (MCPARAMID)( 3655 << 14)
#define MC__ADR_InputBytePerComponent            (MCPARAMID)( 3656 << 14)
#define MC__ADR_OutputBytePerComponent           (MCPARAMID)( 3657 << 14)
#define MC__ADR_OutputsSteps64bit                (MCPARAMID)( 3658 << 14)
#define MC__ADR_ImageSizeX_Component             (MCPARAMID)( 3659 << 14)
#define MC__ADR_TotalSliceCount                  (MCPARAMID)( 3660 << 14)
#define MC__ADR_LastSliceSize_64bit              (MCPARAMID)( 3661 << 14)
#define MC_LineCaptureMode_ADR                     3
#define MC__CPG_PGFRAC                           (MCPARAMID)( 3662 << 14)
#define MC__MinPitch_mw                          (MCPARAMID)( 3663 << 14)
#define MC__ADR_OutputFormat                     (MCPARAMID)( 3664 << 14)
#define MC__ADR_OutputFormat_8BIT                  1
#define MC__ADR_OutputFormat_10BIT                 2
#define MC__ADR_OutputFormat_12BIT                 3
#define MC__ADR_OutputFormat_14BIT                 4
#define MC__ADR_OutputFormat_16BIT                 5
#define MC__ADR_SliceSize_Component              (MCPARAMID)( 3665 << 14)
#define MC_MinIntractionLead                     (MCPARAMID)( 3666 << 14)
#define MC_VSyncSearchWindowLeft_TT              (MCPARAMID)( 3667 << 14)
#define MC_VSyncSearchWindowRight_TT             (MCPARAMID)( 3668 << 14)
#define MC_VSyncFoundLNB                         (MCPARAMID)( 3669 << 14)
#define MC_TimerFrequency                        (MCPARAMID)( 3670 << 14)
#define MC_Fc_Hz                                 (MCPARAMID)( 3671 << 14)
#define MC_Fp1_Hz                                (MCPARAMID)( 3672 << 14)
#define MC_RCR                                   (MCPARAMID)( 3673 << 14)
#define MC_Fe1_Hz                                (MCPARAMID)( 3674 << 14)
#define MC__PM_N0                                (MCPARAMID)( 3675 << 14)
#define MC__PG_SF0                               (MCPARAMID)( 3676 << 14)
#define MC__Category_Rate_Converter               42
#define MC__PG_U                                 (MCPARAMID)( 3677 << 14)
#define MC__PG_S_U_max                           (MCPARAMID)( 3678 << 14)
#define MC__PG_U_max                             (MCPARAMID)( 3679 << 14)
#define MC__PG_S_max                             (MCPARAMID)( 3680 << 14)
#define MC__PG_S                                 (MCPARAMID)( 3681 << 14)
#define MC__PM_N1                                (MCPARAMID)( 3682 << 14)
#define MC__PM_PMSDIV                            (MCPARAMID)( 3683 << 14)
#define MC__PM_M                                 (MCPARAMID)( 3684 << 14)
#define MC__PM_N2                                (MCPARAMID)( 3685 << 14)
#define MC_Fp2_Hz                                (MCPARAMID)( 3686 << 14)
#define MC_Fe2_Hz                                (MCPARAMID)( 3687 << 14)
#define MC_Fm_Hz                                 (MCPARAMID)( 3688 << 14)
#define MC_RCDR                                  (MCPARAMID)( 3689 << 14)
#define MC___RCDR_Check                          (MCPARAMID)( 3690 << 14)
#define MC___RCDR_Check_PASS                       1
#define MC___RCDR_Check_FAIL                       2
#define MC___PM_PMSDIV_Range_Check               (MCPARAMID)( 3691 << 14)
#define MC___PM_PMSDIV_Range_Check_PASS            1
#define MC___PM_PMSDIV_Range_Check_FAIL            2
#define MC___PG_U_Check                          (MCPARAMID)( 3692 << 14)
#define MC___PG_U_Check_PASS                       1
#define MC___PG_U_Check_FAIL                       2
#define MC_SamplingPitch                         (MCPARAMID)( 3693 << 14)
#define MC__TrimmedKFactor                       (MCPARAMID)( 3694 << 14)
#define MC__TrimmedKFactor_Check                 (MCPARAMID)( 3695 << 14)
#define MC__TrimmedKFactor_Check_PASS              1
#define MC__TrimmedKFactor_Check_FAIL              2
#define MC__TrimmedPeriod_s                      (MCPARAMID)( 3696 << 14)
#define MC__Category_Periodic_Timer               43
#define MC__TrimmedPeriod_us                     (MCPARAMID)( 3697 << 14)
#define MC_RC_Fc_Hz                              (MCPARAMID)( 3698 << 14)
#define MC_PT_Fc_Hz                              (MCPARAMID)( 3699 << 14)
#define MC_PT_Po_s                               (MCPARAMID)( 3700 << 14)
#define MC__PT_S_U_max                           (MCPARAMID)( 3701 << 14)
#define MC__PT_U_max                             (MCPARAMID)( 3702 << 14)
#define MC__PT_U                                 (MCPARAMID)( 3703 << 14)
#define MC__PT_S_max                             (MCPARAMID)( 3704 << 14)
#define MC__PT_S                                 (MCPARAMID)( 3705 << 14)
#define MC__PT_N                                 (MCPARAMID)( 3706 << 14)
#define MC__PGSCAL                               (MCPARAMID)( 3707 << 14)
#define MC__PGFRAC                               (MCPARAMID)( 3708 << 14)
#define MC__KFactorTrim                          (MCPARAMID)( 3709 << 14)
#define MC__Vtotal_ms                            (MCPARAMID)( 3710 << 14)
#define MC__Expose_ms                            (MCPARAMID)( 3711 << 14)
#define MC_MaxCameraLineRate                     (MCPARAMID)( 3712 << 14)
#define MC_MaxDownwebLineRate                    (MCPARAMID)( 3713 << 14)
#define MC__MinIntractionLead                    (MCPARAMID)( 3714 << 14)
#define MC__MinIntractionLead_S                  (MCPARAMID)( 3715 << 14)
#define MC_SimABORTGASet                         (MCPARAMID)( 3716 << 14)
#define MC_ExpectedSeqLength_Ln                  (MCPARAMID)( 3717 << 14)
#define MC__PT_S_min                             (MCPARAMID)( 3718 << 14)
#define MC___PT_PGCNT_Range_Check                (MCPARAMID)( 3719 << 14)
#define MC___PT_PGCNT_Range_Check_PASS             1
#define MC___PT_PGCNT_Range_Check_FAIL             2
#define MC_SkippedLineCount                      (MCPARAMID)( 3720 << 14)
#define MC__CTD_ETDMOD                           (MCPARAMID)( 3721 << 14)
#define MC__CTD_ETDMOD_Bypass                      1
#define MC__CTD_ETDMOD_Enable                      2
#define MC__ETD_TDCNT                            (MCPARAMID)( 3722 << 14)
#define MC_EndPageDelay_Ln                       (MCPARAMID)( 3723 << 14)
#define MC__ETD_TDMOD                            (MCPARAMID)( 3724 << 14)
#define MC__ETD_TDMOD_Bypass                       1
#define MC__ETD_TDMOD_Enable                       2
#define MC_AssyPixelSize                         (MCPARAMID)( 3725 << 14)
#define MC_LineCaptureMode_LineCaptureMode_Filter   4
#define MC_LineCaptureMode_Filter                (MCPARAMID)( 3726 << 14)
#define MC_IDP_SWITCH                            (MCPARAMID)( 3727 << 14)
#define MC_IDP_SWITCH_TURN_ON                      1
#define MC_IDP_SWITCH_TURN_OFF                     2
#define MC_LineDur_Px                            (MCPARAMID)( 3728 << 14)
#define MC__SampledPixels_Px                     (MCPARAMID)( 3729 << 14)
#define MC_ActiveLineDurNoBlack_ns               (MCPARAMID)( 3730 << 14)
#define MC_LineDurNoBlack_Px                     (MCPARAMID)( 3731 << 14)
#define MC_MaxHCsyncAft_ns                       (MCPARAMID)( 3732 << 14)
#define MC_MaxHCsyncBfr_ns                       (MCPARAMID)( 3733 << 14)
#define MC__NoBlackOffset                        (MCPARAMID)( 3734 << 14)
#define MC__NoBlackOffset_Px                     (MCPARAMID)( 3735 << 14)
#define MC__NoBlackScale                         (MCPARAMID)( 3736 << 14)
#define MC__ModelId                              (MCPARAMID)( 3737 << 14)
#define MC__ModuleId                             (MCPARAMID)( 3738 << 14)
#define MC_ImagePixelAlign_N_A                     3
#define MC__Peak                                 (MCPARAMID)( 3739 << 14)
#define MC__Peak_OFF                               1
#define MC__Peak_ON                                2
#define MC__Hfilt                                (MCPARAMID)( 3740 << 14)
#define MC__Majs                                 (MCPARAMID)( 3741 << 14)
#define MC__BoardType__PICOLO_ALERT               26
#define MC__Dummy                                (MCPARAMID)( 3742 << 14)
#define MC___PageLength_TileHeight_Check_ErrorMsg (MCPARAMID)( 3743 << 14)
#define MC_NextTrigMode_NextTrigMode              10
#define MC__TED_TDCLK                            (MCPARAMID)( 3744 << 14)
#define MC__TED_TDCLK_PRESCAL                      1
#define MC__TED_TDCLK_LTRIG                        2
#define MC__TED_TDCLK_PPLS                         3
#define MC__TED_TDCLK_EOL                          4
#define MC__TED_TDMOD                            (MCPARAMID)( 3745 << 14)
#define MC__TED_TDMOD_Bypass                       1
#define MC__TED_TDMOD_Enable                       2
#define MC__ETD_ETDMOD                           (MCPARAMID)( 3746 << 14)
#define MC__ETD_ETDMOD_Bypass                      1
#define MC__ETD_ETDMOD_Enable                      2
#define MC__TED_TDSCAL_ns                        (MCPARAMID)( 3747 << 14)
#define MC__TED_TDCNT                            (MCPARAMID)( 3748 << 14)
#define MC__ETD_ETDCNT                           (MCPARAMID)( 3749 << 14)
#define MC_PageDelay_Filter                      (MCPARAMID)( 3750 << 14)
#define MC_EndPageDelay_Filter                   (MCPARAMID)( 3751 << 14)
#define MC_BoardStartSet                         (MCPARAMID)( 3752 << 14)
#define MC__HDHalfPeriod_25ns                    (MCPARAMID)( 3753 << 14)
#define MC__HDPulseWidth_25ns                    (MCPARAMID)( 3754 << 14)
#define MC__VDPeriod_halfHD                      (MCPARAMID)( 3755 << 14)
#define MC__VDPulseWidth_halfHD                  (MCPARAMID)( 3756 << 14)
#define MC__CameraSyncEnable                     (MCPARAMID)( 3757 << 14)
#define MC__CameraSyncEnable_ENABLE                1
#define MC__CameraSyncEnable_DISABLE               2
#define MC___DisableCamDigIO                     (MCPARAMID)( 3758 << 14)
#define MC___DisableCamDigIO_DISABLE               1
#define MC___DisableCamDigIO_ENABLE                2
#define MC__Board_Type__ALERT                      8
#define MC__Category_Low_Level                    44
#define MC__BoardType__ALERT                      27
#define MC_BEC_SrcFlipX                          (MCPARAMID)( 3759 << 14)
#define MC_BEC_SrcFlipX_ON                         1
#define MC_BEC_SrcFlipX_OFF                        2
#define MC_BEC_SrcVertRes                        (MCPARAMID)( 3760 << 14)
#define MC_BEC_SrcVertRes_HALFRES                  1
#define MC_BEC_SrcVertRes_FULLRES                  2
#define MC_BEC_SrcSizeY                          (MCPARAMID)( 3761 << 14)
#define MC_SrcOffsetAddressY                     (MCPARAMID)( 3762 << 14)
#define MC_BEC_SrcOffsetAddressY                 (MCPARAMID)( 3763 << 14)
#define MC_BEC_SrcCAPM                           (MCPARAMID)( 3764 << 14)
#define MC_BEC_SrcCAPM_CField                      1
#define MC_BEC_SrcCAPM_CFrame                      2
#define MC_FEC_CAPM                              (MCPARAMID)( 3765 << 14)
#define MC_FEC_CAPM_CField                         1
#define MC_FEC_CAPM_CFrame                         2
#define MC_FEC_HPRE                              (MCPARAMID)( 3766 << 14)
#define MC_FEC_VPIM                              (MCPARAMID)( 3767 << 14)
#define MC_FEC_VPIM_EvenIsUp                       1
#define MC_FEC_VPIM_EvenIsDown                     2
#define MC_FEC_VSTD                              (MCPARAMID)( 3768 << 14)
#define MC_FEC_VSTD_PAL_SQ                         1
#define MC_FEC_VSTD_NTSC_SQ                        2
#define MC_FEC_VSTD_PAL_BROAD                      3
#define MC_FEC_VSTD_NTSC_BROAD                     4
#define MC_FEC_VSTD_SimA                           5
#define MC_FEC_VSTD_SimB                           6
#define MC_FEC_VSTD_SimC                           7
#define MC_FEC_VSTD_SimD                           8
#define MC_BusIdx                                (MCPARAMID)( 3769 << 14)
#define MC_DeviceIdx                             (MCPARAMID)( 3770 << 14)
#define MC__FPGA_Model                           (MCPARAMID)( 3771 << 14)
#define MC__FPGA_Model_HARMONY_DUOCAM              1
#define MC__FPGA_Model_HARMONY_MONOCAM_RGB         2
#define MC__FPGA_Model_MELODY_MONOCAM              3
#define MC__CONV_OUTPUT_GRANULARITY_             (MCPARAMID)( 3772 << 14)
#define MC_D3_CONVOLVER_BLOCKS                   (MCPARAMID)( 3773 << 14)
#define MC__DMA_TRANSFER_GRANULARITY_            (MCPARAMID)( 3774 << 14)
#define MC__IMAGE_TRANSFER_GRANULARITY_          (MCPARAMID)( 3775 << 14)
#define MC__Rounded_RHD                          (MCPARAMID)( 3776 << 14)
#define MC_RAS_R                                 (MCPARAMID)( 3777 << 14)
#define MC_Connector_UNDEFINED                   123
#define MC_BEC_VScaleFactor                      (MCPARAMID)( 3778 << 14)
#define MC_FEC_VPRE                              (MCPARAMID)( 3779 << 14)
#define MC_FEC_VACT                              (MCPARAMID)( 3780 << 14)
#define MC_FEC_VBarrelShift                      (MCPARAMID)( 3781 << 14)
#define MC_FEC_VBarrelShift_1BIT                   1
#define MC_FEC_VBarrelShift_2BIT                   2
#define MC_FEC_VBarrelShift_3BIT                   3
#define MC_FEC_VBarrelShift_0BIT                   4
#define MC_FEC_HBarrelShift                      (MCPARAMID)( 3782 << 14)
#define MC_FEC_HBarrelShift_0BIT                   1
#define MC_FEC_HBarrelShift_1BIT                   2
#define MC_FEC_HBarrelShift_2BIT                   3
#define MC_BEC_HScaleFactor                      (MCPARAMID)( 3783 << 14)
#define MC_BEC_SrcOffetX                         (MCPARAMID)( 3784 << 14)
#define MC_BEC_DestSizeX                         (MCPARAMID)( 3785 << 14)
#define MC_BEC_EnableCSC                         (MCPARAMID)( 3786 << 14)
#define MC_BEC_EnableCSC_ON                        1
#define MC_BEC_EnableCSC_OFF                       2
#define MC_BEC_Offset_Y                          (MCPARAMID)( 3787 << 14)
#define MC_BEC_Gain_Y                            (MCPARAMID)( 3788 << 14)
#define MC_BEC_Gain_Cr1                          (MCPARAMID)( 3789 << 14)
#define MC_BEC_Gain_Cr2                          (MCPARAMID)( 3790 << 14)
#define MC_BEC_Gain_Cb1                          (MCPARAMID)( 3791 << 14)
#define MC_BEC_Gain_Cb2                          (MCPARAMID)( 3792 << 14)
#define MC_BEC_Gain_Cr_1                         (MCPARAMID)( 3793 << 14)
#define MC_BEC_Gain_Cr_2                         (MCPARAMID)( 3794 << 14)
#define MC_BEC_Gain_Cb_1                         (MCPARAMID)( 3795 << 14)
#define MC_BEC_Gain_Cb_2                         (MCPARAMID)( 3796 << 14)
#define MC_PixelTiming                           (MCPARAMID)( 3797 << 14)
#define MC_PixelTiming_SQUARE                      1
#define MC_PixelTiming_BROADCAST                   2
#define MC_Resolution                            (MCPARAMID)( 3798 << 14)
#define MC_Resolution_FRAME                        1
#define MC_Resolution_FLD                          2
#define MC_Resolution_CIF                          3
#define MC_Resolution_QCIF                         4
#define MC_BEC_VBarrelShift                      (MCPARAMID)( 3799 << 14)
#define MC_BEC_VBarrelShift_0BIT                   1
#define MC_BEC_VBarrelShift_1BIT                   2
#define MC_BEC_VBarrelShift_2BIT                   3
#define MC_BEC_HBarrelShift                      (MCPARAMID)( 3800 << 14)
#define MC_BEC_HBarrelShift_0BIT                   1
#define MC_BEC_HBarrelShift_1BIT                   2
#define MC_BEC_HBarrelShift_2BIT                   3
#define MC__Y_Ln                                 (MCPARAMID)( 3801 << 14)
#define MC_Resolution_CUSTOM                       5
#define MC_Resolution_Filter                     (MCPARAMID)( 3802 << 14)
#define MC__ScaleX                               (MCPARAMID)( 3803 << 14)
#define MC__RoundedScaledWindowX                 (MCPARAMID)( 3804 << 14)
#define MC__ScaledWindowX                        (MCPARAMID)( 3805 << 14)
#define MC_ScaledWindowX                         (MCPARAMID)( 3806 << 14)
#define MC__ScaleY                               (MCPARAMID)( 3807 << 14)
#define MC__ScaledWindowY                        (MCPARAMID)( 3808 << 14)
#define MC_ScaledWindowY                         (MCPARAMID)( 3809 << 14)
#define MC_ColorFormat_YUV444                     70
#define MC_ColorFormat_Y41P                       71
#define MC_ColorFormat_Y42P                       72
#define MC_ColorFormat_IYU2                       73
#define MC_ColorFormat_YUV444PL                   74
#define MC_ColorFormat_YUV411PL_DEC               75
#define MC_ColorFormat_YUV422PL_DEC               76
#define MC__HSP                                  (MCPARAMID)( 3810 << 14)
#define MC__VSP                                  (MCPARAMID)( 3811 << 14)
#define MC__BPP                                  (MCPARAMID)( 3812 << 14)
#define MC__Pixel_Assembly_Granularity           (MCPARAMID)( 3813 << 14)
#define MC__TransferredImageSizeX                (MCPARAMID)( 3814 << 14)
#define MC__B4PP                                 (MCPARAMID)( 3815 << 14)
#define MC__Max_OffsetX_Px                       (MCPARAMID)( 3816 << 14)
#define MC__Min_OffsetX_Px                       (MCPARAMID)( 3817 << 14)
#define MC__LeftMargin_Max_Px                    (MCPARAMID)( 3818 << 14)
#define MC__LeftMargin_Px                        (MCPARAMID)( 3819 << 14)
#define MC__TopMargin_Max_Ln                     (MCPARAMID)( 3820 << 14)
#define MC__TopMargin_Ln                         (MCPARAMID)( 3821 << 14)
#define MC_ImageColorSpace                       (MCPARAMID)( 3822 << 14)
#define MC_ImageColorSpace_YUV                     1
#define MC_ImageColorSpace_RGB                     2
#define MC_VsyncAft_Ln_Bit0                      (MCPARAMID)( 3823 << 14)
#define MC_GainY_f                               (MCPARAMID)( 3824 << 14)
#define MC__GainC_f                              (MCPARAMID)( 3825 << 14)
#define MC__CSC_GainY_4_7                        (MCPARAMID)( 3826 << 14)
#define MC__CSC_GainCrR_4_7                      (MCPARAMID)( 3827 << 14)
#define MC__CSC_GainCrG_S3_7                     (MCPARAMID)( 3828 << 14)
#define MC__CSC_GainCbB_4_7                      (MCPARAMID)( 3829 << 14)
#define MC__CSC_GainCbG_S3_7                     (MCPARAMID)( 3830 << 14)
#define MC__GainU_f                              (MCPARAMID)( 3831 << 14)
#define MC__GainV_f                              (MCPARAMID)( 3832 << 14)
#define MC_ScalersGain_f                         (MCPARAMID)( 3833 << 14)
#define MC_GainU_f                               (MCPARAMID)( 3834 << 14)
#define MC_GainV_f                               (MCPARAMID)( 3835 << 14)
#define MC__CSC_GainCbG_S2_7                     (MCPARAMID)( 3836 << 14)
#define MC_GainY                                 (MCPARAMID)( 3837 << 14)
#define MC_GainU                                 (MCPARAMID)( 3838 << 14)
#define MC_GainV                                 (MCPARAMID)( 3839 << 14)
#define MC__CSC_GainY                            (MCPARAMID)( 3840 << 14)
#define MC__CSC_GainCrR                          (MCPARAMID)( 3841 << 14)
#define MC__CSC_GainCrG                          (MCPARAMID)( 3842 << 14)
#define MC__CSC_GainCbB                          (MCPARAMID)( 3843 << 14)
#define MC__CSC_GainCbG                          (MCPARAMID)( 3844 << 14)
#define MC_ScalersGain                           (MCPARAMID)( 3845 << 14)
#define MC_ScaleY                                (MCPARAMID)( 3846 << 14)
#define MC_ScaleX                                (MCPARAMID)( 3847 << 14)
#define MC_ScalerXGain                           (MCPARAMID)( 3848 << 14)
#define MC_ScalerYGain                           (MCPARAMID)( 3849 << 14)
#define MC_BEC_VideoOutFormat                    (MCPARAMID)( 3850 << 14)
#define MC_BEC_VideoOutFormat_YUV444_Packed        1
#define MC_BEC_VideoOutFormat_YUV444_Planar        2
#define MC_BEC_VideoOutFormat_YUV422_Packed        3
#define MC_BEC_VideoOutFormat_YUV422_Planar        4
#define MC_BEC_VideoOutFormat_YUV422_Planar_Decimated   5
#define MC_BEC_VideoOutFormat_YUV411_Packed        6
#define MC_BEC_VideoOutFormat_YUV411_Planar        7
#define MC_BEC_VideoOutFormat_YUV411_Planar_Decimated   8
#define MC_BEC_VideoOutFormat_RGB15_Packed         9
#define MC_BEC_VideoOutFormat_RGB16_Packed        10
#define MC_BEC_VideoOutFormat_RGB24_Packed        11
#define MC_BEC_VideoOutFormat_RGB24_Planar        12
#define MC_BEC_VideoOutFormat_ARGB32_Packed       13
#define MC_BEC_VideoOutFormat_Y8                  14
#define MC_Camera_SIMA                           213
#define MC_BEC_SrcOffsetX                        (MCPARAMID)( 3851 << 14)
#define MC_Standard_SIMA                           6
#define MC__FCR                                  (MCPARAMID)( 3852 << 14)
#define MC_FEC_FCR                               (MCPARAMID)( 3853 << 14)
#define MC_DataRange_Filter                      (MCPARAMID)( 3854 << 14)
#define MC_ColorFormat_MJPG                       77
#define MC_VideoSamplingPeriod                   (MCPARAMID)( 3855 << 14)
#define MC_ImageWidth                            (MCPARAMID)( 3856 << 14)
#define MC_VerticalSamplingPeriod                (MCPARAMID)( 3857 << 14)
#define MC_Go                                    (MCPARAMID)( 3858 << 14)
#define MC_CaptureRate                           (MCPARAMID)( 3859 << 14)
#define MC_CaptureRate_Slider                    (MCPARAMID)( 3860 << 14)
#define MC_CaptureRate_Max                       (MCPARAMID)( 3861 << 14)
#define MC_CaptureRate_Min                       (MCPARAMID)( 3862 << 14)
#define MC_CaptureRate_Default                   (MCPARAMID)( 3863 << 14)
#define MC_CaptureRate_SliderF                   (MCPARAMID)( 3864 << 14)
#define MC_InterfaceLayer                        (MCPARAMID)( 3865 << 14)
#define MC_InterfaceLayer_DISABLED                 1
#define MC_InterfaceLayer_ENABLED                  2
#define MC_Brightness_Slider                     (MCPARAMID)( 3866 << 14)
#define MC_Brightness                            (MCPARAMID)( 3867 << 14)
#define MC_Brightness_SliderF                    (MCPARAMID)( 3868 << 14)
#define MC_Brightness_Max                        (MCPARAMID)( 3869 << 14)
#define MC_Brightness_Min                        (MCPARAMID)( 3870 << 14)
#define MC_Brightness_Default                    (MCPARAMID)( 3871 << 14)
#define MC_Contrast_Slider                       (MCPARAMID)( 3872 << 14)
#define MC_Contrast                              (MCPARAMID)( 3873 << 14)
#define MC_Contrast_SliderF                      (MCPARAMID)( 3874 << 14)
#define MC_Contrast_Max                          (MCPARAMID)( 3875 << 14)
#define MC_Contrast_Min                          (MCPARAMID)( 3876 << 14)
#define MC_Contrast_Default                      (MCPARAMID)( 3877 << 14)
#define MC_Saturation_Slider                     (MCPARAMID)( 3878 << 14)
#define MC_Saturation                            (MCPARAMID)( 3879 << 14)
#define MC_Saturation_SliderF                    (MCPARAMID)( 3880 << 14)
#define MC_Saturation_Max                        (MCPARAMID)( 3881 << 14)
#define MC_Saturation_Min                        (MCPARAMID)( 3882 << 14)
#define MC_Saturation_Default                    (MCPARAMID)( 3883 << 14)
#define MC_CaptureRate_Slider_Default            (MCPARAMID)( 3884 << 14)
#define MC_Contrast_Slider_Default               (MCPARAMID)( 3885 << 14)
#define MC_Saturation_Slider_Default             (MCPARAMID)( 3886 << 14)
#define MC_Brightness_Slider_Default             (MCPARAMID)( 3887 << 14)
#define MC__CaptureRate_Max_x1000                (MCPARAMID)( 3888 << 14)
#define MC_FEC_VPIM_OddIsUp                        3
#define MC_StandardFrameRate_mHz                 (MCPARAMID)( 3889 << 14)
#define MC_VideoStandard                         (MCPARAMID)( 3890 << 14)
#define MC_VideoStandard_PAL                       1
#define MC_VideoStandard_NTSC                      2
#define MC_OutputFormat                          (MCPARAMID)( 3891 << 14)
#define MC_OutputFormat_YUY2                       1
#define MC_OutputFormat_YV12                       2
#define MC_OutputFormat_Y41P                       3
#define MC_OutputFormat_IYUV                       4
#define MC_OutputFormat_YVU9                       5
#define MC_OutputFormat_RGB24                      6
#define MC_OutputFormat_RGB555                     7
#define MC_OutputFormat_RGB565                     8
#define MC_OutputFormat_RGB8                       9
#define MC_OutputFormat_ARGB32                    10
#define MC_CaptureRegion                         (MCPARAMID)( 3892 << 14)
#define MC_CaptureRegion_FRAME                     1
#define MC_CaptureRegion_FLD                       2
#define MC_CaptureRegion_CIF                       3
#define MC_CaptureRegion_QCIF                      4
#define MC_CaptureRegion_CUSTOM                    5
#define MC_CaptureRegionXSize_Slider             (MCPARAMID)( 3893 << 14)
#define MC_CaptureRegionXSize                    (MCPARAMID)( 3894 << 14)
#define MC_CaptureRegionXSize_Max                (MCPARAMID)( 3895 << 14)
#define MC_CaptureRegionXSize_Min                (MCPARAMID)( 3896 << 14)
#define MC_CaptureRegionXSize_Default            (MCPARAMID)( 3897 << 14)
#define MC_CaptureRegionXSize_Slider_Default     (MCPARAMID)( 3898 << 14)
#define MC_CaptureRegionXSize_SliderF            (MCPARAMID)( 3899 << 14)
#define MC_CaptureRegionYSize_Slider             (MCPARAMID)( 3900 << 14)
#define MC_CaptureRegionYSize                    (MCPARAMID)( 3901 << 14)
#define MC_CaptureRegionYSize_SliderF            (MCPARAMID)( 3902 << 14)
#define MC_CaptureRegionYSize_Max                (MCPARAMID)( 3903 << 14)
#define MC_CaptureRegionYSize_Min                (MCPARAMID)( 3904 << 14)
#define MC_CaptureRegionYSize_Default            (MCPARAMID)( 3905 << 14)
#define MC_CaptureRegionYSize_Slider_Default     (MCPARAMID)( 3906 << 14)
#define MC_CaptureRegionXPosition_Slider         (MCPARAMID)( 3907 << 14)
#define MC_CaptureRegionXPosition                (MCPARAMID)( 3908 << 14)
#define MC_CaptureRegionXPosition_SliderF        (MCPARAMID)( 3909 << 14)
#define MC_CaptureRegionXPosition_Max            (MCPARAMID)( 3910 << 14)
#define MC_CaptureRegionXPosition_Min            (MCPARAMID)( 3911 << 14)
#define MC_CaptureRegionXPosition_Default        (MCPARAMID)( 3912 << 14)
#define MC_CaptureRegionXPosition_Slider_Default (MCPARAMID)( 3913 << 14)
#define MC_CaptureRegionXPosition_Span           (MCPARAMID)( 3914 << 14)
#define MC_CaptureRegionYPosition_Slider         (MCPARAMID)( 3915 << 14)
#define MC_CaptureRegionYPosition                (MCPARAMID)( 3916 << 14)
#define MC_CaptureRegionYPosition_SliderF        (MCPARAMID)( 3917 << 14)
#define MC_CaptureRegionYPosition_Span           (MCPARAMID)( 3918 << 14)
#define MC_CaptureRegionYPosition_Max            (MCPARAMID)( 3919 << 14)
#define MC_CaptureRegionYPosition_Min            (MCPARAMID)( 3920 << 14)
#define MC_CaptureRegionYPosition_Default        (MCPARAMID)( 3921 << 14)
#define MC_CaptureRegionYPosition_Slider_Default (MCPARAMID)( 3922 << 14)
#define MC__PixelClock_x2                        (MCPARAMID)( 3923 << 14)
#define MC_EffLineDur_Px                         (MCPARAMID)( 3924 << 14)
#define MC__PixelClock                           (MCPARAMID)( 3925 << 14)
#define MC__PLL_fl                               (MCPARAMID)( 3926 << 14)
#define MC__PLL_int                              (MCPARAMID)( 3927 << 14)
#define MC_ObjectName_Slider                     (MCPARAMID)( 3928 << 14)
#define MC_ObjectName_SliderF                    (MCPARAMID)( 3929 << 14)
#define MC_ObjectName_Max                        (MCPARAMID)( 3930 << 14)
#define MC_ObjectName_Min                        (MCPARAMID)( 3931 << 14)
#define MC_ObjectName_Default                    (MCPARAMID)( 3932 << 14)
#define MC_ObjectName_Slider_Default             (MCPARAMID)( 3933 << 14)
#define MC_EffPixelClock                         (MCPARAMID)( 3934 << 14)
#define MC_EffPixelClock_x2                      (MCPARAMID)( 3935 << 14)
#define MC_Brightness_Span                       (MCPARAMID)( 3936 << 14)
#define MC__PageLength_Ln_Check                  (MCPARAMID)( 3937 << 14)
#define MC__LimitedScaleX                        (MCPARAMID)( 3938 << 14)
#define MC__LimitedScaleY                        (MCPARAMID)( 3939 << 14)
#define MC_ImageXSize_Slider                     (MCPARAMID)( 3940 << 14)
#define MC_ImageXSize                            (MCPARAMID)( 3941 << 14)
#define MC_ImageXSize_SliderF                    (MCPARAMID)( 3942 << 14)
#define MC_ImageXSize_Max                        (MCPARAMID)( 3943 << 14)
#define MC_ImageXSize_Min                        (MCPARAMID)( 3944 << 14)
#define MC_ImageXSize_Default                    (MCPARAMID)( 3945 << 14)
#define MC_ImageXSize_Slider_Default             (MCPARAMID)( 3946 << 14)
#define MC_ImageYSize_Slider                     (MCPARAMID)( 3947 << 14)
#define MC_ImageYSize                            (MCPARAMID)( 3948 << 14)
#define MC_ImageYSize_SliderF                    (MCPARAMID)( 3949 << 14)
#define MC_ImageYSize_Max                        (MCPARAMID)( 3950 << 14)
#define MC_ImageYSize_Min                        (MCPARAMID)( 3951 << 14)
#define MC_ImageYSize_Default                    (MCPARAMID)( 3952 << 14)
#define MC_ImageYSize_Slider_Default             (MCPARAMID)( 3953 << 14)
#define MC_ResolutionX_Slider                    (MCPARAMID)( 3954 << 14)
#define MC_ResolutionX                           (MCPARAMID)( 3955 << 14)
#define MC_ResolutionX_SliderF                   (MCPARAMID)( 3956 << 14)
#define MC_ResolutionX_Max                       (MCPARAMID)( 3957 << 14)
#define MC_ResolutionX_Min                       (MCPARAMID)( 3958 << 14)
#define MC_ResolutionX_Default                   (MCPARAMID)( 3959 << 14)
#define MC_ResolutionX_Slider_Default            (MCPARAMID)( 3960 << 14)
#define MC_ResolutionY_Slider                    (MCPARAMID)( 3961 << 14)
#define MC_ResolutionY                           (MCPARAMID)( 3962 << 14)
#define MC_ResolutionY_SliderF                   (MCPARAMID)( 3963 << 14)
#define MC_ResolutionY_Max                       (MCPARAMID)( 3964 << 14)
#define MC_ResolutionY_Min                       (MCPARAMID)( 3965 << 14)
#define MC_ResolutionY_Default                   (MCPARAMID)( 3966 << 14)
#define MC_ResolutionY_Slider_Default            (MCPARAMID)( 3967 << 14)
#define MC_AnalogHSLane                          (MCPARAMID)( 3968 << 14)
#define MC_DigitalHSLane                         (MCPARAMID)( 3969 << 14)
#define MC__ResolutionX_Max                      (MCPARAMID)( 3970 << 14)
#define MC__ResolutionX_Min                      (MCPARAMID)( 3971 << 14)
#define MC__ResolutionY_Max                      (MCPARAMID)( 3972 << 14)
#define MC__ResolutionY_Min                      (MCPARAMID)( 3973 << 14)
#define MC_FieldSizeY                            (MCPARAMID)( 3974 << 14)
#define MC__SyncPhaseLock                        (MCPARAMID)( 3975 << 14)
#define MC__SyncPhaseLock_TRUE                     1
#define MC__SyncPhaseLock_FALSE                    2
#define MC__FieldsInSignal                       (MCPARAMID)( 3976 << 14)
#define MC__GrabbedFields                        (MCPARAMID)( 3977 << 14)
#define MC_InterfaceParameters                   (MCPARAMID)( 3978 << 14)
#define MC_InterfaceParameters_DISABLE             1
#define MC_InterfaceParameters_ENABLE              2
#define MC_CsyncCtl                              (MCPARAMID)( 3979 << 14)
#define MC_CsyncCtl_NONE                           1
#define MC_CsyncCtl_TTL                            2
#define MC_CsyncCtl_DIFF                           3
#define MC_CsyncCtl_LVDS                           4
#define MC_CsyncEdge                             (MCPARAMID)( 3980 << 14)
#define MC_CsyncEdge_GOLOW                         1
#define MC_CsyncEdge_GOHIGH                        2
#define MC_CsyncLine_HIO                           7
#define MC_CsyncLine_GATE                          8
#define MC_TargetFrameRate_mHz                   (MCPARAMID)( 3981 << 14)
#define MC_Monochrome                            (MCPARAMID)( 3982 << 14)
#define MC__BoardType__PICOLO_DILIGENT            28
#define MC_ResolutionY_Rule                      (MCPARAMID)( 3983 << 14)
#define MC_ResolutionY_FeedbackRule              (MCPARAMID)( 3984 << 14)
#define MC_ResolutionYMaxRule                    (MCPARAMID)( 3985 << 14)
#define MC_OutputFormat_RGB32                     11
#define MC_CX_VACTIVE                            (MCPARAMID)( 3986 << 14)
#define MC_WISPackages                           (MCPARAMID)( 3987 << 14)
#define MC__WIS_CompressMode                     (MCPARAMID)( 3988 << 14)
#define MC__WIS_CompressMode_MPEG1                 1
#define MC__WIS_CompressMode_MPEG2                 2
#define MC__WIS_CompressMode_H263                  3
#define MC__WIS_CompressMode_MPEG4                 4
#define MC__WIS_CompressMode_MJPEG                 5
#define MC_MPEGPackages                          (MCPARAMID)( 3989 << 14)
#define MC_MPEGXPackage                          (MCPARAMID)( 3990 << 14)
#define MC_ICXYIVLCPackage                       (MCPARAMID)( 3991 << 14)
#define MC_MPEGXTBLPackage                       (MCPARAMID)( 3992 << 14)
#define MC__WIS_SequenceMode                     (MCPARAMID)( 3993 << 14)
#define MC__WIS_SequenceMode_IP                    1
#define MC__WIS_SequenceMode_IPB                   2
#define MC_QDEQTBLPackage                        (MCPARAMID)( 3994 << 14)
#define MC_OSDPackage                            (MCPARAMID)( 3995 << 14)
#define MC_WISPackage                            (MCPARAMID)( 3996 << 14)
#define MC_WindowY_SLn                           (MCPARAMID)( 3997 << 14)
#define MC_BEC_StorageType                       (MCPARAMID)( 3998 << 14)
#define MC_BEC_StorageType_PACKED                  1
#define MC_BEC_StorageType_PLANAR                  2
#define MC_BEC_ChromaSwap                        (MCPARAMID)( 3999 << 14)
#define MC_BEC_ChromaSwap_OFF                      1
#define MC_BEC_ChromaSwap_ON                       2
#define MC_Vactive_Noblack_Ln                    (MCPARAMID)( 4000 << 14)
#define MC_WindowX_Noblack_Px                    (MCPARAMID)( 4001 << 14)
#define MC_Hactive_Noblack_Px                    (MCPARAMID)( 4002 << 14)
#define MC_ENC_CompressMode                      (MCPARAMID)( 4003 << 14)
#define MC_ENC_CompressMode_MPEG4                  1
#define MC_ENC_CompressMode_MJPEG                  2
#define MC_DIVX_MPEG4                            (MCPARAMID)( 4004 << 14)
#define MC_MS_MPEG4                              (MCPARAMID)( 4005 << 14)
#define MC_ENC_Mjpeg                             (MCPARAMID)( 4006 << 14)
#define MC_ENC_SequenceMode                      (MCPARAMID)( 4007 << 14)
#define MC_ENC_SequenceMode_IONLY                  1
#define MC_ENC_SequenceMode_IPONLY                 2
#define MC_ENC_SequenceMode_IPB                    3
#define MC_ENC_GopMode                           (MCPARAMID)( 4008 << 14)
#define MC_ENC_GopMode_OPEN                        1
#define MC_ENC_GopMode_CLOSE                       2
#define MC_ENC_GopSize                           (MCPARAMID)( 4009 << 14)
#define MC_ENC_GopSizeGranularity                (MCPARAMID)( 4010 << 14)
#define MC_ENC_Mpeg4Mode                         (MCPARAMID)( 4011 << 14)
#define MC_ENC_Mpeg4Mode_DX50                      1
#define MC_ENC_Mpeg4Mode_MP4S                      2
#define MC_ENC_DeinterlaceMode                   (MCPARAMID)( 4012 << 14)
#define MC_ENC_SearchRange                       (MCPARAMID)( 4013 << 14)
#define MC_ENC_GopHeaderEn                       (MCPARAMID)( 4014 << 14)
#define MC_ENC_SeqHeaderEn                       (MCPARAMID)( 4015 << 14)
#define MC_ENC_AspectRatio                       (MCPARAMID)( 4016 << 14)
#define MC_MJPEG                                 (MCPARAMID)( 4017 << 14)
#define MC_ENC_SequenceMode_Filter               (MCPARAMID)( 4018 << 14)
#define MC_TCFGVIDEOEX                           (MCPARAMID)( 4019 << 14)
#define MC_TVIDEOCFGFIX                          (MCPARAMID)( 4020 << 14)
#define MC_ENC_CompressMode_MPEG1                  3
#define MC_ENC_CompressMode_MPEG2                  4
#define MC_ENC_CompressMode_H263                   5
#define MC__MIIR                                 (MCPARAMID)( 4021 << 14)
#define MC_PixelTiming_Filter                    (MCPARAMID)( 4022 << 14)
#define MC_ENC_DeinterlaceMode_INTERPOLATION       1
#define MC_ENC_DeinterlaceMode_INTERLACED_ENCODING   2
#define MC_ENC_DeinterlaceMode_WEAVING             3
#define MC_ENC_DeinterlaceMode_BLENDING            4
#define MC_ENC_DeinterlaceMode_MOTION_DETECTION    5
#define MC_ENC_DVDCompliant                      (MCPARAMID)( 4023 << 14)
#define MC_ENC_MaxGopSize                        (MCPARAMID)( 4024 << 14)
#define MC_ENC_BRCTRLreserved                    (MCPARAMID)( 4025 << 14)
#define MC_ENC_QMIN                              (MCPARAMID)( 4026 << 14)
#define MC_ENC_QMAX                              (MCPARAMID)( 4027 << 14)
#define MC_ENC_BRCWindowSize                     (MCPARAMID)( 4028 << 14)
#define MC_ENC_MBEnable                          (MCPARAMID)( 4029 << 14)
#define MC_ENC_DupEn                             (MCPARAMID)( 4030 << 14)
#define MC_ENC_BitrateControl                    (MCPARAMID)( 4031 << 14)
#define MC_ENC_BitrateControl_CBR                  1
#define MC_ENC_BitrateControl_CQ                   2
#define MC_ENC_BitrateControl_IQPQBQ               3
#define MC_ENC_TargetBitrate                     (MCPARAMID)( 4032 << 14)
#define MC_ENC_CBRConvergingSpeed                (MCPARAMID)( 4033 << 14)
#define MC_ENC_Lambda                            (MCPARAMID)( 4034 << 14)
#define MC_ENC_Q                                 (MCPARAMID)( 4035 << 14)
#define MC_ENC_IQ                                (MCPARAMID)( 4036 << 14)
#define MC_ENC_PQ                                (MCPARAMID)( 4037 << 14)
#define MC_ENC_BQ                                (MCPARAMID)( 4038 << 14)
#define MC_ENC_VBVBuffer                         (MCPARAMID)( 4039 << 14)
#define MC_ENC_PeakBitrate                       (MCPARAMID)( 4040 << 14)
#define MC_ENC_BitrateControl_CONSTANT_BITRATE     4
#define MC_ENC_BitrateControl_CONSTANT_QUALITY     5
#define MC_ENC_BitrateControl_FIXED_QUALITY        6
#define MC_CBR_Filter                            (MCPARAMID)( 4041 << 14)
#define MC_VBR_Filter                            (MCPARAMID)( 4042 << 14)
#define MC_NBR_Filter                            (MCPARAMID)( 4043 << 14)
#define MC_OutputFormat_MJPG                      12
#define MC_ENC_Mpeg4Mode_Filter                  (MCPARAMID)( 4044 << 14)
#define MC_CompressedStream                      (MCPARAMID)( 4045 << 14)
#define MC_OutputFormat_Filter                   (MCPARAMID)( 4046 << 14)
#define MC_StandardFramesPerSecond               (MCPARAMID)( 4047 << 14)
#define MC_ENC_DropFrame                         (MCPARAMID)( 4048 << 14)
#define MC_ENC_1001FrameRate                     (MCPARAMID)( 4049 << 14)
#define MC_ENC_DropFrame_Fl                      (MCPARAMID)( 4050 << 14)
#define MC_ENC_VSyncBitPlane                     (MCPARAMID)( 4051 << 14)
#define MC_ENC_FingerprintEnable                 (MCPARAMID)( 4052 << 14)
#define MC_ENC_Quality                           (MCPARAMID)( 4053 << 14)
#define MC_ENC_Quality2Q                         (MCPARAMID)( 4054 << 14)
#define MC_DirectShowSupport                     (MCPARAMID)( 4055 << 14)
#define MC_DirectShowSupport_TRUE                  1
#define MC_DirectShowSupport_FALSE                 2
#define MC__HSyncOffsetGate_S                    (MCPARAMID)( 4056 << 14)
#define MC_HSyncOffsetGate_S                     (MCPARAMID)( 4057 << 14)
#define MC__HSyncDly_S                           (MCPARAMID)( 4058 << 14)
#define MC_HSyncDly_S                            (MCPARAMID)( 4059 << 14)
#define MC__TransferredScaleX                    (MCPARAMID)( 4060 << 14)
#define MC_VideoLane                             (MCPARAMID)( 4061 << 14)
#define MC_ScaleX512                             (MCPARAMID)( 4062 << 14)
#define MC__TransferredScaleX512                 (MCPARAMID)( 4063 << 14)
#define MC_ScaleX1000                            (MCPARAMID)( 4064 << 14)
#define MC_ENC_Mpeg4RepeatSeqHead                (MCPARAMID)( 4065 << 14)
#define MC_ColorFormat_DX50                       78
#define MC_ColorFormat_MP4S                       79
#define MC_ScaleY256                             (MCPARAMID)( 4066 << 14)
#define MC_ScaleY1000                            (MCPARAMID)( 4067 << 14)
#define MC_ScaleY128                             (MCPARAMID)( 4068 << 14)
#define MC__TransferredImageSizeY                (MCPARAMID)( 4069 << 14)
#define MC__EndOfImageHeight                     (MCPARAMID)( 4070 << 14)
#define MC_FilterDly_ns                          (MCPARAMID)( 4071 << 14)
#define MC__VSyncSearchWindowLeft_TT             (MCPARAMID)( 4072 << 14)
#define MC__VSyncSearchWindowRight_TT            (MCPARAMID)( 4073 << 14)
#define MC__RoundHSyncDly_S                      (MCPARAMID)( 4074 << 14)
#define MC_BufferOffset                          (MCPARAMID)( 4075 << 14)
#define MC_OutputFormat_DX50                      13
#define MC_OutputFormat_MP4S                      14
#define MC_VideoBusIdx                           (MCPARAMID)( 4076 << 14)
#define MC_I2cBusIdx                             (MCPARAMID)( 4077 << 14)
#define MC_UnreleasedFeatureFiltering            (MCPARAMID)( 4078 << 14)
#define MC_UnreleasedFeatureFiltering_YES          1
#define MC_UnreleasedFeatureFiltering_NO           2
#define MC_TrigDelay_us_Filter                   (MCPARAMID)( 4079 << 14)
#define MC_Even                                  (MCPARAMID)( 4080 << 14)
#define MC_Even_UP                                 1
#define MC_Even_DOWN                               2
#define MC_Odd                                   (MCPARAMID)( 4081 << 14)
#define MC_Odd_UP                                  1
#define MC_Odd_DOWN                                2
#define MC_HReference_Filter                     (MCPARAMID)( 4082 << 14)
#define MC_VReference_Filter                     (MCPARAMID)( 4083 << 14)
#define MC_HdriveLine_Filter                     (MCPARAMID)( 4084 << 14)
#define MC_VdriveLine_Filter                     (MCPARAMID)( 4085 << 14)
#define MC_ResetLine_Filter                      (MCPARAMID)( 4086 << 14)
#define MC_AuxResetLine_Filter                   (MCPARAMID)( 4087 << 14)
#define MC_HsyncLine_Filter                      (MCPARAMID)( 4088 << 14)
#define MC_VsyncLine_Filter                      (MCPARAMID)( 4089 << 14)
#define MC_CsyncLine_Filter                      (MCPARAMID)( 4090 << 14)
#define MC_PinCC1_PinCC2_Style_DIFF                3
#define MC_PinCC3_PinCC4_Style_DIFF                3
#define MC_CameraControlSignalSet_CSYNC           11
#define MC_CameraControlSignalSet_HSYNC           12
#define MC_CameraControlSignalSet_CSYNC_VSYNC     13
#define MC_CameraControlSignalSet_HSYNC_VSYNC     14
#define MC_CameraControlSignalSet_HDRIVE          15
#define MC_CameraControlSignalSet_HDRIVE_VSYNC    16
#define MC_CameraControlSignalSet_RESET_HSYNC_VSYNC  17
#define MC_CameraControlSignalSet_VSYNC           18
#define MC_ENC_1001FrameRate_Fl                  (MCPARAMID)( 4091 << 14)
#define MC_ENC_OutputWidth                       (MCPARAMID)( 4092 << 14)
#define MC_ENC_OutputHeight                      (MCPARAMID)( 4093 << 14)
#define MC__SurfaceCount                         (MCPARAMID)( 4094 << 14)
#define MC_NoblackWindowHeight_Ln                (MCPARAMID)( 4095 << 14)
#define MC_NoblackWindowOffset_Ln                (MCPARAMID)( 4096 << 14)
#define MC_ENC_FrameDur_ms                       (MCPARAMID)( 4097 << 14)
#define MC_ENC_FrameDur_ms_Fl                    (MCPARAMID)( 4098 << 14)
#define MC_ENC_FrameDur_us                       (MCPARAMID)( 4099 << 14)
#define MC_ENC_FrameDur_us_Fl                    (MCPARAMID)( 4100 << 14)
#define MC_PixelClkLine_Filter                   (MCPARAMID)( 4101 << 14)
#define MC_ENC_HSubOffset                        (MCPARAMID)( 4102 << 14)
#define MC_ENC_HScaleFactor                      (MCPARAMID)( 4103 << 14)
#define MC_ENC_VScaleFactor                      (MCPARAMID)( 4104 << 14)
#define MC_ENC_VSubOffset                        (MCPARAMID)( 4105 << 14)
#define MC_BitrateControl                        (MCPARAMID)( 4106 << 14)
#define MC_BitrateControl_CBR                      1
#define MC_BitrateControl_VBR                      2
#define MC_BitrateControl_Filter                 (MCPARAMID)( 4107 << 14)
#define MC_AverageBitrate                        (MCPARAMID)( 4108 << 14)
#define MC_AverageBitrate_Filter                 (MCPARAMID)( 4109 << 14)
#define MC_VideoQuality                          (MCPARAMID)( 4110 << 14)
#define MC_VideoQuality_Filter                   (MCPARAMID)( 4111 << 14)
#define MC__Category_Compression                  45
#define MC__AverageBitrateFeedback               (MCPARAMID)( 4112 << 14)
#define MC_SequenceMode                          (MCPARAMID)( 4113 << 14)
#define MC_SequenceMode_IONLY                      1
#define MC_SequenceMode_IPONLY                     2
#define MC_SequenceMode_IPB                        3
#define MC_SequenceMode_Filter                   (MCPARAMID)( 4114 << 14)
#define MC_KeyFrameInterval                      (MCPARAMID)( 4115 << 14)
#define MC_KeyFrameInterval_Filter               (MCPARAMID)( 4116 << 14)
#define MC_CaptureRegionYSize_Ln                 (MCPARAMID)( 4117 << 14)
#define MC_GopSize                               (MCPARAMID)( 4118 << 14)
#define MC_GopSize_Filter                        (MCPARAMID)( 4119 << 14)
#define MC_CaptureRegionXSize_Px                 (MCPARAMID)( 4120 << 14)
#define MC_ContrastSliderSlope1                  (MCPARAMID)( 4121 << 14)
#define MC_ObjectName_Slope                      (MCPARAMID)( 4122 << 14)
#define MC_Contrast_Slope                        (MCPARAMID)( 4123 << 14)
#define MC_Contrast_Offset                       (MCPARAMID)( 4124 << 14)
#define MC_Saturation_Slope                      (MCPARAMID)( 4125 << 14)
#define MC_Saturation_Offset                     (MCPARAMID)( 4126 << 14)
#define MC_Brightness_Slope                      (MCPARAMID)( 4127 << 14)
#define MC_Brightness_Offset                     (MCPARAMID)( 4128 << 14)
#define MC_SubChIdx                              (MCPARAMID)( 4129 << 14)
#define MC_VHSync                                (MCPARAMID)( 4130 << 14)
#define MC_VHSync_NO                               1
#define MC_VHSync_YES                              2
#define MC_CXEND_Record                          (MCPARAMID)( 4131 << 14)
#define MC_FRONTEND_Record                       (MCPARAMID)( 4132 << 14)
#define MC_CXEND_Signature                       (MCPARAMID)( 4133 << 14)
#define MC_FRONTEND_Signature                    (MCPARAMID)( 4134 << 14)
#define MC__FRONTEND_Condition                   (MCPARAMID)( 4135 << 14)
#define MC__CXEND_Condition                      (MCPARAMID)( 4136 << 14)
#define MC_TargetFrameRate_Hz_Feedback           (MCPARAMID)( 4137 << 14)
#define MC_CameraControlSignalSet_RESET_HSYNC     19
#define MC_MaxAnalysisLead                       (MCPARAMID)( 4138 << 14)
#define MC__MaxAnalysisLead                      (MCPARAMID)( 4139 << 14)
#define MC__SamplingBufferSize_Ln                (MCPARAMID)( 4140 << 14)
#define MC__Category_Master_Sync_Control          46
#define MC_ConnectorCheckSet                     (MCPARAMID)( 4141 << 14)
#define MC_VideoBridgeCheckSet                   (MCPARAMID)( 4142 << 14)
#define MC_VrefAft_Ln                            (MCPARAMID)( 4143 << 14)
#define MC_Vsync2Vref_H                          (MCPARAMID)( 4144 << 14)
#define MC_Effective_TrigDelay_100ns             (MCPARAMID)( 4145 << 14)
#define MC__EXPOn2STROff_100ns                   (MCPARAMID)( 4146 << 14)
#define MC__STDUR_100ns                          (MCPARAMID)( 4147 << 14)
#define MC__STPOS_DSB_100ns                      (MCPARAMID)( 4148 << 14)
#define MC__STPOS_ASB_100ns                      (MCPARAMID)( 4149 << 14)
#define MC_VideoTerminator                       (MCPARAMID)( 4150 << 14)
#define MC_VideoTerminator_OFF                     1
#define MC_VideoTerminator_ON                      2
#define MC_VideoTerminator_JUMPER                  3
#define MC_GopStructure                          (MCPARAMID)( 4151 << 14)
#define MC_GopStructure_IONLY                      1
#define MC_GopStructure_IPONLY                     2
#define MC_GopStructure_IPB                        3
#define MC_GopStructure_Filter                   (MCPARAMID)( 4152 << 14)
#define MC_BCC_VideoOutputSelector               (MCPARAMID)( 4153 << 14)
#define MC_VideoOuputSelection                   (MCPARAMID)( 4154 << 14)
#define MC_VideoOuputSelection_VID1                1
#define MC_VideoOuputSelection_VID2                2
#define MC_VideoOuputSelection_VID3                3
#define MC_VideoOuputSelection_VID4                4
#define MC_VideoOuputSelection_CASCADE             5
#define MC_VideoOutputSelection                  (MCPARAMID)( 4155 << 14)
#define MC_VideoOutputSelection_VID1               1
#define MC_VideoOutputSelection_VID2               2
#define MC_VideoOutputSelection_VID3               3
#define MC_VideoOutputSelection_VID4               4
#define MC_VideoOutputSelection_CASCADE            5
#define MC_DetectedSignalStrength                (MCPARAMID)( 4156 << 14)
#define MC_DetectedSignalStrength_NORMAL           1
#define MC_DetectedSignalStrength_HIGH             2
#define MC_DetectedSignalStrength_LOW              3
#define MC_PinSMIO1_Source_STROBE_INV              5
#define MC_PinSMIO2_Source_STROBE_INV              5
#define MC_PinSTX_Source_ON                        5
#define MC_PinSTX_Source_OFF                       6
#define MC_PinSTY_Source_ON                        5
#define MC_PinSTY_Source_OFF                       6
#define MC_PinSMIO3_Source_STROBE_INV              5
#define MC_PinSMIO4_Source_STROBE_INV              5
#define MC_StrobeLevel_Filter                    (MCPARAMID)( 4157 << 14)
#define MC_Hactive_Nominal_Px                    (MCPARAMID)( 4158 << 14)
#define MC_DetectedSignalStrength_TOO_HIGH         4
#define MC_DetectedSignalStrength_TOO_LOW          5
#define MC_BEC_SrcCAPM_CUp                         3
#define MC_BEC_SrcCAPM_CDown                       4
#define MC_FEC_CAPM_CUp                            3
#define MC_FEC_CAPM_CDown                          4
#define MC__DelayedStandardFrameRate_Hz          (MCPARAMID)( 4159 << 14)
#define MC__Delayed_WindowY_Ln                   (MCPARAMID)( 4160 << 14)
#define MC_InputState_DISCONNECTED                 6
#define MC_FEC_SWITCH                            (MCPARAMID)( 4161 << 14)
#define MC_FEC_SWITCH_Forbidden                    1
#define MC_FEC_SWITCH_Allowed                      2
#define MC__ImageSizeX                           (MCPARAMID)( 4162 << 14)
#define MC__ImageSizeY                           (MCPARAMID)( 4163 << 14)
#define MC__RFields                              (MCPARAMID)( 4164 << 14)
#define MC__AverageBitratePoints                 (MCPARAMID)( 4165 << 14)
#define MC__DownScalingFactor                    (MCPARAMID)( 4166 << 14)
#define MC__AvgBitrateRedFactor                  (MCPARAMID)( 4167 << 14)
#define MC___AvgBitrateRedFactor                 (MCPARAMID)( 4168 << 14)
#define MC_HardwareTriggerNeeded                 (MCPARAMID)( 4169 << 14)
#define MC_HardwareTriggerNeeded_NO                1
#define MC_HardwareTriggerNeeded_YES               2
#define MC_CaptureStrategy                       (MCPARAMID)( 4170 << 14)
#define MC_CaptureStrategy_SPEED                   1
#define MC_CaptureStrategy_UNITY                   2
#define MC_ResolutionXMinRule                    (MCPARAMID)( 4171 << 14)
#define MC_ResolutionYMinRule                    (MCPARAMID)( 4172 << 14)
#define MC_ENC_HCropping                         (MCPARAMID)( 4173 << 14)
#define MC_ENC_HCropping_YES                       1
#define MC_ENC_HCropping_NO                        2
#define MC_ENC_VCropping                         (MCPARAMID)( 4174 << 14)
#define MC_ENC_VCropping_YES                       1
#define MC_ENC_VCropping_NO                        2
#define MC_ENC_LastLine                          (MCPARAMID)( 4175 << 14)
#define MC_CameraControlSignalSet_UNAVAILABLE     20
#define MC_CameraControlSignalSet_UNAVAILABLE_PxxRA_M  21
#define MC_CameraControlSignalSet_UNAVAILABLE_PxxRM_1  22
#define MC_CameraControlSignalSet_UNAVAILABLE_PxxRM_2  23
#define MC__RST_100ns                            (MCPARAMID)( 4176 << 14)
#define MC__RST_E                                (MCPARAMID)( 4177 << 14)
#define MC_HID                                   (MCPARAMID)( 4178 << 14)
#define MC_VID                                   (MCPARAMID)( 4179 << 14)
#define MC_HVID                                  (MCPARAMID)( 4180 << 14)
#define MC_VrefSearchWindowLeft_ms               (MCPARAMID)( 4181 << 14)
#define MC_VrefSearchWindowRight_ms              (MCPARAMID)( 4182 << 14)
#define MC_Vsync2Vref_ms                         (MCPARAMID)( 4183 << 14)
#define MC_VSyncSearchWindowLeft_ms              (MCPARAMID)( 4184 << 14)
#define MC_VSyncSearchWindowRight_ms             (MCPARAMID)( 4185 << 14)
#define MC_StandardFrameRate_mHz_Int             (MCPARAMID)( 4186 << 14)
#define MC_StandardFrameRate_Hz_Int              (MCPARAMID)( 4187 << 14)
#define MC__VideoDecoderType                     (MCPARAMID)( 4188 << 14)
#define MC__VideoDecoderType_D3                    1
#define MC__VideoDecoderType_CLASSIC               2
#define MC_CaptureRate_1                         (MCPARAMID)( 4189 << 14)
#define MC_CaptureRate_10                        (MCPARAMID)( 4190 << 14)
#define MC_CaptureRate_11                        (MCPARAMID)( 4191 << 14)
#define MC_CaptureRate_12                        (MCPARAMID)( 4192 << 14)
#define MC_CaptureRate_8                         (MCPARAMID)( 4193 << 14)
#define MC_CaptureRate_3                         (MCPARAMID)( 4194 << 14)
#define MC_CaptureRate_4                         (MCPARAMID)( 4195 << 14)
#define MC_CaptureRate_5                         (MCPARAMID)( 4196 << 14)
#define MC_CaptureRate_7                         (MCPARAMID)( 4197 << 14)
#define MC_CaptureRate_6                         (MCPARAMID)( 4198 << 14)
#define MC_CaptureRate_2                         (MCPARAMID)( 4199 << 14)
#define MC_CaptureRate_9                         (MCPARAMID)( 4200 << 14)
#define MC_HCsyncBfr_Px                          (MCPARAMID)( 4201 << 14)
#define MC_HCsyncAft_Px                          (MCPARAMID)( 4202 << 14)
#define MC_VideoSlewTime_ns                      (MCPARAMID)( 4203 << 14)
#define MC__LeftMargin_Max_1000                  (MCPARAMID)( 4204 << 14)
#define MC__TopMargin_Max_1000                   (MCPARAMID)( 4205 << 14)
#define MC__CaptureRateControl                   (MCPARAMID)( 4206 << 14)
#define MC_SignalStrength                        (MCPARAMID)( 4207 << 14)
#define MC_SignalStrength_NORMAL                   1
#define MC_SignalStrength_STRONG                   2
#define MC_SignalStrength_WEAK                     3
#define MC_SignalStrength_TOO_STRONG               4
#define MC_SignalStrength_TOO_WEAK                 5
#define MC__FPGA_Model_HARMONY_3_1                 4
#define MC_MicroBlazeIx                          (MCPARAMID)( 4208 << 14)
#define MC_InputFunction_FREE                     15
#define MC_InputFunction_RESERVED                 16
#define MC_InputState_OPEN                         7
#define MC_InputStyle_AUTO                         9
#define MC_InputStyle_RELAY                       10
#define MC_InputStyle_5V                          11
#define MC_InputStyle_12V                         12
#define MC_InputFilter_FILTER_10ms                 6
#define MC_InputFilter_FILTER_100ms                7
#define MC_OutputFunction_FREE                    15
#define MC_OutputStyle_SSRLY                      11
#define MC_ConnectorName_PROFESSIONAL_IO          27
#define MC_WatchdogResetsCount_OLD               (MCPARAMID)( 4209 << 14)
#define MC_StartupTimeout_128ms                  (MCPARAMID)( 4210 << 14)
#define MC_ApplicationTimeout_128ms              (MCPARAMID)( 4211 << 14)
#define MC_GainY_VB                              (MCPARAMID)( 4212 << 14)
#define MC_GainU_VB                              (MCPARAMID)( 4213 << 14)
#define MC_GainV_VB                              (MCPARAMID)( 4214 << 14)
#define MC_Offset_VB                             (MCPARAMID)( 4215 << 14)
#define MC_GainY_CX                              (MCPARAMID)( 4216 << 14)
#define MC_GainU_CX                              (MCPARAMID)( 4217 << 14)
#define MC_GainV_CX                              (MCPARAMID)( 4218 << 14)
#define MC_Offset_CX                             (MCPARAMID)( 4219 << 14)
#define MC__SIZY_PerField                        (MCPARAMID)( 4220 << 14)
#define MC__Tk_X_Px                              (MCPARAMID)( 4221 << 14)
#define MC__Category__ADR_Process                 47
#define MC__ADR_GrabSizeX_Component              (MCPARAMID)( 4222 << 14)
#define MC_OffsetY_VB                            (MCPARAMID)( 4223 << 14)
#define MC_OffsetY_CX                            (MCPARAMID)( 4224 << 14)
#define MC_GainY_AfterCX                         (MCPARAMID)( 4225 << 14)
#define MC_GainY_AfterVB                         (MCPARAMID)( 4226 << 14)
#define MC_GainU_AfterCX                         (MCPARAMID)( 4227 << 14)
#define MC_GainU_AfterVB                         (MCPARAMID)( 4228 << 14)
#define MC_GainV_AfterCX                         (MCPARAMID)( 4229 << 14)
#define MC_GainV_AfterVB                         (MCPARAMID)( 4230 << 14)
#define MC_OffsetY_AfterCX                       (MCPARAMID)( 4231 << 14)
#define MC_OffsetY_AfterVB                       (MCPARAMID)( 4232 << 14)
#define MC__GainY_AfterCX                        (MCPARAMID)( 4233 << 14)
#define MC__GainY_AfterVB                        (MCPARAMID)( 4234 << 14)
#define MC__GainU_AfterCX                        (MCPARAMID)( 4235 << 14)
#define MC__GainU_AfterVB                        (MCPARAMID)( 4236 << 14)
#define MC__GainV_AfterCX                        (MCPARAMID)( 4237 << 14)
#define MC__GainV_AfterVB                        (MCPARAMID)( 4238 << 14)
#define MC__OffsetY_AfterCX                      (MCPARAMID)( 4239 << 14)
#define MC__OffsetY_AfterVB                      (MCPARAMID)( 4240 << 14)
#define MC__CSIO_CSIO1Out_LOW                      8
#define MC__CSIO_CSIO2Out_LOW                      8
#define MC__CSIO_CSIO3Out_LOW                      8
#define MC__CSIO_CSIO4Out_LOW                      8
#define MC__STR_SREF                             (MCPARAMID)( 4241 << 14)
#define MC__STR_SREF_TSB                           1
#define MC__STR_SREF_CSB                           2
#define MC_TrigEdge_Filter                       (MCPARAMID)( 4242 << 14)
#define MC_EndTrigEdge_Filter                    (MCPARAMID)( 4243 << 14)
#define MC_Camera_CAMERA_sPAL                    214
#define MC_Camera_CAMERA_sNTSC                   215
#define MC_Camera_CAMERA_sCCIR                   216
#define MC_Camera_CAMERA_sEIA                    217
#define MC_Standard_sPAL                           7
#define MC_Standard_sNTSC                          8
#define MC_FEC_VSTD_sPAL_SQ                        9
#define MC_FEC_VSTD_sNTSC_SQ                      10
#define MC_FEC_VSTD_sPAL_BROAD                    11
#define MC_FEC_VSTD_sNTSC_BROAD                   12
#define MC_Board_Name                            (MCPARAMID)( 4244 << 14)
#define MC_Board_Name_Unknown                      1
#define MC_Board_Name_Alert                        2
#define MC_Board_Name_Diligent                     3
#define MC_Board_Family                          (MCPARAMID)( 4245 << 14)
#define MC_Board_Family_Unknown                    1
#define MC_CaptureStrategy_Filter                (MCPARAMID)( 4246 << 14)
#define MC__VBC_LBFR_GEOM                        (MCPARAMID)( 4247 << 14)
#define MC_LUT_Filter                            (MCPARAMID)( 4248 << 14)
#define MC_LUT_nbr                               (MCPARAMID)( 4249 << 14)
#define MC__ImageSizeX_Interface                 (MCPARAMID)( 4250 << 14)
#define MC__ImageSizeY_Interface                 (MCPARAMID)( 4251 << 14)
#define MC_WhiteCrush                            (MCPARAMID)( 4252 << 14)
#define MC_WhiteCrush_ON                           1
#define MC_WhiteCrush_OFF                          2
#define MC__BoardType__PICOLO_TYMO                29
#define MC_Connector_YC1                         124
#define MC_Connector_YC2                         125
#define MC_Connector_YC3                         126
#define MC_Connector_YC4                         127
#define MC_VideoOutputSelection_VID5               6
#define MC_VideoOutputSelection_VID6               7
#define MC_VideoOutputSelection_VID7               8
#define MC_VideoOutputSelection_VID8               9
#define MC_VideoOutputSelection_VID9              10
#define MC_VideoOutputSelection_VID10             11
#define MC_VideoOutputSelection_VID11             12
#define MC_VideoOutputSelection_VID12             13
#define MC_VideoOutputSelection_VID13             14
#define MC_VideoOutputSelection_VID14             15
#define MC_VideoOutputSelection_VID15             16
#define MC_VideoOutputSelection_VID16             17
#define MC__Range                                (MCPARAMID)( 4253 << 14)
#define MC__NormalContrast                       (MCPARAMID)( 4254 << 14)
#define MC_AutoAgc                               (MCPARAMID)( 4255 << 14)
#define MC_AutoAgc_ENABLED                         1
#define MC_AutoAgc_DISABLED                        2
#define MC_AutoVga                               (MCPARAMID)( 4256 << 14)
#define MC_AutoVga_ENABLED                         1
#define MC_AutoVga_DISABLED                        2
#define MC__CDC_MTAP_OneTimeSlot                   3
#define MC__CDC_MTAP_TwoTimeSlots_MultiplexedBits   4
#define MC__CDC_MTAP_TwoTimeSlots_MultiplexedTaps   5
#define MC__CDC_MTAP_ThreeTimeSlots_MultiplexedTaps   6
#define MC__CDC_ALIGN_Bit8                         4
#define MC__CDC_ALIGN_Bit10                        5
#define MC__CDC_ALIGN_Bit12                        6
#define MC__CDC_ALIGN_Bit14                        7
#define MC__CDC_ALIGN_Bit16                        8
#define MC__CDA_TRAIL_LD                         (MCPARAMID)( 4257 << 14)
#define MC__CDA_LEAD1                            (MCPARAMID)( 4258 << 14)
#define MC__CDA_TRAIL_INI1                       (MCPARAMID)( 4259 << 14)
#define MC_TRAIL_MODULO                          (MCPARAMID)( 4260 << 14)
#define MC__CDA_LEAD2                            (MCPARAMID)( 4261 << 14)
#define MC__CDA_TRAIL_INI2                       (MCPARAMID)( 4262 << 14)
#define MC__CDA_LEAD3                            (MCPARAMID)( 4263 << 14)
#define MC__CDA_TRAIL_INI3                       (MCPARAMID)( 4264 << 14)
#define MC__CDA_LEAD4                            (MCPARAMID)( 4265 << 14)
#define MC__CDA_TRAIL_INI4                       (MCPARAMID)( 4266 << 14)
#define MC__CDA_TRAIL_PADDING                    (MCPARAMID)( 4267 << 14)
#define MC__CDA_TRAIL_PADDING_OneAssemblyCycle     1
#define MC__CDA_TRAIL_PADDING_TwoAssemblyCycle     2
#define MC_TapConfiguration                      (MCPARAMID)( 4268 << 14)
#define MC_TapConfiguration_BASE_1T8               1
#define MC_TapConfiguration_BASE_1T10              2
#define MC_TapConfiguration_BASE_1T12              3
#define MC_TapConfiguration_BASE_1T14              4
#define MC_TapConfiguration_BASE_1T16              5
#define MC_TapConfiguration_BASE_1T24              6
#define MC_TapConfiguration_BASE_2T8               7
#define MC_TapConfiguration_BASE_2T10              8
#define MC_TapConfiguration_BASE_2T12              9
#define MC_TapConfiguration_BASE_3T8              10
#define MC_TapConfiguration_BASE_1T30B2           11
#define MC_TapConfiguration_BASE_1T36B2           12
#define MC_TapConfiguration_BASE_1T42B2           13
#define MC_TapConfiguration_BASE_1T48B2           14
#define MC_TapConfiguration_BASE_2T14B2           15
#define MC_TapConfiguration_BASE_2T16B2           16
#define MC_TapConfiguration_BASE_2T24B2           17
#define MC_TapConfiguration_BASE_3T10B2           18
#define MC_TapConfiguration_BASE_3T12B2           19
#define MC_TapConfiguration_BASE_3T14B2           20
#define MC_TapConfiguration_BASE_3T16B2           21
#define MC_TapConfiguration_BASE_4T8B2            22
#define MC_TapConfiguration_BASE_4T10B2           23
#define MC_TapConfiguration_BASE_4T12B2           24
#define MC_TapConfiguration_BASE_1T24B3           25
#define MC_TapConfiguration_BASE_1T30B3           26
#define MC_TapConfiguration_BASE_1T36B3           27
#define MC_TapConfiguration_BASE_1T42B3           28
#define MC_TapConfiguration_BASE_1T48B3           29
#define MC_TapConfiguration_MEDIUM_1T30           30
#define MC_TapConfiguration_MEDIUM_1T36           31
#define MC_TapConfiguration_MEDIUM_1T42           32
#define MC_TapConfiguration_MEDIUM_1T48           33
#define MC_TapConfiguration_MEDIUM_2T14           34
#define MC_TapConfiguration_MEDIUM_2T16           35
#define MC_TapConfiguration_MEDIUM_2T24           36
#define MC_TapConfiguration_MEDIUM_3T10           37
#define MC_TapConfiguration_MEDIUM_3T12           38
#define MC_TapConfiguration_MEDIUM_3T14           39
#define MC_TapConfiguration_MEDIUM_3T16           40
#define MC_TapConfiguration_MEDIUM_4T8            41
#define MC_TapConfiguration_MEDIUM_4T10           42
#define MC_TapConfiguration_MEDIUM_4T12           43
#define MC_TapConfiguration_MEDIUM_8T8B2          44
#define MC_TapConfiguration_FULL_8T8              45
#define MC_TapConfiguration_Filter               (MCPARAMID)( 4269 << 14)
#define MC__GCL_CLCFG_FULL                         3
#define MC_WIS_DeinterlaceMode                   (MCPARAMID)( 4270 << 14)
#define MC_WIS_DeinterlaceMode_INTERPOLATION       1
#define MC_WIS_DeinterlaceMode_WEAVING             2
#define MC_WIS_DeinterlaceMode_BLENDING            3
#define MC_CL_ConfigurationClass                 (MCPARAMID)( 4271 << 14)
#define MC_CL_ConfigurationClass_BASE              1
#define MC_CL_ConfigurationClass_MEDIUM            2
#define MC_CL_ConfigurationClass_FULL              3
#define MC_CL_BitDepth                           (MCPARAMID)( 4272 << 14)
#define MC_TapGeometry                           (MCPARAMID)( 4273 << 14)
#define MC_TapGeometry_1X                          1
#define MC_TapGeometry_1X2                         2
#define MC_TapGeometry_2X                          3
#define MC_TapGeometry_2XE                         4
#define MC_TapGeometry_2XM                         5
#define MC_TapGeometry_1X3                         6
#define MC_TapGeometry_3X                          7
#define MC_TapGeometry_1X4                         8
#define MC_TapGeometry_4X                          9
#define MC_TapGeometry_2X2                        10
#define MC_TapGeometry_2X2E                       11
#define MC_TapGeometry_2X2M                       12
#define MC_TapGeometry_1X8                        13
#define MC_TapGeometry_8X                         14
#define MC_TapGeometry_4X2                        15
#define MC_TapGeometry_1X_1Y                      16
#define MC_TapGeometry_1X2_1Y                     17
#define MC_TapGeometry_2X_1Y                      18
#define MC_TapGeometry_2XE_1Y                     19
#define MC_TapGeometry_2XM_1Y                     20
#define MC_TapGeometry_1X_1Y2                     21
#define MC_TapGeometry_1X_2YE                     22
#define MC_TapGeometry_1X3_1Y                     23
#define MC_TapGeometry_3X_1Y                      24
#define MC_TapGeometry_1X4_1Y                     25
#define MC_TapGeometry_4X_1Y                      26
#define MC_TapGeometry_2X2_1Y                     27
#define MC_TapGeometry_2X2E_1Y                    28
#define MC_TapGeometry_2X2M_1Y                    29
#define MC_TapGeometry_1X2_2YE                    30
#define MC_TapGeometry_2X_2YE                     31
#define MC_TapGeometry_2XE_2YE                    32
#define MC_TapGeometry_2XM_2YE                    33
#define MC_TapGeometry_1X8_1Y                     34
#define MC_TapGeometry_8X_1Y                      35
#define MC_TapGeometry_4X2_1Y                     36
#define MC_TapGeometry_2X2E_2YE                   37
#define MC_CompressionType                       (MCPARAMID)( 4274 << 14)
#define MC_CompressionType_NONE                    1
#define MC_CompressionType_DX50                    2
#define MC_CompressionType_MP4S                    3
#define MC_TapGeometry_Filter                    (MCPARAMID)( 4275 << 14)
#define MC_CL_Tapcount                           (MCPARAMID)( 4276 << 14)
#define MC_AssyConfig                            (MCPARAMID)( 4277 << 14)
#define MC_AssyConfig_SINGLE                       1
#define MC_AssyConfig_DUALXPAIR                    2
#define MC_AssyConfig_DUALXTAP                     3
#define MC_AssyConfig_DUALXEND                     4
#define MC_AssyConfig_DUALXMID                     5
#define MC_AssyConfig_DUALYPAIR                    6
#define MC_AssyConfig_DUALYEND                     7
#define MC_AssyConfig_TRIPLE                       8
#define MC_AssyConfig_QUADXTAP                     9
#define MC_AssyConfig_QUADXPAIRTAP                10
#define MC_AssyConfig_QUADXPAIREND                11
#define MC_AssyConfig_QUADXPAIRMID                12
#define MC_AssyConfig_OCTALXTAP                   13
#define MC_AssyConfig_QUADXQUAD                   14
#define MC_AssyConfig_MEDIUM_2T24_1X2_1Y          15
#define MC_CL_PixelComponentBitDepth             (MCPARAMID)( 4278 << 14)
#define MC__CDC_ISIZE_BIT8                        14
#define MC__CDC_ISIZE_BIT10                       15
#define MC__CDC_ISIZE_BIT12                       16
#define MC__CDC_ISIZE_BIT14                       17
#define MC__CDC_ISIZE_BIT16                       18
#define MC__CDC_ISIZE_BIT10T2                     19
#define MC__CDC_ISIZE_BIT12T2                     20
#define MC__CDC_ISIZE_BIT14T2                     21
#define MC__CDC_ISIZE_BIT16T2                     22
#define MC_AssyPixelComponentSize                (MCPARAMID)( 4279 << 14)
#define MC_AssyComponentCount                    (MCPARAMID)( 4280 << 14)
#define MC_AssyConfig_INVALID                     16
#define MC__Category_InputDataProcessing          48
#define MC_FifoPitchOffset                       (MCPARAMID)( 4281 << 14)
#define MC_FifoSizeOffset                        (MCPARAMID)( 4282 << 14)
#define MC_FifoPitch                             (MCPARAMID)( 4283 << 14)
#define MC_FifoSize                              (MCPARAMID)( 4284 << 14)
#define MC__Category_WindowControllers            49
#define MC__SFA01                                (MCPARAMID)( 4285 << 14)
#define MC__SFA02                                (MCPARAMID)( 4286 << 14)
#define MC__SFA03                                (MCPARAMID)( 4287 << 14)
#define MC__SFA04                                (MCPARAMID)( 4288 << 14)
#define MC__SFA05                                (MCPARAMID)( 4289 << 14)
#define MC__SFA06                                (MCPARAMID)( 4290 << 14)
#define MC__SFA07                                (MCPARAMID)( 4291 << 14)
#define MC__SFA08                                (MCPARAMID)( 4292 << 14)
#define MC_TapConfiguration_INVALID               46
#define MC__CDA_INDEX_MAP                        (MCPARAMID)( 4293 << 14)
#define MC__CWR_INDEX_MAP                        (MCPARAMID)( 4294 << 14)
#define MC__Lead_W1                              (MCPARAMID)( 4295 << 14)
#define MC__Lead_W2                              (MCPARAMID)( 4296 << 14)
#define MC__Lead_W3                              (MCPARAMID)( 4297 << 14)
#define MC__Lead_W4                              (MCPARAMID)( 4298 << 14)
#define MC__Lead_D1                              (MCPARAMID)( 4299 << 14)
#define MC__Lead_D2                              (MCPARAMID)( 4300 << 14)
#define MC__Lead_D3                              (MCPARAMID)( 4301 << 14)
#define MC__Lead_D4                              (MCPARAMID)( 4302 << 14)
#define MC__CDA_P1INDEX                          (MCPARAMID)( 4303 << 14)
#define MC__CDA_P2INDEX                          (MCPARAMID)( 4304 << 14)
#define MC__CDA_P3INDEX                          (MCPARAMID)( 4305 << 14)
#define MC__CDA_P4INDEX                          (MCPARAMID)( 4306 << 14)
#define MC__AssyPerWindow                        (MCPARAMID)( 4307 << 14)
#define MC_CL_TimeSlots                          (MCPARAMID)( 4308 << 14)
#define MC_ASW_1                                 (MCPARAMID)( 4309 << 14)
#define MC__ASW_1                                (MCPARAMID)( 4310 << 14)
#define MC__ASW_2                                (MCPARAMID)( 4311 << 14)
#define MC__ASW_3                                (MCPARAMID)( 4312 << 14)
#define MC__ASW_4                                (MCPARAMID)( 4313 << 14)
#define MC__RightMargin_Px                       (MCPARAMID)( 4314 << 14)
#define MC_FifoWindowOffsetX_Px                  (MCPARAMID)( 4315 << 14)
#define MC_FifoWindowOffsetY_Ln                  (MCPARAMID)( 4316 << 14)
#define MC_OffsetX_Px_MinBound                   (MCPARAMID)( 4317 << 14)
#define MC_OffsetX_Px_MaxBound                   (MCPARAMID)( 4318 << 14)
#define MC_OffsetY_Ln_MinBound                   (MCPARAMID)( 4319 << 14)
#define MC_OffsetY_Ln_MaxBound                   (MCPARAMID)( 4320 << 14)
#define MC_ImageLeadPadding                      (MCPARAMID)( 4321 << 14)
#define MC_ImageTrailPadding                     (MCPARAMID)( 4322 << 14)
#define MC_XferSizeX                             (MCPARAMID)( 4323 << 14)
#define MC_BufferOffsetX                         (MCPARAMID)( 4324 << 14)
#define MC_XferSizeY                             (MCPARAMID)( 4325 << 14)
#define MC_BufferOffsetY                         (MCPARAMID)( 4326 << 14)
#define MC_FifoOffsetX_Unaligned                 (MCPARAMID)( 4327 << 14)
#define MC_FifoBufferSkew                        (MCPARAMID)( 4328 << 14)
#define MC_FifoBufferHomeAddress                 (MCPARAMID)( 4329 << 14)
#define MC_TrigEdge_GOOPEN                         5
#define MC_TrigEdge_OPEN                           6
#define MC_EndTrigEdge_GOOPEN                      5
#define MC_EndTrigEdge_OPEN                        6
#define MC__PllMax                               (MCPARAMID)( 4330 << 14)
#define MC__PllMaxOffset                         (MCPARAMID)( 4331 << 14)
#define MC_MltpLineAnlShift                      (MCPARAMID)( 4332 << 14)
#define MC_WoiOrgX                               (MCPARAMID)( 4333 << 14)
#define MC_WOI_GrabWindow_Filter                 (MCPARAMID)( 4334 << 14)
#define MC_WoiOrgY                               (MCPARAMID)( 4335 << 14)
#define MC_WoiWidth                              (MCPARAMID)( 4336 << 14)
#define MC_WoiHeight                             (MCPARAMID)( 4337 << 14)
#define MC_CameraWoiBankSetup                    (MCPARAMID)( 4338 << 14)
#define MC_CameraWoiBankSelect                   (MCPARAMID)( 4339 << 14)
#define MC_GrabWindow_WOI                          6
#define MC_GrabWindow_Filter                     (MCPARAMID)( 4340 << 14)
#define MC__Category_CLCAM_Interface              50
#define MC_CLCAM_Topology                        (MCPARAMID)( 4341 << 14)
#define MC_CLCAM_Topology_SINGLE                   1
#define MC_CLCAM_Topology_DUALXPAIR                2
#define MC_CLCAM_Topology_DUALXTAP                 3
#define MC_CLCAM_Topology_DUALXEND                 4
#define MC_CLCAM_Topology_DUALXMID                 5
#define MC_CLCAM_Topology_DUALYPAIR                6
#define MC_CLCAM_Topology_DUALYEND                 7
#define MC_CLCAM_Topology_TRIPLE                   8
#define MC_CLCAM_Topology_QUADXTAP                 9
#define MC_CLCAM_Topology_QUADXPAIRTAP            10
#define MC_CLCAM_Topology_QUADXPAIREND            11
#define MC_CLCAM_Topology_QUADXPAIRMID            12
#define MC_CLCAM_Topology_TRIPLEXPAIR             13
#define MC_CLCAM_DataWidth                       (MCPARAMID)( 4342 << 14)
#define MC_CLCAM_ClockFreq_KHz                   (MCPARAMID)( 4343 << 14)
#define MC_CLCAM_FramePeriod                     (MCPARAMID)( 4344 << 14)
#define MC_CLCAM_FrameBlanking                   (MCPARAMID)( 4345 << 14)
#define MC_CLCAM_LinePeriod                      (MCPARAMID)( 4346 << 14)
#define MC_CLCAM_LineBlanking                    (MCPARAMID)( 4347 << 14)
#define MC_CLCAM_LineInitialdelay                (MCPARAMID)( 4348 << 14)
#define MC_CLCAM_LineCount                       (MCPARAMID)( 4349 << 14)
#define MC_CLCAM_DataInitialDelay                (MCPARAMID)( 4350 << 14)
#define MC_CLCAM_Databurst                       (MCPARAMID)( 4351 << 14)
#define MC_CLCAM_DataBurstGap                    (MCPARAMID)( 4352 << 14)
#define MC_CLCAM_DataBurstCount                  (MCPARAMID)( 4353 << 14)
#define MC_CLCAM_DataGating                      (MCPARAMID)( 4354 << 14)
#define MC_CLCAM_LVALNone                        (MCPARAMID)( 4355 << 14)
#define MC_CLCAM_FVALNone                        (MCPARAMID)( 4356 << 14)
#define MC_CLCAM_DataIncrement                   (MCPARAMID)( 4357 << 14)
#define MC_CLCAM_DataArrangement                 (MCPARAMID)( 4358 << 14)
#define MC_CLCAM_OPModeFreeRun                   (MCPARAMID)( 4359 << 14)
#define MC_CLCAM_OPModeExpWidth                  (MCPARAMID)( 4360 << 14)
#define MC_CLCAM_AsyncResetPin                   (MCPARAMID)( 4361 << 14)
#define MC_CLCAM_Power                           (MCPARAMID)( 4362 << 14)
#define MC_MaxWoiBanks                           (MCPARAMID)( 4363 << 14)
#define MC_MaxWoiPerBank                         (MCPARAMID)( 4364 << 14)
#define MC_WoiGranularity                        (MCPARAMID)( 4365 << 14)
#define MC_ComponentStorageOrder                 (MCPARAMID)( 4366 << 14)
#define MC_ComponentStorageOrder_DIRECT            1
#define MC_ComponentStorageOrder_REVERSE           2
#define MC_InputFilter_OFF                         8
#define MC_WoiMinWidth                           (MCPARAMID)( 4367 << 14)
#define MC_WoiMaxWidth                           (MCPARAMID)( 4368 << 14)
#define MC_WoiMinHeight                          (MCPARAMID)( 4369 << 14)
#define MC_WoiMaxHeight                          (MCPARAMID)( 4370 << 14)
#define MC_TrigCtl_AUTO                            9
#define MC_TrigCtl_RELAY                          10
#define MC_TrigCtl_5V                             11
#define MC_TrigCtl_12V                            12
#define MC_TrigFilter_FILTER_10ms                  5
#define MC_TrigFilter_FILTER_100ms                 6
#define MC_EndTrigCtl_AUTO                         5
#define MC_EndTrigCtl_RELAY                        6
#define MC_EndTrigCtl_5V                           7
#define MC_EndTrigCtl_12V                          8
#define MC_EndTrigFilter_FILTER_10ms               5
#define MC_EndTrigFilter_FILTER_100ms              6
#define MC_WoiSaveMemoryBank                     (MCPARAMID)( 4371 << 14)
#define MC_WoiSaveMemoryBank_YES                   1
#define MC_WoiSaveMemoryBank_NO                    2
#define MC_WoiSaveMemoryBankAfterWoiBankSetup    (MCPARAMID)( 4372 << 14)
#define MC_WoiSaveMemoryBankAfterWoiBankSetup_YES   1
#define MC_WoiSaveMemoryBankAfterWoiBankSetup_NO   2
#define MC_SaveMemoryBank                        (MCPARAMID)( 4373 << 14)
#define MC_SaveMemoryBank_YES                      1
#define MC_SaveMemoryBank_NO                       2
#define MC__CDA_LEADASSYNR1                      (MCPARAMID)( 4374 << 14)
#define MC__CDA_LEADASSYNR2                      (MCPARAMID)( 4375 << 14)
#define MC__CDA_LEADASSYNR3                      (MCPARAMID)( 4376 << 14)
#define MC__CDA_LEADASSYNR4                      (MCPARAMID)( 4377 << 14)
#define MC__CDA_REFASSYNR1                       (MCPARAMID)( 4378 << 14)
#define MC__CDA_REFASSYNR2                       (MCPARAMID)( 4379 << 14)
#define MC__CDA_REFASSYNR3                       (MCPARAMID)( 4380 << 14)
#define MC__CDA_REFASSYNR4                       (MCPARAMID)( 4381 << 14)
#define MC_CheckRamp_DataIncrement               (MCPARAMID)( 4382 << 14)
#define MC_DefaultConnector                      (MCPARAMID)( 4383 << 14)
#define MC_DefaultConnector_M                      1
#define MC_DefaultConnector_A                      2
#define MC_DefaultConnector_B                      3
#define MC___MSFError_Check_Filter               (MCPARAMID)( 4384 << 14)
#define MC_CLCAM_TapMultiplexingMode             (MCPARAMID)( 4385 << 14)
#define MC_CLCAM_TapMultiplexingMode_OneTimeSlot   1
#define MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_MultiplexedBits   2
#define MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_MultiplexedTaps   3
#define MC_CLCAM_TapMultiplexingMode_ThreeTimeSlots_MultiplexedTaps   4
#define MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_TwoMultiplexedTaps   5
#define MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_FourMultiplexedTaps   6
#define MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_SixMultiplexedTaps   7
#define MC_CLCAM_TapMultiplexingMode_TwoTimeSlots_EightMultiplexedTaps   8
#define MC__CDC_MTAP_TwoTimeSlots_TwoMultiplexedTaps   7
#define MC__CDC_MTAP_TwoTimeSlots_FourMultiplexedTaps   8
#define MC__CDC_MTAP_TwoTimeSlots_SixMultiplexedTaps   9
#define MC__CDC_MTAP_TwoTimeSlots_EightMultiplexedTaps  10
#define MC_CLCAM_Geometry                        (MCPARAMID)( 4386 << 14)
#define MC_CLCAM_Geometry_TG_1X                    1
#define MC_CLCAM_Geometry_TG_1X2                   2
#define MC_CLCAM_Geometry_TG_2X                    3
#define MC_CLCAM_Geometry_TG_2XE                   4
#define MC_CLCAM_Geometry_TG_2XM                   5
#define MC_CLCAM_Geometry_TG_1X_1Y2                6
#define MC_CLCAM_Geometry_TG_1X_2YE                7
#define MC_CLCAM_Geometry_TG_1X3                   8
#define MC_CLCAM_Geometry_TG_3X                    9
#define MC_CLCAM_Geometry_TG_1X4                  10
#define MC_CLCAM_Geometry_TG_4X                   11
#define MC_CLCAM_Geometry_TG_2X2                  12
#define MC_CLCAM_Geometry_TG_2X2E                 13
#define MC_CLCAM_Geometry_TG_2X2M                 14
#define MC_CLCAM_Geometry_TG_1X2_2YE              15
#define MC_CLCAM_Geometry_TG_2X_2YE               16
#define MC_CLCAM_Geometry_TG_2XE_2YE              17
#define MC_CLCAM_Geometry_TG_2XM_2YE              18
#define MC_CLCAM_Geometry_TG_1X8                  19
#define MC_CLCAM_Geometry_TG_8X                   20
#define MC_CLCAM_Geometry_TG_4X2                  21
#define MC_CLCAM_Geometry_TG_2X2E_2YE             22
#define MC_ActiveDroopCompensation               (MCPARAMID)( 4387 << 14)
#define MC_ActiveDroopCompensation_ENABLED         1
#define MC_ActiveDroopCompensation_DISABLED        2
#define MC_AnalogClamping                        (MCPARAMID)( 4388 << 14)
#define MC_AnalogClamping_ENABLED                  1
#define MC_AnalogClamping_DISABLED                 2
#define MC_PhaseRate_AbsoluteUpperLimit_mHz      (MCPARAMID)( 4389 << 14)
#define MC_PhaseRate_Optimal_mHz                 (MCPARAMID)( 4390 << 14)
#define MC__VgaGain                              (MCPARAMID)( 4391 << 14)
#define MC_CLCAM_MinLineRate_Hz                  (MCPARAMID)( 4392 << 14)
#define MC_CLCAM_MinFrameRate_mHz                (MCPARAMID)( 4393 << 14)
#define MC_SrcSizeY                              (MCPARAMID)( 4394 << 14)
#define MC__Requested_GainY                      (MCPARAMID)( 4395 << 14)
#define MC__Requested_GainU                      (MCPARAMID)( 4396 << 14)
#define MC__Requested_GainV                      (MCPARAMID)( 4397 << 14)
#define MC__Requested_OffsetY                    (MCPARAMID)( 4398 << 14)
#define MC__TwinGrabberIndex                     (MCPARAMID)( 4399 << 14)
#define MC__Twin_GainY                           (MCPARAMID)( 4400 << 14)
#define MC__Twin_GainU                           (MCPARAMID)( 4401 << 14)
#define MC__Twin_GainV                           (MCPARAMID)( 4402 << 14)
#define MC__Twin_OffsetY                         (MCPARAMID)( 4403 << 14)
#define MC__Luma_xmin                            (MCPARAMID)( 4404 << 14)
#define MC__Luma_xmax                            (MCPARAMID)( 4405 << 14)
#define MC_WindowXY_Filter                       (MCPARAMID)( 4406 << 14)
#define MC__Twin_GainY_VB                        (MCPARAMID)( 4407 << 14)
#define MC__Twin_GainU_VB                        (MCPARAMID)( 4408 << 14)
#define MC__Twin_GainV_VB                        (MCPARAMID)( 4409 << 14)
#define MC__Twin_OffsetY_VB                      (MCPARAMID)( 4410 << 14)
#define MC_BEC_TwinOffset_Y                      (MCPARAMID)( 4411 << 14)
#define MC_BEC_TwinGain_Y                        (MCPARAMID)( 4412 << 14)
#define MC_BEC_Twin_Gain_Cr_1                    (MCPARAMID)( 4413 << 14)
#define MC_BEC_Twin_Gain_Cr_2                    (MCPARAMID)( 4414 << 14)
#define MC_BEC_Twin_Gain_Cb_1                    (MCPARAMID)( 4415 << 14)
#define MC_BEC_Twin_Gain_Cb_2                    (MCPARAMID)( 4416 << 14)
#define MC_CameraConfigMessageBuilder            (MCPARAMID)( 4417 << 14)
#define MC_CameraConfigMessageBuilder_NONE         1
#define MC_CameraConfigMessageBuilder_CSB4000CL    2
#define MC__Twin_CSC_GainY                       (MCPARAMID)( 4418 << 14)
#define MC__Twin_CSC_GainCrR                     (MCPARAMID)( 4419 << 14)
#define MC__Twin_CSC_GainCrG                     (MCPARAMID)( 4420 << 14)
#define MC__Twin_CSC_GainCbB                     (MCPARAMID)( 4421 << 14)
#define MC__Twin_CSC_GainCbG                     (MCPARAMID)( 4422 << 14)
#define MC__CTD_TDCLK_HRWP                         5
#define MC__TRG_EFTFLT                           (MCPARAMID)( 4423 << 14)
#define MC__TRG_EFTFLT_100ns                       1
#define MC__TRG_EFTFLT_500ns                       2
#define MC__TRG_EFTFLT_2500ns                      3
#define MC__CTD_TDCLK_REFTIC                       6
#define MC__RawGrabSizeY_Ln                      (MCPARAMID)( 4424 << 14)
#define MC__IsExpert2                            (MCPARAMID)( 4425 << 14)
#define MC__IsExpert2_YES                          1
#define MC__IsExpert2_NO                           2
#define MC__CameraWindowingAvailable             (MCPARAMID)( 4426 << 14)
#define MC__CameraWindowingAvailable_YES           1
#define MC__CameraWindowingAvailable_NO            2
#define MC__RawGrabSizeX_Log2                    (MCPARAMID)( 4427 << 14)
#define MC_CL_TapCount_Y                         (MCPARAMID)( 4428 << 14)
#define MC_CL_TapCount_X                         (MCPARAMID)( 4429 << 14)
#define MC_CamConfig_IxxSA_D                     279
#define MC_CamConfig_IxxSD                       280
#define MC_CamConfig_PxxSA_D                     281
#define MC__LQS_COUNT3                           (MCPARAMID)( 4430 << 14)
#define MC__TRG_TM                               (MCPARAMID)( 4431 << 14)
#define MC__TRG_TM_IMM                             1
#define MC__TRG_TM_HRD                             2
#define MC__TRG_TM_SFT                             3
#define MC__TRG_TM_CMB                             4
#define MC__TRG_NTM                              (MCPARAMID)( 4432 << 14)
#define MC__TRG_NTM_RPT                            1
#define MC__TRG_NTM_HRD                            2
#define MC__TRG_NTM_SFT                            3
#define MC__TRG_NTM_CMB                            4
#define MC__TRG_NTM_PER                            5
#define MC_CameraWoiBankSetupCmd                 (MCPARAMID)( 4433 << 14)
#define MC_CameraWoiBankSelectCmd                (MCPARAMID)( 4434 << 14)
#define MC_BruSelonDC                            (MCPARAMID)( 4435 << 14)
#define MC_BruSelonDC_Forbidden                    1
#define MC_BruSelonDC_Allowed                      2
#define MC_FEC_DITHER                            (MCPARAMID)( 4436 << 14)
#define MC_FEC_DITHER_Forbidden                    1
#define MC_FEC_DITHER_Allowed                      2
#define MC_VgaGain                               (MCPARAMID)( 4437 << 14)
#define MC_VsyncBfrEndExp_us                     (MCPARAMID)( 4438 << 14)
#define MC_StrobeMode_OFF                          4
#define MC__CSIO_CSIO2Out_LOX                      9
#define MC___IO1Usage_Check                      (MCPARAMID)( 4439 << 14)
#define MC___IO1Usage_Check_PASS                   1
#define MC___IO1Usage_Check_FAIL                   2
#define MC___IO2Usage_Check                      (MCPARAMID)( 4440 << 14)
#define MC___IO2Usage_Check_PASS                   1
#define MC___IO2Usage_Check_FAIL                   2
#define MC___IO3Usage_Check                      (MCPARAMID)( 4441 << 14)
#define MC___IO3Usage_Check_PASS                   1
#define MC___IO3Usage_Check_FAIL                   2
#define MC___IO4Usage_Check                      (MCPARAMID)( 4442 << 14)
#define MC___IO4Usage_Check_PASS                   1
#define MC___IO4Usage_Check_FAIL                   2
#define MC___ISOA2Usage_Check                    (MCPARAMID)( 4443 << 14)
#define MC___ISOA2Usage_Check_PASS                 1
#define MC___ISOA2Usage_Check_FAIL                 2
#define MC___TRA1Usage_Check                     (MCPARAMID)( 4444 << 14)
#define MC___TRA1Usage_Check_PASS                  1
#define MC___TRA1Usage_Check_FAIL                  2
#define MC___TRA2Usage_Check                     (MCPARAMID)( 4445 << 14)
#define MC___TRA2Usage_Check_PASS                  1
#define MC___TRA2Usage_Check_FAIL                  2
#define MC___ISOA1Usage_Check                    (MCPARAMID)( 4446 << 14)
#define MC___ISOA1Usage_Check_PASS                 1
#define MC___ISOA1Usage_Check_FAIL                 2
#define MC_Gain_s                                (MCPARAMID)( 4447 << 14)
#define MC__Twin_GainY_s                         (MCPARAMID)( 4448 << 14)
#define MC__CBA_READ_RATE                        (MCPARAMID)( 4449 << 14)
#define MC__CBA_READ_RATE_FULL                     1
#define MC__CBA_READ_RATE_HALF                     2
#define MC_GrabWindow_WOI_NO                       7
#define MC_GrabWindow_WOI_YES                      8
#define MC_FifoSizeX_inbytes                     (MCPARAMID)( 4450 << 14)
#define MC_Camera_CSB1100CL                      218
#define MC_CamConfig_P22RC                       282
#define MC___FPGA_Model_Check                    (MCPARAMID)( 4451 << 14)
#define MC___FPGA_Model_Check_PASS                 1
#define MC___FPGA_Model_Check_FAIL                 2
#define MC_WoiLvalCount                          (MCPARAMID)( 4452 << 14)
#define MC_WoiPixelCount                         (MCPARAMID)( 4453 << 14)
#define MC_ECASet                                (MCPARAMID)( 4454 << 14)
#define MC_WoiFvalHigh_Tk                        (MCPARAMID)( 4455 << 14)
#define MC_WoiMinTriggerDisableTime_Tk           (MCPARAMID)( 4456 << 14)
#define MC_WoiReadoutTime_Tk                     (MCPARAMID)( 4457 << 14)
#define MC_WoiReadoutDur_Tk                      (MCPARAMID)( 4458 << 14)
#define MC_WoiReadoutDur_10ns                    (MCPARAMID)( 4459 << 14)
#define MC_IoCapability                          (MCPARAMID)( 4460 << 14)
#define MC___MinHactive_Check                    (MCPARAMID)( 4461 << 14)
#define MC___MinHactive_Check_PASS                 1
#define MC___MinHactive_Check_FAIL                 2


#endif // _McParams_
