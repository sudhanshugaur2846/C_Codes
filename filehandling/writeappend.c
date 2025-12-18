#include <stdio.h>
int main()
{
    //'w' means write mode mee jo bhi text delta.txt file mee likha hoga usko 
    // wo pahle erase kr dega phir woo likhega 
    FILE *ptr=NULL;
    // ptr=fopen("delta.txt","w");
    // fputc('a',ptr);
    // fputs("hello everyone",ptr );

    //'a' means append mode mee jo text delta.txt mee likha hoga usho wo bina
    //erase kiye hue uske aage se continue kregal likhna
    ptr=fopen("delta.txt","a");
    fputc('a',ptr);
    fputs("india",ptr);
    fclose(ptr);
    return 0;
}