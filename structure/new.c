#include <stdio.h>
int main()
{
    // char fav_char;
    // int n;
    // printf("Enter no. :");
    // scanf("%d",&n);
    // printf("Enter character ");
    // scanf(" %c",&fav_char);
    // printf("your character is %c",fav_char);
    char name[20];
    int i;
    printf("ente no.: ");
    scanf("%d",&i);
    printf("enter name : ");
    // scanf("%s",name);
    getchar();
    scanf("%[^\n]",name);
    printf("your name is :%s",name);
    return 0;
}
