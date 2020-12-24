/**
 * This is the Online Application Model Program.
 * I have used VS Code IDE.
 * @param{Author => KoushikPuppala}
 * @param{Mentor = >Atish Jain Sir}
 * @param{Batch Timing 7-8 pm Class}
*/

/** Varibles
 * no => Phone.no | n => Dummy Phone.no | in => Login Phone.no
 * opt => Option in Country | c => count | otp => one time pass | rotp => Entered otp
 * help => used in for loop | x => Repeat at last | lin => login input
 * fn => firstname | ln => last name | ip => Opt of E/N | email => Enter email
 * gen => Gender | choice => Correct/wrong | pass => password | LE => login email
 * LP => login password | ln => luck number | lr => lucky result | r => lucky reminder
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    long long int no,n,in,rn,rin,ot;
    unsigned long lcn,r,xtemp,temp,xan,an,enter,xsum,sum;
    int opt,c,otp,rotp,help,MAX,MIN,x,lin,lr,p,xp,ain,ai,A1,l,acount;
    char fn[100],ln[100],ip,email[100],gen[100],choice,pass[100],LE[100],LP[100],sy,ep,k;
    an = p = temp = sum = ain = ai = A1 = l = enter = acount = xan = xp = xsum = xtemp = 0;
    no = n = in = opt = c = otp = rotp = help = x = lin = lcn = r = lr = rn = rin = ot = 0;

    system("cls");

    do {

    printf("     *** WELCOME TO ONLINE APPLICATION PROGRAM ***\n");
    getch();

    printf("\nEnter your First name.: ");
    scanf("%s",&fn);
    fflush(stdin);
    printf("Enter your Last name....: ");
    scanf("%s",&ln);
    fflush(stdin);
    printf("Enter your Gender......: ");
    scanf("%s",&gen);
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

    printf("Enter your E-mail............: ");
    scanf("%s",&email);
    fflush(stdin);

    printf("Enter your Password..........: ");
    scanf("%s",&pass);
    fflush(stdin);

    printf("\n\n    *** CHECK YOUR DEATILES ***\n");
    printf("\nYour Full name is \"%s %s\"",fn,ln);
    printf("\nYour Gender is \"%s\"",gen);
    printf("\nYour EmailID is \"%s\"",email);
    printf("\nYour Password is \"%s\"",pass);

    break;

            //Mobile number Coding

    case 'N':
    case 'n':

    RENUMBER:

    printf("Enter a Mobile Number (With out country code and area code)..: ");
    scanf("%lld",&no);

    n=no;

    printf("\nWhich Country number you have entered above");
    printf("\n1.India");
    printf("\n2.USA");
    printf("\n3.Russia");
    printf("\n4.Engalnd");
    printf("\n5.Singpore");

    do{
    printf("\nEnter your Option..: ");
    scanf("%d",&opt);
    fflush(stdin);

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
            goto CHECK;
        }
        else{
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again.\n\n");
            goto RENUMBER;
        }
        break;

    case 2: //USA have 7-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7){
            goto CHECK;
        }
        else{
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again.\n\n");
            goto RENUMBER;
        }
        break;

    case 3: //Russia have 7-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7){
            goto CHECK;
        }
        else{
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again\n\n");
            goto RENUMBER;
        }
        break;

    case 4: //England have 10-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==10){
            goto CHECK;
        }
        else{
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again\n\n");
            goto RENUMBER;
        }
        break;

    case 5: //Singapore have 8-Digit number

        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==8){
            goto CHECK;
        }
        else{
            printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again\n\n");
            goto RENUMBER;
        }
        break;

    default:printf("\n");
        break;

    }
    break;

    default: printf("\n");
    }

    CHECK:
    printf("\n\n    *** CHECK YOUR DEATILES ***\n");
    printf("\nYour UserID is \"%s %s\"",fn,ln);
    printf("\nYour Gender is \"%s\"",gen);
    printf("\nYour Mobile Number is \"%lld\"",n);
    printf("\n\nNOTE:-You will get OTP for every login with phone number");


    printf("\n\n    *** IF DEATILES ARE CORRECT THEN TYPE \"(Y)ES\"\n        IF DEATILES HAVE CORRECTIONS THEN TYPE \"(N)O\" ***");

    do{
    printf("\n\nEnter Your option : ");
    scanf("%c", &choice);
    fflush(stdin);

    if ((choice == 'Y') || (choice == 'y'))
    {

        printf("\n\nYour Application is Submitted Successfully\n\nPress any Key to Open Login Page");

        getch();

        system("cls");

        printf("\nWELCOME TO LOGIN PAGE\n\n");

        switch(ip){
            case 'E':
            case 'e':
            EMAIL:
                printf("\nHey This is still under development");
                exit(1);
                break;
            case 'N':
            case 'n':
            NUMBER:
            while(1)
            {
                printf("Enter your Mobile Number...: ");
                scanf("%lld", &in);
                if (in == n)
                    break;
                else
                    printf("Enter number is not in our Data base");
            }
            while(1){
            MAX = 999999;
            MIN = 100000;
            srand(time(0));
            for (help = 1; help < 2;help++)
            {
                otp = (rand() % (MAX - MIN) + 1) + MIN;
                printf("Here is Your Verification Code : %d", otp);
            printf("\n\n");
            printf("Enter the Verification Code : ");
            scanf("%d", &rotp);
            }
            if (otp==rotp)
                break;
            else
            {
                printf("Entered Verification Code is WRONG\nTry Again");
            }

            }
            printf("\n\n");

            printf("Hey..\nWelcome to Koushik\'s Webpage\n");
            do{
            printf("What do you want to Do\n");
            printf("1.Lucky Number\n");
            printf("2.Reversing of numbers\n");
            printf("3.Armstrong number\n");
            printf("4.ASCII\n");
            printf("5.Assignment\n");
            printf("6.logout\n");
            printf("Enter your Option : ");
            scanf("%d", &lin);

            switch(lin){

                    /*Lucky number Program*/

                case 1:{
                    system("cls");
                    printf("Hey..\nEnter any number i will show you magic :");
                    scanf("%lu",&lcn);
                    while (lcn>0)
                    {
                        r=lcn%10;
                        lr=lr+r;
                        lcn=lcn/10;
                        if (no==0 && lr>9)
                        {
                        lcn=lr;
                        lr=0;
                        }
                        }
                        printf("\nHere is the Magic of Entered number :%d\n",lr);
                        printf("\n");
                        break;
                }

                    /*Reversing of numbers*/

                case 2:{
                    system("cls");
                    printf("Hey...\nEnter a number I will Reverse it and give you result : ");
                    scanf("%lld",&rn);
                    while (rn>0)
                    {
                        in=rn%10;
                        ot=ot*10+in;
                        rn=rn/10;
                        }
                        printf("Here is the result that you need : %lld\n",ot);
                        break;
                }
                case 3:{
                    system("cls");
                    printf("Which model do you want\n");
                    printf("1.Check Whether number is Armstrong\n");
                    printf("2.Find the no.of Armstrong are there in N numbers\n");
                    printf("Enter your Option : ");
                    scanf("%d", &ain);
                    switch(ain){
                        case 1:{
                            system("cls");
                            printf("Hey Enter any Number\nI will tell Whether it is Armstrong number or not...:");
                            scanf("%lu",&an);
                    
                            temp = an;
                    
                            while(an>0)
                            {
                                p=an%10;
                                sum = sum + (p * p * p);
                                an = an / 10;
                                }
                                if(sum==temp)
                                {
                                    printf("%lu is Armstrong number",temp);
                                    } else {
                                        printf("%lu is not Armstrong number",temp);
                                        }
                                        break;
                        }
                        case 2:{
                            system("cls");
                            printf("Enter the number till which you want to find Armstrong numbers...: ");
                            scanf("%lu",&enter);

                            for (xan = 0; xan <= enter; xan++)
                            {
                                xsum = 0;
                                xtemp = xan;

                                while (xan>0)
                                {
                                    xp = xan % 10;
                                    xsum=xsum + (xp * xp * xp);
                                    xan = xan / 10;
                                }

                                xan = xtemp;

                                if (xsum==xan)
                                {
                                    printf("\n%lu",xan);
                                    acount++;
                                }
                            }
                            printf("\nHey They are %d Armstrong number bellow %lu numbers ",acount,enter);

                            break;
                        }
                    }
                    break;
                }
                case 4:{
                    system("cls");
                    printf("Which model do you want\n");
                    printf("1.Symbol to ASCII codes\n");
                    printf("2.ASCII codes to Symbol\n");
                    printf("Enter your Option : ");
                    scanf("%d", &ai);
                    switch (ai){
                        case 1:{
                            system("cls");
                            fflush(stdin);
                            printf("Hey Enter any Symbol or Digit or Alphabet \nI will convert into a Unique Number . . :");
                            scanf("%c",&sy);
                            printf("Here is the Number that \nYou need is Know as ANSII Code(Number) ... :  \" %d \"  ",sy);
                            break;
                        }
                        case 2:{
                            system("cls");
                            printf("Enter the ASCII Code (0-225) :");
                            scanf("%d",&A1);
                            printf("The Symbol for the ASCII Code %d number is .....: \" [ %c ] \" ",A1,A1);
                            break;
                        }
                    }
                    break;
                }
                case 5:{
                    system("cls");
                    printf("Hi This is Still under development");
                    break;
                }
                case 6:{
                    system("cls");
                    fflush(stdin);
                    printf("Hey Do you want Exit.");
                    printf("If yes enter \"y\" \n or Enter any \"n\" : ");
                    scanf("%c", &ep);
                    if(ep =='y' || ep == 'Y'){
                        printf("Have a nice day\nBye");
                        exit(1);
                    } else if ((ep != 'n' || ep != 'N') && (ip=='e' || ip=='E')){
                        goto EMAIL;
                    } else if ((ep != 'n' || ep != 'N') && (ip=='n' || ip=='N')){
                        goto NUMBER;
                    }
                    break;
                }

                        }/*Switch*/

                        fflush(stdin);
                        printf("\nDo you want to continue(Y/N)");
                        scanf("%c", &k);
                        system("cls");
                        printf("Have a nice day\nBye");
                        if (k=='n' || k == 'N')
                        {
                            l = 1;
                        }
                        
            } while (!l);
        }
        break;
        }

        else if ((choice == 'N') || (choice == 'n'))
            x = 1;
        printf("Please Retry the Application\n\nPress any key to Retry");
        getch();
        system("cls");

    } while (choice != 'y' && choice != 'Y' && choice != 'N' && choice != 'n');
    } while (x);


    getch();

}