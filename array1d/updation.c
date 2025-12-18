#include <stdio.h>
int main()
{
    int n;
    printf("Enter the elements of array");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

    }
    int b;
    printf("enter index want to update ");
    scanf("%d",&b);
    int c;
    printf("enter value with which you want to update ");
    scanf("%d",&c);
    a[b]=c;
    for (int i = 0; i < n; i++)
    {
        printf ("%d ",a[i]);
    }
    
    
    return 0;
}
