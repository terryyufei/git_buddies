#include <stdio.h>

int main()
{
	int n;
	printf("Enter size of Array : \n");
	scanf("%d", &n);
        int i;
	int arr[n];
	printf("Enter all the %d elements : \n" , n);

	for(i=0;i<n;i++)
	{ 
	  scanf("%d", &arr[n]);
	}

	printf("Your elements are : \n");

	for(i=n;i<n;i++)
	{
	  printf("%d",arr[n]);
	}	
	return(0);
}
