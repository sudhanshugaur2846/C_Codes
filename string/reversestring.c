#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];//yadi hum bina size k declare krte hai tho error aata hai
    printf("Enter the string here: ");
    scanf(" %[^\n]",str);
    int l=0;// int l=strlen(str);
    while(str[l]){
        l++;
    }
    int start=0,end=l-1;
    char temp;
    // while(start<end){
    //     temp=str[start];
    //     str[start]=str[end];
    //     str[end]=temp;
    //     start++;
    //     end--;
    // }
    //OR
    for (int start = 0,end=l-1;start<end;start++,end--)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
    }
    
    // printf("The reverse string is : %s",str);
    printf("The reverse string is :");
    puts(str);
    return 0;
}
