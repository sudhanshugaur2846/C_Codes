#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array want to make : ");
    scanf("%d",&n);
    int a[n],max=0;
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (max>a[i]) max=max;
        else max=a[i];
    }
    printf("The maximum value of elements is : %d",max);
    
    return 0;
} 