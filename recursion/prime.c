#include <stdio.h>
int main()
{
    int l,u,islower=1;
    scanf("%d%d",&l,&u);
    int count=0;
    for (int i =l+1; i <u; i++)
    {
        int islower=0;
        for (int j=2; j*j<=i; j++)
        {
            if (i%j==0) {
                islower=1;
                break;
            }   
        }
        if(islower==0 && i>=2) count++;
        //islower=0;
        
    }
    printf("%d",count);
    
    return 0;
}
