/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define BTN1_Pin GPIO_PIN_2
#define BTN1_GPIO_Port GPIOA
#define BTN1_EXTI_IRQn EXTI2_IRQn
#define BTN2_Pin GPIO_PIN_3
#define BTN2_GPIO_Port GPIOA
#define BTN2_EXTI_IRQn EXTI3_IRQn
#define BTN3_Pin GPIO_PIN_4
#define BTN3_GPIO_Port GPIOA
#define BTN3_EXTI_IRQn EXTI4_IRQn
#define BTN4_Pin GPIO_PIN_5
#define BTN4_GPIO_Port GPIOA
#define BTN4_EXTI_IRQn EXTI9_5_IRQn
#define BTN5_Pin GPIO_PIN_10
#define BTN5_GPIO_Port GPIOB
#define BTN5_EXTI_IRQn EXTI15_10_IRQn
#define BTN6_Pin GPIO_PIN_11
#define BTN6_GPIO_Port GPIOB
#define BTN6_EXTI_IRQn EXTI15_10_IRQn
#define BTN7_Pin GPIO_PIN_12
#define BTN7_GPIO_Port GPIOB
#define BTN7_EXTI_IRQn EXTI15_10_IRQn
#define BTN8_Pin GPIO_PIN_13
#define BTN8_GPIO_Port GPIOB
#define BTN8_EXTI_IRQn EXTI15_10_IRQn
#define BTN9_Pin GPIO_PIN_14
#define BTN9_GPIO_Port GPIOB
#define BTN9_EXTI_IRQn EXTI15_10_IRQn
#define BTN10_Pin GPIO_PIN_15
#define BTN10_GPIO_Port GPIOB
#define BTN10_EXTI_IRQn EXTI15_10_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
