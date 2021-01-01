//It is about verification of age for vote
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int age=0;
    int z=0;

    printf("Enter your age....:",age);
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You are eligible for vote\n");

        getch();
    }

    if (age<18)
    {
        printf("Sorry you are not eligible for voting\n");
        z=18-age;
        printf("Still you need to wait %d more years for voting",z);

        getch();

        printf("\n");
    }

}
