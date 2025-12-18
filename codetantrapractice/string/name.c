#include <stdio.h>
void fun2(char ch[]){
    for (int i = 0;ch[i]!='\0'; i++)
    {
        printf("%c",ch[i]);
    }
    
    
}
void fun1(char str[]){
    for (int i = 0;str[i]!='\0'; i++)
    {
        scanf("%c",&str[i]);
    }

}

int main()
{
    printf("enter the string here ");
    char str[10];
    //fun1(str);
    //char ch[6]={'h','e','l','l','o','\0'};
    //char ch[6]="hello";
    //fun2(str);
    gets(str);
    printf("The string you have entered is %s\n",str);
    printf("using puts \n");
    puts(str);
    printf("using function approach : \n");
    fun2(str);

    return 0;
}
