#include <stdio.h>
int main()
{
    union employee{
        int id;
        char c;
        int salary;
    }a;
    a.salary=40;
    a.id=10; 
    a.c='a';  // union k case mee jo sabse piche rahega ushi ka accurat value aayega
    printf("The id of employe is %d\n",a.id);    //aur baki sub garbage value le lega
    printf("The salary of employe is %d\n",a.salary);
    printf("The character of employee is %c\n",a.c);

    return 0;
}
