#include<stdio.h>
void main(){
    int array[4]={8,2,3,4};
    int *ptr=array;// yaha pe '&' operator array se pehle nhi lagaega learn this!!!!!!
    printf("the address of array is %d \n",&array);
    //printf("the address of first element of array is %d \n",&array[0]);
    //printf("the address of array is %d \n",&array[]);
    //printf("the address of array is %d \n",array);
    //printf("the address of first element of array is %d \n",&array[1]);
    //printf("the address of array is %d \n",*(array));
    //printf("the address of first element of array is %d \n",*(&array[0]));
    //printf("the address of array is %d \n",&array[]);
    //printf("the address of array is %d \n",*(array+2));
    //printf("the address of first element of array is %d \n",*(&array[1]));
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    


} 