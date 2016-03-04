#ifndef _KD_CAMERA_HW_H_
#define _KD_CAMERA_HW_H_


#include <mach/mt_gpio.h>
#include <mach/mt_pm_ldo.h>
#include "pmic_drv.h"

//
//Analog
#define CAMERA_POWER_VCAM_A         PMIC_APP_MAIN_CAMERA_POWER_A
//Digital
#define CAMERA_POWER_VCAM_D         PMIC_APP_MAIN_CAMERA_POWER_D
//AF
#define CAMERA_POWER_VCAM_A2        PMIC_APP_MAIN_CAMERA_POWER_AF
//digital io
#define CAMERA_POWER_VCAM_D2        PMIC_APP_MAIN_CAMERA_POWER_IO
//Digital for Sub
#define SUB_CAMERA_POWER_VCAM_D     PMIC_APP_SUB_CAMERA_POWER_D


//FIXME, should defined in DCT tool
//Main sensor
#define GPIO_CAMERA_CMRST_PIN         GPIO10
#define CAMERA_CMRST_PIN            GPIO_CAMERA_CMRST_PIN
#define CAMERA_CMRST_PIN_M_GPIO     GPIO_CAMERA_CMRST_PIN_M_GPIO

#define GPIO_CAMERA_CMPDN_PIN         GPIO11
#define CAMERA_CMPDN_PIN            GPIO_CAMERA_CMPDN_PIN
#define CAMERA_CMPDN_PIN_M_GPIO     GPIO_CAMERA_CMPDN_PIN_M_GPIO

//FRONT sensor
#define GPIO_CAMERA_CMRST1_PIN         GPIO14
#define CAMERA_CMRST1_PIN           GPIO_CAMERA_CMRST1_PIN
#define CAMERA_CMRST1_PIN_M_GPIO    GPIO_CAMERA_CMRST1_PIN_M_GPIO

#define GPIO_CAMERA_CMPDN1_PIN         GPIO15
#define CAMERA_CMPDN1_PIN           GPIO_CAMERA_CMPDN1_PIN
#define CAMERA_CMPDN1_PIN_M_GPIO    GPIO_CAMERA_CMPDN1_PIN_M_GPIO

//Main2 sensor
#define CAMERA_CMRST2_PIN           GPIO_CAMERA_CMRST_PIN
#define CAMERA_CMRST2_PIN_M_GPIO    GPIO_CAMERA_CMRST_PIN_M_GPIO

#define CAMERA_CMPDN2_PIN           GPIO_CAMERA_CMPDN_PIN
#define CAMERA_CMPDN2_PIN_M_GPIO    GPIO_CAMERA_CMPDN_PIN_M_GPIO

// Define I2C Bus Num
#define SUPPORT_I2C_BUS_NUM1        0
#define SUPPORT_I2C_BUS_NUM2        2
#endif