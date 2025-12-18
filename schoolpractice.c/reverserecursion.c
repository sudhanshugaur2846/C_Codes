#include <stdio.h>
int reverse(int num,int sum){
    int ld;
    if (num==0) return sum;
    //rev=rev*10+(num%10);
    ld=num%10;
    sum=sum+ld;
    return reverse(num/10,sum);

}
int main()
{
    int num,c;
    printf("enter the no. ");
    scanf("%d",&num);
    c=reverse(num,0);
    printf("The sum after recursion :   %d",c);

    return 0;
}
