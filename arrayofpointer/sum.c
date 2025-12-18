#include <stdio.h>
#include <stdlib.h>
void read1(int *arr[5], int m, int n) {
	printf("Enter %d elements : ",m*n);

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",arr[i]+j);
		}
	}
}
void display(int *arr[5], int m, int n) {
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",*(arr[i]+j));
		}
		printf("\n");
	}
}
void sumOfEachRow(int *arr[5], int m, int n) {
	int sum;
	for(int i=0;i<m;i++){
		sum=0;
		for(int j=0;j<n;j++){
			sum+=*(arr[i]+j);
		}
		printf("Sum of row - %d elements = %d\n",i,sum);
	}
}
void main() {
	int *arr[5], i, j, m, n, sum;
	printf("Enter row and column sizes : ");
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++) {
		arr[i] = (int *) malloc(n * sizeof(int));
	}
	read1(arr, m, n);
	printf("The given matrix is\n");
	display(arr, m, n);
	sumOfEachRow(arr, m, n);
}