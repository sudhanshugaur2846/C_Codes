#include <stdio.h>
int factorial(int num){
    if (num==0 || num ==1){
        return 1;
    }
    else {
        return (num*factorial(num-1));
    }
}
void main(){
    int num,fact;
    printf("Enter the number to whom you want to calculate factorial.");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial of %d is: %d",num,fact);

}