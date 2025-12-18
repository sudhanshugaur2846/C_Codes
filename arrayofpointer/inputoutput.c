#include <stdio.h>
#include <stdlib.h>
void main() {
	int *p[10], n, m, i, j;
	printf("Enter row and column sizes : ");
	// Read the values of row and column
	scanf("%d%d",&m,&n);
	for (i = 0; i < m; i++) {
		p[i] = (int *) malloc (n*sizeof(int));// Allocate memory
	}
	printf("Enter %d elements : ", m * n);
	// Read the input elements
	for ( int i=0;i<m;i++) {
		for ( int j=0;j<n;j++) {
			scanf( "%d",p[i]+j);//*(p + i) + j) orr  &p[i][j]
		}
	}
	printf("The given matrix is\n");
	// Display the result
	for ( int i=0;i<m;i++) {
		for ( int j=0;j<n;j++) {
			printf( "%d ",*(p[i]+j));//*(*(p + i) + j)) orr  p[i][j]
		}
		printf("\n");
	}
}