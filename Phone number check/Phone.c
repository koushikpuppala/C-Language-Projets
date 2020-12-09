/*
This is the program to check the entered number is valid or not.
This code is coded by using VS Code IDE.
@author Koushik.
*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
    long long int no;
    int opt,c;
    no=opt=c=0;

    printf("Hey...\nEnter a Mobile Number (With out country code and area code) : ");
    scanf("%lld",&no);

    printf("Which Country number you have entered above");
    printf("\n1.India");
    printf("\n2.USA");
    printf("\n3.Russia");
    printf("\n4.Engalnd");
    printf("\n5.Singpore");
    printf("\nEnter your Option : ");

    scanf("%d",&opt);

    switch (opt)

    {

    case 1: //India

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==10)
            printf("\n*** Yes this number is Valid Number only ***\n\n");
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    case 2: //USA

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7)
            printf("\n*** Yes this number is Valid Number only ***\n\n");
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    case 3: //Russia 

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7)
            printf("\n*** Yes this number is Valid Number only ***\n\n");
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    case 4: //Engalnd have 10-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==10)
            printf("\n*** Yes this number is Valid Number only ***\n\n");
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    case 5: //Singpore have 8-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==8)
            printf("\n*** Yes this number is Valid Number only ***\n\n");
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    default:printf("Invalid Option Entered");
        break;
    }

    getch();

}
