#include <stdio.h>

int b = 34; // This is a global variable since it is declared inside main()

int func1(int b1)
{
    static int myvar = 45;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d", val);
    return 0;
}

/*//THIS IS PRACTICE ...PLEASE TRY TO RUN THIS CODE, HERE INTRODUCTION OF LOCAL, GLOBAL AND FORMAL PARAMETERS
#include <stdio.h>

int b=34;
int func1(int b1)
{
    printf("The value of b inside func1 is %d\n", b);
    //printf("The value of b inside func1 is %d\n", &b);
    return b1*10 ;
}
int main()
{
    int b=344;
    //printf("The value of b inside main is %d\n", &b);
    int val=func1(b);
    int *ptr= &val;
    printf("The value of func1 is %d", val);
    return 0;
}*/


//INTRODUCTION OF STATIC VARIABLES
/*
#include<stdio.h>

int b=34;
int func1(int b1)
{
    static int myvar;  //If we not initialize any value then static variable initializes variable by 0.so we have to take some value to static variable. Also static variable does not allow to call a direct function because it has to run the program before runtime, means it has to store memory blocksbefore run. so needs integer values only.
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
    return 0;*/