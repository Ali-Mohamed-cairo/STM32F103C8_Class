/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 27 Aug 2023             *********************/
/************File name : BIT_MATH.h              *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/

#include "RCC_Interface.h"
#include "RCC_Private.h"
#include "RCC_Config.h"

STATE_RETURN_TYPE MCAL_RCC_InitSysClock(void)
{
    /*Choose the source of the system clock*/
    #if RCC_CLKSYS == RCC_HSE

        /*Choose the source of HSE clock which will be the system clock*/
        #if RCC_HSECLK == HSE_RC
        SET_BIT(RCC_CR_REG, HSEBYP_BIT);

        #elif RCC_HSECLK == HSE_CRYSTAL
        CLR_BIT(RCC_CR_REG, HSEBYP_BIT);

        #else
            #error "Wrong choice in RCC_HSE" 
        #endif   /*RCC_HSECLK*/

        /*Enable the HSE*/
        SET_BIT(RCC_CR_REG, HSEON_BIT);

        /*Waiting for the HSE Clock to get ready*/
        while( !(GET_BIT(RCC_CR_REG, HSERDY_BIT))); 

        /*Set the HSE as the system clock*/
        SET_BIT(RCC_CFGR_REG, SW_BIT0);
        CLR_BIT(RCC_CFGR_REG, SW_BIT1);

    #elif RCC_CLKSYS == RCC_HSI

        /*Enable the HSI*/
        SET_BIT(RCC_CR_REG, HSION_BIT);

        /*Waiting for the HSI Clock to get ready*/
        while( !(GET_BIT(RCC_CR_REG, HSIRDY_BIT)));

         /*Set the HSI as the system clock*/
        CLR_BIT(RCC_CFGR_REG, SW_BIT0);
        CLR_BIT(RCC_CFGR_REG, SW_BIT1);

    #elif RCC_CLKSYS == RCC_PLL
        /*Determine the source of PLL Clock*/
        #if PLL_CLK_SRC == HSI_PLL
        CLR_BIT(RCC_CR_REG ,PLLSRC_BIT);

        #elif   PLL_CLK_SRC == HSE_PLL
            SET_BIT(RCC_CR_REG ,PLLSRC_BIT);
            #if PLL_HSE_SRC == NOT_DIV_2
                CLR_BIT(RCC_CFGR_REG, PLLXTPRE_BIT);
             #elif PLL_HSE_SRC == DIV_2
                SET_BIT(RCC_CFGR_REG, PLLXTPRE_BIT);
            #endif

        #else
            #error "Wrong choice in RCC_PLL" 
        #endif /*PLL_CLK_SRC*/

        /*Enable the PLL*/
        SET_BIT(RCC_CR_REG, PLLON_BIT);

        /*Waiting for the HSE Clock to get ready*/
        while( !(GET_BIT(RCC_CR_REG, HSERDY_BIT)));

         /*Set the PLL as the system clock*/
        CLR_BIT(RCC_CFGR_REG, SW_BIT0);
        SET_BIT(RCC_CFGR_REG, SW_BIT1);

    #else
        #error "Wrong choice in MCAL_RCC_InitSysClock"

    #endif  /*RCC_CLKSYS*/

    return;
}
STATE_RETURN_TYPE MCAL_RCC_EnablePrephiral(u8 Copy_BusId, u8 Copy_PeripheralId)
{ STATE_RETURN_TYPE Local_FunctionStatus = E_NOT_OK;

    switch(Copy_BusId)
    {
        /**< Enable the peripheral on the AHB bus. */
        case RCC_AHB:
            SET_BIT(RCC_AHBENR_REG, Copy_PeripheralId);
            Local_FunctionStatus = E_OK;
            break;

        /**< Enable the peripheral on the APB1 bus. */
        case RCC_APB1:
            SET_BIT(RCC_APB1ENR_REG, Copy_PeripheralId);
            Local_FunctionStatus = E_OK;
            break;

        /**< Enable the peripheral on the APB2 bus. */
        case RCC_APB2:
            SET_BIT(RCC_APB2ENR_REG, Copy_PeripheralId);
            Local_FunctionStatus = E_OK;
            break;

        default:
            Local_FunctionStatus = E_NOT_OK;
            break;
    }
    return Local_FunctionStatus;
}
STATE_RETURN_TYPE Mcal_Rcc_DisablePeripheral(u8 Copy_BusId, u8 Copy_PeripheralId)
{
    STATE_RETURN_TYPE Local_FunctionStatus = E_NOT_OK;

    switch(Copy_BusId)
    {
        /**< Disable the peripheral on the AHB bus. */
        case RCC_AHB:
            CLR_BIT(RCC_AHBENR_REG, Copy_PeripheralId);
            Local_FunctionStatus = E_OK;
            break;

        /**< Disable the peripheral on the APB1 bus. */
        case RCC_APB1:
            CLR_BIT(RCC_APB1ENR_REG, Copy_PeripheralId);
            Local_FunctionStatus = E_OK;
            break;

        /**< Disable the peripheral on the APB2 bus. */
        case RCC_APB2:
            CLR_BIT(RCC_APB2ENR_REG, Copy_PeripheralId);
            Local_FunctionStatus = E_OK;
            break;

        default:
            Local_FunctionStatus = E_NOT_OK;
            break;
    }

    return Local_FunctionStatus;
}