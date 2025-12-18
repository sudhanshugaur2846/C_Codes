#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many elements wants to enter : ");
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0) a[i]=a[i]+10;
        else a[i]=a[i]*2;
    }
    printf("The elements are : \n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
