#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the element of array :");
    scanf("%d",&n);
    printf("Enter the elements of array here:");
    int * p=(int *) malloc (n*sizeof(int));//iska mtlab yah hota hai ki DMA ne ek aisa array 
    for (int i = 0; i < n; i++)//bnaya hai jiska base address pointer 'p' mee store kr diya gya hai
    {
        scanf("%d",p+i);
    }
    printf("Your resultant arrray is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    // now i am going to increase size of array by using realloc
    int m;
    printf("Enter the size to which you want to increase array: ");
    scanf("%d",&m);
    int total=n+m;
    p=(int *)realloc (p,total*sizeof(int));
    for (int i = 0; i < total; i++)
    {
        scanf("%d",(p+i));
    }
    for (int i = 0; i < total; i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}
