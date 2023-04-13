//*************GENERATE RANDOM NUMBER*************

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int main()
{
    printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
int greater(char char1, char char2)
{
    // For rock, paper, scissor - returns 1 if char1>char2 otherwise 0. if char1==char2 returns -1
    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
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
    printf("Welcome to the Rock, Paper, Scissors\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input
        printf("player 1's turn:\n");
        printf("choose 1 for Rock, 2 for Paper, 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You chose %c\n", playerchar);

        // Generate computer's input
        printf("computer's turn:\n");
        printf("choose 1 for Rock, 2 for Paper, 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose %c\n", compchar);

        // compare the scores
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
        printf("YOU :%d\nCPU :%d\n", playerscore, compscore);
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
