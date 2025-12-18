#include<stdio.h>

void main()
{
    int num,sum=0,last_digit;
    printf("Enter the no.");
    scanf("%d",&num);
    while (num!=0){
        if(num>0){

            last_digit=num%10;
            sum=sum+last_digit;
            num=num/10;
        }
        else{
            num=-num;
            last_digit=num%10;
            sum=sum+last_digit;
            num=num/10;

        }
        

    }
    printf("The sum of digits is %d",sum);



}

