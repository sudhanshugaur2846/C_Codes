#include <stdio.h>
#include <math.h>
void binary(int n)
{
    int sum = 0,lastdigit;
    int i=0;
    while (n)
    {
        
        lastdigit=n%10;
        sum=sum+pow(2,i)*lastdigit;
        n=n/10;
        i++;
        
    }
    printf("The Decimal value is : %d",sum );
}
int main()
{
    int n, c;
    printf("Enter binary number :");
    scanf("%d", &n);
    //c = log10(n) + 1;
    binary(n);
    // c=log10(n)+1;
    // printf("%d",c);

    return 0;
}
