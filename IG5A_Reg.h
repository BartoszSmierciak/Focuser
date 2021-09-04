#include <stdint.h>

//Drv Registers
#define IG5A_Drv_Reg_FrequencyCommand                ((uint16_t) 0xA100)
#define IG5A_Drv_Reg_AccelTime                       ((uint16_t) 0xA101)
#define IG5A_Drv_Reg_DecelTime                       ((uint16_t) 0xA102)
#define IG5A_Drv_Reg_DriveMode                       ((uint16_t) 0xA103)
#define IG5A_Drv_Reg_FrequencySettingMethod          ((uint16_t) 0xA104)
#define IG5A_Drv_Reg_MultiStepFreq1                  ((uint16_t) 0xA105)
#define IG5A_Drv_Reg_MultiStepFreq2                  ((uint16_t) 0xA106)
#define IG5A_Drv_Reg_MultiStepFreq3                  ((uint16_t) 0xA107)
#define IG5A_Drv_Reg_OutputCurrent                   ((uint16_t) 0xA108)
#define IG5A_Drv_Reg_MotorRPM                        ((uint16_t) 0xA109)
#define IG5A_Drv_Reg_InverterDCLinkVoltage           ((uint16_t) 0xA10A)
#define IG5A_Drv_Reg_UserDisplaySelect               ((uint16_t) 0xA10B)
#define IG5A_Drv_Reg_FaultDisplay                    ((uint16_t) 0xA10C)
#define IG5A_Drv_Reg_DirectionOfMotorRotationSelect  ((uint16_t) 0xA10D)
#define IG5A_Drv_Reg_DriveMode2                      ((uint16_t) 0xA10E)
#define IG5A_Drv_Reg_FrequencySettingMethod2         ((uint16_t) 0xA10F)
#define IG5A_Drv_Reg_PIDControlStandardValueSetting  ((uint16_t) 0xA110)
#define IG5A_Drv_Reg_PIDControlFeedbackAmount        ((uint32_t) 0xA111)

