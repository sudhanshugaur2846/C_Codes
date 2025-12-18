#include <stdio.h>
#include <math.h>
void main() {
	// decalre variables here
	int n;
	float degrees;
	float radian,result;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter degrees : ");
	scanf("%f",&degrees);
	// write code here
	radian=(float)(3.14/180)*degrees;
	result=sin(radian);

	//printf("The sine value sin(%f) = %f\n",  );
	printf("The sine value using built-in sin(%f) = %f\n",degrees,result);	
}	