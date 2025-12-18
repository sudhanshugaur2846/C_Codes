/*#include <stdio.h>
int  power(int n,int m,int s){
    if (s==m) return n;
    else return n*power(n,m,s+1);
    

}
int main()
{
    int n,m,p;
    printf("Enter the x powet to y : ");
    scanf("%d%d",&n,&m);
    p=power(n,m,1);
    printf("The value is %d",p);
    return 0;
}*/

#include <stdio.h>
void  power(int n,int m,int s,int x){
    if (s==m) {
        printf("The required value is %d",x);
        return;
    }
    power(n,m,s+1,n*x);
    

}
int main()
{
    int n,m,p;
    printf("Enter the x powet to y : ");
    scanf("%d%d",&n,&m);
    power(n,m,0,1);
    
    
    return 0;
}
