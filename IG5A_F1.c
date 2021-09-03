#include <stdint.h>
#include <modbus/modbus.h>
#include "IG5A_F1.h"

//Memory allocation
F1_t *F1_new()
{
    return (F1_t *)malloc(sizeof(F1_t));
}

//Constractor
void Drv_ctor(F1_t *F1, modbus_t *ctx)
{
    int status = 0;
    IG5A_F1_Get_JumpCode(ctx, F1->JumpCode, &status);
    IG5A_F1_Get_ForvardReverseRunDisable(ctx, F1->ForvardReverseRunDisable, &status);
    IG5A_F1_Get_AccelPattern(ctx, F1->AccelPattern, &status);
    IG5A_F1_Get_DecelPattern(ctx, F1->DecelPattern, &status);
    IG5A_F1_Get_StopModeSelect(ctx, F1->StopModeSelect, &status);
    IG5A_F1_Get_DCBrakeStartFrequency(ctx, F1->DCBrakeStartFrequency, &status);
    IG5A_F1_Get_DCBrakeWaitTime(ctx, F1->DCBrakeWaitTime, &status);
    IG5A_F1_Get_DCBrakeVoltage(ctx, F1->DCBrakeVoltage, &status);
    IG5A_F1_Get_DCBrakeTime(ctx, F1->DCBrakeTime, &status);
    IG5A_F1_Get_DCBrakeStartVoltage(ctx, F1->DCBrakeStartVoltage, &status);
    IG5A_F1_Get_DCBrakeStartTime(ctx, F1->DCBrakeStartTime, &status);
    IG5A_F1_Get_TimeForMegnatizingAMotor(ctx, F1->TimeForMegnatizingAMotor, &status);
    IG5A_F1_Get_JogFrequency(ctx, F1->JogFrequency, &status);
    IG5A_F1_Get_MaxFrequency(ctx, F1->MaxFrequency, &status);
    IG5A_F1_Get_BaseFrequency(ctx, F1->BaseFrequency, &status);
    IG5A_F1_Get_StartFrequency(ctx, F1->StartFrequency, &status);
    IG5A_F1_Get_FrequencyHighLowLimit(ctx, F1->FrequencyHighLowLimit, &status);
    IG5A_F1_Get_FrequencyHighLimit(ctx, F1->FrequencyHighLimit, &status);
    IG5A_F1_Get_FrequencyLowLimit(ctx, F1->FrequencyLowLimit, &status);
    IG5A_F1_Get_TorqueBoostSelect(ctx, F1->TorqueBoostSelect, &status);
    IG5A_F1_Get_TorqueBoostInForvardDirection(ctx, F1->TorqueBoostInForvardDirection, &status);
    IG5A_F1_Get_TorqueBoostInReverseDirection(ctx, F1->TorqueBoostInReverseDirection, &status);
    IG5A_F1_Get_VFPattern(ctx, F1->VFPattern, &status);
    IG5A_F1_Get_UserVFFrequency1(ctx, F1->UserVFFrequency1, &status);
    IG5A_F1_Get_UserVFVoltage1(ctx, F1->UserVFVoltage1, &status);
    IG5A_F1_Get_UserVFFrequency2(ctx, F1->UserVFFrequency2, &status);
    IG5A_F1_Get_UserVFVoltage2(ctx, F1->UserVFVoltage2, &status);
    IG5A_F1_Get_UserVFFrequency3(ctx, F1->UserVFFrequency3, &status);
    IG5A_F1_Get_UserVFVoltage3(ctx, F1->UserVFVoltage3, &status);
    IG5A_F1_Get_UserVFFrequency4(ctx, F1->UserVFFrequency4, &status);
    IG5A_F1_Get_UserVFVoltage4(ctx, F1->UserVFVoltage4, &status);
    IG5A_F1_Get_OutputVoltageAdjustments(ctx, F1->OutputVoltageAdjustments, &status);
    IG5A_F1_Get_EnergySavingLevel(ctx, F1->EnergySavingLevel, &status);
    IG5A_F1_Get_ElectronicThermalSelect(ctx, F1->ElectronicThermalSelect, &status);
    IG5A_F1_Get_ElectronicThermalLevelFor1min(ctx, F1->ElectronicThermalLevelFor1min, &status);
    IG5A_F1_Get_ElectronicThermalLevelForCont(ctx, F1->ElectronicThermalLevelForCont, &status);
    IG5A_F1_Get_MotorCoolingMethod(ctx, F1->MotorCoolingMethod, &status);
    IG5A_F1_Get_OverloadWarningLevel(ctx, F1->OverloadWarningLevel, &status);
    IG5A_F1_Get_OverloadWarningTime(ctx, F1->OverloadWarningTime, &status);
    IG5A_F1_Get_OverloadTripSelect(ctx, F1->OverloadTripSelect, &status);
    IG5A_F1_Get_OverloadTripLevel(ctx, F1->OverloadTripLevel, &status);
    IG5A_F1_Get_OverloadtripTime(ctx, F1->OverloadtripTime, &status);
    IG5A_F1_Get_StallPreventionSelect(ctx, F1->StallPreventionSelect, &status);
    IG5A_F1_Get_StallPreventionLevel(ctx, F1->StallPreventionLevel, &status);
    IG5A_F1_Get_StallPreventionDurDecVolLimSel(ctx, F1->StallPreventionDurDecVolLimSel, &status);
    IG5A_F1_Get_SaveUpDownFrequencySelect(ctx, F1->SaveUpDownFrequencySelect, &status);
    IG5A_F1_Get_SaveUpDownFrequency(ctx, F1->SaveUpDownFrequency, &status);
    IG5A_F1_Get_UpDownModeSelect(ctx, F1->UpDownModeSelect, &status);
    IG5A_F1_Get_UpDownStepFrequency(ctx, F1->UpDownStepFrequency, &status);
    IG5A_F1_Get_DrawnRunModeSelect(ctx, F1->DrawnRunModeSelect, &status);
    IG5A_F1_Get_DrawRate(ctx, F1->DrawRate, &status);
}

