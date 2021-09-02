#include <stdint.h>
#include "regDrv.h"

typedef void* (*func_t)(void*, uint16_t*, int*);


void Drv_FrequencyCommand(modbus, uint16_t* value, int* status);

void Drv_AccelTime(modbus, uint16_t* value, int* status);


void Drv_DecelTime;
void Drv_DriveMode;
void Drv_FrequencySettingMethod;
void Drv_MultiStepFreq1;
void Drv_MultiStepFreq2;
void Drv_MultiStepFreq3;
void Drv_OutputCurrent;
void Drv_MotorRPM;
void Drv_InverterDCLinkVoltage;
void Drv_UserDisplaySelect;
void Drv_FaultDisplay;
void Drv_DirectionOfMotorRotationSelect;
void Drv_DriveMode2;
void Drv_FrequencySettingMethod2;
void Drv_PIDControlStandardValueSetting;
void Drv_PIDControlFeedbackAmount;
}Drv_t;


