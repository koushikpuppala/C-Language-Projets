//This Project is for Salary Information
#include<stdio.h>
#include<conio.h>
int main(void)
{
    unsigned long bs;
    long int all;
    long int ded,gs,ns,bon,t;
    bs=all=ded=gs=ns=bon=t=0;

    printf("\n    *** GOOGLE MANAGER POST SALARY DEATILES *** \n\n");

    printf("Enter your Basic Salary...: ");
    scanf("%lu",&bs);

    printf("Enter your Allowances.....: ");
    scanf("%ld",&all);

    if (bs<250000)
        t = 0;
    else if (bs<500000)
        t = 5;
    else if (bs<750000)
        t = 10;
    else if (bs<1000000)
        t = 15;
    else if (bs<1250000)
        t = 20;
    else if (bs<1500000)
        t = 25;
    else
        t = 30;

    printf("\nYour Tax rate is %d", t);

    ded=bs*t/100;

    printf("\nYour Deductions are.......:%lu\n",ded);

    gs=bs+all;
    ns=bs-ded;
    bon=ns*3;

    printf("\nYour Gross Salary is.....:%lu",gs);
    printf("\nYour Net Salary is.......:%lu",ns);
    printf("\nCongrats You got Bonus...:%lu",bon);

    getch();

    printf("\n");
}
