#include <stdio.h>
int  power(int n,int m){
    if(m==1) return n;
    return power(n,m/2)*power(n,m/2);
    

}
int main()
{
    int n,m,p;
    printf("Enter the x power to y : ");
    scanf("%d%d",&n,&m);
    p=power(n,m);
    printf("The value is %d",p);
    return 0;
}
