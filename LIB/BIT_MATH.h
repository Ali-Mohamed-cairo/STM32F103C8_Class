/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 27 Aug 2023             *********************/
/************File name : BIT_MATH.h              *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_



#define SET_BIT(REG, BIT_NUM)        REG |=  (1 << BIT_NUM)
#define CLR_BIT(REG, BIT_NUM)        REG &= ~(1 << BIT_NUM)
#define TOG_BIT(REG, BIT_NUM)        REG ^=  (1 << BIT_NUM)
#define GET_BIT(REG, BIT_NUM)        ((REG &(1 << BIT_NUM))>>BIT_NUM)





#endif /*BIT_MATH_H_*/