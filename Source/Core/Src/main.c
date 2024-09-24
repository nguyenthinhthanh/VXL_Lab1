/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */
void  display7SEG_13(int number);
void  display7SEG_24(int number);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void  display7SEG_13(int number){
	if(number == 0){
		/*Number 0 */
		HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_SET);
	}
	else if(number == 1){
		  /*Number 1 */
		  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_SET);


	}
	else if(number == 2){
		  /*Number 2 */
		  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_RESET);


	}
	else if(number == 3){
		/*Number 3 */
			  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 4){
		/*Number 4 */
			  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 5){
		  /*Number 5 */
		  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 6){
		 /*Number 6 */
			  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 7){
		/*Number 7 */
			  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_SET);
	}
	else if(number == 8){
		/*Number 8 */
			  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 9){
		/*Number 9 */
			  HAL_GPIO_WritePin(SEG13_A_GPIO_Port, SEG13_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_B_GPIO_Port, SEG13_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_C_GPIO_Port, SEG13_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_D_GPIO_Port, SEG13_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_E_GPIO_Port, SEG13_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG13_F_GPIO_Port, SEG13_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG13_G_GPIO_Port, SEG13_G_Pin, GPIO_PIN_RESET);
	}
	else{
		/*This is fault in number value > 9 || number value < 0*/
	}
}

