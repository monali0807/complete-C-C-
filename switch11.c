#include<stdio.h>

int main()
{
    int a;
    printf("which subject u have passed\n");
    printf("for math press 1\nfor scince press 2\nfor science & math press 3\n");
    scanf("%d",&a);

    switch (a)
{
    case 1:
    printf("u got $15");
     break;
    case 2:
    printf("u got $25");
    break;
    case 3:
    printf("u got $45");
    break;
    default:
    printf("u got nothing");
}

return 0;
}