/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 29 Aug 2023             *********************/
/************File name : GPIO_Interface.h        *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/
#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

#include "STD_TYPES.h"

STATE_RETURN_TYPE MCAL_SetPinDirection(u8, u8);

STATE_RETURN_TYPE MCAL_SetPinValue(u8, u8);

STATE_RETURN_TYPE MCAL_GetPinValue(u8, u8);

#endif