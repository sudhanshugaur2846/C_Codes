#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter how much marks you want to stor :");
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i <n; i++)
    {
        printf("Enter the marks of %d student :" ,i+1);
        scanf("%d",&a[i]);
    }
    
    printf("max no. :\n");
    int max=a[0];;
    for (int  i = 1; i <n; i++)
    {
        if (a[i]>max) max=a[i];
        else max=max;
        
    }
    printf("%d",max);
    return 0;
}
