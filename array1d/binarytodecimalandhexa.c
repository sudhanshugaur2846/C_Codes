#include <stdio.h>
int main()
{
    int n;
    int rem;
    int a[20];
    printf("Enter the decimal number :");
    scanf("%d", &n);
    int temp = n;
    int i=0;
    while(n){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    printf("The binary no. is : ");
    for (int j =i-1; j>=0; j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    int k = 0;
    while (temp)
    {
        rem = temp % 16;
        temp = temp/ 16;
        a[k] = rem;
        k++;
    }
    printf("The hexa no. is : ");
    for (int l = k - 1; l >= 0; l--)
    {
        if (a[l] >= 0 && a[l] <= 9)
        {
            printf("%d", a[l]);
        }
        else  printf("%c",a[l]+55);
    }
    return 0;
}
