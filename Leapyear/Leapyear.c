// This is the project to find Entered Year is leap year or not

#include <stdio.h>

int main(void)
{

	int year = 0;

	printf("Enter the Year you want to Know :");
	scanf("%d", &year);

	printf("\n");

	if (year % 4 == 0)
	{
		printf("Heyy the %d Year is leap Year", year);
	}
	else
	{
		printf("Heyy the %d Year is non leap Year", year);
	}

	getch();

	printf("\n");
}
