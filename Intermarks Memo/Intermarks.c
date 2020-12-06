/*

*/
#include<stdio.h>
#include<conio.h>

int main(void)
{
    int m1,m2,p,c,e,s,e1,e2,s1,s2,m11,m12,m21,m22,p1,p2,c1,c2,pc,cc,gtot;
    float tot,per;
    m1=m2=p=c=e=s=tot=per=e1=e2=s1=s2=m11=m12=m21=m22=p1=p2=c1=c2=pc=cc=0;
    gtot=1000;

    printf("\n\n   *** THE CERTIFICATE OF INTERMEDIATE MARKS MEMO FOR STATE BOARD OF ANDHRA PRADESH ***\n\n");

                                    /* Here is the coding section for entering English Marks */

    printf("Enter the Marks of English Paper-1.....: ");
    scanf("%d",&e1);

    while (e1>100)
        {
            printf("  ***Please enter the correct marks [The Max.Marks of English is 100. How you got more than \"Hundered\"]***  \n");
            printf("Enter the Marks of English Paper-1.....: ");
            scanf("%d",&e1);
        }
    while (e1<0)
        {
            printf("  ***Please enter the correct marks [The Min.Marks of English is 0. How you got less than \"Zero\")]***  \n");
            printf("Enter the Marks of English Paper-1.....: ");
            scanf("%d",&e1);
        }

    printf("Enter the Marks of English Paper-2.....: ");
    scanf("%d",&e2);

    while (e2>100)
        {
            printf("  ***Please enter the correct marks [The Max.Marks of English is 100. How you got more than \"Hundered\"]***  \n");
            printf("Enter the Marks of English Paper-2.....: ");
            scanf("%d",&e2);
        }
    while (e2<0)
    {
        printf("  ***Please enter the correct marks [The Min.Marks of English is 0. How you got less than \"Zero\")]***  \n");
        printf("Enter the Marks of English Paper-2.....: ");
        scanf("%d",&e2);
    }

    e=e1+e2;

    printf("\nTotal Marks in ''English''....: %d\n\n",e);

                                    /* Here is the coding section for entering Sanskrit Marks */

    printf("Enter the Marks of Sanskrit Paper-1....: ");
    scanf("%d",&s1);

    while (s1>100)
        {
            printf("  ***Please enter the correct marks [The Max.Marks of Sanskrit is 100. How you got more than \"Hundered\"]***  \n");
            printf("Enter the Marks of Sanskrit paper-1....: ");
            scanf("%d",&s1);
        }
    while (s1<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Sanskrit paper-1....: ");
            scanf("%d",&s1);
        }

    printf("Enter the Marks of Sanskrit Paper-2....: ");
    scanf("%d",&s2);

    while (s2>100)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Sanskrit paper-2....: ");
            scanf("%d",&s2);
        }
    while (s2<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Sanskrit paper-2....: ");
            scanf("%d",&s2);
        }

    s=s1+s2;

    printf("\nTotal Marks in ''Sanskrit''...: %d\n\n",s);

                                    /* Here is the coding section for entering Maths-1 Marks */

    printf("Enter the Marks of Maths-1 Paper-1.....: ");
    scanf("%d",&m11);

    while (m11>75)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-1 Paper-1.....: ");
            scanf("%d",&m11);
        }
    while (m11<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-1 Paper-1.....: ");
            scanf("%d",&m11);
        }

    printf("Enter the Marks of Maths-1 Paper-2.....: ");
    scanf("%d",&m12);

    while (m12>75)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-1 Paper-2.....: ");
            scanf("%d",&m12);
        }
    while (m12<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-1 Paper-2.....: ");
            scanf("%d",&m12);
        }

    m1=m12+m11;

    printf("\nTotal Marks in ''Maths-1''....: %d\n\n",m1);

                                    /* Here is the coding section for entering Maths-2 Marks */

    printf("Enter the Marks of Maths-2 Paper-1.....: ");
    scanf("%d",&m21);

    while (m21>75)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-2 Paper-1.....: ");
            scanf("%d",&m21);
        }
    while (m21<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-2 Paper-1.....: ");
            scanf("%d",&m21);
        }

    printf("Enter the Marks of Maths-2 Paper-2.....: ");
    scanf("%d",&m22);
    while (m22>75)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-2 Paper-2.....: ");
            scanf("%d",&m22);
        }
    while (m22<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Maths-2 Paper-2.....: ");
            scanf("%d",&m22);
        }

    m2=m21+m22;

    printf("\nTotal Marks in ''Maths-2''....: %d\n\n",m2);

                                    /* Here is the coding section for entering Physics Marks */

    printf("Enter the Marks of Physics Paper-1.....: ");
    scanf("%d",&p1);

    while (p1>60)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Physics Paper-1.....: ");
            scanf("%d",&p1);
        }
    while (p1<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Physics Paper-1.....: ");
            scanf("%d",&p1);
        }

    printf("Enter the Marks of Physics Paper-2.....: ");
    scanf("%d",&p2);

    while (p2>60)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Physics Paper-2.....: ");
            scanf("%d",&p2);
        }
    while (p1<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Physics Paper-2.....: ");
            scanf("%d",&p2);
        }

    printf("Enter the Marks in Physics Practical...: ");
    scanf("%d",&pc);

    while (pc>30)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks in Physics Practical...: ");
            scanf("%d",&pc);
        }
    while (pc<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks in Physics Practical...: ");
            scanf("%d",&pc);
        }

    p=p1+p2+pc;

    printf("\nTotal Marks in ''Physics''....: %d\n\n",p);

                                    /* Here is the coding section for entering Chemistry Marks */

    printf("Enter the Marks of Chemistry Paper-1...: ");
    scanf("%d",&c1);

    while (c1>60)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Chemistry Paper-1...: ");
            scanf("%d",&c1);
        }
    while (c1<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Chemistry Paper-1...: ");
            scanf("%d",&c1);
        }

    printf("Enter the Marks of Chemistry Paper-2...: ");
    scanf("%d",&c2);

    while (c2<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks of Chemistry Paper-2...: ");
            scanf("%d",&c2);
        }

    printf("Enter the Marks in Chemistry Practical.: ");
    scanf("%d",&cc);
    while (cc>30)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks in Chemistry Practical.: ");
            scanf("%d",&cc);
        }
    while (cc<0)
        {
            printf("  ***Please enter the correct marks***  \n");
            printf("Enter the Marks in Chemistry Practical.: ");
            scanf("%d",&cc);
        }

    c=c1+c2+cc;

    printf("\nTotal Marks in Chemistry..: %d\n\n",c);

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
