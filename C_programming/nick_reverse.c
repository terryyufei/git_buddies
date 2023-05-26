#include<stdio.h>
#define SIZE 9

void main()
{
 int my_arr[SIZE]={34,54,75,86,90,120,140,155,200},i,j,temp;
 
 for(i=0, j=SIZE-1 ; i<j ; i++, j--)
 {
      temp=my_arr[i];
     my_arr[i]=my_arr[j];
     my_arr[j]=temp;
 }

 //printf("%dReverse array is: \n", my_arr[i]);

 for(i=0; i<SIZE ; i++)
 {
  printf("%d \n",my_arr[i]);
 }
}
