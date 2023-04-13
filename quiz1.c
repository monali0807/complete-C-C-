#include<stdio.h>
//maths and science = 45
//science = 15
//maths = 15
//print the type of gift you are giving to them
int main()
{
    int a;
    printf("Enter how many subjects you passed\n");
    printf("Enter 1 if you passed maths\n");
    printf("Enter 2 if you passed science\n");
    printf("Enter 3 if you passed both\n");
    scanf("%d", &a);
    if (a==3)
    {
        printf("You won 45");
    }
    else if (a==1||a==2)
    {
        printf("You won 15");
    }
    
    else{
        printf("You won nothing");
    }
    
    return 0;
}
