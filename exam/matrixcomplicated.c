#include <stdio.h> //array 1D

void main()
{
    /*int marks[4];
    for (int i = 0; i <=3; i++)
    {
        printf("Enter the %d element of array marks: ",i+1);
        scanf("%d",&marks[i]);
    }
    // now i am going to print the elements of marks array.
    for (int i = 0; i <=3; i++)
    {
        printf("The %d element of marks array is :%d\n",i+1,marks[i]);
    }
    */
    // going to print 2 D array
    // int matrix[2][3]={{6,3,5},{8,6,4}};
    // printf("%d",matrix[1][1]);

    // 2D array
    // here i am going to take inputs of matrix array
    int matrix[2][4];
    for (int i = 0; i <= 1; i++)
    {

        for (int j = 0; j <= 3; j++)

        {
            printf("Enter the %d , %d element of matrix : ", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    // here i am going to print element  :

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf(" the %d , %d element of matrix is %d\n", i, j,matrix[i][j]);
            
        }
        
    }
    // here i am going to print in form of matrix
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("%d\t",matrix[i][j]);
            
        }
    printf("\n");
        
    }
    

}