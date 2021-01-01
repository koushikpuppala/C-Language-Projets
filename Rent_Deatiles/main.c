//Rent of a month
#include <stdio.h>
main()
{
    printf("Hey enter the details asked below for the month of October\n");
    int x,y,z;
    x=0;
    y=0;
    z=0;
    printf("The rent to be paid for house is   .......: ",x);
    scanf("%d",&x);
    printf("The rent to be paid for accounting firm is: ",y);
    scanf("%d",&y);
    z=x+y;
    printf("Total rent to be paid in this month is....: %d",z);
    getch();
    printf("\n");
}
