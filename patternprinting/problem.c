#include<stdio.h>

int main(){
    float p,c,m;
    printf("enter the physics marks");
    scanf("%d",&p);
    printf("enter the chemistry marks");
    scanf("%d",&c);
    printf("enter the maths marks");
    scanf("%d",&m);
    float percentage=((float)(p+c+m)/300)*100;
    if (p<=33 || m<=33 || c<=33){
        printf(" you are fail because your mark in one of subject is less than thirty three");
    }
    else if(percentage<=40){
        printf("your percentage is less than fourty");
    }
    else{
        printf("congratulations for passing exam ");
    }

    return 0;
}
