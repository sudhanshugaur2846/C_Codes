/*#include <stdio.h>
int fun(int n){
    if (n==1) return 1;
    return n+fun(n-1); 
}
int main()
{
    int n,sum;
    printf("Enter the no. :");
    scanf("%d",&n);
    sum=fun(n);
    printf("The sum is :%d",sum);

    return 0;
}*/

#include <stdio.h>
int fun(int n,int m){
    if (m==n) return m;
    return m+fun(n,m+1); 
}
int main()
{
    int n,sum;
    printf("Enter the no. :");
    scanf("%d",&n);
    sum=fun(n,1);
    printf("The sum is :%d",sum);

    return 0;
}

