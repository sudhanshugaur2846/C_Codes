
#include <stdio.h>

/*int main() {
    int n; // Variable to store the number of terms
    int first = 0; // First Fibonacci number
    int second = 1; // Second Fibonacci number
    int next; // Variable to store the next Fibonacci number

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the header for the Fibonacci series
    printf("Fibonacci Series: ");

    // Loop to generate and print the Fibonacci series
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // For the first two terms (0 and 1)
        } else {
            next = first + second; // Calculate the next term
            first = second;        // Update 'first' to the previous 'second'
            second = next;         // Update 'second' to the newly calculated 'next'
        }
        printf("%d ", next); // Print the current Fibonacci number
    }

    //printf("\n"); // Print a newline for better formatting
    return 0; // Indicate successful program execution
}*/
void main(){
    int n;
    scanf("%d",&n);
    int first=0;
    int second=1;
    int next;
    int sum=0;
    printf("the sques are ");
    for (int i = 0; i < n; i++)
    {
        if (i<=1){
            next=i;
            //printf("%d",next);
        }
        else{
            next=first+second;
            first=second;
            second=next;
            //printf("%d",next);


        }
        sum=sum+next;
        printf("%d",next);
    }
    printf("\n");

    //printf("the sum upto that sweries is %d",sum);
    printf("the %d th term is %d",n,next);
    
}