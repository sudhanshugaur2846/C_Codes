#include <stdio.h>
int main()
{
    char a='7';
    char *ptr=&a;
    printf("The address of a is %d \n",ptr);
    printf("The address of a is %d \n",&a);
    //ptr=ptr+2;
    printf("%d",--ptr);
    return 0;
}
