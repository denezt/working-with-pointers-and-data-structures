#include "stdio.h"

int getSum(int *A){ // 'int *A' or 'int A[]' is the same
	int sum = 0;
	int size = sizeof(A)/sizeof(A[0]);

	printf("getSum => Size of A = %d, size of A[0] = %d\n", sizeof(A),sizeof(A[0]));
	for (int i=0; i < size; i++){
		printf("%p\n",(A + i));
		sum += *(A + i); // A[i] is also *(A+i)
	}
	return sum;
}

void getDouble(int *A, int size){ // 'int *A' or 'int A[]' is the same
	printf("getDouble => Size of A = %d, size of A[0] = %d\n", sizeof(A),sizeof(A[0]));
	for (int i=0; i < size; i++){
		printf("%p\n",(A + i));
		A[i] = 2*A[i];
	}
}

int main(){
	int A[] = { 1, 2, 3, 4, 5 };
	/**
	* We use can use the following:
	* int total = getSum(&A);
	* int total = getSum(&A[0]);
	*/
	int total = getSum(A);
	printf("Sum of elements = %d\n", total);
	printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

	// 2 * item in array
	int size = sizeof(A)/sizeof(int);
	getDouble(A,size);
	for (int i = 0;i < size; i++){
		printf("%d ",A[i]);
		if (i == (size-1)){ printf("\n");}
	}
	return 0;
}
