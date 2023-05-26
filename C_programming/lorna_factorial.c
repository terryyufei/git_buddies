#include<stdio.h>

long int factorial(int n);//function prototype 

int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, factorial(n));//function call 
    return 0;
}

long int factorial(int n)//function definition
{
    if (n>=1)
        return n*factorial(n-1); //recurcive call
    else
        return 1;
}
