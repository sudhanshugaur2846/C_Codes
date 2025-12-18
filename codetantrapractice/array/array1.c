#include <stdio.h>
int main()
{
    
    int n;
    printf("Enter the no. of elements you want to enter in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the no. want to put as element in array : ");
    for (int i = 0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Here is the element you have entered a moment before in an array : ");
    /*for (int j = 0; j<n; j++)
    {
        printf("%d\n",a[j]);
    }*/
    
    
    return 0;
}
