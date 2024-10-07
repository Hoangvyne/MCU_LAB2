/*
 * control_matrix.c
 *
 *  Created on: 3 thg 10, 2024
 *      Author: Hoang Vy
 */
#include "control_matrix.h"

int index_led_matrix = 0;
uint8_t matrix_buffer [8] = {0x18,0x24,0x42,0x42,0x7e,0x42,0x42,0x42};

void displayLedMatrix(int row, int col){
	int shift = 1;

	if(row == 0){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 1){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 2){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 3){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 4){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 5){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 6){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 7){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_RESET);


		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

}




void updateLedMatrix(int index){
	switch(index){
	case 0:
		displayLedMatrix(0, matrix_buffer[0]);
		break;
	case 1:
		displayLedMatrix(1, matrix_buffer[1]);
		break;
	case 2:
		displayLedMatrix(2, matrix_buffer[2]);
		break;
	case 3:
		displayLedMatrix(3, matrix_buffer[3]);
		break;
	case 4:
		displayLedMatrix(4, matrix_buffer[4]);
		break;
	case 5:
		displayLedMatrix(5, matrix_buffer[5]);
		break;
	case 6:
		displayLedMatrix(6, matrix_buffer[6]);
		break;
	case 7:
		displayLedMatrix(7, matrix_buffer[7]);
		break;
	default:
		break;
	}
}
void updateMatrix_buffer(){
	matrix_buffer[0] = (matrix_buffer[0] << 1) | (matrix_buffer[0] >> 7);
	matrix_buffer[1] = (matrix_buffer[1] << 1) | (matrix_buffer[1] >> 7);
	matrix_buffer[2] = (matrix_buffer[2] << 1) | (matrix_buffer[2] >> 7);
	matrix_buffer[3] = (matrix_buffer[3] << 1) | (matrix_buffer[3] >> 7);
	matrix_buffer[4] = (matrix_buffer[4] << 1) | (matrix_buffer[4] >> 7);
	matrix_buffer[5] = (matrix_buffer[5] << 1) | (matrix_buffer[5] >> 7);
	matrix_buffer[6] = (matrix_buffer[6] << 1) | (matrix_buffer[6] >> 7);
	matrix_buffer[7] = (matrix_buffer[7] << 1) | (matrix_buffer[7] >> 7);
}
