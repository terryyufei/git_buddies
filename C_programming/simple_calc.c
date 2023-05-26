#include <stdio.h>

float sum(float a ,float b)
{
	return (a+b);
}

float sub(float a ,float b)
{
        return (a-b);
}

float mult(float a ,float b)
{
        return (a*b);
}

float div(float a ,float b)
{
        return (a/b);
}

int main()
{
	int choice;
	float a,b,result;
	printf("Enter Your Choice : \n 0 For Addition\n 1 For Subtraction\n 2 For Multiplication\n 3 For Division\n:");
	scanf("%d",&choice);
	printf("Enter your two numbers:\n");
	scanf("%f %f", &a ,&b);

	switch(choice)
	{
		case 0:
		       result=sum(a,b);
		       break;
		case 1:
                       result=sub(a,b);
                       break;
		case 2:
                       result=mult(a,b);
                       break;
		case 3:
                       result=div(a,b);
                       break;
	}

	printf("The result is:%.2f\n",result);
	return 0;
}
