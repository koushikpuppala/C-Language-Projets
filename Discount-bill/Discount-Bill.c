// This the project about Discount Bill

#include<stdio.h>

int main(void)
{

	float bill,dis,amt,I1,I2,I3;
	bill=dis=amt=I1=I2=I3=0;

	printf("\n    *** D-MART SHOPING MALL ***\n\n");

	printf("Hey Customer \nEnter Cost of First Item..:");
	scanf("%f",&I1);

	printf("Enter Cost of Second Item.:");
	scanf("%f",&I2);

	printf("Enter Cost of Third Item..:");
	scanf("%f",&I3);

	amt=I1+I2+I3;

	if (amt>=25000)
	{
		dis=amt*10/100;
		bill=amt-dis;
		printf("Congratulations You got 10%% discount and discount is Rs.%.2f",dis);
		printf("\nYour Total Bill is..:%.2f",bill);
	}
	else
	{
		dis=amt*5/100;
		bill=amt-dis;
		printf("Congratulations You got 5%% discount And Rs.%.2f",dis);
		printf("\nYour Total Bill is..:%.2f",bill);
	}

	getch();

	printf("\n");

}
