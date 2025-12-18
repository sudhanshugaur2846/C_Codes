#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    for (int i = pos-1; i <=n-2; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for (int i = 0; i <n; i++)
    {
        printf("%d\n",a[i]);
    }
    
    

    
    return 0;
}
