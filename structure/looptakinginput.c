#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter no. of students :");
    scanf("%d",&n);
    struct student
    {
        int id;
        int rno;
        char name[20];
        char fav_char;
    } s[n];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d id :",i);
        scanf("%d", &s[i].id);
        printf("Enter %d rollno :",i);
        scanf("%d", &s[i].rno);
        printf("Enter %d name:",i);
        getchar();                   //to take \n
        scanf("%[^\n]", s[i].name);
        printf("Enter  %d fav_char :",i);
        scanf(" %c", &s[i].fav_char); // ek space hona chahiye %c k pahle remember!!
    }
    for (int i = 1; i <=n; i++)
    {
        printf("The id of %d is %d\n", i,s[i].id);
        printf("The roll no of %d is %d\n",i, s[i].rno);
        printf("The name of %d is %s\n", i,s[i].name);
        printf("The fav_char of %d is %c\n",i, s[i].fav_char);
        printf("\n");
    }
    return 0;
}
