//This is an project for interchanging of numbers by logic 3(It is model by using Multiplications and Divisions.)
#include<stdio.h>
main()
{
    int x,y;
    x=y=0;

    printf("Enter the value of X...:");
    scanf("%d",&x);

    printf("Enter the value of Y...:");
    scanf("%d",&y);

    printf("\n");

    printf("  ***Here is the Result that you want***  ");

    printf("\n");
    printf("\n");

    x=x*y;
    y=x/y;
    x=x/y;

    printf("The value of X is ....:%d",x);
    printf("\n");
    printf("the value of Y is ....:%d",y);

    getch();

    printf("\n");
}
