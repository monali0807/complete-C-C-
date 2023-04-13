#include <stdio.h>
int main()
{
    int a = 345;
    float b = 7.8;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    return 0;
}  