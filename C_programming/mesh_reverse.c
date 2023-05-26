#include <stdio.h>

int main()
{
  int mesh_arr[10]= {34,54,60,75,86,90,120,140,155,200};
  int i;

  for(i=0; i<9; i++) //print the array in normal order first
  {
    printf("%d " , mesh_arr[i]);
  }
  
  printf("\n");

  for(i=8; i>=0 ; i--) //print the array in reverse order 
  {
   printf("%d\n ", mesh_arr[i]);
  }

 return (0);

}
