#include <stdint.h>
#include <stdlib.h>
#include "regDrv.h"


typedef struct 
{
    uint16_t FrequencyCommand;
    uint16_t AccelTime;
    uint16_t DecelTime;
    uint16_t DriveMode;
    uint16_t FrequencySettingMethod;
    uint16_t MultiStepFreq1;
    uint16_t MultiStepFreq2;
    uint16_t MultiStepFreq3;
    uint16_t OutputCurrent;
    uint16_t MotorRPM;
    uint16_t InverterDCLinkVoltage;
    uint16_t UserDisplaySelect;
    uint16_t FaultDisplay;
    uint16_t DirectionOfMotorRotationSelect;
    uint16_t DriveMode2;
    uint16_t FrequencySettingMethod2;
    uint16_t PIDControlStandardValueSetting;
    uint16_t PIDControlFeedbackAmount;
}regDrv_t;

//Memory allocation
regDrv_t* regDrv_new()
{
    return (regDrv_t*)malloc(sizeof(regDrv_t));
} 

//Constractor
void regDrv_ctor(regDrv_t* regDrv)
{
    regDrv->FrequencyCommand = 0xA100;
    regDrv->AccelTime = 0xA101;
    regDrv->DecelTime = 0xA102;
    regDrv->DriveMode = 0xA103;
    regDrv->FrequencySettingMethod = 0xA104;
    regDrv->MultiStepFreq1 = 0xA105;
    regDrv->MultiStepFreq2 = 0xA106;
    regDrv->MultiStepFreq3 = 0xA107;
    regDrv->OutputCurrent = 0xA108;
    regDrv->MotorRPM = 0xA109;
    regDrv->InverterDCLinkVoltage = 0xA10A;
    regDrv->UserDisplaySelect = 0xA10B;
    regDrv->FaultDisplay = 0xA10C;
    regDrv->DirectionOfMotorRotationSelect = 0xA10D;
    regDrv->DriveMode2 = 0xA10E;
    regDrv->FrequencySettingMethod2 = 0xA10F;
    regDrv->PIDControlStandardValueSetting = 0xA110;
    regDrv->PIDControlFeedbackAmount = 0xA111;

}

void regDrv_dtor(regDrv_t* regDrv)
{
    //nothing to do
}