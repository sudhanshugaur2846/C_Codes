#include <stdio.h>
int main()
{
    // char s[ ]={'S','U','D','H','A','N','S','H','U','\0'};
    // int i=0;    // or s[]="SUDHANSHU" optional to give valu inside []
    // while(s[i]!='\0'){
    //     printf("%c",s[i]);
    //     i++;
    // }
    char s[50];//necessary to give some value inside []
    printf("Enter the string here : ");
    gets(s);      //taking string as input
    //puts(s);
    printf("Your entered string is : ");
    printf("%s",s);
    //puts(s);  we can use any one of them for printing the enetered string 
    return 0;
}
