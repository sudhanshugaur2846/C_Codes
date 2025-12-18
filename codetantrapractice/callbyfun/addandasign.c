//exercise problem usin call reference we have to asssign sum of a and b to a and difference of a and b to assign to b
#include <stdio.h>
void fun(int* x,int* y){
    int temp=*x+*y;
    *y=*x-*y;
    *x=temp;
}
int main()
{
    int a=3,b=5;
    printf("the value of a and b is : %d %d \n",a,b);
    fun(&a,&b);
    printf("the value of a and b is : %d %d \n",a,b);
    return 0;
}
