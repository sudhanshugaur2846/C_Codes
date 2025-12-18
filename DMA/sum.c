#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *a=(int *) malloc(sizeof(int));
    int *b=(int *) malloc(sizeof(int));
    printf("Enter two numbers :");
    scanf("%d%d",a,b);
    printf("The sum of two numbers is :");
    printf("%d",*a + *b);
    free(a);
    free(b);
    return 0;
}
