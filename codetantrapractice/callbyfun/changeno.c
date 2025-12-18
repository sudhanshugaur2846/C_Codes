#include <stdio.h>
void change(int* x){
    *x=30;
}

int main()
{
    int a=10;
    printf("the value of a is %d\n",a);
    change(&a);
    printf("the value of a is %d\n",a);
    
    return 0;
}
