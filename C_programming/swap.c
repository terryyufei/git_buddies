#include <stdio.h>

void number_swap(int *num1 , int *num2)
{
   int tempnum;

   tempnum = *num1;
   *num1 = *num2;
   *num2 = tempnum;
}

int main ()
{
  int a1 = 20;
  int a2 = 50;
  
  printf("Numbers before swapping :" );
  printf("\nValue 1 is %d " , a1);
  printf("\nValue 2 is %d \n " , a2);

  number_swap(&a1,&a2);//function call to swap our numbers

  printf("\nNumbers after swapping :\n" );
  printf("\nValue 1 is %d \n ", a1);
  printf("Value 2 is %d \n ", a2);


}
