/*The total sales of two previous months January and February
  Maker:Koushikpuppala
  Date:23-Oct-20
  Time:9:20 pm*/
#include <stdio.h>
main()
{
    int x,y,z;
    x=0;
    y=0;
    z=0;
    printf("   SALES OF TWO PREVIOUS MONTHS\n");
    printf("Sales of the month January is ......: ",x);
    scanf("%d",&x);
    printf("Sales of the month February is .....: ",y);
    scanf("%d",&y);
    z=x+y;
    printf("Total sales of two previous months January and February is : %d",z);
    getch();
    printf("\n");
}
