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
void Drv_ctor(Drv_t* Drv, modbus_t* ctx)
{
    int status = 0;
    IG5A_Drv_Get_FrequencyCommand(ctx, Drv->FrequencyCommand, &status);
    IG5A_Drv_Get_AccelTime(ctx, Drv->AccelTime, &status);
    IG5A_Drv_Get_DecelTime(ctx, Drv->DecelTime, &status);
    IG5A_Drv_Get_DriveMode(ctx, Drv->DriveMode, &status);
    IG5A_Drv_Get_FrequencySettingMethod(ctx, Drv->FrequencySettingMethod, &status);
    IG5A_Drv_Get_MultiStepFreq1(ctx, Drv->MultiStepFreq1, &status);
    IG5A_Drv_Get_MultiStepFreq2(ctx, Drv->MultiStepFreq2, &status);
    IG5A_Drv_Get_MultiStepFreq3(ctx, Drv->MultiStepFreq3, &status);
    IG5A_Drv_Get_OutputCurrent(ctx, Drv->OutputCurrent, &status); 
    IG5A_Drv_Get_MotorRPM(ctx, Drv->MotorRPM, &status);
    IG5A_Drv_Get_InverterDCLinkVoltage(ctx, Drv->InverterDCLinkVoltage, &status);
    IG5A_Drv_Get_UserDisplaySelect(ctx, Drv->UserDisplaySelect, &status);
    IG5A_Drv_Get_FaultDisplay(ctx, Drv->FaultDisplay, &status);
    IG5A_Drv_Get_DirectionOfMotorRotationSelect(ctx, Drv->DirectionOfMotorRotationSelect, &status);
    IG5A_Drv_Get_DriveMode2(ctx, Drv->DriveMode2, &status);
    IG5A_Drv_Get_FrequencySettingMethod2(ctx, Drv->FrequencySettingMethod2, &status);
    IG5A_Drv_Get_PIDControlStandardValueSetting(ctx, Drv->PIDControlStandardValueSetting, &status);
    IG5A_Drv_Get_PIDControlFeedbackAmount(ctx, Drv->PIDControlFeedbackAmount, &status);
}

void Drv_dtor(Drv_t* Drv)
{
    //nothing to do
}


void IG5A_Drv_Get_FrequencyCommand(modbus_t* ctx, uint16_t* value, int* status)
{
    
    *value = IG5A_Drv_Reg_FrequencyCommand;
    *status = 0;
}

void IG5A_Drv_Get_AccelTime(modbus_t* ctx, uint16_t* value, int* status)
{
    *value = IG5A_Drv_Reg_AccelTime;
    status = 0;
}

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