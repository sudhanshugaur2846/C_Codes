#include <stdio.h>
int main()
{
    char str[]="gaur";
    char* ptr=str;//yaha pr jo str ka data type hai wahi same data type pointer ka bhi hona chahiye
    // printf("%p\n",str);//array name itself a base address remember it !!!!
    // printf("%p\n",&str[0]);
    // printf("%p\n",ptr);
    // for ( ptr;*ptr !='\0'; ptr++)
    // {
    //     printf("%c",*ptr);
    // }
    //OR
    // while(*ptr !='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    // }
    // str[0]='x';//valid condition
    // *(ptr+1)='x';//valid condition
    // str="sagar";//not valid condition
    ptr="sagar";//valid condition
    printf("%s\n",ptr);
    printf("%s\n",str);

    return 0;
}
