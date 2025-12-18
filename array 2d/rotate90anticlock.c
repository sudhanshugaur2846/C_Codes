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

    int c[n][m];
    for (int i = 0; i < n; i++)// applied conditions
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j]=a[j][n-1-i];

            
        }
        printf("\n");
    
    }
    printf("The 90 degree anticlockwise matrix is : \n");
    for (int i = 0; i < n; i++)//printing resultant matrix
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}