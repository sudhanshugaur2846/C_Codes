#include <stdio.h>
int main()
{
    int a[50],n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int pos,value;
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the value: ");
    scanf("%d",&value);
    for (int i = n; i >=pos ; i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=value;
    n++;
    for (int i = 0; i <n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
