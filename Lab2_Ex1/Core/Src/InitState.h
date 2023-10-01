/*
 * InitState.h
 *
 *  Created on: Oct 1, 2023
 *      Author: Heathcliff
 */

#ifndef SRC_INITSTATE_H_
#define SRC_INITSTATE_H_

void initState()
{
  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
  display7SEG(1);
}

#endif /* SRC_INITSTATE_H_ */
