#include <stdio.h>
int fun(int cr,int cc,int er,int ec){
    if (cc==ec && cr==er) return 1;
    else if (cc==ec-1 && cr==er-1) return 2;
    else if (cc==ec && cr==er-1) return 1;
    else if (cr==er && cc==ec-1) return 1;
    else if (cr>er || cc>ec) return 0;
    else if  (cc==ec) return (cr+1,cc,er,ec);
    else if (cr==er) return (cr,cc+1,er,ec);
    return fun(cr+1,cc,er,ec)+fun(er,cc+1,er,ec);
}
int main()
{
    int n,m,ways;
    printf("Enter the rows ");
    scanf("%d",&n);
    printf("Enter the columns ");
    scanf("%d",&m);
    ways=fun(1,1,n,m);
    printf("The total ways is  %d",ways);
    return 0;
}
