#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter your first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter your second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("The resultant matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}