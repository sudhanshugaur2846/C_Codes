#include<stdio.h>
void main() {
	int i, j, m, n;
	int *a[5], *b[5];//here in bracket it represent max no. of row atleast should be  5 
	printf("Enter the order of matrix : ");
	scanf("%d %d", &m, &n);
	
	for (i = 0; i < m; i++) {
		a[i] = (int *)malloc (n*sizeof(int)); // Allocate heap memory
	}
	printf("Enter %d elements : ", m*n);
	for (i=0;i<m;i++) { 
		for (j=0;j<n;j++ ) { 
			scanf("%d", a[i]+j);
		}
	}
	printf("The given matrix is\n");
	// Write the code to display the given matrix
	for (i=0;i<m;i++) { 
		for (j=0;j<n;j++ ) { 
			printf("%d ", *(a[i]+j));
		}
		printf("\n");
	}
	for (i = 0; i < n; i++) {
		
		b[i] = (int *) malloc (m*sizeof(int)); // Allocate heap memory
		
	}
	for (i=0;i<n;i++ ) {// Write the code in for
		for (j=0;j<m;j++  ) { // Write the code in for
			*(b[i] +j) = *(a[j] +i); // Complete the statement or we can use b[i][j]=a[j][i];
			
		}
	}
	printf("Transpose of the given matrix is\n");
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", *(b[i] + j));
		}
		printf("\n");
	}
}