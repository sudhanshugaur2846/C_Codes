#include <stdio.h>
int main()
{
    //ye write given file k text k last mee krta hai 
    //aur read starting se krta hai
    FILE *ptr=NULL;
    ptr=fopen("delta.txt","a+");
    char str[20];
    // fputc('a',ptr);
    // fputs("sudhanshu",ptr);
    // char ch=fgetc(ptr);
    // printf("The character is %c",ch);
    fgets(str,10,ptr);
    printf("The string is %s",str);
    fclose(ptr);
    return 0;
}
