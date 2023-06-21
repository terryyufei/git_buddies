#include <stdio.h>

int main()
{
    int a[] = {2, 8, 5, 1, 7, 3, 0, 4, 6, 9}; //unsorted array

    int length = 10; //the length of the array

    for (int i = 0; i < length; i++) //outer loop it controls the number of passes we are going to make on our data set
    {
        for (int j = 0; j < (length -1); j++) //inner loop is responsible for checking our logic in this case we want to sort in ascending order
        {
            if (a[j] > a[j+1]) //logic for ascending order
            {
                int temp = a[j]; // swap is done here using a temp variable
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nArray after sorting in ascending order: \n");
    for (int i = 0; i < length; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}
