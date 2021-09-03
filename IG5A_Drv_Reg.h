#include <stdint.h>

//Drv Registers
#define IG5A_Drv_Reg_FrequencyCommand                ((uint16_t) 0xA100)
#define IG5A_Drv_Reg_AccelTime                       ((uint16_t) 0xA101)
#define IG5A_Drv_Reg_DecelTime                       ((uint16_t) 0xA102)
#define IG5A_Drv_Reg_DriveMode                       ((uint16_t) 0xA103)
#define IG5A_Drv_Reg_FrequencySettingMethod          ((uint16_t) 0xA104)
#define IG5A_Drv_Reg_MultiStepFreq1                  ((uint16_t) 0xA105)
#define IG5A_Drv_Reg_MultiStepFreq2                  ((uint16_t) 0xA106)
#define IG5A_Drv_Reg_MultiStepFreq3                  ((uint16_t) 0xA107)
#define IG5A_Drv_Reg_OutputCurrent                   ((uint16_t) 0xA108)
#define IG5A_Drv_Reg_MotorRPM                        ((uint16_t) 0xA109)
#define IG5A_Drv_Reg_InverterDCLinkVoltage           ((uint16_t) 0xA10A)
#define IG5A_Drv_Reg_UserDisplaySelect               ((uint16_t) 0xA10B)
#define IG5A_Drv_Reg_FaultDisplay                    ((uint16_t) 0xA10C)
#define IG5A_Drv_Reg_DirectionOfMotorRotationSelect  ((uint16_t) 0xA10D)
#define IG5A_Drv_Reg_DriveMode2                      ((uint16_t) 0xA10E)
#define IG5A_Drv_Reg_FrequencySettingMethod2         ((uint16_t) 0xA10F)
#define IG5A_Drv_Reg_PIDControlStandardValueSetting  ((uint16_t) 0xA110)
#define IG5A_Drv_Reg_PIDControlFeedbackAmount        ((uint32_t) 0xA111)

