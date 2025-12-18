#include <stdio.h>
int main()
{
    int n;
    printf("Enter the elemens of array :");
    scanf("%d",&n);
    int a[n];
    int count=0;
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]>25) count++;
    }
    printf("no. of elements greater than 25 are :%d",count);
    return 0;
}
