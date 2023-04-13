#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("You can vote");
    }
    else if (age >= 10)
    {
        printf("You can vote for kids");
    }
    else if (age > 3)
    {
        printf("You cannot vote for kids");
    }

    else
    {
        printf("You cannot vote!");
    }

    return 0;
}

// maths and science = 45
// science = 15
// maths = 15
// print the type of gift you are givinh to them