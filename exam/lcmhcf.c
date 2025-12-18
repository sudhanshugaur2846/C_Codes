#include <stdio.h>
int main()//fix this error!!!!
{
    int a, b, min,max, lcm, hcf;
    int product = 1;
    scanf("%d", &a);
    scanf("%d", &b);
    min = (a > b) ? b : a;
    max = a + b - min;
    printf("Min value is %d\n", min);
    printf("Max value is %d\n", max);

    for (int i = 1; i <= min; i++)
    {
        if (min % i == 0 && max % i == 0)
        {
            product = product * i;
        }
        else{
            product=product*1;

        }
        
    }
    printf("The hcf of %d and %d is : %d", a, b, product);

    return 0;
}
