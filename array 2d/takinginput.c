#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter how many rows want to make :");
    scanf("%d",&r);
    printf("Enter how many coloumns want to make :");
    scanf("%d",&c);
    int arr[r][c];
    int b[r][c];
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            //printf("Enter the arr[%d][%d]element :",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
        
    }
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            //printf("Enter the arr[%d][%d]element :",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
        
    }

    printf("The matrix after addition is :\n");
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            printf("%d ",arr[i][j]+b[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}

