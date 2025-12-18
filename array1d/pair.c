#include <stdio.h>
int main()
{
    int n;
    printf("Enter the total elements of array :");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int c=12,count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j]==12)   count++;
        }
        
    }
    printf("the total no. of pairs is %d",count);
    
    
    
    return 0;
}