#define IG5A_F1_Reg_JumpCode                         ((uint16_t) 0xA200)
#define IG5A_F1_Reg_ForvardReverseRunDisable         ((uint16_t) 0xA201)
#define IG5A_F1_Reg_AccelPattern                     ((uint16_t) 0xA202)
#define IG5A_F1_Reg_DecelPattern                     ((uint16_t) 0xA203)
#define IG5A_F1_Reg_StopModeSelect                   ((uint16_t) 0xA204)
#define IG5A_F1_Reg_DCBrakeStartFrequency            ((uint16_t) 0xA208)
#define IG5A_F1_Reg_DCBrakeWaitTime                  ((uint16_t) 0xA209)
#define IG5A_F1_Reg_DCBrakeVoltage                   ((uint16_t) 0xA20A)
#define IG5A_F1_Reg_DCBrakeTime                      ((uint16_t) 0xA20B)
#define IG5A_F1_Reg_DCBrakeStartVoltage              ((uint16_t) 0xA20C)
#define IG5A_F1_Reg_DCBrakeStartTime                 ((uint16_t) 0xA20D)
#define IG5A_F1_Reg_TimeForMegnatizingAMotor         ((uint16_t) 0xA20E)
#define IG5A_F1_Reg_JogFrequency                     ((uint16_t) 0xA214)
#define IG5A_F1_Reg_MaxFrequency                     ((uint16_t) 0xA215)
#define IG5A_F1_Reg_BaseFrequency                    ((uint16_t) 0xA216)
#define IG5A_F1_Reg_StartFrequency                   ((uint16_t) 0xA217)
#define IG5A_F1_Reg_FrequencyHighLowLimit            ((uint16_t) 0xA218)
#define IG5A_F1_Reg_FrequencyHighLimit               ((uint16_t) 0xA219)
#define IG5A_F1_Reg_FrequencyLowLimit                ((uint16_t) 0xA21A)
#define IG5A_F1_Reg_TorqueBoostSelect                ((uint16_t) 0xA21B)
#define IG5A_F1_Reg_TorqueBoostInForvardDirection    ((uint16_t) 0xA21C)
#define IG5A_F1_Reg_TorqueBoostInReverseDirection    ((uint16_t) 0xA21D)
#define IG5A_F1_Reg_VFPattern                        ((uint16_t) 0xA21E)
#define IG5A_F1_Reg_UserVFFrequency1                 ((uint16_t) 0xA21F)
#define IG5A_F1_Reg_UserVFVoltage1                   ((uint16_t) 0xA220)
#define IG5A_F1_Reg_UserVFFrequency2                 ((uint16_t) 0xA221)
#define IG5A_F1_Reg_UserVFVoltage2                   ((uint16_t) 0xA222)
#define IG5A_F1_Reg_UserVFFrequency3                 ((uint16_t) 0xA223)
#define IG5A_F1_Reg_UserVFVoltage3                   ((uint16_t) 0xA224)
#define IG5A_F1_Reg_UserVFFrequency4                 ((uint16_t) 0xA225)
#define IG5A_F1_Reg_UserVFVoltage4                   ((uint16_t) 0xA226)
#define IG5A_F1_Reg_OutputVoltageAdjustments         ((uint16_t) 0xA227)
#define IG5A_F1_Reg_EnergySavingLevel                ((uint16_t) 0xA228)
#define IG5A_F1_Reg_ElectronicThermalSelect          ((uint16_t) 0xA232)
#define IG5A_F1_Reg_ElectronicThermalLevelFor1min    ((uint16_t) 0xA233)
#define IG5A_F1_Reg_ElectronicThermalLevelForCont    ((uint16_t) 0xA234)
#define IG5A_F1_Reg_MotorCoolingMethod               ((uint16_t) 0xA235)
#define IG5A_F1_Reg_OverloadWarningLevel             ((uint16_t) 0xA236)
#define IG5A_F1_Reg_OverloadWarningTime              ((uint16_t) 0xA237)
#define IG5A_F1_Reg_OverloadTripSelect               ((uint16_t) 0xA238)
#define IG5A_F1_Reg_OverloadTripLevel                ((uint16_t) 0xA239)
#define IG5A_F1_Reg_OverloadtripTime                 ((uint16_t) 0xA23A)
#define IG5A_F1_Reg_StallPreventionSelect            ((uint16_t) 0xA23B)
#define IG5A_F1_Reg_StallPreventionLevel             ((uint16_t) 0xA23C)
#define IG5A_F1_Reg_StallPreventionDurDecVolLimSel   ((uint16_t) 0xA23D)
#define IG5A_F1_Reg_SaveUpDownFrequencySelect        ((uint16_t) 0xA23F)
#define IG5A_F1_Reg_SaveUpDownFrequency              ((uint16_t) 0xA240)
#define IG5A_F1_Reg_UpDownModeSelect                 ((uint16_t) 0xA241)
#define IG5A_F1_Reg_UpDownStepFrequency              ((uint16_t) 0xA242)

