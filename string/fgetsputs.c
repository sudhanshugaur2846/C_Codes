#include <stdio.h>
// #include<string.h>
int main()
{
    char name[20];
    printf("Enter the string here:");
    fgets(name,sizeof(name),stdin);
    for (int i = 0;name[i]; i++)
    {
        if(name[i]=='\n'){
            name[i]='\0';
            break;
        }
    }
    // name[strcspn(name,"\n")]='\0';
    puts(name);//puts automatically ek \n bhi de deta hai yani ki next line
    return 0;
}
