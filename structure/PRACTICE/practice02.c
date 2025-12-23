#include <stdio.h>
struct student {
int markone,marktwo,markthree;
int rollno;
int total;
float average;
};
void main() {
	struct student s[60];
	int i, n;
	printf("Enter number of students : ");
	scanf("%d", &n);
	for (i=0;i<n;i++) { // Complete the code in for
		printf("Enter rollno, three subjects marks of student-%d: ", i);
		scanf("%d %d %d %d",&s[i].rollno,&s[i].markone,&s[i].marktwo,&s[i].markthree); 
		s[i].total=s[i].markone+s[i].marktwo+s[i].markthree;
		s[i].average=(float)s[i].total/3;
	}
	for (i=0;i<n;i++ ) {
		printf("Student-%d rollno = %d\tTotal marks = %d\tAverage marks = %f\n",i,s[i].rollno,s[i].total,s[i].average); // Fill the code in printf()
	}
}