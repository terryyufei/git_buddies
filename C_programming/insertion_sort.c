#include <stdio.h>

void insertion_sort(int a[], int length); //function prototype

int main()
{
    int a[] = {2, 5, 1,3,7,8, 0, 4, 6, 9}; //unsorted array

    int length = 10; //length of our array

    insertion_sort(a, length); //calling the insertion sort function

    printf("\nArray after sorting in ascending order: \n");
    for (int i = 0; i < length; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}

void insertion_sort(int a[], int length)
{
    for (int i = 1; i < length; i++) // outer loop is responsible for iterating through our array
    {
        int key = a[i];

        int j = i - 1;

        while (j >= 0 && a[j] > key ) //inner loop is responsible for the logic and also for shifting the values
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;
    }
}

