#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[65] = "This content was produced by filefuntion.c";

    //***Reading a file***
    // ptr = fopen("file.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file is %s\n", string);
    /* ******In this file, we get our original content which is we write first ****** */

    //***Writing a file***
    // ptr = fopen("file.txt", "w");
    // fprintf(ptr, "%s", string);
    /* *****In this file, if we writs some new content in .txt file, it will reflect in .txt file and old content will dissapears. ***** */

    //***apending a file***
    ptr = fopen("file.txt", "a");
    fprintf(ptr, "%s", string);
    /* ******In this file, old content will as it is, also new content will appears. ***** */
    return 0;
}