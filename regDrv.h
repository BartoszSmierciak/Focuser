#include <stdint.h>

//struct regDrv_t;

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

regDrv_t* regDrv_new();

void regDrv_ctor(regDrv_t*);

void regDrv_dtor(regDrv_t*);
