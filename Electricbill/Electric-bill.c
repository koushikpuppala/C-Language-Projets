/*This is an Project About use of CONST Var
Created by Koushik.
*/

#include<stdio.h>
int main(void)
{

	int lmu,pmu,uc;
	float bill;
	const float rate=3.75; // rate => Rs. for one unit

	lmu=pmu=bill=uc=0;

	printf("\n    *** PRESENT MONTH ELECTRIC BILL ***\n\n");

	printf("Enter you Previous Month Electric Reading..: "); // lmu => Last Month Units
	scanf("%d",&lmu);

	printf("Enter you Present Month Electric Reading...: "); // pmu => Present Month Units
	scanf("%d",&pmu);

	uc=pmu-lmu; // uc => Units Consumed in this month
	bill=uc*rate;

	printf("Here is your Present Month Electric Bill...: Rs.%.2f",bill);

	getch();

	printf("\n");
}
