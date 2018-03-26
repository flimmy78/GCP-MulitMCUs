#ifndef __BS09_MAIN_PROC_H
#define __BS09_MAIN_PROC_H

#include "DataType/DataType.h"

#ifdef __cplusplus
extern "C" {
#endif


/*****************************************************************************
 * 售货机主任务相关控制接口
 ****************************************************************************/

/**
  * @brief  售货机初始化
  * @param  None
  * @retval None
  */
void BS09_Init(void);


/**
  * @brief  售货机主任务处理
  * @param  None
  * @retval None
  */
void BS09_MainProc(void);


#ifdef __cplusplus
}
#endif


#endif /* __BS09_MAIN_PROC_H */
