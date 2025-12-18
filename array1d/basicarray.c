#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many elements want in your array: ");
    scanf("%d",&n);
    int arr[n];// array declare 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Here are the elements you have entered in the array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("The %d elements of array is :%d\n",i+1,arr[i]);
    }
    
    return 0;
}
