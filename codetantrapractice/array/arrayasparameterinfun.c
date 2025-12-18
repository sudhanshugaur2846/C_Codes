#include <stdio.h>
void fun1(int array[]){
    printf("The elements in a array suing array as a parameter in function are :\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",array[i]);
    }
    //printf("\n");
    printf("The value after changing array index positon 0 is : ");
    array[0]=5;// this will change value of array 'a' at index '0' permanently as equal to 5.
    
}
int fun2(int* ptr){
    printf("The elements in a array using array base address to function  are :\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("\n");
    return 0 ;
}
void fun3(int array[3][4]){
    printf("The value in 2D array represented int the form of matrix as  :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
        
    }
    
}

int main()
{
    int a[]={100,200,300,400};
    int b[3][4]={{10,26,38,40},{50,67,78,80},{92,85,52,65}};
    printf("%d\n",a[0]);
    fun1(a);
    printf("%d\n",a[0]);
    fun2(a);
    fun3(b);
    return 0;
}
