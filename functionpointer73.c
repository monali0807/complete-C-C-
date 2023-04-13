#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
int greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
int greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
int greetGeAndExecute(int (*fptr)(int, int))
{
    printf("Good Eveining user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    greetGeAndExecute(ptr);
    return 0;
}