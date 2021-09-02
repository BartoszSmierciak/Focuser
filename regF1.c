#include <stdint.h>

#define F1_JumpCode                       ((uint16_t) 0xA200)
#define F1_ForvardReverseRunDisable       ((uint16_t) 0xA201)
#define F1_AccelPattern                   ((uint16_t) 0xA202)
#define F1_DecelPattern                   ((uint16_t) 0xA203)
#define F1_StopModeSelect                 ((uint16_t) 0xA204)
#define F1_DCBrakeStartFrequency          ((uint16_t) 0xA208)
#define F1_DCBrakeWaitTime                ((uint16_t) 0xA209)
#define F1_DCBrakeVoltage                 ((uint16_t) 0xA20A)
#define F1_DCBrakeTime                    ((uint16_t) 0xA20B)
#define F1_DCBrakeStartVoltage            ((uint16_t) 0xA20C)
#define F1_DCBrakeStartTime               ((uint16_t) 0xA20D)
#define F1_TimeForMegnatizingAMotor       ((uint16_t) 0xA20E)
#define F1_JogFrequency                   ((uint16_t) 0xA214)
#define F1_MaxFrequency                   ((uint16_t) 0xA215)
#define F1_BaseFrequency                  ((uint16_t) 0xA216)
#define F1_StartFrequency                 ((uint16_t) 0xA217)
#define F1_FrequencyHighLowLimit          ((uint16_t) 0xA218)
#define F1_FrequencyHighLimit             ((uint16_t) 0xA219)
#define F1_FrequencyLowLimit              ((uint16_t) 0xA21A)
#define F1_TorqueBoostSelect              ((uint16_t) 0xA21B)
#define F1_TorqueBoostInForvardDirection  ((uint16_t) 0xA21C)
#define F1_TorqueBoostInReverseDirection  ((uint16_t) 0xA21D)
#define F1_VFPattern                      ((uint16_t) 0xA21E)
#define F1_UserVFFrequency1               ((uint16_t) 0xA21F)
#define F1_UserVFVoltage1                 ((uint16_t) 0xA220)
#define F1_UserVFFrequency2               ((uint16_t) 0xA221)
#define F1_UserVFVoltage2                 ((uint16_t) 0xA222)
#define F1_UserVFFrequency3               ((uint16_t) 0xA223)
#define F1_UserVFVoltage3                 ((uint16_t) 0xA224)
#define F1_UserVFFrequency4               ((uint16_t) 0xA225)
#define F1_UserVFVoltage4                 ((uint16_t) 0xA226)
#define F1_OutputVoltageAdjustments       ((uint16_t) 0xA227)
#define F1_EnergySavingLevel              ((uint16_t) 0xA228)
#define F1_ElectronicThermalSelect        ((uint16_t) 0xA232)
#define F1_ElectronicThermalLevelFor1min  ((uint16_t) 0xA233)
#define F1_ElectronicThermalLevelForCont  ((uint16_t) 0xA234)
#define F1_MotorCoolingMethod             ((uint16_t) 0xA235)
#define F1_OverloadWarningLevel           ((uint16_t) 0xA236)
#define F1_OverloadWarningTime            ((uint16_t) 0xA237)
#define F1_OverloadTripSelect             ((uint16_t) 0xA238)
#define F1_OverloadTripLevel              ((uint16_t) 0xA239)
#define F1_OverloadtripTime               ((uint16_t) 0xA23A)
#define F1_StallPreventionSelect          ((uint16_t) 0xA23B)
#define F1_StallPreventionLevel           ((uint16_t) 0xA23C)
#define F1_StallPreventionDurDecVolLimSel ((uint16_t) 0xA23D)
#define F1_SaveUpDownFrequencySelect      ((uint16_t) 0xA23F)
#define F1_SaveUpDownFrequency            ((uint16_t) 0xA240)
#define F1_UpDownModeSelect               ((uint16_t) 0xA241)
#define F1_UpDownStepFrequency            ((uint16_t) 0xA242)
#define F1_DrawnRunModeSelect             ((uint16_t) 0xA246)
#define F1_DrawRate                       ((uint16_t) 0xA247)

