#include <stdio.h>
#include<stdlib.h>
int main()
{   //using calloc()tocreate an array
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int* ptr;
    ptr=(int*)calloc(n,sizeof(int));//hamne memory heap segment se liya hai 
    if(ptr== NULL){
        printf("Memory allocation failed ");
        return 1;
    } 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array :",i);
        scanf("%d",ptr+i);// we can also use &ptr[i] intstead of ptr+i
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The %d element of the array is: %d\n",i,*(ptr+i));
    }
    //using realloc()
    printf("Enter the new size of the array :");
    scanf("%d",&n);
    ptr=(int * ) realloc(ptr,n*sizeof(int));
    if(ptr== NULL){
        printf("Memory allocation failed ");
        return 1;
    } 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array :",i);
        scanf("%d",ptr+i);// we can also use &ptr[i] intstead of ptr+i
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The %d element of the array is: %d\n",i,*(ptr+i));
    }
    
    free(ptr);//very important (heap segment ka memory khaali krna zaroori hai)
    return 0;
}
