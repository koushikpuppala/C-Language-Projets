//This is the Project for Conversion of Total Minutes into Hours and Minutes
#include<stdio.h>
main()
{
    int h,m,tm;
    h=m=tm=0;

    printf("\n    *** I WILL CONVERT THE TOTAL MINUTES INTO HOURS AND MINUTES *** \n\n");
    printf("Enter the Total Minutes ...:");
    scanf("%d",&tm);

    h=tm/60;
    m=tm%60;

    printf("There the Time is %d Hours and %d Minutes",h,m);

    getch();

    printf("\n");
}
