/*
This is the program to find the sum of total number to a single digit.
This code ie Written in VS Code IDE.
@Developer Puppala Koushik.
@Mentor Atish Jain Sir.
@Batch Timming 7-8 pm Class.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    unsigned long no, r;
    int ln;
    no = r = ln = 0;
    printf("Hey..\nEnter any number i will show you magic :");
    scanf("%lu", &no);

    while (no > 0)
    {
        r = no % 10;
        ln = ln + r;
        no = no / 10;
        if (no == 0 && ln > 9)
        {
            no = ln;
            ln = 0;
        }
    }

    printf("\nHere is the Magic of Entered number :%d\n", ln);

    printf("\n");

    getch();
}