void  display7SEG_24(int number){
	if(number == 0){
		/*Number 0 */
		HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_SET);
	}
	else if(number == 1){
		  /*Number 1 */
		  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_SET);


	}
	else if(number == 2){
		  /*Number 2 */
		  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_RESET);


	}
	else if(number == 3){
		/*Number 3 */
			  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 4){
		/*Number 4 */
			  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 5){
		  /*Number 5 */
		  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 6){
		 /*Number 6 */
			  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 7){
		/*Number 7 */
			  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_SET);
	}
	else if(number == 8){
		/*Number 8 */
			  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_RESET);
	}
	else if(number == 9){
		/*Number 9 */
			  HAL_GPIO_WritePin(SEG24_A_GPIO_Port, SEG24_A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_B_GPIO_Port, SEG24_B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_C_GPIO_Port, SEG24_C_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_D_GPIO_Port, SEG24_D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_E_GPIO_Port, SEG24_E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(SEG24_F_GPIO_Port, SEG24_F_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(SEG24_G_GPIO_Port, SEG24_G_Pin, GPIO_PIN_RESET);
	}
	else{
		/*This is fault in number value > 9 || number value < 0*/
	}
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  /*Status 0 : LED1,3 RED, LED2,4 GREEN*/
  /*Status 1 : LED1,3 RED, LED2,4 YELLOW*/
  /*Status 2 : LED1,3 GREEN, LED2,4 RED*/
  /*Status 3 : LED1,3 YELLOW, LED2,3 RED*/
  int status = 0;

  int led13_count = 5;		/*5s red first*/
  int led24_count = 3;		/*3s green first*/

  while (1)
  {
	  	  switch(status){
	  case 0 :
		  /*Status 0 : LED1,3 RED, LED2,4 GREEN*/
		  HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED3_RED_GPIO_Port, LED3_RED_Pin, GPIO_PIN_SET);

		  HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED4_GREEN_GPIO_Port, LED4_GREEN_Pin, GPIO_PIN_SET);

		  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED3_GREEN_GPIO_Port, LED3_GREEN_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED3_YELLOW_GPIO_Port, LED3_YELLOW_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED4_RED_GPIO_Port, LED4_RED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED4_YELLOW_GPIO_Port, LED4_YELLOW_Pin, GPIO_PIN_RESET);

		  display7SEG_13(led13_count);
		  display7SEG_24(led24_count);

		  led13_count = led13_count - 1;
		  led24_count = led24_count - 1;

		  if(led24_count <= 0){
			  status = 1;
			  led24_count = 2;   /*2s yellow*/
		  }

		  break;
	  case 1:
		  /*Status 1 : LED1,3 RED, LED2,4 YELLOW*/
		  HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED4_GREEN_GPIO_Port, LED4_GREEN_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED4_YELLOW_GPIO_Port, LED4_YELLOW_Pin, GPIO_PIN_SET);

		  display7SEG_13(led13_count);
		  display7SEG_24(led24_count);

		  led13_count = led13_count - 1;
		  led24_count = led24_count - 1;

		  if(led13_count <= 0){
			  status = 2;
			  led13_count = 3;	/*3s green*/
			  led24_count = 5;	/*5s red*/
		  }

		  break;
	  case 2:
		  /*Status 2 : LED1,3 GREEN, LED2,4 RED*/
		  HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED3_RED_GPIO_Port, LED3_RED_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED4_YELLOW_GPIO_Port, LED4_YELLOW_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED4_RED_GPIO_Port, LED4_RED_Pin, GPIO_PIN_SET);

		  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED3_GREEN_GPIO_Port, LED3_GREEN_Pin, GPIO_PIN_SET);

		  display7SEG_13(led13_count);
		  display7SEG_24(led24_count);

		  led13_count = led13_count - 1;
		  led24_count = led24_count - 1;

		  if(led13_count <= 0){
			  status = 3;
			  led13_count = 2;   /*2s yellow*/
		  }

		  break;
	  case 3:
		  /*Status 3 : LED1,3 YELLOW, LED2,4 RED*/
		  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED3_GREEN_GPIO_Port, LED3_GREEN_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED4_RED_GPIO_Port, LED4_RED_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED3_YELLOW_GPIO_Port, LED3_YELLOW_Pin, GPIO_PIN_SET);

		  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED4_RED_GPIO_Port, LED4_RED_Pin, GPIO_PIN_SET);

		  display7SEG_13(led13_count);
		  display7SEG_24(led24_count);

		  led13_count = led13_count - 1;
		  led24_count = led24_count - 1;

		  if(led24_count <= 0){
			  status = 0;
			  led13_count = 5;		/*5s red first*/
			  led24_count = 3;
		  }

		  break;
	  }



	  HAL_Delay(1000);


    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG13_A_Pin|SEG13_B_Pin|SEG13_C_Pin|SEG13_D_Pin
                          |SEG13_E_Pin|SEG13_F_Pin|SEG13_G_Pin|SEG24_A_Pin
                          |SEG24_B_Pin|SEG24_C_Pin|SEG24_D_Pin|SEG24_E_Pin
                          |SEG24_F_Pin|SEG24_G_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED1_RED_Pin|LED1_YELLOW_Pin|LED1_GREEN_Pin|LED4_YELLOW_Pin
                          |LED4_GREEN_Pin|LED2_RED_Pin|LED2_YELLOW_Pin|LED2_GREEN_Pin
                          |LED3_RED_Pin|LED3_YELLOW_Pin|LED3_GREEN_Pin|LED4_RED_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG13_A_Pin SEG13_B_Pin SEG13_C_Pin SEG13_D_Pin
                           SEG13_E_Pin SEG13_F_Pin SEG13_G_Pin SEG24_A_Pin
                           SEG24_B_Pin SEG24_C_Pin SEG24_D_Pin SEG24_E_Pin
                           SEG24_F_Pin SEG24_G_Pin */
  GPIO_InitStruct.Pin = SEG13_A_Pin|SEG13_B_Pin|SEG13_C_Pin|SEG13_D_Pin
                          |SEG13_E_Pin|SEG13_F_Pin|SEG13_G_Pin|SEG24_A_Pin
                          |SEG24_B_Pin|SEG24_C_Pin|SEG24_D_Pin|SEG24_E_Pin
                          |SEG24_F_Pin|SEG24_G_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED1_RED_Pin LED1_YELLOW_Pin LED1_GREEN_Pin LED4_YELLOW_Pin
                           LED4_GREEN_Pin LED2_RED_Pin LED2_YELLOW_Pin LED2_GREEN_Pin
                           LED3_RED_Pin LED3_YELLOW_Pin LED3_GREEN_Pin LED4_RED_Pin */
  GPIO_InitStruct.Pin = LED1_RED_Pin|LED1_YELLOW_Pin|LED1_GREEN_Pin|LED4_YELLOW_Pin
                          |LED4_GREEN_Pin|LED2_RED_Pin|LED2_YELLOW_Pin|LED2_GREEN_Pin
                          |LED3_RED_Pin|LED3_YELLOW_Pin|LED3_GREEN_Pin|LED4_RED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
