#include <stdio.h> 

int main()
{
    int arr[] = {34, 54, 60, 75, 86, 90, 120, 140, 200}; // declared and intialized     
    int  length = sizeof(arr) / sizeof(int); 

    int i ;
    
    for (i = 0; i < length; i++)
    {
	int index = length - i - 1;
	printf("%d \n ", arr[index]);
     }
    return(0);
}
