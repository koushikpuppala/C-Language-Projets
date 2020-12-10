/*
This is the program to check the entered number is valid or not.
This code is coded by using VS Code IDE.
@author Koushik.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(void)
{
    long long int no,n;
    int opt,c,p,cp;
    char fn[100],ln[100],ip,email[100],gen[100],choice,pass[100],cpass[100];
    no=n=opt=c=p=cp=0;

    system("cls");

    printf("     *** WELCOME TO ONLINE APPLICATION PROGRAM ***\n");
    getch();
    printf("Hi, Friends I am Koushikpuppala.\n");
    getch();
    printf("I have made this ONLINE APPLICATION PROGRAM\nThis program is just for Fun.\n");
    getch();
    printf("This program is coded in VS CODE IDE.\n");
    getch();
    printf("Have a look and ENJOY it.\n");
    printf("\nPress any Key to Continue....\n");
    getch();
    system("cls");

    printf("\nEnter your Firstname : ");
    scanf("%[^\n]",&fn);
    fflush(stdin);
    printf("Enter your Lastname : ");
    scanf("%[^\n]",&ln);
    fflush(stdin);
    printf("Enter your Gender : ");
    scanf("%[^\n]",&gen);
    fflush(stdin);

    do
    {

    printf("Do you want to continue with (E)-mail or (N)umber for login : ");
    scanf("%c",&ip);
    fflush(stdin);

    } while (ip != 'E' && ip != 'e' && ip != 'N' && ip != 'n');

    switch(ip){

    case 'E':
    case 'e':

    printf("Enter your E-mail : ");
    scanf("%s",&email);
    fflush(stdin);

    printf("Enter your Password : ");
    do{ 
        pass[p]=getch(); 
        if(pass[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(pass[p-1]!='\r'); 
    pass[p-1]='\0';

    fflush(stdin);

    printf("\nOnce again enter Password : ");
    do{ 
        cpass[cp]=getch(); 
        if(cpass[cp]!='\r'){ 
            printf("*"); 
        } 
        cp++; 
    }while(cpass[cp-1]!='\r'); 
    cpass[cp-1]='\0';

    fflush(stdin);

    printf("\n\n    *** CHECK YOUR DEATILES ***\n");
    printf("\nYour Fullname is \"%s %s\"",fn,ln);
    printf("\nYour Gender is \"%s\"",gen);
    printf("\nYour EmailID is \"%s\"",email);
    printf("\nYour Password is \"%s\"",pass);

    break;

            //Mobile number Coding

    case 'N':
    case 'n':

    printf("Enter a Mobile Number (With out country code and area code) : ");
    scanf("%lld",&no);

    n=no;

    printf("\nWhich Country number you have entered above");
    printf("\n1.India");
    printf("\n2.USA");
    printf("\n3.Russia");
    printf("\n4.Engalnd");
    printf("\n5.Singpore");

    do{
    printf("\nEnter your Option : ");
    scanf("%d",&opt);

    } while (opt>5);

    switch (opt)

    {

    case 1: //India have 10-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==10){
            printf("\n\n    *** CHECK YOUR DEATILES ***\n");
            printf("\nYour Fullname is \"%s %s\"",fn,ln);
            printf("\nYour Gender is \"%s\"",gen);
            printf("\nYour Mobile Number is \"%lld\"",n);
            printf("\n\nNOTE:-You will get OTP for every login with phone number");
        }
        else
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nRelaunch the Program and try again.");

        break;

    case 2: //USA have 7-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7){
            printf("\n\n    *** CHECK YOUR DEATILES ***\n");
            printf("\nYour Fullname is \"%s %s\"",fn,ln);
            printf("\nYour Gender is \"%s\"",gen);
            printf("\nYour Mobile Number is \"%lld\"",n);
            printf("\n\nNOTE:-You will get OTP for every login with phone number");
        }
        else
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nRelaunch the Program and try again.");

        break;

    case 3: //Russia have 7-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7){
            printf("\n\n    *** CHECK YOUR DEATILES ***\n");
            printf("\nYour Fullname is \"%s %s\"",fn,ln);
            printf("\nYour Gender is \"%s\"",gen);
            printf("\nYour Mobile Number is \"%lld\"",n);
            printf("\n\nNOTE:-You will get OTP for every login with phone number");
        }
        else
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nRelaunch the Program and try again.");

        break;

    case 4: //Engalnd have 10-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==10){
            printf("\n\n    *** CHECK YOUR DEATILES ***\n");
            printf("\nYour Fullname is \"%s %s\"",fn,ln);
            printf("\nYour Gender is \"%s\"",gen);
            printf("\nYour Mobile Number is \"%lld\"",n);
            printf("\n\nNOTE:-You will get OTP for every login with phone number");
        }
        else
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nRelaunch the Program and try again.");

        break;

    case 5: //Singpore have 8-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==8){
            printf("\n\n    *** CHECK YOUR DEATILES ***\n");
            printf("\nYour Fullname is \"%s %s\"",fn,ln);
            printf("\nYour Gender is \"%s\"",gen);
            printf("\nYour Mobile Number is \"%lld\"",n);
            printf("\n\nNOTE:-You will get OTP for every login with phone number");
        }
        else
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nRelaunch the Program and try again.");

        break;

    default:printf("\n");
        break;

    }
    break;

    default: printf("\n");
    }

    
    printf("\n\n    *** IF DEATILES ARE CORRECT THEN TYPE \"(Y)ES\"\n        IF DEATILES HAVE CORRECTIONS THEN TYPE \"(N)O\" ***");

    do{
    printf("\n\nEnter Your option : ");
    choice=getch();

    if ((choice == 'Y') || (choice == 'y'))

        printf("\n\nYour Application is Submitted Sucessfully");

    else if ((choice == 'N') || (choice == 'n'))

        printf("Please Relaunch the Program and try again");

    } while (choice != 'y' && choice != 'Y' && choice != 'N' && choice != 'n');

    getch();

}