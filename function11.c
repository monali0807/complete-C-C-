// "FUNCTION 1: With argument and with return value"
/*#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 35;
    int b = 15;
    int c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
}*/

//"FUNCTION 2: With argument without return value"
// #include <stdio.h>
// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }

// }
// int main()
// {
//     printstar(10);
//     return 0;
// }

//"FUNCTION 3: Without argument and with return value"
// #include <stdio.h>
// int takenumber()
// {
//     int i;
//     printf("Enter a number");
//     scanf("%d", &i);
//     return i;
// }
// int main()
// {
//     int c = takenumber();
//     printf("The number entered is %d\n", c);
//     return 0;
// }

//"FUNCTION 4: Without argument and without return value"
#include <stdio.h>
void number_printer()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("The num entered is %d", a);
}
int main()
{
    number_printer();
    return 0;
}