#define IG5A_F2_Reg_JumpCode2                        ((uint16_t) 0xA300)
#define IG5A_F2_Reg_FaultHistory1                    ((uint16_t) 0xA301)
#define IG5A_F2_Reg_FaultHistory2                    ((uint16_t) 0xA302)
#define IG5A_F2_Reg_FaultHistory3                    ((uint16_t) 0xA303)
#define IG5A_F2_Reg_FaultHistory4                    ((uint16_t) 0xA304)
#define IG5A_F2_Reg_FaultHistory5                    ((uint16_t) 0xA305)
#define IG5A_F2_Reg_ResetFaultHistory                ((uint16_t) 0xA306)
#define IG5A_F2_Reg_DwellFrequency                   ((uint16_t) 0xA307)
#define IG5A_F2_Reg_DwellTime                        ((uint16_t) 0xA308)
#define IG5A_F2_Reg_SkipFrequencySelect              ((uint16_t) 0xA30A)
#define IG5A_F2_Reg_SkipFrequencyLowLimit1           ((uint16_t) 0xA30B)
#define IG5A_F2_Reg_SkipFrequencyHiLimit1            ((uint16_t) 0xA30C)
#define IG5A_F2_Reg_SkipFrequencyLowLimit2           ((uint16_t) 0xA30D)
#define IG5A_F2_Reg_SkipFrequencyHiLimit2            ((uint16_t) 0xA30E)
#define IG5A_F2_Reg_SkipFrequencyLowLimit3           ((uint16_t) 0xA30F)
#define IG5A_F2_Reg_SkipFrequencyHiLimit3            ((uint16_t) 0xA310)
#define IG5A_F2_Reg_SCurveAccelDecelStartSide        ((uint16_t) 0xA311)
#define IG5A_F2_Reg_SCurveAccelDecelEndSide          ((uint16_t) 0xA312)
#define IG5A_F2_Reg_IOPhaseLoseProtectionSelect      ((uint16_t) 0xA313)
#define IG5A_F2_Reg_PowerOnStartSelect               ((uint16_t) 0xA314)
#define IG5A_F2_Reg_RestartAfterFaltResetSelection   ((uint16_t) 0xA315)
#define IG5A_F2_Reg_SpeedSearchSelect                ((uint16_t) 0xA316)
#define IG5A_F2_Reg_CurrentLevelDuringSpeedSreach    ((uint16_t) 0xA317)
#define IG5A_F2_Reg_PGainDuringSpeedSreach           ((uint16_t) 0xA318)
#define IG5A_F2_Reg_IGainDuringSpeedSreach           ((uint16_t) 0xA319)
#define IG5A_F2_Reg_NumberOfAutoRestartTry           ((uint16_t) 0xA31A)
#define IG5A_F2_Reg_AutoRestartTime                  ((uint16_t) 0xA31B)
#define IG5A_F2_Reg_MotorTypeSelect                  ((uint16_t) 0xA31E)
#define IG5A_F2_Reg_NumbersOfMotorPoles              ((uint16_t) 0xA31F)
#define IG5A_F2_Reg_RatedSlipFrequency               ((uint16_t) 0xA320)
#define IG5A_F2_Reg_MotorRatedCurrent                ((uint16_t) 0xA321)
#define IG5A_F2_Reg_NoLoadMotorCurrent               ((uint16_t) 0xA322)
#define IG5A_F2_Reg_MotorEfficiency                  ((uint16_t) 0xA324)
#define IG5A_F2_Reg_LoadInteriaRate                  ((uint16_t) 0xA325)
#define IG5A_F2_Reg_CarrierFrequencySelect           ((uint16_t) 0xA327)
#define IG5A_F2_Reg_ControlModeSelect                ((uint16_t) 0xA328)
#define IG5A_F2_Reg_AutoTuning                       ((uint16_t) 0xA329)
#define IG5A_F2_Reg_StatorResistance                 ((uint16_t) 0xA32A)
#define IG5A_F2_Reg_LeakageInductance                ((uint16_t) 0xA32C)
#define IG5A_F2_Reg_SensorlessPGain                  ((uint16_t) 0xA32D)
#define IG5A_F2_Reg_SensorlessIGain                  ((uint16_t) 0xA32E)
#define IG5A_F2_Reg_SensorlessTorqueLimit            ((uint16_t) 0xA32F)
#define IG5A_F2_Reg_PWMModeSelect                    ((uint16_t) 0xA330)
#define IG5A_F2_Reg_PIDSelect                        ((uint16_t) 0xA331)
#define IG5A_F2_Reg_PIDFBSelect                      ((uint16_t) 0xA332)
#define IG5A_F2_Reg_PGainForPID                      ((uint16_t) 0xA333)
#define IG5A_F2_Reg_IntegralTimeForPID               ((uint16_t) 0xA334)
#define IG5A_F2_Reg_DifferentialTimeForPID           ((uint16_t) 0xA335)
#define IG5A_F2_Reg_PIDModeControlSelect             ((uint16_t) 0xA336)
#define IG5A_F2_Reg_PIDOutputFrequencyHighLimit      ((uint16_t) 0xA337)

