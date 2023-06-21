#include <stdio.h>

//initial array : 5, 9 , 7 , 6 , 4 , 0 , 2 , 3 , 8 , 1
//
//
//        step 0 : 0, 9 , 7 , 6 , 4 , 5 , 2 , 3 , 8 , 1
//        step 1 : 0, 2 , 7 , 6 , 4 , 5 , 2 , 3 , 8 , 9
//        step 2 : 0, 1 , 2 , 6 , 4 , 5 , 7 , 3 , 8 , 9
//        step 3 : 0, 1 , 2 , 3 , 4 , 5 , 7 , 6 , 8 , 9
//        step 4 : 0, 1 , 2 , 3 , 4 , 5 , 7 , 6 , 8 , 9
//        step 5 : 0, 1 , 2 , 3 , 4 , 5 , 7 , 6 , 8 , 9
//        step 6 : 0, 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9
//        step 7 : 0, 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9
//        step 8 : 0, 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9

int main()
{
  int a[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1}; //unsorted array

  int length = 10; //length of the array

  for (int i = 0; i < length - 1; i++) //outer loop
  {
    int min_pos = i;

    for (int j = i + 1; j < length; j++) //inner loop
    {
         if (a[j] < a[min_pos]) ; //logic check
            min_pos = j;
    }

    if (min_pos != i) 
    {
      int temp = a[i];
      a[i] = a[min_pos];
      a[min_pos] = temp;
    }

  }

  printf("\nArray after sorting in ascending order: \n");
  for (int i = 0; i < length; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;

}

