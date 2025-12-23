#include <stdio.h>

struct student {
    int id;
    int marks;
};

void update(struct student *s) {
    s->marks = 95;   // (*s).marks = 95
}

int main() {
    struct student s1;

    s1.id = 1;
    s1.marks = 60;

    update(&s1);

    printf("ID = %d\n", s1.id);
    printf("Marks = %d\n", s1.marks);

    return 0;
}
