#include <stdio.h>
int iterativefibonacci(int n)
{
    int first = 0, second = 1, sum;

    for (int i = 1; i < n; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
    }
    return first;
}

int main()
{
    int c, n;
    printf("Enter the term of which you want to calculate fibonacci: ");

    scanf("%d", &n);
    c = iterativefibonacci(n);
    printf("The %d term of fibonacci series is: %d\n", n, c);

    return 0;
}
