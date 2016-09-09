#ifndef __TCALC_FUNC_SETS
#define __TCALC_FUNC_SETS
#include "F.h"
#include "dll.h"
#include <windows.h>

#pragma pack(push,1) 
//����(���ݸ���,���,����a,����b,����c)
typedef void(*pPluginFUNC)(int,float*,float*,float*,float*);

typedef struct tagPluginTCalcFuncInfo
{
	unsigned short		nFuncMark;//�������
	pPluginFUNC			pCallFunc;//������ַ
}PluginTCalcFuncInfo;

typedef int(*pRegisterPluginFUNC)(PluginTCalcFuncInfo**);  
#pragma pack(pop)


#ifdef __cplusplus
extern "C"
{
#endif //__cplusplus
	DLLIMPORT BOOL RegisterTdxFunc(PluginTCalcFuncInfo** pFun);
#ifdef __cplusplus
}
#endif

#endif //__TCALC_FUNC_SETS