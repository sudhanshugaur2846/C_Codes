#include <stdio.h>
int hcf(int a,int b){
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}


int main()
{
    int m,n,gcd,lcm,c;
    printf("enter no. ");
    scanf("%d %d",&m,&n);
    for (int  i = 1; i<=m && i <=n; i++)
    {
        if ( m % i==0 && n%i==0) gcd=i;
    }
    printf("gcd is %d\n",gcd);
    c=hcf(m,n);
    printf("with recursion gcd is %d\n",c);
    
    return 0;
}
