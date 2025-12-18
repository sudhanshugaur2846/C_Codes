#include <stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter string : ");
    scanf("%s",name);
    int n;
    printf("Enter position on which you want to insert the character : ");
    scanf("%d",&n);
    char ch;
    printf("Enter the character :");
    scanf(" %c",&ch);
    char temp;
    int l=strlen(name);
    name[l+1]='\0';
    for (int i = l; i >=n; i--)
    {
        name[i]=name[i-1];
    }
    name[n-1]=ch;
    printf("The string is: %s ",name);
    

    return 0;
}
