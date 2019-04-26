/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define STEPPER_1_Pin GPIO_PIN_0
#define STEPPER_1_GPIO_Port GPIOC
#define STEPPER_2_Pin GPIO_PIN_1
#define STEPPER_2_GPIO_Port GPIOC
#define STEPPER_3_Pin GPIO_PIN_2
#define STEPPER_3_GPIO_Port GPIOC
#define STEPPER_4_Pin GPIO_PIN_3
#define STEPPER_4_GPIO_Port GPIOC
#define SENSOR_Pin GPIO_PIN_4
#define SENSOR_GPIO_Port GPIOC
#define SERVO_Pin GPIO_PIN_5
#define SERVO_GPIO_Port GPIOC
#define BUT_1_Pin GPIO_PIN_0
#define BUT_1_GPIO_Port GPIOB
#define BUT_2_Pin GPIO_PIN_1
#define BUT_2_GPIO_Port GPIOB
#define BUT_3_Pin GPIO_PIN_2
#define BUT_3_GPIO_Port GPIOB
#define BUT_4_Pin GPIO_PIN_10
#define BUT_4_GPIO_Port GPIOB
#define BUT_INT_Pin GPIO_PIN_11
#define BUT_INT_GPIO_Port GPIOB
#define LCD_DB4_Pin GPIO_PIN_12
#define LCD_DB4_GPIO_Port GPIOB
#define LCD_DB5_Pin GPIO_PIN_13
#define LCD_DB5_GPIO_Port GPIOB
#define LCD_DB6_Pin GPIO_PIN_14
#define LCD_DB6_GPIO_Port GPIOB
#define LCD_DB7_Pin GPIO_PIN_15
#define LCD_DB7_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_6
#define LCD_RS_GPIO_Port GPIOC
#define LCD_E_Pin GPIO_PIN_7
#define LCD_E_GPIO_Port GPIOC
#define VALVE_3_Pin GPIO_PIN_8
#define VALVE_3_GPIO_Port GPIOC
#define LCD_LIGHT_GROUND_Pin GPIO_PIN_9
#define LCD_LIGHT_GROUND_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_8
#define LED_GPIO_Port GPIOA
#define PUMP_Pin GPIO_PIN_9
#define PUMP_GPIO_Port GPIOA
#define LEVEL_SENSOR_Pin GPIO_PIN_10
#define LEVEL_SENSOR_GPIO_Port GPIOA
#define VALVE_1_Pin GPIO_PIN_11
#define VALVE_1_GPIO_Port GPIOA
#define VALVE_2_Pin GPIO_PIN_12
#define VALVE_2_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
