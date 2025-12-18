#include <stdio.h>
#include <math.h>
void main() {
	// decalre variables here
	int n;
	double degrees,sin1=0.000000,sin2=0.000000,sin3;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter degrees : ");
	scanf("%f",&degrees);
	// write code here
	
	for(int i=1;i<=2*n-1;i=i+4){
		int fact=1;
		for(int k=1;k<=i;k++){
			fact=fact*k;
		}
		
		sin1=(float)pow(degrees,i)/fact+sin1;
	}
	for(int i=3;i<=2*n-1;i=i+4){
		int fact=1;
		for(int k=1;k<=i;k++){
			fact=fact*k;
		}
		sin2=(float)pow(degrees,i)/fact+sin2;
	}
	sin3=sin1+sin2;
	//double degrees
	printf("The sine value sin(%f) = %f\n",degrees,sin3);
	//printf("The sine value using built-in sin(%f) = %f\n",degrees,);	
}	