#include <stdio.h>
int main()
{
    int num = 123; //variable declaration and initialization
    int *num_ptr = &num; //pointer decalration and initialization
    int **num_ptrtoptr = &num_ptr; //pointer to pointer declaration 
    printf("value of num: %d\n", num); //print value of variable
    printf("address of num: %p\n", &num);//print address of variable
    printf("value of num-ptr: %p\n", num_ptr);//print the value of the first pointer
    printf("value of num-ptr-ptr: %p\n" ,*num_ptrtoptr);//print the value of the pointer to pointer
    printf("address of num-ptr-ptr: %p\n", &num_ptrtoptr);// print the adress of the pointer to pointer
}
