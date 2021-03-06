#ifndef __APPLICATION_H
#define __APPLICATION_H


#if defined(BOOTLOADER)
#include "Application/Bootloader/BT_MainProc.h"
#endif

#if defined(GCP_APP)
#include "Application/GCPTest/GCP_MainProc.h"
#include "Application/GCPTest/GCP_AppVersion.h"
#elif defined(CN_APP)
#include "Application/CNMachine/CN_MainProc.h"
#include "Application/CNMachine/CN_AppVersion.h"
#elif defined(BS01_APP)
#include "Application/BS01/BS01_MainProc.h"
#include "Application/BS01/BS01_AppVersion.h"
#elif defined(BS02_APP)
#include "Application/BS02/BS02_MainProc.h"
#include "Application/BS02/BS02_AppVersion.h"
#elif defined(BS03_APP)
#include "Application/BS03/BS03_MainProc.h"
#include "Application/BS03/BS03_AppVersion.h"
#elif defined(BS04_APP)
#include "Application/BS04/BS04_MainProc.h"
#include "Application/BS04/BS04_AppVersion.h"
#elif defined(BS05M_APP)
#include "Application/BS05M/BS05M_MainProc.h"
#include "Application/BS05M/BS05M_AppVersion.h"
#elif defined(BS05S_APP)
#include "Application/BS05S/BS05S_MainProc.h"
#include "Application/BS05S/BS05S_AppVersion.h"
#elif defined(BS08M_APP)
#include "Application/BS08M/BS08M_MainProc.h"
#include "Application/BS08M/BS08M_AppVersion.h"
#elif defined(BS08S_APP)
#include "Application/BS08S/BS08S_MainProc.h"
#include "Application/BS08S/BS08S_AppVersion.h"
#elif defined(BS09_APP)
#include "Application/BS09/BS09_MainProc.h"
#include "Application/BS09/BS09_AppVersion.h"
#elif defined(WB01_APP)
#include "Application/WB01/WB01_MainProc.h"
#include "Application/WB01/WB01_AppVersion.h"
#endif




#if defined(BOOTLOADER)
#define APP_Init()          BT_Init()
#define APP_MainProc()      BT_MainProc()

#elif defined(GCP_APP)
#define APP_Init()          GCP_Init()
#define APP_MainProc()      GCP_MainProc()

#elif defined(CN_APP)
#define APP_Init()          CN_Init()
#define APP_MainProc()      CN_MainProc()

#elif defined(WFC_APP)
#define APP_Init()          WFC_Init()
#define APP_MainProc()      WFC_MainProc()

#elif defined(MD_APP)
#define APP_Init()          MD_Init()
#define APP_MainProc()      MD_MainProc()

#elif defined(LC_APP)
#define APP_Init()          LC_Init()
#define APP_MainProc()      LC_MainProc()

#elif defined(BMC_APP)
#define APP_Init()          BMC_Init()
#define APP_MainProc()      BMC_MainProc()

#elif defined(IRB_APP)
#define APP_Init()          IRB_Init()
#define APP_MainProc()      IRB_MainProc()

#elif defined(BS01_APP)
#define APP_Init()          BS01_Init()
#define APP_MainProc()      BS01_MainProc()

#elif defined(BS02_APP)
#define APP_Init()          BS02_Init()
#define APP_MainProc()      BS02_MainProc()

#elif defined(BS03_APP)
#define APP_Init()          BS03_Init()
#define APP_MainProc()      BS03_MainProc()

#elif defined(BS04_APP)
#define APP_Init()          BS04_Init()
#define APP_MainProc()      BS04_MainProc()

#elif defined(BS05M_APP)
#define APP_Init()          BS05M_Init()
#define APP_MainProc()      BS05M_MainProc()

#elif defined(BS05S_APP)
#define APP_Init()          BS05S_Init()
#define APP_MainProc()      BS05S_MainProc()

#elif defined(BS08M_APP)
#define APP_Init()          BS08M_Init()
#define APP_MainProc()      BS08M_MainProc()

#elif defined(BS08S_APP)
#define APP_Init()          BS08S_Init()
#define APP_MainProc()      BS08S_MainProc()

#elif defined(BS09_APP)
#define APP_Init()          BS09_Init()
#define APP_MainProc()      BS09_MainProc()

#elif defined(WB01_APP)
#define APP_Init()          WB01_Init()
#define APP_MainProc()      WB01_MainProc()

#else 
#define APP_Init()   
#define APP_MainProc()

#endif


#endif /* __APPLICATION_H */
