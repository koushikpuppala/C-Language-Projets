l/*This is an Program for conversation of temperature
From Celsius to Fahrenheit;
From Celsius to Kelvin;
From Fahrenheit to Celsius;
From Fahrenheit to Kelvin;
From Kelvin to Fahrenheit;
From Kelvin to Celsius;
*/
# include <stdio.h>
# include <ctype.h>
int main(void)
{
    float c,f,k,x;
    int option;
    char cal='y';
    c=f=k=option=0;
    do
    {
        printf("What do you want to Do-->\n");
        printf("1.Celsius to Fahrenheit\n");
        printf("2.Fahrenheit to Celsius\n");
        printf("3.Celsius to Kelvin\n");
        printf("4.Kelvin to Celsius\n");
        printf("5.Kelvin to Fahrenheit\n");
        printf("6.Fahrenheit to Kelvin\n\n");
        printf("Enter your Option in ...:");
        scanf("%d",&option);

        switch (option)
        {
            case 1:

                printf("\n    *** I WILL CONVERT THE CELSIUS TO FAHRENHEIT *** \n\n");
                printf("Enter the Temperature in Celsius.......:");
                scanf("%f",&c);

                f=((c*9)/5)+32;

                printf("Here is the Temperature in Fahrenheit..:%.2f",f);

                break;

            case 2:

                printf("\n    *** I WILL CONVERT THE FAHRENHEIT TO CELSIUS *** \n\n");
                printf("Enter the Temperature in Fahrenheit..:");
                scanf("%f",&f);

                c=((f-32)*5)/9;

                printf("Here is the Temperature in Celsius...:%.2f",c);

                break;

            case 3:
                printf("\n    *** I WILL CONVERT THE TEMPERATURE FROM CELSIUS TO KELVIN *** \n\n");
                printf("Enter the Temperature in Celsius....:");
                scanf("%f",&c);

                k=c+273.15;

                printf("Here is the Temperature in Kelvins..:%.2f",k);

                break;

            case 4:
                printf("\n    *** I WILL CONVERT THE TEMPERATURE FROM KELVINS TO CELSIUS *** \n\n");
                printf("Enter the Temperature in Kelvins....:");
                scanf("%f",&k);

                c=k-273.15;

                printf("Here is the Temperature in Celsius..:%.2f",c);

                break;

            case 5:
                printf("\n    *** I WILL CONVERT THE TEMPERATURE FROM KELVINS TO FAHRENHEIT *** \n\n");
                printf("Enter the Temperature in Kelvins.......:");
                scanf("%f",&k);

                f=((k-273.15)*9/5)+32;

                printf("Here is the Temperature in Fahrenheit..:%.2f",f);

                break;

            case 6:
                printf("\n    *** I WILL CONVERT THE TEMPERATURE FROM FAHRENHEIT TO KELVIN *** \n\n");
                printf("Enter the Temperature in Fahrenheit..:");
                scanf("%f",&f);

                k=((f-32)*5/9)-273.15;

                printf("Here is the Temperature in Kelvins...:%.2f",k);

                break;

                default:

                printf("\n INVALID CHOICE");
        }
        printf("\n\nDo you want to do some more Calculations(y/n)..:");
        fflush(stdin);
        scanf("%c",&cal);
        printf("\n");

        cal = tolower(cal);

        if (cal!='y')
            k=1;
    } while(k!=1);

    printf("\n    *** BYE I HOPE IT IS HELPED YOU A LOT FOR CALUTATIONS IN CONVERSION OF TEMPERATURE ***");

    int getch(void);

    printf("\n");

    return 0;

}
