/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 27 Aug 2023             *********************/
/************File name : BIT_MATH.h              *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

/*
Determine the source of the system clock
Your Options : RCC_HSE
               RCC_HSI
               RCC_PLL
*/
#define RCC_CLKSYS    RCC_PLL


#if RCC_CLKSYS   ==    RCC_HSE
/*Options for HSE CLOCK: HSE_RC
                         HSE_CRYSTAL
*/
#define RCC_HSECLK    HSE_RC

#endif  /*RCC_CLKSYS*/

/*Determine the source of PLL Clock 
  Options : HSI_PLL -> Its value is obligaly divided by 2
            HSE_PLL -> we have the option to divide it by 2 or not
*/
#define PLL_CLK_SRC    HSI_PLL

/*
    If the source of PLL Clock is HSE then we have the option to divide it by 2 or not
    Options : DIV_2
              NOT_DIV_2
*/
#if PLL_CLK_SRC == HSE_PLL

#define PLL_HSE_SRC   NOT_DIV_2

#endif

#define RCC_AHB                 0 /**< Advanced High-performance Bus (AHB) domain. */
#define RCC_APB1                1 /**< Advanced Peripheral Bus 1 (APB1) domain. */
#define RCC_APB2                2 /**< Advanced Peripheral Bus 2 (APB2) domain. */

#endif /*RCC_CONFIG_H_*/