#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("delta.txt","r");
    // char c=fgetc(ptr);
    // printf("The character through fgetc is %c\n",c);
    // c=fgetc(ptr);
    // printf("The character through fgetc is %c\n",c);
    char str[11];
    fgets(str,sizeof(str),ptr);// or arguments should be str(str,5,ptr); 
    printf("The string through fgets is %s\n",str);//remember middle parameter should be less or equal
                                                   //to size of array string

    fclose(ptr);
    return 0;
}
