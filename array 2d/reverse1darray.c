#include <stdio.h>
void reverse(int a[],int n){
    int start=0,end=n-1;
    int temp;
    while(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    printf("Enter the elements of array :");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    printf("after reversing array the array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
