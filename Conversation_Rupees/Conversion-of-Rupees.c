/*This is the The Project  for Conversation of Rupees into Paises,
Created by Koushikpuppala.
*/

#include<stdio.h>
int main(void)
{

	float r;
	int p;

	r=p=0;

	printf("Hey... \nEnter the Rupees I will Convert them into Paises ..: Rs.");

	scanf("%f",&r);

	p=100*r;

	printf("\nHey... \nHere is the Conversation of Rupees into Paises..: %d",p);

	getch();

	printf("\n");


}
