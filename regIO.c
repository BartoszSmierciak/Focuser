#include <stdint.h>

typedef struct
{
    uint16_t JumpCodeIOGroup;
    uint16_t NVInputMinVoltage;
    uint16_t FrequencyCorrespondingToL2;
    uint16_t NVInputMaxVoltage;
    uint16_t FrequencyCorrespondingToL4;
    uint16_t FilterTimeConstantForV1Input;
    uint16_t V1InputMinVoltage;
    uint16_t FrequencyCorrespondingToL7;
    uint16_t V1InputMaxVoltage;
    uint16_t FrequencyCorrespondingToL9;
    uint16_t FilterTimeConstantForIInput;
    uint16_t IInputMinCurrent;
    uint16_t FrequencyCorrespondingToL12;
    uint16_t iInputMaxCurrent;
    uint16_t FrequencyCorrenspondingToL14;
    uint16_t CriteriaForAnalogInpSignalLoss;
    uint16_t MultifunctInputTerminalP1Define;
    uint16_t MultifunctInputTerminalP2Define;
    uint16_t MultifunctInputTerminalP3Define;
    uint16_t MultifunctInputTerminalP4Define;
    uint16_t MultifunctInputTerminalP5Define;
    uint16_t MultifunctInputTerminalP6Define;
    uint16_t MultifunctInputTerminalP7Define;
    uint16_t MultifunctInputTerminalP8Define;
    uint16_t InputTerminalStatusDisplay;
    uint16_t OutputTerminalStatusDisplay;
    uint16_t FilterTConstMultiFunInpTerminal;
    uint16_t MultiStepFrequency4;
    uint16_t MultiStepFrequency5;
    uint16_t MultiStepFrequency6;
    uint16_t MultiStepFrequency7;
    uint16_t MultiAccelTime1;
    uint16_t MultiDecelTime1;
    uint16_t MultiAccelTime2;
    uint16_t MultiDecelTime2;
    uint16_t MultiAccelTime3;
    uint16_t MultiDecelTime3;
    uint16_t MultiAccelTime4;
    uint16_t MultiDecelTime4;
    uint16_t MultiAccelTime5;
    uint16_t MultiDecelTime5;
    uint16_t MultiAccelTime6;
    uint16_t MultiDecelTime6;
    uint16_t MultiAccelTime7;
    uint16_t MultiDecelTime7;
    uint16_t AnalogOutputItemSelect;
    uint16_t AnalogOutputLevelAdjustment;
    uint16_t FrequencyDetectionLevel;
    uint16_t FrequencyDetectionBandwith;
    uint16_t MultifuncOutputTerminalSelect;
    uint16_t MultifunctionRelaySelect;
    uint16_t FaultRelayOutput;
    uint16_t OutTermSelWhenCommErrorOccurs;
    uint16_t CommunicationProtocolSelect;
    uint16_t InverterNumber;
    uint16_t BaudRate;
    uint16_t DriveModeSelAfterLossOfFreqCmd;
    uint16_t WaitTimeAfterLossOfFreqCmd;
    uint16_t CommunicationTimeSetting;
    uint16_t ParityStopBitSetting;
    uint16_t ReadAddressRegister1;
    uint16_t ReadAddressRegister2;
    uint16_t ReadAddressRegister3;
    uint16_t ReadAddressRegister4;
    uint16_t ReadAddressRegister5;
    uint16_t ReadAddressRegister6;
    uint16_t ReadAddressRegister7;
    uint16_t ReadAddressRegister8;
    uint16_t WriteAddressRegister1;
    uint16_t WriteAddressRegister2;
    uint16_t WriteAddressRegister3;
    uint16_t WriteAddressRegister4;
    uint16_t WriteAddressRegister5;
    uint16_t WriteAddressRegister6;
    uint16_t WriteAddressRegister7;
    uint16_t WriteAddressRegister8;
    uint16_t BreakOpenCurrent;
    uint16_t BreakOpenDelayTime;
    uint16_t BrakeOpenFXFrequency;
    uint16_t BreakOpenRXFrequency;
    uint16_t BreakCloseDelayTime;
    uint16_t BreakCloseFrequency;
}IO_t;

IO_t* IO_new()
{
    return (IO_t*)malloc(sizeof(IO_t));
} 

