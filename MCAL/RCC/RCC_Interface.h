/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 27 Aug 2023             *********************/
/************File name : BIT_MATH.h              *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/


#ifndef  RCC_INTERFACE_H_
#define  RCC_INTERFACE_H_

#include "BIT_MATH.h"
#include "STD_TYPES.h"

STATE_RETURN_TYPE MCAL_RCC_InitSysClock(void);
STATE_RETURN_TYPE MCAL_RCC_EnablePrephiral(void);
STATE_RETURN_TYPE MCAL_RCC_DisablePrephiral(void);



#endif   /*RCC_INTERFACE_H_*/