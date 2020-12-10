/*
This is the program for INTERMEDIATE MARKS MEMO.
This code ie Written in VS Code IDE.
@Developer Puppala Koushik.
@Mentor Atish Jain Sir.
@Batch Timming 7-8 pm Class.
*/
#include<stdio.h>
#include<conio.h>

int main(void)
{
    int m1,m2,p,c,e,s,e1,e2,s1,s2,m11,m12,m21,m22,p1,p2,c1,c2,pp,cp,gtot;
    float tot,per;
    m1=m2=p=c=e=s=tot=per=e1=e2=s1=s2=m11=m12=m21=m22=p1=p2=c1=c2=pp=cp=0;
    gtot=1000;

    printf("\n\n   *** THE CERTIFICATE OF INTERMEDIATE MARKS MEMO FOR STATE BOARD OF ANDHRA PRADESH ***\n\n");

    /* Here is the coding section for entering English Marks */

    while(1){//English Paper-1...
    printf("Enter the Marks of English Paper-1.....: ");
    scanf("%d",&e1);

    if (e1>=0 && e1<=100)
    break;
    else
        printf("\nMax. marks of English is 100\nMin. marks of English is 0\n\nSo,Enter Marks Between 0-100 only\n\n");
    }

    while(1){//English Paper-2....
    printf("Enter the Marks of English Paper-2.....: ");
    scanf("%d",&e2);

    if (e2>=0 && e2<=100)
    break;
    else
        printf("\nMax. marks of English is 100\nMin. marks of English is 0\n\nSo,Enter Marks Between 0-100 only\n\n");
    }

    e=e1+e2;

    printf("\nTotal Marks in ''English''....: %d\n\n",e);

    /* Here is the coding section for entering Sanskrit Marks */

    while(1){//Sanskrit Paper-1...
    printf("Enter the Marks of Sanskrit Paper-1....: ");
    scanf("%d",&s1);

    if (s1>=0 && s1<=100)
    break;
    else
        printf("\nMax. marks of Sanskrit is 100\nMin. marks of Sanskrit is 0\n\nSo,Enter Marks Between 0-100 only\n\n");
    }

    while(1){//Sanskrit Paper-2...
    printf("Enter the Marks of Sanskrit Paper-2....: ");
    scanf("%d",&s2);

    if (s2>=0 && s2<=100)
    break;
    else
        printf("\nMax. marks of Sanskrit is 100\nMin. marks of Sanskrit is 0\n\nSo,Enter Marks Between 0-100 only\n\n");
    }

    s=s1+s2;

    printf("\nTotal Marks in ''Sanskrit''...: %d\n\n",s);

    /* Here is the coding section for entering Maths-1 Marks */

    while(1){//Maths-1 Paper-1...
    printf("Enter the Marks of Maths-1 Paper-1.....: ");
    scanf("%d",&m11);

    if (m11>=0 && m11<=75)
    break;
    else
        printf("\nMax. marks of Maths is 75\nMin. marks of Maths is 0\n\nSo,Enter Marks Between 0-75 only\n\n");
    }

    while(1){//Maths-1 Paper-2...
    printf("Enter the Marks of Maths-1 Paper-2.....: ");
    scanf("%d",&m12);

    if (m12>=0 && m12<=75)
    break;
    else
        printf("\nMax. marks of Maths is 75\nMin. marks of Maths is 0\n\nSo,Enter Marks Between 0-75 only\n\n");
    }

    m1=m12+m11;

    printf("\nTotal Marks in ''Maths-1''....: %d\n\n",m1);

    /* Here is the coding section for entering Maths-2 Marks */

    while(1){//Maths-2 Paper-1...
    printf("Enter the Marks of Maths-2 Paper-1.....: ");
    scanf("%d",&m21);

    if (m21>=0 && m21<=75)
    break;
    else
        printf("\nMax. marks of Maths is 75\nMin. marks of Maths is 0\n\nSo,Enter Marks Between 0-75 only\n\n");
    }

    while(1){//Maths-2 Paper-2...
    printf("Enter the Marks of Maths-2 Paper-2.....: ");
    scanf("%d",&m22);

    if (m22>=0 && m22<=75)
    break;
    else
        printf("\nMax. marks of Maths is 75\nMin. marks of Maths is 0\n\nSo,Enter Marks Between 0-75 only\n\n");
    }


    m2=m21+m22;

    printf("\nTotal Marks in ''Maths-2''....: %d\n\n",m2);

    /* Here is the coding section for entering Physics Marks */

    while(1){//Physics Paper-1...
    printf("Enter the Marks of Physics Paper-1.....: ");
    scanf("%d",&p1);

    if (p1>=0 && p1<=60)
    break;
    else
        printf("\nMax. marks of Physics is 60\nMin. marks of Physics is 0\n\nSo,Enter Marks Between 0-60 only\n\n");
    }

    while(1){//Physics Paper-2...
    printf("Enter the Marks of Physics Paper-2.....: ");
    scanf("%d",&p2);

    if (p2>=0 && p2<=60)
    break;
    else
        printf("\nMax. marks of Physics is 60\nMin. marks of Physics is 0\n\nSo,Enter Marks Between 0-60 only\n\n");
    }

    while(1){//Physics Practicals...
    printf("Enter the Marks in Physics Practicals...: ");
    scanf("%d",&pp);

    if (pp>=0 && pp<=30)
    break;
    else
        printf("\nMax. marks of Physics Practicals is 30\nMin. marks of Physics Practicals is 0\n\nSo,Enter Marks Between 0-30 only\n\n");
    }

    p=p1+p2+pp;

    printf("\nTotal Marks in \"Physics\"....: %d\n\n",p);

    /* Here is the coding section for entering Chemistry Marks */

    while(1){//Chemistry Paper-1...
    printf("Enter the Marks of Chemistry Paper-1...: ");
    scanf("%d",&c1);

    if (c1>=0 && c1<=60)
    break;
    else
        printf("\nMax. marks of Chemistry is 60\nMin. marks of Chemistry is 0\n\nSo,Enter Marks Between 0-60 only\n\n");
    }

    while(1){//Chemistry Paper-2...
    printf("Enter the Marks of Chemistry Paper-2...: ");
    scanf("%d",&c2);

    if (c2>=0 && c2<=60)
    break;
    else
        printf("\nMax. marks of Chemistry is 60\nMin. marks of Chemistry is 0\n\nSo,Enter Marks Between 0-60 only\n\n");
    }

    while(1){//Chemistry Practicals...
    printf("Enter the Marks in Chemistry Practicals...: ");
    scanf("%d",&cp);

    if (cp>=0 && cp<=30)
    break;
    else
        printf("\nMax. marks of Chemistry Practicals is 30\nMin. marks of Chemistry Practicals is 0\n\nSo,Enter Marks Between 0-30 only\n\n");
    }

    c=c1+c2+cp;

    printf("\nTotal Marks in \"Chemistry\"..: %d\n\n",c);

    /* Here is the coding section for Displaying Total Marks, Percentage */

    tot=m1+m2+p+c+e+s;
    per=(tot/gtot)*100;

    printf("The total Marks......: %.0f\n",tot);
    printf("The Percentage is....: %.2f%%\n",per);

    printf("\n\nYOU HAVE SECURED %.2f OUT OF %d\n\n",tot,gtot);

    if (per>=35)
        {
            printf("  ***CONGRATULATION YOU HAVE PASSED THE EXAM***  ");

            getch();

            printf("\n       HOPE YOU HAVE BRIGHT FUTURE");
        }
    else
        {
            printf("  ***SORRY YOU HAVE NOT PASSED THE EXAM BETTER LUCK NEXT TIME***   ");

            getch();

            printf("\n       PRATICE MAKE MAN PERFECT\n       TRY HARD THIS TIME\n");
        }

    getch();
}
