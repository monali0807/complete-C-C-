#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
     const float b = 7.333;
     //PI = 7.33; // cannot do this since PI is a constant
     printf("  tab character \t my backslash \a %f", PI);
    //b = 7.22; // cannot do this since b is a constant

    //printf("The value of a is %d and The value of b is %10.4f\n", a, b);
    //printf("%18.4f this\n", b);
    //TODAY'S DATE 26/07/22
    return 0;
}