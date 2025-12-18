#include <stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,(*a)[10];
    printf("Enter the row and column of array :");
    scanf("%d%d",&m,&n);
    a =malloc(m * sizeof (int)); 
    printf("Enter the elements of array here:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Your resultant arrray is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    free(a);
    return 0;
}