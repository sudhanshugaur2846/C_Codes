#include<stdio.h>
void main(){
    int marks[4];
    
    for (int i = 1; i < 5; i++)
    {


        printf("enter the %d element: ",i);
        scanf("%d",&marks[i]);

    }
    
    printf("your entered elements are :\n");
    for (int i = 1; i < 5; i++){
        printf("the %d element is :%d\n",i,marks[i]);
    }

    

} 
    
