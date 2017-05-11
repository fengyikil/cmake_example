#ifndef HELLO_H
#define HELLO_H
#if defined _WIN32
#ifdef USEDLL
#ifdef LIBHELLO_BUILD
#define LIBHELLO_API __declspec(dllexport)
#else
#define LIBHELLO_API __declspec(dllimport)
#endif
#else
#define LIBHELLO_API
#endif
#else
#define LIBHELLO_API
#endif
LIBHELLO_API void hello();
#endif