void F1_dtor(F1_t *F1)
{
    //nothing to do
}

void IG5A_F1_Get_JumpCode(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_ForvardReverseRunDisable(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_AccelPattern(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DecelPattern(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_StopModeSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DCBrakeStartFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DCBrakeWaitTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DCBrakeVoltage(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DCBrakeTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DCBrakeStartVoltage(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DCBrakeStartTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_TimeForMegnatizingAMotor(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_JogFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_MaxFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_BaseFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_StartFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_FrequencyHighLowLimit(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_FrequencyHighLimit(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_FrequencyLowLimit(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_TorqueBoostSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_TorqueBoostInForvardDirection(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_TorqueBoostInReverseDirection(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_VFPattern(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFFrequency1(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFVoltage1(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFFrequency2(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFVoltage2(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFFrequency3(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFVoltage3(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFFrequency4(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UserVFVoltage4(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_OutputVoltageAdjustments(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_EnergySavingLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_ElectronicThermalSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_ElectronicThermalLevelFor1min(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_ElectronicThermalLevelForCont(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_MotorCoolingMethod(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_OverloadWarningLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_OverloadWarningTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_OverloadTripSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_OverloadTripLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_OverloadtripTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_StallPreventionSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_StallPreventionLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_StallPreventionDurDecVolLimSel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_SaveUpDownFrequencySelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_SaveUpDownFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UpDownModeSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_UpDownStepFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DrawnRunModeSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Get_DrawRate(modbus_t *ctx, uint16_t *value, int *status);

void IG5A_F1_Set_JumpCode(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_ForvardReverseRunDisable(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_AccelPattern(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DecelPattern(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_StopModeSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DCBrakeStartFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DCBrakeWaitTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DCBrakeVoltage(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DCBrakeTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DCBrakeStartVoltage(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DCBrakeStartTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_TimeForMegnatizingAMotor(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_JogFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_MaxFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_BaseFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_StartFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_FrequencyHighLowLimit(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_FrequencyHighLimit(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_FrequencyLowLimit(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_TorqueBoostSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_TorqueBoostInForvardDirection(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_TorqueBoostInReverseDirection(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_VFPattern(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFFrequency1(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFVoltage1(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFFrequency2(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFVoltage2(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFFrequency3(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFVoltage3(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFFrequency4(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UserVFVoltage4(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_OutputVoltageAdjustments(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_EnergySavingLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_ElectronicThermalSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_ElectronicThermalLevelFor1min(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_ElectronicThermalLevelForCont(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_MotorCoolingMethod(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_OverloadWarningLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_OverloadWarningTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_OverloadTripSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_OverloadTripLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_OverloadtripTime(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_StallPreventionSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_StallPreventionLevel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_StallPreventionDurDecVolLimSel(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_SaveUpDownFrequencySelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_SaveUpDownFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UpDownModeSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_UpDownStepFrequency(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DrawnRunModeSelect(modbus_t *ctx, uint16_t *value, int *status);
void IG5A_F1_Set_DrawRate(modbus_t *ctx, uint16_t *value, int *status);