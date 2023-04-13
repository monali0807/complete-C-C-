#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[35];
} harry, ravi, shubham;

void print()
{
    printf("%s", harry.name);
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 76;
    shubham.marks = 65;
    harry.fav_char = 'p';
    ravi.fav_char = 'o';
    shubham.fav_char = 's';
    strcpy(harry.name, "Harry Potter");
    strcpy(ravi.name, "Ravi Kumar");
    strcpy(shubham.name, "Shubham Desai");
    printf("The id of harry is %d\n", harry.id);
    printf("The id of ravi is %d\n", ravi.id);
    printf("The id of shubham is %d\n", shubham.id);
    printf("Harry got %d marks\n", harry.marks);
    printf("ravi got %d marks\n", ravi.marks);
    printf("shubham got %d marks\n", shubham.marks);
    printf("Harry's name is : %s\n", harry.name);
    printf("ravi's name is : %s\n", ravi.name);
    printf("shubham's name is : %s\n", shubham.name);
    printf("harry's favorite character is : %c\n", harry.fav_char);
    printf("ravi's favorite character is : %c\n", ravi.fav_char);
    printf("shubham's favorite character is : %c\n", shubham.fav_char);
    print();
    return 0;
}