#define IG5A_IO_Reg_JumpCodeIOGroup                  ((uint16_t) 0xA400)
#define IG5A_IO_Reg_NVInputMinVoltage                ((uint16_t) 0xA402)
#define IG5A_IO_Reg_FrequencyCorrespondingToL2       ((uint16_t) 0xA403)
#define IG5A_IO_Reg_NVInputMaxVoltage                ((uint16_t) 0xA404)
#define IG5A_IO_Reg_FrequencyCorrespondingToL4       ((uint16_t) 0xA405)
#define IG5A_IO_Reg_FilterTimeConstantForV1Input     ((uint16_t) 0xA406)
#define IG5A_IO_Reg_V1InputMinVoltage                ((uint16_t) 0xA407)
#define IG5A_IO_Reg_FrequencyCorrespondingToL7       ((uint16_t) 0xA408)
#define IG5A_IO_Reg_V1InputMaxVoltage                ((uint16_t) 0xA409)
#define IG5A_IO_Reg_FrequencyCorrespondingToL9       ((uint16_t) 0xA40A)
#define IG5A_IO_Reg_FilterTimeConstantForIInput      ((uint16_t) 0xA40B)
#define IG5A_IO_Reg_IInputMinCurrent                 ((uint16_t) 0xA40C)
#define IG5A_IO_Reg_FrequencyCorrespondingToL12      ((uint16_t) 0xA40D)
#define IG5A_IO_Reg_iInputMaxCurrent                 ((uint16_t) 0xA40E)
#define IG5A_IO_Reg_FrequencyCorrenspondingToL14     ((uint16_t) 0xA40F)
#define IG5A_IO_Reg_CriteriaForAnalogInpSignalLoss   ((uint16_t) 0xA410)
#define IG5A_IO_Reg_MultifunctInputTerminalP1Define  ((uint16_t) 0xA411)
#define IG5A_IO_Reg_MultifunctInputTerminalP2Define  ((uint16_t) 0xA412)
#define IG5A_IO_Reg_MultifunctInputTerminalP3Define  ((uint16_t) 0xA413)
#define IG5A_IO_Reg_MultifunctInputTerminalP4Define  ((uint16_t) 0xA414)
#define IG5A_IO_Reg_MultifunctInputTerminalP5Define  ((uint16_t) 0xA415)
#define IG5A_IO_Reg_MultifunctInputTerminalP6Define  ((uint16_t) 0xA416)
#define IG5A_IO_Reg_MultifunctInputTerminalP7Define  ((uint16_t) 0xA417)
#define IG5A_IO_Reg_MultifunctInputTerminalP8Define  ((uint16_t) 0xA418)
#define IG5A_IO_Reg_InputTerminalStatusDisplay       ((uint16_t) 0xA419)
#define IG5A_IO_Reg_OutputTerminalStatusDisplay      ((uint16_t) 0xA41A)
#define IG5A_IO_Reg_FilterTConstMultiFunInpTerminal  ((uint16_t) 0xA41B)
#define IG5A_IO_Reg_MultiStepFrequency4              ((uint16_t) 0xA41E)
#define IG5A_IO_Reg_MultiStepFrequency5              ((uint16_t) 0xA41F)
#define IG5A_IO_Reg_MultiStepFrequency6              ((uint16_t) 0xA420)
#define IG5A_IO_Reg_MultiStepFrequency7              ((uint16_t) 0xA421)
#define IG5A_IO_Reg_MultiAccelTime1                  ((uint16_t) 0xA422)
#define IG5A_IO_Reg_MultiDecelTime1                  ((uint16_t) 0xA423)
#define IG5A_IO_Reg_MultiAccelTime2                  ((uint16_t) 0xA424)
#define IG5A_IO_Reg_MultiDecelTime2                  ((uint16_t) 0xA425)
#define IG5A_IO_Reg_MultiAccelTime3                  ((uint16_t) 0xA426)
#define IG5A_IO_Reg_MultiDecelTime3                  ((uint16_t) 0xA427)
#define IG5A_IO_Reg_MultiAccelTime4                  ((uint16_t) 0xA428)
#define IG5A_IO_Reg_MultiDecelTime4                  ((uint16_t) 0xA429)
#define IG5A_IO_Reg_MultiAccelTime5                  ((uint16_t) 0xA42A)
#define IG5A_IO_Reg_MultiDecelTime5                  ((uint16_t) 0xA42B)
#define IG5A_IO_Reg_MultiAccelTime6                  ((uint16_t) 0xA42C)
#define IG5A_IO_Reg_MultiDecelTime6                  ((uint16_t) 0xA42D)
#define IG5A_IO_Reg_MultiAccelTime7                  ((uint16_t) 0xA42E)
#define IG5A_IO_Reg_MultiDecelTime7                  ((uint16_t) 0xA42F)
#define IG5A_IO_Reg_AnalogOutputItemSelect           ((uint16_t) 0xA432)
#define IG5A_IO_Reg_AnalogOutputLevelAdjustment      ((uint16_t) 0xA433)
#define IG5A_IO_Reg_FrequencyDetectionLevel          ((uint16_t) 0xA434)
#define IG5A_IO_Reg_FrequencyDetectionBandwith       ((uint16_t) 0xA435)
#define IG5A_IO_Reg_MultifuncOutputTerminalSelect    ((uint16_t) 0xA436)
