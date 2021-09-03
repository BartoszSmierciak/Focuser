#include <stdint.h>
#include <modbus/modbus.h>


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
}Drv_t;

//Memory allocation
Drv_t* Drv_new();

//Constractor
void Drv_ctor(Drv_t* regDrv, modbus_t* ctx);

void Drv_dtor(Drv_t* regDrv);

void IG5A_Drv_Get_FrequencyCommand(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_AccelTime(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_DecelTime(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_DriveMode(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_FrequencySettingMethod(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_MultiStepFreq1(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_MultiStepFreq2(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_MultiStepFreq3(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_OutputCurrent(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_MotorRPM(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_InverterDCLinkVoltage(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_UserDisplaySelect(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_FaultDisplay(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_DirectionOfMotorRotationSelect(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_DriveMode2(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_FrequencySettingMethod2(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_PIDControlStandardValueSetting(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Get_PIDControlFeedbackAmount(modbus_t *ctx, uint16_t* value, int* status);


void IG5A_Drv_Set_FrequencyCommand(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_AccelTime(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_DecelTime(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_DriveMode(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_FrequencySettingMethod(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_MultiStepFreq1(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_MultiStepFreq2(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_MultiStepFreq3(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_OutputCurrent(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_MotorRPM(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_InverterDCLinkVoltage(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_UserDisplaySelect(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_FaultDisplay(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_DirectionOfMotorRotationSelect(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_DriveMode2(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_FrequencySettingMethod2(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_PIDControlStandardValueSetting(modbus_t *ctx, uint16_t* value, int* status);
void IG5A_Drv_Set_PIDControlFeedbackAmount(modbus_t *ctx, uint16_t* value, int* status);
