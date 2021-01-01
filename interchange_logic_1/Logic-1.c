//This is an project for interchanging of numbers by logic 1(It is model of taking 3 variables)
#include<stdio.h>
main()
{
    int x,y,tempo;
    x=y=tempo=0;

    printf("Enter the value of X...:");
    scanf("%d",&x);

    printf("Enter the value of Y...:");
    scanf("%d",&y);

    printf("\n");

    printf("  ***Here is the Result that you want***  ");

    printf("\n");
    printf("\n");

    tempo=x;
    x=y;
    y=tempo;

    printf("The value of X is ....:%d",x);
    printf("\n");
    printf("the value of Y is ....:%d",y);

    getch();

    printf("\n");
}
