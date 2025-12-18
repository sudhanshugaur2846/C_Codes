#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array want to make : ");
    scanf("%d",&n);
    int a[n],count=0;
    
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        count++;
        
    }
    printf("The no. of even values in the giben array : %d",count);
    
    return 0;
} 