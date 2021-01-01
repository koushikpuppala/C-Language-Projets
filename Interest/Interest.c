//This is the Project about Interest
#include<stdio.h>
main()
{
    int p,t;
    float r,i;
    p=r=t=i=0;

    printf("\n    *** This is HDFC Bank Loan Receipt *** \n\n");

    printf("Enter the Principal Loan Amount....:");
    scanf("%d",&p);

    printf("Enter the Time Completed in Years..:");
    scanf("%d",&t);

    printf("Enter the Rate for the Loan........:");
    scanf("%f",&r);

    i=(p*r*t)/100;

    printf("\n\nThe Interest for the Loan %d Rupees and %d years Time completed for the Rate %.2f%% is..:%.2f",p,t,r,i);

    getch();

    printf("\n");

}
