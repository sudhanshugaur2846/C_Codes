#include <stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
    for (int i =1; i<=row; i++){
        for(int space=1;space<=row-i;space++){
            printf("  ");
        }
        for(int j = 1; j<=2*i-1; j++)
        {
            printf("%d ",j);
            if(j==i){
                break;
            }
        }
        for (int k =i-1; k>=1; k--)
        {
            printf("%d ",k);
        }
        
        printf("\n");
        
    }
    
    
    return 0;
}
