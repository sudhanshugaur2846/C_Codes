#include <stdio.h>

void swap(int* x,int* y){
    int temp;
    temp=*x;

    *x=*y;
    *y=temp;
}

int main()
{
    int a=10,b=20;
    printf("the value of a and b are : %d,%d\n",a,b);
    swap(&a,&b);
    
    printf("the value of a and b  after call by refrence is : %d,%d\n",a,b);
    return 0;
}
