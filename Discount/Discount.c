// This is the project for Discount Range

#include<stdio.h>

int main(void)
{

	float bill,dis,amt,I1,I2,I3,I4;

	bill=dis=amt=I1=I2=I3=I4=0;

	printf("Heyy... \nEnter the cost of Item-1..: Rs.");
	scanf("%f",&I1);
	printf("Enter the Cost of Item-2..: Rs.");
	scanf("%f",&I2);
	printf("Enter the Cost of Item-3..: Rs.");
	scanf("%f",&I3);
	printf("Enter the Cost of Item-4..: Rs.");
	scanf("%f",&I4);

	amt=I1+I2+I3+I4;

	if(amt>25000)
	{
		dis=amt*25/100;
		bill=amt-dis;
		printf("   *** CONGRATULATIONS ****\nYou got Rs.%.2f Discount\n",dis);
		printf("Your total bill..: Rs.%.2f",bill);
	} else if(amt>20000)

	{
		dis=amt*20/100;
		bill=amt-dis;
		printf("   *** CONGRATULATIONS ****\nYou got Rs.%.2f Discount\n",dis);
		printf("Your total bill..: Rs.%.2f",bill);
	} else if(amt>15000)

	{
		dis=amt*15/100;
		bill=amt-dis;
		printf("   *** CONGRATULATIONS ****\nYou got Rs.%.2f Discount\n",dis);
		printf("Your total bill..: Rs.%.2f",bill);
	} else if(amt>10000)

	{
		dis=amt*10/100;
		bill=amt-dis;
		printf("   *** CONGRATULATIONS ****\nYou got Rs.%.2f Discount\n",dis);
		printf("Your total bill..: Rs.%.2f",bill);
	} else

	{
		printf("");
	}

}
