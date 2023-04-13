//CODE OF CALL BY VALUE:

#include <stdio.h>
// function defination to swap the values
void swap(int *x, int *y)
{
    int temp;
    temp = *x;   // save the value at adress x
    *x = *y;  // put y into x
    *y = temp;   // put temp into y
}
int main()
{
    int a = 34, b = 74;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}

//CODE OF CALL BY REFERENCE:
// #include <stdio.h>
// void changeValue(int *adress)
// {
//     *adress = 345;
// }
// int main()
// {
//     int a = 34, b = 56;
//     printf("The value of a now is %d\n", a);
//     changeValue(&a);
//     printf("The value of a now is %d\n", a);
//     return 0;
// }