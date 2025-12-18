#include <stdio.h>
#include <stdlib.h>
void main() {
	int (*a)[3], n, m, i, j;//3 represent max no. of column 
	printf("Enter row and column sizes : ");
	scanf("%d %d", &m, &n);
	a =(int *) malloc ((m*3)*sizeof(int));// or a=malloc(m*3*sizeof(*a));
	printf("Enter %d elements : ", m * n);
	// Read the elements of the matrix
	for ( i=0;i<m;i++) {
		for ( j=0;j<n;j++) {
			scanf( "%d",a[i]+j);//or use &a[i][j] instead of a[i]+j
		}
	}
	printf("The given matrix is\n");
	// Display the elements
	for (i=0;i<m;i++ ) {
		for (  j=0;j<n;j++) {
			printf( "%d ",*(a[i]+j));// or use a[i][j]
		}
		printf("\n");
	}
}