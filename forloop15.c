#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    for (; i < 5;)
    {
        printf("%d %d\n", i, j);
        i++, j++;
    }

    return 0;
}
