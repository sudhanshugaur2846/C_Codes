#include <stdio.h>//code to swap two numbers
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10,b=20;
    printf("The value of a is %d and the value of b is %d\n",a,b);
    swap(&a,&b);
    printf("The value of a is %d and the value of b is %d\n",a,b);

    return 0;
}
