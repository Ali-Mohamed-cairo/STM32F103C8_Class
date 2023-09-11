/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 29 Aug 2023             *********************/
/************File name : GPIO_Private.h          *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/
#ifndef   GPIO_PRIVATE_H_
#define   GPIO_PRIVATE_H_

#define GPIO_PORTA_BASE_ADDRESS    0x4001 0800
#define GPIO_PORTB_BASE_ADDRESS    0x4001 0C00
#define GPIO_PORTC_BASE_ADDRESS    0x4001 1000

/*********************PORTA REGEISTERS START*************************/
#define GPIOA_CRL_REG  (*((u32 volatile *)GPIO_PORTA_BASE_ADDRESS + 0x00))
#define GPIOA_CRH_REG  (*((u32 volatile *)GPIO_PORTA_BASE_ADDRESS + 0x04))
#define GPIOA_IDR_REG  (*((u32 volatile *)GPIO_PORTA_BASE_ADDRESS + 0x08))
#define GPIOA_ODR_REG  (*((u32 volatile *)GPIO_PORTA_BASE_ADDRESS + 0x0C))
#define GPIOA_BSRR_REG (*((u32 volatile *)GPIO_PORTA_BASE_ADDRESS + 0x10))
#define GPIOA_BRR_REG  (*((u32 volatile *)GPIO_PORTA_BASE_ADDRESS + 0x14))
#define GPIOA_LCKR_REG (*((u32 volatile *)GPIO_PORTA_BASE_ADDRESS + 0x18))
/*********************PORTA REGEISTERS END*************************/


/*********************PORTB REGEISTERS START*************************/
#define GPIOA_CRL_REG  (*((u32 volatile *)GPIO_PORTB_BASE_ADDRESS + 0x00))
#define GPIOA_CRH_REG  (*((u32 volatile *)GPIO_PORTB_BASE_ADDRESS + 0x04))
#define GPIOA_IDR_REG  (*((u32 volatile *)GPIO_PORTB_BASE_ADDRESS + 0x08))
#define GPIOA_ODR_REG  (*((u32 volatile *)GPIO_PORTB_BASE_ADDRESS + 0x0C))
#define GPIOA_BSRR_REG (*((u32 volatile *)GPIO_PORTB_BASE_ADDRESS + 0x10))
#define GPIOA_BRR_REG  (*((u32 volatile *)GPIO_PORTB_BASE_ADDRESS + 0x14))
#define GPIOA_LCKR_REG (*((u32 volatile *)GPIO_PORTB_BASE_ADDRESS + 0x18))
/*********************PORTB REGEISTERS END*************************/


/*********************PORTB REGEISTERS START*************************/
#define GPIOA_CRL_REG  (*((u32 volatile *)GPIO_PORTC_BASE_ADDRESS + 0x00))
#define GPIOA_CRH_REG  (*((u32 volatile *)GPIO_PORTC_BASE_ADDRESS + 0x04))
#define GPIOA_IDR_REG  (*((u32 volatile *)GPIO_PORTC_BASE_ADDRESS + 0x08))
#define GPIOA_ODR_REG  (*((u32 volatile *)GPIO_PORTC_BASE_ADDRESS + 0x0C))
#define GPIOA_BSRR_REG (*((u32 volatile *)GPIO_PORTC_BASE_ADDRESS + 0x10))
#define GPIOA_BRR_REG  (*((u32 volatile *)GPIO_PORTC_BASE_ADDRESS + 0x14))
#define GPIOA_LCKR_REG (*((u32 volatile *)GPIO_PORTC_BASE_ADDRESS + 0x18))
/*********************PORTB REGEISTERS END*************************/


#endif