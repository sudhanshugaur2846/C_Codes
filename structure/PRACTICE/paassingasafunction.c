// #include <stdio.h>
// struct student{
//     int id;
//     int marks;
// };
// void printfunction(struct student m,struct student n){
//     printf("The student id is : %d and his marks is %d",m.id,m.marks);
// }
// int main()
// {
//     struct student a,b;
//     a.id=1;
//     b.id=2;
//     a.marks=10;
//     b.marks=20;
//     printfunction(a,b);//argument passing
//     return 0;
// }
#include <stdio.h>
struct book {
	char name[30];
	float price;
	int pages;
};
void display(struct book);
void main() {
	struct book b = {"Learn C Language", 325.25, 468};
	display(b);
}
void display(struct book a) {
	printf("Given book information is\nName : %s\nNumber of pages: %d\nPrice of the book : %f\n", a.name,a.pages,a.price); // Write the correct code
}
