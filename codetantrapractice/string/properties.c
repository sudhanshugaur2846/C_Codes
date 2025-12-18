#include <stdio.h>
#include<string.h>
int main()
{
    
	
	//Write your code here...
	char ch;
	
	for(;;){
        printf("Enter a character : ");
		scanf("%c",&ch);
        printf("The given character is : %c\n",ch);
		if (ch=='$') break;
        else continue;
		
    }
	
	
	

    return 0;
}
