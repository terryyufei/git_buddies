#include <stdio.h>

int add(int , int ); //function prototype/function declaration

int main ( )
{
   int m = 20 , n = 30 , sum ;
   sum = add (m , n) ; //function call using arguments
   printf("sum is %d \n ", sum) ;
}

int add (int a , int b) //function definition and parameters
{
     return (a + b ) ;
}
