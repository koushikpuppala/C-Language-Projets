// Using if statements, relational
// operators, and equality operators.
#include <stdio.h>

// function main begins program execution
int main( void )
{
      int num1; // first number to be read from user
      int num2; // second number to be read from user

      printf( "Enter two integers, and I will tell you\n" );
      printf( "The relationships they satisfy--->>>\n" );

      printf( "Enter the First number...:");
      scanf( "%d", &num1); // read two integers

      printf("Enter the Second number..:");
      scanf("%d",&num2);

      if ( num1 == num2 ) {
         printf( "%d is equal to %d\n", num1, num2 );
      } // end if

      if ( num1 != num2 ) {
         printf( "%d is not equal to %d\n", num1, num2 );
      } // end if

      if ( num1 < num2 ) {
         printf( "%d is less than %d\n", num1, num2 );
      } // end if

      if ( num1 > num2 ) {
         printf( "%d is greater than %d\n", num1, num2 );
      } // end if

     if ( num1 <= num2 ) {
         printf( "%d is less than or equal to %d\n", num1, num2 );
      } // end if

      if ( num1 >= num2 ) {
         printf( "%d is greater than or equal to %d\n", num1, num2 );
      } // end if
      getch();
   } // end function main
