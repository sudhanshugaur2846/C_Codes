#include <stdio.h>
void reverse(int n){
    if (n==0) return ;
    printf("%d\n",n);
    reverse(n-1); 
    printf("%d\n",n);
    
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    reverse(n);

    return 0;
}

