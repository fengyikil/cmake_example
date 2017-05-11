#ifndef DBZHANG_MB2_
#define DBZHANG_MB2_
#if defined _WIN32
    #if LIBMB2_BUILD
        #define LIBMB2_API __declspec(dllexport)
    #else
        #define LIBMB2_API __declspec(dllimport)
    #endif
#else
    #define LIBMB2_API
#endif
LIBMB2_API void mb2(const char* name);
#endif //DBZHANG_MB2_
