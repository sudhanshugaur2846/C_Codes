#include <stdio.h>
int main()
{
    int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int isprime=0;
	for(int i=2;i*i<=n;i++){
		if (n%i==0) {
			isprime=1;
			break;
			
		}
			
	}
	//return 0;
	if (isprime==0) printf("The given number is a prime number\n");
	else printf("The given number is not a prime number\n");
    return 0;
}