typedef struct
{
    uint16_t JumpCode;
    uint16_t ForvardReverseRunDisable;
    uint16_t AccelPattern;
    uint16_t DecelPattern;
    uint16_t StopModeSelect;
    uint16_t DCBrakeStartFrequency;
    uint16_t DCBrakeWaitTime;
    uint16_t DCBrakeVoltage;
    uint16_t DCBrakeTime;
    uint16_t DCBrakeStartVoltage;
    uint16_t DCBrakeStartTime;
    uint16_t TimeForMegnatizingAMotor;
    uint16_t JogFrequency;
    uint16_t MaxFrequency;
    uint16_t BaseFrequency;
    uint16_t StartFrequency;
    uint16_t FrequencyHighLowLimit;
    uint16_t FrequencyHighLimit;
    uint16_t FrequencyLowLimit;
    uint16_t TorqueBoostSelect;
    uint16_t TorqueBoostInForvardDirection;
    uint16_t TorqueBoostInReverseDirection;
    uint16_t VFPattern;
    uint16_t UserVFFrequency1;
    uint16_t UserVFVoltage1;
    uint16_t UserVFFrequency2;
    uint16_t UserVFVoltage2;
    uint16_t UserVFFrequency3;
    uint16_t UserVFVoltage3;
    uint16_t UserVFFrequency4;
    uint16_t UserVFVoltage4;
    uint16_t OutputVoltageAdjustments;
    uint16_t EnergySavingLevel;
    uint16_t ElectronicThermalSelect;
    uint16_t ElectronicThermalLevelFor1min;
    uint16_t ElectronicThermalLevelForCont;
    uint16_t MotorCoolingMethod;
    uint16_t OverloadWarningLevel;
    uint16_t OverloadWarningTime;
    uint16_t OverloadTripSelect;
    uint16_t OverloadTripLevel;
    uint16_t OverloadtripTime;
    uint16_t StallPreventionSelect;
    uint16_t StallPreventionLevel;
    uint16_t StallPreventionDurDecVolLimSel;
    uint16_t SaveUpDownFrequencySelect;
    uint16_t SaveUpDownFrequency;
    uint16_t UpDownModeSelect;
    uint16_t UpDownStepFrequency;
    uint16_t DrawnRunModeSelect;
    uint16_t DrawRate;
}F1_t;

//Memory allocation
F1_t* F1_new()
{
    return (F1_t*)malloc(sizeof(F1_t));
}

//Constractor
void Drv_ctor(F1_t* F1)
{
    F1->JumpCode = 0xA200;
    F1->ForvardReverseRunDisable = 0xA201;
    F1->AccelPattern = 0xA202;
    F1->DecelPattern = 0xA203;
    F1->StopModeSelect = 0xA204;
    F1->DCBrakeStartFrequency = 0xA208;
    F1->DCBrakeWaitTime = 0xA209;
    F1->DCBrakeVoltage = 0xA20A;
    F1->DCBrakeTime = 0xA20B;
    F1->DCBrakeStartVoltage = 0xA20C;
    F1->DCBrakeStartTime = 0xA20D;
    F1->TimeForMegnatizingAMotor = 0xA20E;
    F1->JogFrequency = 0xA214;
    F1->MaxFrequency = 0xA215;
    F1->BaseFrequency = 0xA216;
    F1->StartFrequency = 0xA217;
    F1->FrequencyHighLowLimit = 0xA218;
    F1->FrequencyHighLimit = 0xA219;
    F1->FrequencyLowLimit = 0xA21A;
    F1->TorqueBoostSelect = 0xA21B;
    F1->TorqueBoostInForvardDirection = 0xA21C;
    F1->TorqueBoostInReverseDirection = 0xA21D;
    F1->VFPattern = 0xA21E;
    F1->UserVFFrequency1 = 0xA21F;
    F1->UserVFVoltage1 = 0xA220;
    F1->UserVFFrequency2 = 0xA221;
    F1->UserVFVoltage2 = 0xA222;
    F1->UserVFFrequency3 = 0xA223;
    F1->UserVFVoltage3 = 0xA224;
    F1->UserVFFrequency4 = 0xA225;
    F1->UserVFVoltage4 = 0xA226;
    F1->OutputVoltageAdjustments = 0xA227;
    F1->EnergySavingLevel = 0xA228;
    F1->ElectronicThermalSelect = 0xA232;
    F1->ElectronicThermalLevelFor1min = 0xA233;
    F1->ElectronicThermalLevelForCont = 0xA234;
    F1->MotorCoolingMethod = 0xA235;
    F1->OverloadWarningLevel = 0xA236;
    F1->OverloadWarningTime = 0xA237;
    F1->OverloadTripSelect = 0xA238;
    F1->OverloadTripLevel = 0xA239;
    F1->OverloadtripTime = 0xA23A;
    F1->StallPreventionSelect = 0xA23B;
    F1->StallPreventionLevel = 0xA23C;
    F1->StallPreventionDurDecVolLimSel = 0xA23D;
    F1->SaveUpDownFrequencySelect = 0xA23F;
    F1->SaveUpDownFrequency = 0xA240;
    F1->UpDownModeSelect = 0xA241;
    F1->UpDownStepFrequency = 0xA242;
    F1->DrawnRunModeSelect = 0xA246;
    F1->DrawRate = 0xA247;
}

void F1_dtor(F1_t* F1)
{
    //nothing to do
}
