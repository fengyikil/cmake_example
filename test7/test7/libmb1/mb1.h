#ifndef DBZHANG_MB1_
#define DBZHANG_MB1_
#if defined _WIN32
    #if LIBMB1_BUILD
        #define LIBMB1_API __declspec(dllexport)
    #else
        #define LIBMB1_API __declspec(dllimport)
    #endif
#else
    #define LIBMB1_API
#endif
LIBMB1_API void mb1(const char* name);
#endif //DBZHANG_MB1_
