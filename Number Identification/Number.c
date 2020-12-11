// This is the project for tell Positive or Negative or Neutral number

#include<stdio.h>

int main(void)
{

	int k=0;

	printf("Heyy... \nEnter any Real number..: ");
	scanf("%d",&k);

	printf("\n");

	if (k>0)
	{
		printf("Entered Number is Positive");
		printf("\nThe number is %d",k);
	} else if (k<0)
	{
		printf("Entered Number is Negative");
		printf("\nThe number is %d",k);
	} else if (k=0)
	{
		printf("Entered number is \"ZERO\"");
		printf("\nAnd it is Know as Neutral");
	} else
	{
		printf("It is not a Real Number.");
	}

	int getch(void);

	printf("\n");

	return 0;
}
