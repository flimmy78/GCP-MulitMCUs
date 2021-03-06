/**
  ******************************************************************************
  * @file    SYS_Init.c
  * @author  Duhanfneg
  * @version V1.0
  * @date    2017.11.08
  * @brief   System some model initialize
  ******************************************************************************
  * @attention
  * 
  * 
  * 
  * 
  ******************************************************************************
  */
  
/***********************************<INCLUDES>**********************************/
#include "SYS_Init.h"
#include "SYS_Ctrl.h"
#include "SysConfig.h"
#include "SYS_ParmMan.h"
#include "DataType/DataType.h"

#include "SysPeripheral/SysTimer/SysTimer.h"
#include "SysPeripheral/CoreCtrl/CoreCtrl.h"
#include "SysPeripheral/IRQ/IRQ_Man.h"
#include "SysPeripheral/GPIO/GPIO_Man.h"
#include "SysUpdate/SysUpdate.h"
#include <stdlib.h>

#if SYS_FULL_CMU_USAGE
#include "SYS_CmuConfig.h"
#include "CMU/CMU_Interface.h"
#elif SYS_SIMP_CMU_USAGE
#include "SYS_CmuConfig.h"
#include "CMU/Simplify/CMU_Interface.h"
#include "CMU/Simplify/CMU_DataStructDef.h"
#endif

#if SYS_CNC_USAGE
#include "SYS_CncConfig.h"
#include "CNC/CNCSYS/CNCSYS_Interface.h"
#endif
      
#if SYS_BOOT_USAGE
#include "CMU/Simplify/CMU_CmdProcess.h"
#include "SysUpdate/Bootloader.h"
#endif


/*****************************************************************************
 * 系统初始化相关接口
 ****************************************************************************/


/**
  * @brief  系统初始化
  * @param  None
  * @retval 0-成功 非0-失败
  */
uBit32 SYS_Init(void)
{
    //上电延时
    SysTime_SimpleDelay(60000);
    
    //初始化中断接口
    IRQ_Init();
    
    //开总中断
    CoreCtrl_EnableIRQ();
    
    //初始化系统时钟
    SysTime_Init(1);
    
    //初始化系统参数
    SYS_InitSysParm();
    
    //初始化Bootloader
    SYS_UPDATE_Init();
    
#if SYS_BOOT_USAGE
    //跳转到APP
    SYS_UPDATE_JumToApp();
#endif
    
    //初始化CMU
#if (SYS_FULL_CMU_USAGE) || (SYS_SIMP_CMU_USAGE)
    SYS_InitCMU();
#endif
    
    //初始化CNC
#if SYS_CNC_USAGE
    SYS_InitCNC();
#endif
    
    return 0;
}


/*****************************************************************************
 * 系统主任务线程处理相关接口
 ****************************************************************************/

/**
  * @brief  系统主任务处理
  * @param  None
  * @retval None
  */
void SYS_MainTaskHandler(void)
{
    //IO状态更新处理
    GPIO_MAN_UpdateProc();
    
    //内核复位管理
    CoreCtrl_ResetHandler();
    
    //CMU管理
#if (SYS_FULL_CMU_USAGE) || (SYS_SIMP_CMU_USAGE)
    CMU_MainProc();
#endif
    
    //CNC管理
#if SYS_CNC_USAGE
    CNCSYS_MainCtrl();
#endif
    
}

