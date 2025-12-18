#include <stdio.h>
int fun(int array[]){
    for (int i = 0; i <4; i++)
    {
        printf("%d\n",array[i]);
    }
    array[0]=30;
    return 0;
}
int fun2(int* ptr){
    for (int i = 0; i <4; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
    
}
int fun3(int arr[2][4]){
    for (int i = 0; i<2 ; i++)
    {
        for (int j = 0; j <4; j++)
        {
            printf("the %d ,%d element is %d\n",i,j,arr[i][j]);
        }
        
    }
    
}

int main()
{
    //int a[4]={1,2,3,4};
    int a[2][4]={{1,2,3,4},{5,6,7,8}};
    //printf("the value of first element is %d\n",a[0]);
    //fun(a);
    //printf("the value of first element is %d",a[0]);
    //fun2(a);
    fun3(a);
    
    return 0;
}
