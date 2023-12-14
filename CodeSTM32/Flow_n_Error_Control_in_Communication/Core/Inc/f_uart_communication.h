/*
 * f_uart_communication.h
 *
 *  Created on: Dec 13, 2023
 *      Author: Vy Nguyen
 */

#ifndef INC_F_UART_COMMUNICATION_H_
#define INC_F_UART_COMMUNICATION_H_

#include "main.h"
#include "f_timer.h"
#include "stdio.h"
#include "stdlib.h"
#include "f_global.h"
#include "f_command_parser.h"

void uart_communication_fsm(ADC_HandleTypeDef hadc1,
					UART_HandleTypeDef huart2);

#endif /* INC_F_UART_COMMUNICATION_H_ */
