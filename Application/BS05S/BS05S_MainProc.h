#ifndef __BS05S_MAIN_PROC_H
#define __BS05S_MAIN_PROC_H

#include "DataType/DataType.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  格子柜相关资源初始化
  * @param  None
  * @retval None
  */
void BS05S_Init(void);


/**
  * @brief  格子柜主任务处理
  * @param  None
  * @retval None
  */
void BS05S_MainProc(void);

#ifdef __cplusplus
}
#endif


#endif /* __BS05S_MAIN_PROC_H */
