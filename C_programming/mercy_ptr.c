#include <stdio.h>

int main (void)
{
int mc = 20;
int *ptr1;
int **ptr2;
ptr1 = &mc;
ptr2 = &ptr1;
printf("Value of variable mc: %d\n", mc);
printf("Address of variable mc:%p\n", &mc);
printf("Value of pointer %p\n", ptr1);
printf("Value of pointer to pointer ptr2: %p\n", ptr2);
printf("Address of pointer to pointer ptr1: %p\n", &ptr2);
return (0);
}
