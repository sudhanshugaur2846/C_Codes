#include <stdio.h>
struct example {
	// initialize int vraible data
int data;
struct example *p;
	// define a pointer variable p referring to parent structure example
};
void main() {
	struct example s1, s2;
	printf("Enter an integer for first structure variable : ");
	scanf("%d",&s1.data ); // complet the code
	printf("Enter an integer for second structure variable : ");
	scanf("%d",&s2.data  ); // complete the code
	s1.p = &s2;// store the address of s2;
	s2.p =NULL; // store NULL ;
	printf(" %d --> %d\n",s1.data,s1.p->data ); // complete the code print s1.data and s1.p data
}