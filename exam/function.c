#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
void made(){
    int i;
    printf("enter the number :");
    scanf("%d",&i);
    printf("the entered no. is %d",i);
    }
void printstar(int n){
    for (int i=0;i<=n;i++){
        printf("%c",'*');
    }
}
void main(){
    int a=2,b=3,c;
    c=sum(a,b);
    //printf("the sum is %d",c);
    //made();
    //printstar(7);

}