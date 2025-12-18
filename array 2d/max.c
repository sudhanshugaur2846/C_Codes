#include <stdio.h>
#include <limits.h>
int main()
{
    int r, c;
    printf("Enter how many rows want to make :");
    scanf("%d", &r);
    printf("Enter how many coloumns want to make :");
    scanf("%d", &c);
    int arr[r][c];
    int max = INT_MIN;
    int smax = INT_MIN;
    int min = INT_MAX;
    int smin = INT_MAX;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            if (max < arr[i][j])
            {
                max = arr[i][j];
                
            }
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (smax < arr[i][j] && arr[i][j] < max)
                smax = arr[i][j];
            if (smin > arr[i][j] && arr[i][j] > min)
                smin = arr[i][j];
        }
    }
    printf("The max element is : %d\n", max);
    printf("The smax element is : %d\n", smax);
    printf("The min element is : %d\n", min);
    printf("The smin element is : %d\n", smin);
    // for showing index of max element in given matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max ==arr[i][j])
            {
                printf("The rows and columns respected are %d and %d",i,j);
            }

        }
    }
    
    return 0;
}
