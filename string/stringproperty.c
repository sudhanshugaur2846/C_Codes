#include <stdio.h>
#include<string.h>
int main()
{
    char s1[]="sudhanshu",s2[]="gaur";
    puts(strcat(s1,s2));//concatenate both string
    puts(strrev(s1));// printf("%s",strcat(s1,s2)); we can use it in place of puts
    puts(strcpy(s1,s2));
    printf("%d\n",strlen(s1));
    printf("%d\n",strcmp(s1,s2));// we cannot use strlen and strcmp with puts keyword
    printf("%d\n",strcmp(s2,s1));//because it return in string format value
    return 0;
}
