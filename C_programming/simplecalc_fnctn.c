#include <stdio.h>
#define optns 4

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

float div(float a,float b)
{
    	return (a/b);
}

int main(void)
{
	float(*ptr2func[optns])(float,float)={sum,sub,mult,div};
    	int choice;
    	float a,b;
    	printf("Enter Your Choice : \n 0 For Addition\n 1 For Subtraction\n 2 For Multiplication\n 3 For Division\n:");
    	scanf("%d",&choice);
    	printf("Enter your two numbers:\n");
    	scanf("%f %f", &a ,&b);
    	printf("The result is :%.2f\n",ptr2func[choice](a,b));
    	return 0;
}

