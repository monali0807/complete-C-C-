/*// Palindrome string or not
#include<stdio.h>
#include<string.h>

int Palindrome(char str[])
{
    char orignal_str[20];
    strcpy(orignal_str, str);
    strrev(str);

    if (strcmp(orignal_str, str) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char string[20];
    printf("\nEnter a string to check Palindrome string or not :- ");
    scanf("%s", &string);
    Palindrome(string);

    if (Palindrome(string))
    {
        printf("The string is a Palindrome.\n\n");
    }
    else
    {
        printf("The string is not a Palindrome.\n\n");
    }

    return 0;
}*/




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int abc;
int Palindrome(int n)
{
    int original, reversed = 0, remender;
    original = n;
    while (n > 0)
    {
        remender = n % 10;
        reversed = reversed * 10 + remender;
        n /= 10;
    }
    abc = reversed;

    if (original == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num, backup;
    printf("Enter the number which you want to chack for Palindrome\n");
    scanf("%d", &num);
    backup = Palindrome(num);
    if (backup == 1)
    {
        printf("The reverse of %d is %u\nSo the number is palindrome\n", num, abc);
    }
    else
    {
        printf("the reverse of %d is %u so The number is not a Palindrome no\n", num, abc);
    }

    return 0;
}