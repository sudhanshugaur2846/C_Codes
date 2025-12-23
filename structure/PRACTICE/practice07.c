#include <stdio.h>
struct student{
    int class;
    int id;

};
int main()
{
    struct student s;
    struct student *p=&s;
    printf(" the add :%p\n",s);
    printf(" the add :%p\n",&s.class);
    printf(" the add :%p\n",&s.id);


    printf("%p",p);

    
    
    return 0;
}
