/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
#define SERVO0_Pin GPIO_PIN_3
#define SERVO0_GPIO_Port GPIOA
#define SERVO1_Pin GPIO_PIN_4
#define SERVO1_GPIO_Port GPIOA
#define SERVO2_Pin GPIO_PIN_5
#define SERVO2_GPIO_Port GPIOA
#define SERVO3_Pin GPIO_PIN_6
#define SERVO3_GPIO_Port GPIOA
#define SERVO4_Pin GPIO_PIN_7
#define SERVO4_GPIO_Port GPIOA
#define SERVO5_Pin GPIO_PIN_8
#define SERVO5_GPIO_Port GPIOA
#define SERVO6_Pin GPIO_PIN_9
#define SERVO6_GPIO_Port GPIOA
#define SERVO7_Pin GPIO_PIN_10
#define SERVO7_GPIO_Port GPIOA
#define SERVO8_Pin GPIO_PIN_11
#define SERVO8_GPIO_Port GPIOA
#define SERVO9_Pin GPIO_PIN_12
#define SERVO9_GPIO_Port GPIOA
#define SERVO10_Pin GPIO_PIN_0
#define SERVO10_GPIO_Port GPIOB
#define SERVO11_Pin GPIO_PIN_1
#define SERVO11_GPIO_Port GPIOB
#define SERVO12_Pin GPIO_PIN_2
#define SERVO12_GPIO_Port GPIOB
#define SERVO13_Pin GPIO_PIN_3
#define SERVO13_GPIO_Port GPIOB
#define SERVO14_Pin GPIO_PIN_4
#define SERVO14_GPIO_Port GPIOB
#define SERVO15_Pin GPIO_PIN_5
#define SERVO15_GPIO_Port GPIOB
#define SERVO16_Pin GPIO_PIN_10
#define SERVO16_GPIO_Port GPIOB
#define SERVO17_Pin GPIO_PIN_11
#define SERVO17_GPIO_Port GPIOB
#define SERVO18_Pin GPIO_PIN_12
#define SERVO18_GPIO_Port GPIOB
#define SERVO19_Pin GPIO_PIN_13
#define SERVO19_GPIO_Port GPIOB
#define SERVO20_Pin GPIO_PIN_14
#define SERVO20_GPIO_Port GPIOB
#define SERVO21_Pin GPIO_PIN_15
#define SERVO21_GPIO_Port GPIOB
#define SERVO22_Pin GPIO_PIN_13
#define SERVO22_GPIO_Port GPIOC
#define SERVO23_Pin GPIO_PIN_14
#define SERVO23_GPIO_Port GPIOC
#define SERVO24_Pin GPIO_PIN_15
#define SERVO24_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
