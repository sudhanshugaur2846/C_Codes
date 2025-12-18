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
    int ones[r];
    for (int  i = 0; i < r; i++)
    {
        int count=0;      
        for (int j = 0; j< c; j++) 
        {
            scanf("%d",&arr[i][j]);
            if (arr[i][j]==1) count+=1;
        }   
         ones[i]=count;   
    }
    int max=INT_MIN;
    for (int  i = 0; i < r; i++)
    {
        if (max<ones[i]) max=ones[i]; 
    }                            
    for (int  j = 0; j < r; j++)
    {
        if (max==ones[j])
        printf("the row is %d\n",j);
    }
    return 0;
}

