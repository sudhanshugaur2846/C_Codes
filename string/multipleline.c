#include <stdio.h>
#include<string.h>
int main()
{
    char text[500];
    char line[100];
    printf("Enter text here: ");
    while(1){
        fgets(line,sizeof(line),stdin);
        if(strcmp(line,"\n")==0){
            break;
        }
        strcat(text,line);
    }
    puts("The output is :");//we can also use printf instead of puts
    puts(text);
    return 0;
}
