#include <stdio.h>
void multiply(int m,int n,int p,int q,int a[m][n],int b[n][q],int c[p][q]){
    if (n==p){                     //int a[][n],int b[][q],int c[][q]  
        for (int i = 0; i <m; i++) //int (*a)[n],int(*b)[q],int(*c)[q]    //both are corret form            
        {                                 // it is mendatory to write coloumn but 
            for (int j = 0; j < q; j++)   // we can neglect the row 
            {
                c[i][j]=0;
                for (int k = 0; k <n ; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];   
                }   
            } 
        }
    printf("This is the resultant matrix :\n");
    for (int i = 0; i < m; i++)// printing resultant matrix
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ",c[i][j]);
        }  
        printf("\n");
    }
    // return;//return is optional 
    }
    else{
        printf("Product of matrix is not allowed. ");
        /*return ;*/ } // return is optional 
}
int main()
{
    int m,n,p,q;
    printf("Enter the rows and columns of 'A' matrix :");
    scanf("%d%d",&m,&n);
    
    int a[m][n];
    for (int i = 0; i < m; i++)//taking inputs for a matrix
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    printf("Enter the rows and columns of 'B' matrix :");
    scanf("%d%d",&p,&q);
    int b[p][q];
    for (int i = 0; i < p; i++)//taking inputs for b matrix
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d",&b[i][j]);
        }  
    }
    printf("This is the matrix -A :\n");
    for (int i = 0; i < m; i++)//printing matrix
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }  
        printf("\n");
    }
    printf("This is the matrix -B :\n");
    for (int i = 0; i < p; i++)//printing matrix
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ",b[i][j]);
        }  
        printf("\n");
    }
    int c[m][q];
    multiply(m,n,p,q,a,b,c);
    return 0;
}
