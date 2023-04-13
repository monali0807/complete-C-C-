#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 'p'))
    {
        return 0;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the game\n");
    for (int i = 0; i < 3; i++)
    {
        printf("player 1's tuen\n");
        printf("choose 1 for Rock, 2 for Paper, 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You chose %c\n", playerchar);

        printf("computer's turn\n");
        printf("choose 1 for Rock, 2 for Paper, 3 for Scissor\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("computer chose %c\n", compchar);

        if (greater(playerchar, compchar) == 1)
        {
            playerscore += 1;
            printf("You got it!\n");
        }
        else if (greater(playerchar, compchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("It's a draw!\n");
        }
        else
        {
            compscore += 1;
            printf("CPU got it!\n");
        }
        printf("You :%d\nCPU :%d\n", playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("You win the game\n");
    }
    else if (playerscore < compscore)
    {
        printf("CPU win the game\n");
    }
    else
    {
        printf("It's a draw\n");
    }

    return 0;
}