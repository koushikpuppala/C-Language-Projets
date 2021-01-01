// This is the project about comparison of Age of two members

#include <stdio.h>

int main(void)
{

	int A1,A2,diff;

	char N1[50],N2[50];

	A1=A2=diff=0;

	printf("Heyy Enter Your name...: ");
	scanf("%[^\n]",&N1);

	printf("Enter Your Age...: ");
	scanf("%d",&A1);

	fflush(stdin);

	printf("Enter Your Friend name...: ");
	scanf("%[^\n]",&N2);

	printf("Enter Your Friend Age...: ");
	scanf("%d",&A2);

	fflush(stdin);

	if (A1>A2)
	{
		diff=A1-A2;
		printf("\nHeyy %s is elder than %s by %d Years",N1,N2,diff);
	}
	 else
	{
		diff=A2-A1;
		printf("\nHeyy %s is elder than %s by %d Years",N2,N1,diff);
	}

	getch();

	printf("\n");
}
