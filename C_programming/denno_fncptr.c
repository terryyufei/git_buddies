#include <stdio.h>

int multiplication(int i, int j)
{
    return i * j;
}

int division(int i, int j)
{
    return  i / j;
}

int modulus(int i, int j)
{
    return i % j;
}

int main() 
{
    int res1 , res2 , res3;  
    int (*ptr)(int,int) = &multiplication;
    int (*ptr1)(int,int) = &division;
    int (*ptr2)(int,int) = &modulus;
    res1=(*ptr)(20,30);
    res2=ptr1(40,5);
    res3=ptr2(60,80);

    printf("Multiplication: %d\n", res1);
    printf("Division: %d\n", res2);
    printf("Modulus: %d\n", res3);
    return 0;
}

