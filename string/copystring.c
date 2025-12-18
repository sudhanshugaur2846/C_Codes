#include <stdio.h>
int main()
{
    char a[20],b[20];
    printf("Enter the string here: ");
    scanf("%[^\n]s",a);
    int i;
    for (i = 0;a[i]!='\0'; i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    
    printf("The given string is : %s\n",a);
    printf("The copied string is : %s\n",b);
    return 0;
}
