#include<stdio.h>
#if defined(TEST_DEF)
void test_def()
 {
     printf("TEST_DEF ON\n");
 }
#else
void test_def()
{
    printf("TEST_DEF OFF\n");
}
#endif

int main()
{
    test_def();
    while (1) {

    }
    return 0;
}
