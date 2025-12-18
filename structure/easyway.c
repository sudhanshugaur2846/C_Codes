#include <stdio.h>
#include <string.h>
int main()          
{                //using typedef <previous_data_type_name> <alias_name>
    typedef struct student
    {
        int id;
        int marks;
        char character;
        char name[20];
    }gaur;       // now use can use gaur instead of struct student 
    gaur alpha={1,10,'a',"sagar"};
    gaur beta={2,20,'b',"lucky"};
    gaur gamma1={3,30,'c',"anshika"};
    printf("The mark of alpha is %d and his character is %c\n", alpha.marks, alpha.character);
    printf("The name of alpha is %s\n", alpha.name); // we can also use puts(alpha.name); instead of printf

    return 0;
}
