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
    int max[r];
    for (int  i = 0; i < r; i++)
    {
        int sum=0;      // jub i ka loop dobara chalega tho sum ki value 0 fir 
        for (int j = 0; j< c; j++) // initialize ho jayega
        {
            scanf("%d",&arr[i][j]);
            sum +=arr[i][j];
        }   
        max[i]=sum;   // putting sum of each row value in max matrix.
    }
    int mx=INT_MIN;
    for (int  i = 0; i < r; i++)
    {
        if (mx<max[i]) mx=max[i];// finding maximum element in max array and we put 
    }                            // it in mx variable
    for (int  j = 0; j < r; j++)
    {
        if (mx==max[j])
        printf("the row is %d\n",j);// printing index of row where maximum sum we get
    }  
    printf("The max value is %d \n",mx);  
    return 0;
}

