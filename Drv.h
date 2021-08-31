#include <stdint.h>
#include "regDrv.h"

typedef void* (*func_t)(void*, uint16_t*, int*);

typedef struct
{
    regDrv_t* regDrv;
    func_t FrequencyCommand;
    func_t AccelTime;
    func_t DecelTime;
    func_t DriveMode;
    func_t FrequencySettingMethod;
    func_t MultiStepFreq1;
    func_t MultiStepFreq2;
    func_t MultiStepFreq3;
    func_t OutputCurrent;
    func_t MotorRPM;
    func_t InverterDCLinkVoltage;
    func_t UserDisplaySelect;
    func_t FaultDisplay;
    func_t DirectionOfMotorRotationSelect;
    func_t DriveMode2;
    func_t FrequencySettingMethod2;
    func_t PIDControlStandardValueSetting;
    func_t PIDControlFeedbackAmount;
}Drv_t;

Drv_t* Drv_new();

void Drv_ctor(Drv_t* Drv);

void Drv_dtor(Drv_t* Drv);

void* __FrequencyCommand(void* Drv, uint16_t* value, int* status);

void* __AccelTime(void* Drv, uint16_t* value, int* status);

