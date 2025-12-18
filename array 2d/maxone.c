#include <stdio.h>
#include<limits.h>
int main()
{
    int r,c;
    printf("Enter how many rows want to make :");
    scanf("%d",&r);
    printf("Enter how many coloumns want to make :");
    scanf("%d",&c);
    int arr[r][c];
    int maxone=INT_MIN;
    int row;
    for (int  i = 0; i < r; i++)
    {
        int count=0;      
        for (int j = 0; j< c; j++) 
        {
            scanf("%d",&arr[i][j]);
            if (arr[i][j]==1) count++;
        }
        if (maxone<count){
            maxone=count;
            row=i;
        }
    }
    printf("The max no. of one in a row is :%d\n",maxone);
    printf("The row which contain maxone is :%d\n",row);

    return 0;
}

