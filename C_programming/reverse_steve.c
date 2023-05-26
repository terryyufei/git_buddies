#include <stdio.h>

void main()
{
    int a[9]={34,54,75,86,90,120,140,155,200};
    int i;

    for(i=8; i>=0; i--)
    {
        printf("%d, ", a[i]);
    }
}
