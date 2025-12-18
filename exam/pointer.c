#include <stdio.h>
void main(){
    int a=10;
    int *ptr=&a;
    printf("the value of a is %d \n",&a);
    
    printf("the value of  ptr is %d\n",ptr);
    ptr=ptr+1;
    printf("%d",ptr);

}