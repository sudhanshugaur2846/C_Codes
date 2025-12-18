#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char character;
    char name[20];
}alpha,beta,gamma1;    //gamma is a built in function so it give error 
//struct student alpha, beta, gamma1; // here we declare alpha,beta... as a global variable
void print()
{
    printf("alpha marks is %d\n", alpha.marks);
}
int main()
{
    alpha.id = 1;
    beta.id = 2;
    gamma1.id = 3;
    alpha.marks = 45;
    beta.marks = 88;
    gamma1.marks = 90;
    alpha.character = 'a';
    beta.character = 'b';
    gamma1.character = 'c';
    strcpy(alpha.name, "sudhanshu"); // alpha.name="sudhanshu";
    printf("The mark of alpha is %d and his character is %c\n", alpha.marks, alpha.character);
    printf("The name of alpha is %s\n", alpha.name); // we can also use puts(alpha.name); instead of printf
    print();

    return 0;
}
