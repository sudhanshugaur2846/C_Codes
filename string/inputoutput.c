#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter string here:");
    fgets(s,sizeof(s),stdin);    //scanf("%s",s);
    printf("Your entered string is :");
    printf("%s",s);
    int n=strlen(s);
    printf("The length of the string is :%d",n);

    return 0;
}
