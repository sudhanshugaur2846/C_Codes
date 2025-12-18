#include <stdio.h>
void decimal(int n){
    int a[10],rem;
    int i=0;
    while(n){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    for (int  j = i-1; j >=0; j--)
    {
        printf("%d",a[j]);
    }

}
int main()
{
    int n,c;
    printf("Enter the decimal number :");
    scanf("%d",&n);
    decimal(n);
    return 0;
}
