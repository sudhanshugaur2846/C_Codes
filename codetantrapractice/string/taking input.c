#include <stdio.h>
int fun(char a[]){
    for (int i = 0; a[i]!='h'; i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}
int main()
{
    char a[78];
    gets(a);
    fun(a);
    //printf("using puts properties ");
    //puts(a);
    //printf("using printf properties ");
    //printf("%s",a);
    return 0;
}

