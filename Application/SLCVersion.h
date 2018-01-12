/**
  ******************************************************************************
  * @file    GCPVersion.h
  * @author  Duhanfneg
  * @version V1.0
  * @date    2017.11.29
  * @brief   
  ******************************************************************************
  * @attention
  * 
  * 当前版本: SJ40_0_11_R
  * 
  * 系统版本: SJ40_0_11_R
  * 修改时间: 2018.01.12
  * 修改描述: 1.将CMU浮点数放大因子从10000改成100,避免数值放大过大而产生溢出;
  *           硬件版本为:GC10_0_11_D;
  * 
  * 系统版本: SJ40_0_10_R
  * 修改时间: 2018.01.10
  * 修改描述: 1.增加取货门锁保护机制;
  * 
  * 系统版本: SJ40_0_9_R
  * 修改时间: 2018.01.10
  * 修改描述: 1.去掉零点寻找时的抱闸信号控制;
  * 
  * 系统版本: SJ40_0_8_R
  * 修改时间: 2018.01.10
  * 修改描述: 1.修正零点寻找的参数,加上零点偏移功能以防止零点太下;
  * 
  * 系统版本: SJ40_0_7_R
  * 修改时间: 2018.01.09
  * 修改描述: 1.解决通信错误的BUG;
  * 
  * 系统版本: SJ40_0_6_R
  * 修改时间: 2018.01.09
  * 修改描述: 1.将升降平台的零点搜寻逻辑放在下位机之中实现;
  *           2.同步更新GCP中CMU相关接口,硬件版本为:GC10_0_10_D;
  * 
  * 系统版本: SJ40_0_5_R
  * 修改时间: 2017.12.27
  * 修改描述: 1.将货道电机超时时间从5S改成3.5S
  * 
  * 系统版本: SJ40_0_4_R
  * 修改时间: 2017.12.20
  * 修改描述: 1.增加温度采集接口
  * 
  * 系统版本: SJ40_0_3_D
  * 修改时间: 2017.12.19
  * 修改描述: 1.实现其Bootloader V2.0支持
  * 
  * 系统版本: SJ40_0_2_D
  * 修改时间: 2017.12.18
  * 修改描述: 1.基本实现售货机的功能,包括货道电机限位检测,升降电机限位检测,脉冲
  *             当量配置接口等;
  *  
  * 系统版本: SJ40_0_1_D
  * 修改时间: 2017.12.06
  * 修改描述: 1.初步搭建好通用控制平台工程,实现基本的CNC以及CMU功能,实现基本的
  *             IO控制以及电机控制.
  * 
  ******************************************************************************
  */
  
/***********************************<INCLUDES>**********************************/

#ifndef __SCL_VERSION_H
#define __SCL_VERSION_H

//APP版本定义
#define APP_VER_STR                     "SJ40XXXD"      //项目版本
#define APP_VER_NO0                     (0)             //大版本号
#define APP_VER_NO1                     (11)            //小版本号
#define APP_VER_PART                    (0)             //组件号(预留)
#define APP_VER_FLAG                    'R'             //版本标示


#endif /* __SCL_VERSION_H */
