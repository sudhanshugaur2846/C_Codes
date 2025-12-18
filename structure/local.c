#include <stdio.h>
#include<string.h>
struct student{
    int id;
    int marks;
    char character;
    char name[20];
};
int main()
{
    struct student alpha,beta,gamma;//here we declare alpha,beta... as a local variable
    alpha.id=1;
    beta.id=2;
    gamma.id=3;
    alpha.marks=45;
    beta.marks=88;
    gamma.marks=90;
    alpha.character='a';
    beta.character='b';
    gamma.character='c';
    strcpy(alpha.name,"sudhanshu");//alpha.name="sudhanshu"; 
    printf("The mark of alpha is %d and his character is %c\n",alpha.marks,alpha.character);
    printf("The name of alpha is %s\n",alpha.name);//we can also use puts(alpha.name); instead of printf

                               
    return 0;
}
