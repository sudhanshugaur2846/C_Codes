#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array want to make : ");
    scanf("%d",&n);
    int a[n];
    
    for (int  i = 0; i < n; i++)
    {
         scanf("%d",&a[i]);
    }
    int max=a[0];
    for (int  i = 1; i < n; i++)
    {
        if (max>a[i]) max=max;
        else max=a[i];
    }
    printf("The maximum value of elements is : %d\n",max);
    int smax=a[0];
    for (int  i = 1; i < n; i++)
    {
        if (a[i]==max) continue;
        if (smax>a[i] ) smax=smax;
        else smax=a[i];
    }
    printf("The smaximum value of elements is : %d\n",smax);

    
    return 0;
} 