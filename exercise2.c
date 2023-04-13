/*
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
*/
#include<stdio.h>
int main()
{
    char(input);
    float(kmsTomiles)=0.621;
    float(inchesTofoot)=0.0833;
    float(cmsToinches)=0.394;
    float(poundTokgs)=0.454;
    float(inchesTometers)=0.0254;
    float first, second;

while (1)
{
    printf("Enter the input character. q to quit\n 1.kms to miles\n  2.inches to foot\n  3.cms to inches\n  4.pound to kgs\n  5.inches to meters\n ");
    scanf("%c", &input);

    switch (input)
    {
    case 'q':
    printf("Quitting the program...");
    goto end;
        break;

        case '1':
        printf("Enter the quantity in terms of first unit\n\n\n");
        scanf("%f", &first);
        second=first*kmsTomiles;
        printf("%f kms is equal to %f miles\n\n\n", first, second);
        break;

        case '2':
        printf("Enter the quantity in terms of first unit\n\n\n");
        scanf("%f", &first);
        second=first*inchesTofoot;
        printf("%f inches is equal to %f foot\n", first, second);
        break;

        case '3':
        printf("Enter the quantity in terms of first unit\n\n\n");
        scanf("%f", &first);
        second=first*cmsToinches;
        printf("%f cms is equal to %f inches\n", first, second);
        break;

        case '4':
        printf("Enter the quantity in terms of first unit\n\n\n");
        scanf("%f", &first);
        second=first*poundTokgs;
        printf("%f pound is equal to %f kgs\n", first, second);
        break;

        case '5':
        printf("Enter the quantity in terms of first unit\n\n\n");
        scanf("%f", &first);
        second=first*inchesTometers;
        printf("%f inches is equal to %f meters\n", first, second);
        break;
    
    default:
    printf("In default now");
        break;
    }
    
}
end :

return 0;
}