#include <stdio.h>
int  linearsearch(int a[],int n,int key){//it return index of key 
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key){
            //printf("%d",i);
            count++;
        } 

    }
    return count;
    
}
int main()
{
    int n;
    printf("Enter total elements :");
    scanf("%d",&n);
    int a[n];
    printf("Enter key want to search:");
    int key; scanf("%d",&key);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int result=linearsearch(a,n,key);
    printf("The total no. of %d in array is %d",key,result);
    return 0;
}
