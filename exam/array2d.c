#include<stdio.h>
void main(){
    int marks[2][4]={{2,5,4,6},
           {65,89,24,10}};

    
    
    /*for (int i = 0; i < 4; i++)
    {


        printf("enter the %d element: ",i);
        scanf("%d",&marks[i]);

    }*/
    
    //here i am writing this row and column in form of a matrix.
    printf("your entered elements are :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
            //printf("the %d ,%d element is :%d\n",i,j,marks[i][j]);
            printf("%d\t",marks[i][j]);

        
        
        }

        printf("\n");

    

    }
}   
