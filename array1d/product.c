#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array want to make : ");
    scanf("%d",&n);
    int mul=1,a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        mul=mul*a[i];
    }
    printf("The multiply of elements is : %d",mul);
    
    return 0;
}