void IO_ctor(IO_t* IO)
{
    IO->JumpCodeIOGroup = 0xA400;
    IO->NVInputMinVoltage = 0xA402;
    IO->FrequencyCorrespondingToL2 = 0xA403;
    IO->NVInputMaxVoltage = 0xA404;
    IO->FrequencyCorrespondingToL4 = 0xA405;
    IO->FilterTimeConstantForV1Input = 0xA406;
    IO->V1InputMinVoltage = 0xA407;
    IO->FrequencyCorrespondingToL7 = 0xA408;
    IO->V1InputMaxVoltage = 0xA409;
    IO->FrequencyCorrespondingToL9 = 0xA40A;
    IO->FilterTimeConstantForIInput = 0xA40B;
    IO->IInputMinCurrent = 0xA40C;
    IO->FrequencyCorrespondingToL12 = 0xA40D;
    IO->iInputMaxCurrent = 0xA40E;
    IO->FrequencyCorrenspondingToL14 = 0xA40F;
    IO->CriteriaForAnalogInpSignalLoss = 0xA410;
    IO->MultifunctInputTerminalP1Define = 0xA411;
    IO->MultifunctInputTerminalP2Define = 0xA412;
    IO->MultifunctInputTerminalP3Define = 0xA413;
    IO->MultifunctInputTerminalP4Define = 0xA414;
    IO->MultifunctInputTerminalP5Define = 0xA415;
    IO->MultifunctInputTerminalP6Define = 0xA416;
    IO->MultifunctInputTerminalP7Define = 0xA417;
    IO->MultifunctInputTerminalP8Define = 0xA418;
    IO->InputTerminalStatusDisplay = 0xA419;
    IO->OutputTerminalStatusDisplay = 0xA41A;
    IO->FilterTConstMultiFunInpTerminal = 0xA41B;
    IO->MultiStepFrequency4 = 0xA41E;
    IO->MultiStepFrequency5 = 0xA41F;
    IO->MultiStepFrequency6 = 0xA420;
    IO->MultiStepFrequency7 = 0xA421;
    IO->MultiAccelTime1 = 0xA422;
    IO->MultiDecelTime1 = 0xA423;
    IO->MultiAccelTime2 = 0xA424;
    IO->MultiDecelTime2 = 0xA425;
    IO->MultiAccelTime3 = 0xA426;
    IO->MultiDecelTime3 = 0xA427;
    IO->MultiAccelTime4 = 0xA428;
    IO->MultiDecelTime4 = 0xA429;
    IO->MultiAccelTime5 = 0xA42A;
    IO->MultiDecelTime5 = 0xA42B;
    IO->MultiAccelTime6 = 0xA42C;
    IO->MultiDecelTime6 = 0xA42D;
    IO->MultiAccelTime7 = 0xA42E;
    IO->MultiDecelTime7 = 0xA42F;
    IO->AnalogOutputItemSelect = 0xA432;
    IO->AnalogOutputLevelAdjustment = 0xA433;
    IO->FrequencyDetectionLevel = 0xA434;
    IO->FrequencyDetectionBandwith = 0xA435;
    IO->MultifuncOutputTerminalSelect = 0xA436;
    IO->MultifunctionRelaySelect = 0xA437;
    IO->FaultRelayOutput = 0xA438;
    IO->OutTermSelWhenCommErrorOccurs = 0xA439;
    IO->CommunicationProtocolSelect = 0xA43B;
    IO->InverterNumber = 0xA43C;
    IO->BaudRate = 0xA43D;
    IO->DriveModeSelAfterLossOfFreqCmd = 0xA43E;
    IO->WaitTimeAfterLossOfFreqCmd = 0xA43F;
    IO->CommunicationTimeSetting = 0xA440;
    IO->ParityStopBitSetting = 0xA441;
    IO->ReadAddressRegister1 = 0xA442;
    IO->ReadAddressRegister2 = 0xA443;
    IO->ReadAddressRegister3 = 0xA444;
    IO->ReadAddressRegister4 = 0xA445;
    IO->ReadAddressRegister5 = 0xA446;
    IO->ReadAddressRegister6 = 0xA447;
    IO->ReadAddressRegister7 = 0xA448;
    IO->ReadAddressRegister8 = 0xA449;
    IO->WriteAddressRegister1 = 0xA44A;
    IO->WriteAddressRegister2 = 0xA44B;
    IO->WriteAddressRegister3 = 0xA44C;
    IO->WriteAddressRegister4 = 0xA44D;
    IO->WriteAddressRegister5 = 0xA44E;
    IO->WriteAddressRegister6 = 0xA44F;
    IO->WriteAddressRegister7 = 0xA450;
    IO->WriteAddressRegister8 = 0xA451;
    IO->BreakOpenCurrent = 0xA452;
    IO->BreakOpenDelayTime = 0xA453;
    IO->BrakeOpenFXFrequency = 0xA454;
    IO->BreakOpenRXFrequency = 0xA455;
    IO->BreakCloseDelayTime = 0xA456;
    IO->BreakCloseFrequency = 0xA457;
}

void IO_dtor(IO_t* IO)
{
    //nothing to do
}