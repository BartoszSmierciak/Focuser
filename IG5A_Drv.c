#include "Drv.h"
#include "Drv_Reg.h"
#include <stdlib.h>
#include <modbus/modbus.h>


void Drv_Get_FrequencyCommand(modbus_t* ctx, uint16_t* value, int* status)
{
    
    *value = modbusRead(Drv_FrequencyCommand);
    *status = 0;
}

void Drv_Get_AccelTime(modbus_t* ctx, uint16_t* value, int* status)
{
    *value = Drv_AccelTime;
    status = 0;
}

void Drv_Get_DecelTime(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_DriveMode(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_FrequencySettingMethod(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_MultiStepFreq1(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_MultiStepFreq2(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_MultiStepFreq3(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_OutputCurrent(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_MotorRPM(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_InverterDCLinkVoltage(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_UserDisplaySelect(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_FaultDisplay(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_DirectionOfMotorRotationSelect(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_DriveMode2(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_FrequencySettingMethod2(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_PIDControlStandardValueSetting(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Get_PIDControlFeedbackAmount(modbus_t *ctx, uint16_t* value, int* status);


void Drv_Set_FrequencyCommand(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_AccelTime(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_DecelTime(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_DriveMode(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_FrequencySettingMethod(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_MultiStepFreq1(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_MultiStepFreq2(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_MultiStepFreq3(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_OutputCurrent(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_MotorRPM(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_InverterDCLinkVoltage(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_UserDisplaySelect(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_FaultDisplay(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_DirectionOfMotorRotationSelect(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_DriveMode2(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_FrequencySettingMethod2(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_PIDControlStandardValueSetting(modbus_t *ctx, uint16_t* value, int* status);
void Drv_Set_PIDControlFeedbackAmount(modbus_t *ctx, uint16_t* value, int* status);