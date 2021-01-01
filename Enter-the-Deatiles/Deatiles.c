//This is the Project for name programing
#include<stdio.h>
main()
{
    printf("\n    *** HI ENTER YOUR DEATILE ASKED BELOW ***\n\n");

    char nn[50],fn[50],gen;
    int age=0;

    printf("Enter Your Full Name....: ");
    fflush(stdin);
    scanf("%[^\n]",&fn);

    printf("Enter Your Nick Name....: ");
    fflush(stdin);
    scanf("%s",&nn);

    printf("Enter Your Gender(M/Fem): ");
    fflush(stdin);
    scanf("%c",&gen);

    printf("Enter Your Age in Years.: ");
    fflush(stdin);
    scanf("%d",&age);

    printf("\nHey Your Full Name is %s,Your Friends Call You as %s,Your Gender is %cale and Your Age is %d Years.",fn,nn,gen,age);

    getch();

    printf("\n");
}
