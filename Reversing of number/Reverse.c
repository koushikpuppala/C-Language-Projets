/*
This is the program to reverse the entered number.
This code is Written in VS Code IDE.
@author Koushik.
*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
    long long int no,in,ot;
    no=in=ot=0;

    printf("Hey...\nEnter a number I will Reverse it and give you result : ");
    scanf("%lld",&no);

    while (no>0)
    {
        in=no%10;
        ot=ot*10+in;
        no=no/10;
    }
    
    printf("Here is the result that you need : %lld\n",ot);

    getch();
}