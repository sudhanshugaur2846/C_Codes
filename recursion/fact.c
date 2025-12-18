#include <stdio.h>
int fact(int x){
    if (x==0) return 1;
    return x*fact(x-1);
}
int main()
{
    int c, n;
    printf("Enter the number to calculate factorial : ");
    scanf("%d",&n);
    c=fact(n);
    printf("The factorial of %d is %d",n,c); 

    return 0;
}
