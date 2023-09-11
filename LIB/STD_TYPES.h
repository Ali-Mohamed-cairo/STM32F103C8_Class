/*********************************************************************/
/************Author    : Ali Mohamed Mohamed Said*********************/
/************Date      : 27 Aug 2023             *********************/
/************File name : STD_Types.h             *********************/
/************Version   : 0.1                     *********************/
/*********************************************************************/

#ifndef STD_TYPES_H_
#define STD_TYPES_H_


typedef  unsigned char           u8;
typedef  unsigned char          u16;
typedef  unsigned int           u32;
typedef  unsigned long long     u64;

typedef  signed char            s8;
typedef  signed char           s16;
typedef  signed int            s32;
typedef  signed long long      s64;

typedef  float                  f8;
typedef  double                f32;
typedef  long double           f64;


typedef u8              STATE_RETURN_TYPE;
#define E_OK           (STATE_RETURN_TYPE)1
#define E_NOT_OK       (STATE_RETURN_TYPE)0




#endif   /*STD_TYPES_H_*/