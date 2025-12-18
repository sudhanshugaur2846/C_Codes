#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter row and column of matrix :");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for (int i = 0; i < m; i++)//taking inputs
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given matrix is : \n");
    for (int i = 0; i < m; i++)//printing that matrix
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int c[m][n];
    for (int i = 0; i < m; i++)//condition aplied
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j]=a[m-1-i][n-1-j];
        }
        printf("\n");
    
    }
    printf("The 180 degree clockwise or anticlockwise  matrix is : \n");
    for (int i = 0; i < m; i++)//printing resultant matrix
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}