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


