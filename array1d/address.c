#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},temp;
    /*printf("%d\n",&a[0]);
    printf("%d\n",&a);
    printf("%d\n",a);
    printf("%d\n",&a[1]);*/
    printf("the first and last element is %d %d\n",a[ 0],a[4]);
    temp=a[4];
    a[4]=a[0];
    a[0]=temp;
    printf("the first and last element is %d %d\n",a[ 0],a[4]);

    return 0;
}
