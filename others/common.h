
/**
* windows 动态库、静态库兼容写法模板。
* windows 编译动态库时 开 SPACE_USE_DLL SPACE_DLL_BUILD 这两个宏，使用方 开SPACE_USE_DLL这一个宏，静态库无需管宏。
* 其它系统也无需管宏。
*/
.h 文件

#ifndef COMMON_H
#define COMMON_H
#if defined _WIN32
#ifdef SPACE_USE_DLL  //动态库
#ifdef SPACE_DLL_BUILD
#define SPACE_API __declspec(dllexport)
#else
#define SPACE_API __declspec(dllimport)
#endif
#else //静态库
#define SPACE_API
#endif
#else
#define SPACE_API
#endif
extern SPACE_API void hello();
extern SPACE_API int global_var;
#endif //COMMON_H

.cpp 文件

#include<stdio.h>
#include "hello.h"
SPACE_API int global_var;
SPACE_API void hello()
{
    global_var =199999;
    printf("hello world\n");
}


