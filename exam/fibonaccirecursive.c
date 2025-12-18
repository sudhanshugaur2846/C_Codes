#include<stdio.h>
int fibonacci(int num){
    if (num==1  || num==0){
        return num;
    
    }
    else{
        return fibonacci(num-1)+ fibonacci(num-2);
        
    }
}

void main(){
    int num,s;
    printf("Enter the no. of terms upto which you want to calculate fibonacci :");
    scanf("%d",&num);
    //printf("The fibonacci upto %d terms are:\n",num);
    s=fibonacci(num);
    printf("The sum of fibonacci upto %d terms are:%d\n",num,s);

    

}