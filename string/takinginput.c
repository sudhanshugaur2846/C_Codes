#include <stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("enter striing : ");
    // scanf("%[^\n]str",str);
    // scanf("%s",str);
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("your string is : %s\n",str);
    printf("lentgh is %d",strlen(str));
    return 0;
}
