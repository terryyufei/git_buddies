#include <stdio.h>
int main (void)
{
int mceearr[3][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
 int a;
int b;
for(a=0; a<3; a++)
{
for(b=0; b<6; b++)
{
 printf("%d ", mceearr[a][b]);
}
 printf("\n");
}
return(0);
}

