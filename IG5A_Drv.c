#include "IG5A_Drv.h"
#include "IG5A_Drv_Reg.h"
#include <stdlib.h>
#include <modbus/modbus.h>



//Memory allocation
Drv_t* Drv_new()
{
    return (Drv_t*)malloc(sizeof(Drv_t));
} 

//Constractor
void Drv_ctor(Drv_t* Drv, int slaveAddress, modbus_t* ctx)
{
    int status = 0;
    IG5A_Drv_Get_FrequencyCommand(ctx, slaveAddress, Drv->FrequencyCommand, &status);
    IG5A_Drv_Get_AccelTime(ctx, slaveAddress, Drv->AccelTime, &status);
    IG5A_Drv_Get_DecelTime(ctx, slaveAddress, Drv->DecelTime, &status);
    IG5A_Drv_Get_DriveMode(ctx, slaveAddress, Drv->DriveMode, &status);
    IG5A_Drv_Get_FrequencySettingMethod(ctx, slaveAddress, Drv->FrequencySettingMethod, &status);
    IG5A_Drv_Get_MultiStepFreq1(ctx, slaveAddress, Drv->MultiStepFreq1, &status);
    IG5A_Drv_Get_MultiStepFreq2(ctx, slaveAddress, Drv->MultiStepFreq2, &status);
    IG5A_Drv_Get_MultiStepFreq3(ctx, slaveAddress, Drv->MultiStepFreq3, &status);
    IG5A_Drv_Get_OutputCurrent(ctx, slaveAddress, Drv->OutputCurrent, &status); 
    IG5A_Drv_Get_MotorRPM(ctx, slaveAddress, Drv->MotorRPM, &status);
    IG5A_Drv_Get_InverterDCLinkVoltage(ctx, slaveAddress, Drv->InverterDCLinkVoltage, &status);
    IG5A_Drv_Get_UserDisplaySelect(ctx, slaveAddress, Drv->UserDisplaySelect, &status);
    IG5A_Drv_Get_FaultDisplay(ctx, slaveAddress, Drv->FaultDisplay, &status);
    IG5A_Drv_Get_DirectionOfMotorRotationSelect(ctx, slaveAddress, Drv->DirectionOfMotorRotationSelect, &status);
    IG5A_Drv_Get_DriveMode2(ctx, slaveAddress, Drv->DriveMode2, &status);
    IG5A_Drv_Get_FrequencySettingMethod2(ctx, slaveAddress, Drv->FrequencySettingMethod2, &status);
    IG5A_Drv_Get_PIDControlStandardValueSetting(ctx, slaveAddress, Drv->PIDControlStandardValueSetting, &status);
    IG5A_Drv_Get_PIDControlFeedbackAmount(ctx, slaveAddress, Drv->PIDControlFeedbackAmount, &status);
}

void Drv_dtor(Drv_t* Drv)
{
    //nothing to do
}


void IG5A_Drv_Get_FrequencyCommand(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status)
{
    GetRegister(ctx, slaveAddress, IG5A_Drv_Reg_FrequencyCommand, value);
    *status = 0;
}

void IG5A_Drv_Get_AccelTime(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status)
{
    GetRegister(ctx, slaveAddress, IG5A_Drv_Reg_AccelTime, value);
    status = 0;
}

void IG5A_Drv_Get_DecelTime(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_DriveMode(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_FrequencySettingMethod(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_MultiStepFreq1(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_MultiStepFreq2(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_MultiStepFreq3(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_OutputCurrent(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_MotorRPM(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_InverterDCLinkVoltage(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_UserDisplaySelect(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_FaultDisplay(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_DirectionOfMotorRotationSelect(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_DriveMode2(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_FrequencySettingMethod2(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_PIDControlStandardValueSetting(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Get_PIDControlFeedbackAmount(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);


void IG5A_Drv_Set_FrequencyCommand(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_AccelTime(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_DecelTime(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_DriveMode(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_FrequencySettingMethod(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_MultiStepFreq1(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_MultiStepFreq2(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_MultiStepFreq3(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_OutputCurrent(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_MotorRPM(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_InverterDCLinkVoltage(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_UserDisplaySelect(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_FaultDisplay(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_DirectionOfMotorRotationSelect(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_DriveMode2(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_FrequencySettingMethod2(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_PIDControlStandardValueSetting(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);
void IG5A_Drv_Set_PIDControlFeedbackAmount(modbus_t *ctx, int slaveAddress, uint16_t* value, int* status);