#include<stdio.h>
#include<string.h>
struct student{
char name[20];
char dep[20];
int year;
float cgpa;
};
int main(){
	int n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the details of student - %d\n",i+1);
		printf("Enter name : ");
		scanf("%s",s[i].name);
		printf("Enter department : ");
		scanf("%s",s[i].dep);
		printf("Enter year of study : ");
		scanf("%d",&s[i].year);
		printf("Enter cgpa : ");
		scanf("%f",&s[i].cgpa);
	}
	//sorting condn
	for(int j=1;j<=n-1;j++){
	for(int i=0;i<=n-1-j;i++){
		if(strcmp(s[i].name,s[i+1].name)>0){
			char change[20];
			strcpy(change,s[i+1].name);
			strcpy(s[i+1].name,s[i].name);
			strcpy(s[i].name,change);
			char newchange[20];
			strcpy(newchange,s[i+1].dep);
			strcpy(s[i+1].dep,s[i].dep);
			strcpy(s[i].dep,newchange);
			int temp;
			temp=s[i].year;
			s[i].year=s[i+1].year;
			s[i+1].year=temp;
			float femp;
			femp=s[i].cgpa;
			s[i].cgpa=s[i+1].cgpa;
			s[i+1].cgpa=femp;
		}
	}
	}
	//output
	printf("Details of students\n");
	for(int i=0;i<n;i++){
		printf("Student : %d Name : %s\n",i+1,s[i].name);
		printf("Department : %s Year of study  : %d CGPA  : %.2f\n",s[i].dep,s[i].year,s[i].cgpa);
	}
	return 0;
}