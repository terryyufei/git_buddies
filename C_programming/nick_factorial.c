#include <stdio.h>

long factorial(int x)
{
  if(x==0)
  {
    return 1;
  }
  else
  {
    return( x*factorial(x-1));//recurcive call
  }
}

int main ()
{ 
  int x ;
  printf("Enter the factorial number :");
  scanf("%d" ,&x);
  printf("%d, %ld\n", x ,factorial(x));

}
