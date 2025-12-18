#include <stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    printf("Enter the row and column of array :");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array here:");
    int * ptr=(int *) malloc ((n*m)*sizeof(int));//iska mtlab yah hota hai ki DMA ne ek aisa array 
    for (int i = 0; i < m; i++)//bnaya hai jiska base address pointer 'p' mee store kraya gya hai
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",(ptr+i*n+j));
        }
    }
    printf("Your resultant arrray is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",*(ptr+i*n+j));
        }
        printf("\n");
    }
    free(ptr);

    return 0;
}