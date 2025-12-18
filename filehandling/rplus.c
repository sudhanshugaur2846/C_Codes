#include <stdio.h>
int main()
{
    //ye ush file mee overwrite starting se shuru krta hai
    //aur ye read starting se hi huru krta hai
    FILE *ptr=NULL;
    ptr=fopen("delta.txt","r+");
    char str[20];
    fputc('z',ptr);
    // fputs("sudhanshu",ptr);
    // char ch=fgetc(ptr);
    // printf("The character is %c",ch);
    // fgets(str,10,ptr);
    // printf("The string is %s",str);
    fclose(ptr);
    return 0;
}
