#ifndef  __MD_HW_CFG_H
#define  __MD_HW_CFG_H

#include "DataType/DataType.h"

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * 硬件配置接口
 ****************************************************************************/

/**
  * @brief  系统硬件初始化
  * @param  None
  * @retval None
  */
void MD_HwInit(void);


/*****************************************************************************
 * 主线程LED显示接口
 ****************************************************************************/

/**
  * @brief  LED 流水灯循环
  * @param  None
  * @retval None
  */
void MD_ShowMainWorkLed(void);



/*****************************************************************************
 * 按键扫描线程接口
 ****************************************************************************/

/**
  * @brief  按键处理
  * @param  None
  * @retval None
  */
void MD_KeyProc(void);


#ifdef __cplusplus
}
#endif


#endif /* __MD_HW_CFG_H */
