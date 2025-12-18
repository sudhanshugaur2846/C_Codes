#include <stdio.h>
void sorting(int a[],int n){
    int temp;
    for (int  i = 0; i <n-1 ; i++)
    {
        for (int j = 0; j <n-1-i; j++)
        {
            if (a[j]>a[j+1]) {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter total elements :");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)// taking inputs 
    {
        scanf("%d",&a[i]);
    }
    sorting(a,n);
    for (int  i = 0; i < n; i++)//printing outputs
    {
        printf("%d  ",a[i]);
    }
    printf("The max element in the array is : %d\n",a[n-1]);
    printf("The smax element in the array is : %d\n",a[n-2]);
    printf("The min element in the array is : %d\n",a[0]);
    printf("The smin element in the array is : %d\n",a[1]);
    return 0;
}
