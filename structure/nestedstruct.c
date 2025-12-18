#include <stdio.h>
#include <string.h>
int main()
{
    // struct d
    // { // data type is struct dob
    //     int day;
    //     int month;
    //     int year;
    // };
    struct student
    // {
    //     int id;
    //     char name[20];
    //     struct d dob;

    // } s;
    {
        int id;
        char name[20];
        struct d
        {
            int day;
            int month;
            int year;
        } dob;

    } s;
    s.id = 1;
    strcpy(s.name, "sagar");
    s.dob.day = 10;
    s.dob.month = 07;
    s.dob.year = 2006;
    printf("%d %s %d-%d-%d", s.id, s.name, s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
