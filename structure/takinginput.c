#include <stdio.h>
#include <string.h>
int main()
{
    struct student
    {
        int id;
        int rno;
        char name[20];
        char fav_char;
    } s1, s2, s3;
    // s1.id=1;
    // s1.rno=2;
    // strcpy(s1.name,"gaur");
    // s1.fav_char='s';
    // printf("The id is %d\n",s1.id);
    // printf("The roll no is %d\n",s1.rno);
    // printf("The name is %s\n",s1.name);
    // printf("The fav_char is %c\n",s1.fav_char);

    // taking single input
    printf("Enter id :");
    scanf("%d",&s1.id);
    printf("Enter rollno :");
    scanf("%d",&s1.rno);
    printf("Enter name:");
    getchar();
    scanf("%[^\n]",s1.name);
    printf("Enter fav_char :");
    scanf(" %c",&s1.fav_char);// ek space hona chahiye %c k pahle remember!!
    printf("The id is %d\n",s1.id);
    printf("The roll no is %d\n",s1.rno);
    printf("The name is %s\n",s1.name);
    printf("The fav_char is %c\n",s1.fav_char);

    return 0;
}
