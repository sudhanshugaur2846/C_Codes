#include <stdio.h>
#include <stdlib.h>
void read1(int *a, int m, int n);
void addition_of_two_matrices(int *a, int *b, int m, int n);
void display(int *a, int m, int n);
void main() {
	int *a, *b, m, n, p, q;
	printf("Enter the size of the first matrix : ");
	scanf("%d%d", &m, &n);
	a = (int *) malloc (m*n*sizeof(int ));
	read1(a, m, n);
	printf("Enter the size of the second matrix : ");
	scanf("%d%d", &p, &q);
	b = (int *) malloc (p*q*sizeof(int));
	read1(b, p, q);
	printf("The first matrix is\n");
	display(a, m, n);
	printf("The second matrix is\n");
	display(b, p, q);
	if ( m==p && n==q) {
		addition_of_two_matrices(a, b, m, n);
	} else {
		printf("Addition is not possible\n");
	}
}
void read1(int *a, int m, int n) {
	int i,j;
	printf("Enter %d elements : ",m*n);
	for (i = 0; i<m; i++) { 
		for (j = 0; j<n; j++) { 
			scanf("%d",a+i*n+j );
		}
	}
}
void display(int *a, int m, int n ){
	int i, j;
	for(i = 0;i<m ; i++){
		for(j = 0; j<n; j++) {
			printf("%d ", *(a+i*n+j));
		}
		printf("\n");
	}
}
void addition_of_two_matrices(int *a, int *b, int m, int n ) {
	int i, j, *c;
	c = (int *) malloc (m*n*sizeof(int)); 
	for (i = 0; i<m; i++) { 
		for (j = 0;j<n ; j++) { 
			*(c + i * n + j) = *(a + i *n + j) +  *(b + i * n + j);
		}
	}
	printf("The Addition Matrix is\n");
	display(c, m, n);
}