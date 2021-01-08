/*
This is the program for Astronomay number.
@author Puppala Koushik
@Mentor Atish Jain
*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
    int no, r, temp, sum;
    no = r = temp = sum = 0;

    printf("Hey Enter any Number\nI will tell Astronomay number...:");
    scanf("%d",&no);

    temp = no;

    while(no>0)
    {
        r=no%10;
        sum = sum + (r * r * r);
        no = no / 10;
    }
    if(sum==temp)
    {
        printf("it is Astronomay number");
    } else {
        printf("It is not a Astronomay number");
    }

}