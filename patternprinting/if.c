#include <stdio.h>
void main(){
	char a,b;
	scanf("%c",&a);
	scanf(" %c",&b);
	int c,d;
	c=(int)a;
	d=(int)b;
	if (c>d){
		printf(">");
	}
	else if (c<d){
		printf("<");
	}
	else{
		printf("=");
	}
	
	
}