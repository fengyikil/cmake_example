#include<stdio.h>
#include "hello.h"
SPACE_API int global_var;
SPACE_API void hello()
{
    global_var =199999;
    printf("hello world\n");
}



