// Exercise5

// #include <stdio.h>

// void arrayRev(arg1)
//  {
//  }
//  int main()
//  {
//      int arr[] = {1, 2, 3, 4, 5, 6, 67};

//      return 0;
//  }

// Solution:
// 1ST METHOD:

// #include <stdio.h>

// void arrayRev(int arr[])
// {
//     int temp;
//     for (int i = 0; i < 7/2; i++)
//     {
//       temp = arr[i];
//       arr[i] = arr[6-i];
//       arr[6-i] = temp;  
//     }
    
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,67};
//     printf("\nBefore reversing the array\n");
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The value of element %d is %d\n", i, arr[i]);
//     }
//     arrayRev(arr);
//     printf("\nAfter reversing the array\n");
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The value of element %d is %d\n", i, arr[i]);
//     }
    
//     return 0;
// }

// 2ND METHOD:
#include <stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
      temp = arr[i];
      arr[i] = arr[6-i];
      arr[6-i] = temp;  
    }
    
}
void arrayPrint(int arr[])
{
for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("\nBefore reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);
    return 0;
}