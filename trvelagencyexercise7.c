#include <stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

struct Driver 
{
char name[34];
char dlno[45];
char route[74];
int kms;
};

int main()
{
struct Driver d1,d2,d3;
printf("Enetr the details of the driver\n");
printf("Enetr the name of the first driver\n");
scanf("%s", &d1.name);

printf("Enetr the dlno of the first driver\n");
scanf("%s", &d1.dlno);

printf("Enetr the route of the first driver\n");
scanf("%s", &d1.route);

printf("Enetr the no of kms of the first driver\n");
scanf("%d", &d1.kms);

printf("Enetr the name of the second driver\n");
scanf("%s", &d2.name);

printf("Enetr the dlno of the second driver\n");
scanf("%s", &d2.dlno);

printf("Enetr the route of the second driver\n");
scanf("%s", &d2.route);

printf("Enetr the no of kms of the second driver\n");
scanf("%d", &d2.kms);

printf("Enetr the name of the third driver\n");
scanf("%s", &d3.name);

printf("Enetr the dlno of the third driver\n");
scanf("%s", &d3.dlno);

printf("Enetr the route of the third driver\n");
scanf("%s", &d3.route);

printf("Enetr the no of kms of the third driver\n");
scanf("%d", &d3.kms);

printf("***printing information of these drivers***\n");
printf("For driver no 1: name is %s\n", d1.name);
printf("dlno is %s\n", d1.dlno);
printf("route is %s\n", d1.route);
printf("The kms is %d\n", d1.kms);

printf("For driver no 2: name is %s\n", d2.name);
printf("dlno is %s\n", d2.dlno);
printf("route is %s\n", d2.route);
printf("The kms is %d\n", d2.kms);

printf("For driver no 3: name is %s\n", d3.name);
printf("dlno is %s\n", d3.dlno);
printf("route is %s\n", d3.route);
printf("The kms is %d\n", d3.kms);
    return 0;
}


//USING FOR LOOP:
#include<stdio.h>
#include<string.h>
struct driver
{
    char name[50];
    char licence_no[5];
    char route[50];
    int kms;    
}data[2];

int main()  
{
    int i,n;
    printf("Enter Number Of drivers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the name of the driver --> ");
        scanf("%s",&data[i].name);

        printf("enter the Licence number of the driver--> ");
        scanf("%s",&data[i].licence_no);
        
        printf("enter the Route of the driver--> ");
        scanf("%s",&data[i].route);

        printf("enter the km covered by the driver--> ");
        scanf("%d",&data[i].kms);
    }
    printf("*************driver details are**********\n");
    for(i=0;i<n;i++)
      {
                
            printf("Driver %d details are---> \n", i+1);

            printf("Name: %s\n", data[i].name);
            printf("Licence No: %s\n", data[i].licence_no); 
            printf("Route Assigned: %s\n", data[i].route);
            printf("Distanace covered by driver %d is  :%d\n",i+1,data[i].kms);
            printf("\n");

      }
   
  return 0;

}
