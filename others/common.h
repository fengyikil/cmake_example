
/**
* windows ��̬�⡢��̬�����д��ģ�塣
* windows ���붯̬��ʱ �� SPACE_USE_DLL SPACE_DLL_BUILD �������꣬ʹ�÷� ��SPACE_USE_DLL��һ���꣬��̬������ܺꡣ
* ����ϵͳҲ����ܺꡣ
*/
.h �ļ�

#ifndef COMMON_H
#define COMMON_H
#if defined _WIN32
#ifdef SPACE_USE_DLL  //��̬��
#ifdef SPACE_DLL_BUILD
#define SPACE_API __declspec(dllexport)
#else
#define SPACE_API __declspec(dllimport)
#endif
#else //��̬��
#define SPACE_API
#endif
#else
#define SPACE_API
#endif
extern SPACE_API void hello();
extern SPACE_API int global_var;
#endif //COMMON_H

.cpp �ļ�

#include<stdio.h>
#include "hello.h"
SPACE_API int global_var;
SPACE_API void hello()
{
    global_var =199999;
    printf("hello world\n");
}


