#include<stdio.h>
int lar(int a,int b,int c){
	int max;
	max=(a>b && a>c)?a:(b>c?b:c);
	return max;
}
int small(int a,int b,int c){
    int min;
	min=(a<b && a<c)?a:(b<c?b:c);
	return min;
}
void main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max,min;
	max=lar(a,b,c);
	min=small(a,b,c);
	printf("%d",max);
	printf("%d",min);
	
}