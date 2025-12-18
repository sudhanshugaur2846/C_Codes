#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter how many rows want to make :");
    scanf("%d",&r);
    printf("Enter how many coloumns want to make :");
    scanf("%d",&c);
    int arr[r][c];
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            scanf("%d",&arr[i][j]);
        }       
    }
    printf("The given matrix is :\n");
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }

    printf("The transpose of matrix is :\n");
    for (int  i = 0; i < c; i++)
    {
        for (int j = 0; j< r; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}

