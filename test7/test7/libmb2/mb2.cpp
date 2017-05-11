#include <stdio.h>
#include "mb1.h"
#include "mb2.h"
void mb2(const char* name)
{
    mb1(name);
    printf("mb2 is %s\n",name);
}
