#include <stdio.h>
typedef struct student{
char name[20];
int age;
float height;
}gaur;

void read1(gaur *ptr){
	printf("Enter student name, age and height : ");
	scanf("%s %d %f",ptr->name,&ptr->age,&ptr->height);
}
gaur copyStructureVariable(gaur a,gaur b){
	b=a;
	return b;
}
void display(gaur x){
	printf("Student name : %s\n",x.name);
	printf("Age : %d\n",x.age);
	printf("Height : %f\n",x.height);
}

void main() {
	struct student s1, s2;
	read1(&s1);
	s2 = copyStructureVariable(s1, s2);
	display(s2);
}