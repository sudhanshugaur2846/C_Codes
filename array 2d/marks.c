#include <stdio.h>
int main()
{
    // int r;
    // printf("Enter how many students are there :");
    // scanf("%d", &r);
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j]=10;
            // if (j == 0)
            // {
            //     printf("Enter the %d student roll no.:", i + 1);
            //     scanf("%d", &arr[i][j]);
            // }
            // else
            // {
            //     printf("Enter the mark of %d student :" ,i + 1);
            //     scanf("%d", &arr[i][j]);
            //     printf("\n");
            // }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
