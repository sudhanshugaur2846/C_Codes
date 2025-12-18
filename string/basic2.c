#include <stdio.h>
#include<string.h>
int main()
{
    // char arr[]={'h','e','l','l','o','\0'};
    char arr[]="hello world";//yadi hum bina size k declare aur initialize krte hai tho koi error nhi aata
    arr[1]='a';
    arr[2]=97;// yaha jiski ascii value 97 hogi ushshe index 2 ko replace krega
    int i=0;
    while(arr[i]!='\0'){// or while (arr[i]){} or while(arr[i]!=0){}
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
    // for (int i = 0; arr[i]; i++)
    // {
    //     printf("%c",arr[i]);
    // }
    
    return 0;
}