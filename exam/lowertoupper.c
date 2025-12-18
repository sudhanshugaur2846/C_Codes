#include<stdio.h>
void main(){
    printf("1.lower to upper. 2. upper to lower.\n");
    int num;
    scanf("%d",&num);
    char ch;
    scanf(" %c",&ch);// in c character a space is mandatory!!!!!!
    
    switch(num){
        case 1:

        

        //num=ch-32;
        printf("%c",ch-32);
        break;
        
        case 2:
        //num=ch+32;
        printf("%c",ch+32);
        break;
        
        
        
    }
    
    
    
}