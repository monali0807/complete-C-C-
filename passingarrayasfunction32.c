/*//THIS CODE IS ABOUT "DECLRING FUNCTION WITH ARRAY AS A PARAMETER"
#include <stdio.h>
int func1(int array[])
{
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[2]=328; //very important point is that if you change the value here it gets reflected in main()
}
int main()
{
    int arr[]={31,12,23,11};
    printf("The value at index 2 is %d\n", arr[2]);
    func1(arr);
    printf("The value at index 2 is %d\n", arr[2]);
    return 0;
}*/

/*//THIS CODE IS ABOUT "DECLARING FUNCTION WITH POINTER IN THE PARAMATER"
#include <stdio.h>
int func1(int array[])
{
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    return 0;
}
void func2(int* ptr)
{
   for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    } 
    *(ptr+2)=5674;
}
int main()
{
    int arr[]={31,12,23,11};
    func2(arr);
    func2(arr);
    return 0;
}*/

#include <stdio.h>
int func1(int array[])
{
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    return 0;
}
void func2(int* ptr)
{
   for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    } 
    *(ptr+2)=5674;
}

void func3(int arr[2][2])
{
   for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d ,%d is %d\n", i, j, arr[i][j]);
        }   
    }  
}
int main()
{
    int arr[][2]={{2,4},{5,8}};
   func3(arr);
    return 0;
}