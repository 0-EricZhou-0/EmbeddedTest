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
#include "stm32f4xx_hal.h"

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
#define LedA_Pin GPIO_PIN_8
#define LedA_GPIO_Port GPIOG
#define LedB_Pin GPIO_PIN_7
#define LedB_GPIO_Port GPIOG
#define LedC_Pin GPIO_PIN_6
#define LedC_GPIO_Port GPIOG
#define LedD_Pin GPIO_PIN_5
#define LedD_GPIO_Port GPIOG
#define LedE_Pin GPIO_PIN_4
#define LedE_GPIO_Port GPIOG
#define LedF_Pin GPIO_PIN_3
#define LedF_GPIO_Port GPIOG
#define LedG_Pin GPIO_PIN_2
#define LedG_GPIO_Port GPIOG
#define Btn_Pin GPIO_PIN_2
#define Btn_GPIO_Port GPIOB
#define LedH_Pin GPIO_PIN_1
#define LedH_GPIO_Port GPIOG
#define LedRed_Pin GPIO_PIN_11
#define LedRed_GPIO_Port GPIOE
#define LedGreen_Pin GPIO_PIN_14
#define LedGreen_GPIO_Port GPIOF
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
