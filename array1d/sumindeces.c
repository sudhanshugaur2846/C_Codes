#include <stdio.h>
int main()
{
    int n;
    printf("Enter the total elements of array :");
    scanf("%d",&n);
    int a[n],sum1=0,sum2=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0) sum1=sum1+a[i];
        else sum2=sum2+a[i];
    }
    printf("The difference of given conditions is : %d",sum1-sum2);
    
    return 0;
}
