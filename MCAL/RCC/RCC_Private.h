/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 27 Aug 2023             *********************/
/************File name : BIT_MATH.h              *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/


#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#include "STD_TYPES.h"

#define RCC_CR_REG            (*((volatile u32 *)0x4002 1000))
#define RCC_CFGR_REG          (*((volatile u32 *)0x4002 1004))
#define RCC_CIR_REG           (*((volatile u32 *)0x4002 1008))
#define RCC_APB2RSTR_REG      (*((volatile u32 *)0x4002 100C))
#define RCC_APB1RSTR_REG      (*((volatile u32 *)0x4002 1010))
#define RCC_AHBENR_REG        (*((volatile u32 *)0x4002 1014))
#define RCC_APB2ENR_REG       (*((volatile u32 *)0x4002 1018))
#define RCC_APB1ENR_REG       (*((volatile u32 *)0x4002 101C))
#define RCC_BDCR_REG          (*((volatile u32 *)0x4002 1020))
#define RCC_CSR_REG           (*((volatile u32 *)0x4002 1024))

/*RCC_CR_REG BITS*/
#define HSION_BIT         0
#define HSIRDY_BIT        1
#define HSEON_BIT        16
#define HSERDY_BIT       17
#define HSEBYP_BIT       18 
#define PLLON_BIT        24
#define PLLRDY_BIT       25

/*RCC_CFGR_REG BITS*/
#define SW_BIT0           0
#define SW_BIT0           1
#define PLLSRC_BIT       16
#define PLLXTPRE_BIT     17
  
#define RCC_HSE           0
#define RCC_HSI           1
#define RCC_PLL           2

/*Options for HSE CLOCK*/
#define HSE_RC            0
#define HSE_CRYSTAL       1

/*Options for PLL CLOCK source*/
#define HSI_PLL           0
#define HSE_PLL           1

/*Options for HSE prescalar as PLL source clock*/
#define  NOT_DIV_2        0
#define  DIV_2            1


#endif /*RCC_PRIVATE_H_*/