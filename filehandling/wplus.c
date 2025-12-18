#include <stdio.h>
int main()
{
    //ye ush file k pure text ko erase kr k likhta hai
    //ye read blank file krta hai
    FILE *ptr=NULL;
    ptr=fopen("delta.txt","w+");
    char str[20];
    // fputc('a',ptr);
    // fputs("sudhanshu",ptr);
    char ch=fgetc(ptr);
    printf("The character is %c",ch);
    // fgets(str,10,ptr);
    // printf("The string is %s",str);
    fclose(ptr);
    return 0;
}
