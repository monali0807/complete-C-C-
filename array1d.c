// #include <stdio.h>
// int main()
// {
// 	int marks[10], sum = 0;
// 	printf("Enter the marks of 10 studends:\n");
// 	for (int i=0; i < 10; i++)
// 	{
// 		printf("The marks of %d student\n", i+1);
// 		scanf("%d", &marks[i]);
// 		sum += marks[i];
// 	}
// 	int average = sum / 10;
// 	printf("The average marks of 10 students is %d\n", average);
// 	return 0;
// }

 #include <stdio.h>
int main()
{
	int matrice[3][3];
	printf("This program will print matrice from (1-9)\n:");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Enter no. (1-9)");
			scanf("%d", &matrice[i][j]);
		}
	}
	printf("\n\n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", matrice[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\nso thats the matrice form of no. (1-9)");

	return 0;
}