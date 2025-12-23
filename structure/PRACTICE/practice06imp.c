#include <stdio.h>
struct student {
	int regdno;
	char name[30];
	struct date {
		int day;
		int month;
		int year;
	}doj;
};
//humne niche pointer k through input liya hai so that actual address pr 
//jo bhi changes honge vo save honga aur hum inn values ko kishi bhi 
//function se fetch kr payenge
void read1(struct student *ptr){
	printf("Student number: ");
	scanf("%d",&ptr->regdno);
	printf("Student name: ");
	scanf("%s",ptr->name);
	printf("Joining date: ");
	scanf("%d %d %d",&ptr->doj.day,&ptr->doj.month,&ptr->doj.year);
}
void display(struct student s ){
	printf("Number: %d\n",s.regdno);
	printf("Name: %s\n",s.name);
	printf("Joining date: %d-%d-%d\n",s.doj.day,s.doj.month,s.doj.year);
}


void main() {
	int i;
	struct student s;
	read1(&s);
	display(s);
}