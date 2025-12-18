#include <stdio.h>
#include <stdlib.h>
void read1(int *a, int m, int n);
void multiplication_of_two_matrices(int *a, int *b, int m , int n, int q);
void display(int *a, int m, int n);
void main() {
	int *a, *b, m, n, p, q;
	printf("Enter the size of the first matrix : ");
	scanf("%d%d", &m, &n);
	a = (int *) malloc (m*n*sizeof(int)); // Allocate the heap memory
	read1(a, m, n);
	printf("Enter the size of the second matrix : ");
	scanf("%d%d", &p, &q);
	b = (int *) malloc (p*q*sizeof(int)); // Allocate the heap memory
	read1(b, p, q);
	printf("The first matrix is\n");
	display(a, m, n);
	printf("The second matrix is\n");
	display(b, p, q);
	if ( n==p) { // Write the condition part
		multiplication_of_two_matrices(a, b, m, n, q);
	} else {
		printf("Multiplication is not possible\n");
	}
}
void read1(int *a, int m, int n) { // Write the formal arguments
	int i, j;
	printf("Enter %d elements : ", m*n); // Complete the statement
	for (i = 0;i<m ; i++) { // Write the condition part
		for (j = 0; j<n; j++) { // Write the condition part
			scanf("%d",a+i*n+j ); // Complete the statement
		}
	}
}
void display(int *a, int m, int n ) { // Write the formal arguments
	int i, j;
	for (i = 0; i<m; i++) { // Write the condition part
		for (j = 0; j<n; j++) { // Write the condition part
			printf("%d ", *(a+i*n+j )); // Complete the statement
		}
		printf("\n");
	}
}
void multiplication_of_two_matrices(int *a, int *b, int m , int n, int q ) { // Write the formal arguments
	int i, j, k, *c;
	c = (int *)malloc(m*q*sizeof(int)); // Allocate the heap memory
	for (i = 0; i<m; i++) { // Write the condition part
		for (j = 0; j<q; j++) {
			*(c+i*q+j)=0;
			for (k = 0;k<n ; k++) { // Write the condition part
				*(c + i * q + j) += *(a + i * n + k) *  (*(b + k * q + j)); // Complete the statement
			}
		}
	}
	printf("The Multiplication Matrix is\n");
	display(c, m, q);
}