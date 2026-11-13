/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f7xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VISEN_1_Pin GPIO_PIN_2
#define VISEN_1_GPIO_Port GPIOA
#define VISEN_2_Pin GPIO_PIN_3
#define VISEN_2_GPIO_Port GPIOA
#define Encoder_A_2_Pin GPIO_PIN_6
#define Encoder_A_2_GPIO_Port GPIOA
#define Encoder_B_2_Pin GPIO_PIN_7
#define Encoder_B_2_GPIO_Port GPIOA
#define NSLEEP_HB_1_Pin GPIO_PIN_7
#define NSLEEP_HB_1_GPIO_Port GPIOE
#define Encoder_A_1_Pin GPIO_PIN_9
#define Encoder_A_1_GPIO_Port GPIOE
#define NSLEEP_HB_2_Pin GPIO_PIN_10
#define NSLEEP_HB_2_GPIO_Port GPIOE
#define Encoder_B_1_Pin GPIO_PIN_11
#define Encoder_B_1_GPIO_Port GPIOE
#define MO1_IN1_Pin GPIO_PIN_12
#define MO1_IN1_GPIO_Port GPIOD
#define MO1_IN2_Pin GPIO_PIN_13
#define MO1_IN2_GPIO_Port GPIOD
#define MO2_IN1_Pin GPIO_PIN_14
#define MO2_IN1_GPIO_Port GPIOD
#define MO2_IN2_Pin GPIO_PIN_15
#define MO2_IN2_GPIO_Port GPIOD
#define BT_EN_Pin GPIO_PIN_4
#define BT_EN_GPIO_Port GPIOB
#define BT_STATE_Pin GPIO_PIN_5
#define BT_STATE_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
