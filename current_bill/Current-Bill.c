//This is the project done for Current bill

#include<stdio.h>

int main(void)
{

	float bill;
	int lmr,pmr,uc;
	lmr=pmr=uc=bill=0;

	printf("Enter your Previous Month Reading..: ");
	scanf("%d",&lmr);

	printf("Enter your Present Month Reading...: ");
	scanf("%d",&pmr);

	uc=pmr-lmr;

	if (uc>=500)
	{
		bill=uc*4.80;

		printf("\nThe Rate per one Unit is Rs.4.80\n");
		printf("Total Units Consumed in this Month is.: %d Units\n",uc);
		printf("Your Bill Amount for Current Month.: Rs.%.2f",bill);
	}
	 else
	{
		bill=uc*3.50;

		printf("\nThe Rate per one Unit is Rs.3.50\n");
		printf("Total Units Consumed in this Month is.: %d Units\n",uc);
		printf("Your Bill Amount for Current Month.: Rs.%.2f",bill);
	}

	getch();

	printf("\n");
}
