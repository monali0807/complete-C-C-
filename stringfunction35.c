#include <stdio.h>
#include <string.h>

// int main()
// {
//     char s1[]="harry";
//     char s2[]="aavi";
//     char s3[54];
//     printf("The strcmp for s1, s2 returned %d", strcmp(s1, s2));
//     // puts(strcat(s1, s2));
//     // printf("The length of s1 is %d\n", strlen(s1));
//     // printf("The length of s2 is %d\n", strlen(s2));
//     // printf("The reversed string s1 is:");
//     // puts(strrev(s1));
//     // printf("The reversed string s2 is:");
//     // puts(strrev(s2));

//     // strcpy(s3, strcat(s1, s2));
//     // puts(s3);
//     return 0;
// }

// QUICK QUIZ
// Allow user to enter two strings and concatenate them by saying that str1 is a friend of str2

int main()
{
    char s1[30];
    char s2[30];
    printf("Enter first string\n");
    gets(s1);
    printf("Enter second string\n");
    gets(s2);
    printf("%s is a friend of %s\n", s1, s2);
    printf("\n Now combine all strings using strcat() function\n");
    printf(strcat(s1, s2));

    return 0;
}