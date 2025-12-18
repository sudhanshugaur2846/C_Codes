#include <stdio.h>

void fun(int n,int m) {
    if (m>n )
        return ;
    printf("%d ", m);               // Print current number
    fun(n,m+1);
    return;       // Recursive call with n-1
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fun(num,1);

    return 0;
}
