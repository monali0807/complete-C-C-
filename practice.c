#include <stdio.h>

int b=34;
int func1(int b1)
{
    static int myvar;
    myvar++;
    printf("The value of myvar is %d\n", myvar);
    //printf("The value of b inside func1 is %d\n", b);
    //printf("The value of b inside func1 is %d\n", &b);
    return b1+myvar ;
}
int main()
{
    int b=344;
    //printf("The value of b inside main is %d\n", &b);
    int val=func1(b);
    val=func1(b);
     val=func1(b);
       val=func1(b);
    int *ptr= &val;
    printf("The value of func1 is %d", val);
    return 0;
}