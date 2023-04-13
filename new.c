#include<stdio.h>

int main()
{
    int i, sum=0;
    printf("The first 15 natural numbers are:");
    for ( i = 1; i <=15; i++)
    {
       sum=sum+i;
       printf("%d\n", i);
    }
    printf("The sum is %d\n", sum);
    
    return 0;
}
