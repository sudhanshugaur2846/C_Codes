#include <stdio.h>// fibonacci series like 0,1,1,2,3,5,8,13,etc
int fibonacci(int n){
    if (n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }

}
void main(){
    int c,m;
    printf("Enter the term of which you want to know fibonacci ");
    scanf("%d",&m);


    c=fibonacci(m);
    printf("The fibonacci of %d is %d",m,c);

}