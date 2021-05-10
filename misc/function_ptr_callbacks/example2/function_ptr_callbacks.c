#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "ctype.h"
#include "math.h"
#include "time.h"

#define NEWLINE	printf("\n");

int compare(int a, int b){
	return (a > b) ? 1 : -1;
}

void BubbleSort(int *A, int n, int (*compare)(int,int)){
	int i,j,temp;
	for (i=0; i < n; i++){
		for (j = 0; j < i; j++){
			if (compare(A[j], A[j+1]) > 0){	// compare A[j] with A[j+1] and SWAP if needed
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
}

int main(){
	int i, A[] = { 5,3,8,1,9,7 };
	printf("0 > 1 = %i\n",compare(0,1));
	printf("1 > 0 = %i\n",compare(1,0));
	BubbleSort(&A,6,compare);
	for (i = 0; i < 6; i++){
		printf("%i ",A[i]);
	}
	NEWLINE
	return 0;
}
