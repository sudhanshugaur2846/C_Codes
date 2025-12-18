#include <stdio.h>
int main()
{
    int a=10;
    float b=10;
    int *p=&a;
    float *q=&b;
    printf("The address of p is %p\n",p);
    printf("The address of q is %p\n",q);
    return 0;
}
