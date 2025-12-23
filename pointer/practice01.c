#include <stdio.h>
typedef struct book {
	char name[30];
	float price;
	int pages;
}nasa;
void read1(nasa *);
void display(nasa *);
void main() {
	struct book b;
	read1(&b);
	display(&b);
}
void read1(nasa *ptr1) {
	printf("Enter a book name : ");
	scanf("%s",ptr1->name );// always remember ptr1->name means (*ptr1).name  learn it!!!!!!
	printf("Enter price of the book : ");
	scanf("%f",&ptr1->price);
	printf("Enter number of pages in the book : ");
	scanf("%d",&ptr1->pages );
}
void display(nasa *ptr1) {
	printf("Given book information is\nName : %s\nNumber of pages: %d\nPrice of the book : %f\n",ptr1->name,ptr1->pages,ptr1->price ); // Write the correct code
}