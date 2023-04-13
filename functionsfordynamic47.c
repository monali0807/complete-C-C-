#include <stdio.h>
#include <stdlib.h>

//use of malloc
/*int main()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}*/


//use of calloc
int main()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));
     for (int i = 0; i < n; i++)
     {
         printf("Enter the value no %d of this array\n", i);
         scanf("%d", &ptr[i]);
     }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    //use of realloc...hera above code of calloc is included.
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr , n * sizeof(int));
     for (int i = 0; i < n; i++)
     {
         printf("Enter the value no %d of this array\n", i);
         scanf("%d", &ptr[i]);
     }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }


//use of free
    free(ptr);
    return 0;
}