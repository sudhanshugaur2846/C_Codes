#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter n values : ");
    scanf("%d",&n);
    printf("Enter %d names :",n);
    char name[n][20];
    for (int i = 0; i<n; i++)
    {
        scanf(" %[^\n]",name[i]);// space before %[^\n]
    }
    //sorting  condition
    char temp[n][20];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0;j<=n-2-i; j++)
        {
            if ((strcmp(name[j],name[j+1]))>0){
                strcpy(temp[j],name[j+1]);
                strcpy(name[j+1],name[j]);
                strcpy(name[j],temp[j]);

            }
            
        }
        
    }
    //to display the sorted names
    printf("your entered names are :");
    for (int i = 0; i<n; i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
