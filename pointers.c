#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a = 75;
    int *ptra = &a;
    int *ptr2;
    //int *ptr2 = NULL;
    printf("The adress of pointer to a is %p\n", &ptra);
    printf("The adress of a is %p\n", &a);
    printf("The adress of a is %p\n", ptra);
    //printf("The adress of some garbage is %p\n", ptr2);
    printf("The adress of some garbage is %p\n", ptr2);
    printf("The adress of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    return 0;
}
