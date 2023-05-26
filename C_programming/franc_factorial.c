#include <stdio.h>

int fac(int n)
{
        if (n == 0 || n == 1)
        {
                return (1);
        }
        else
        {
                return (n * fac(n-1));
        }
}

int main()
{
        int n;
        printf("enter num:");
        scanf("%d", &n);
        if (n < 0)
        {
                printf("Error: Sorry you have entered a negative number.Please Enter a Positive Integer to continue!!! \n");
        }
        else
        {
                int result = fac(n);
                printf("factorial %d is %d\n", n, result);
        }
        return (0);
}
