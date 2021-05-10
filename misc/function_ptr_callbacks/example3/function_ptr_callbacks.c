#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "ctype.h"
#include "math.h"
#include "time.h"

#define NEWLINE	printf("\n");

// We are using 'const void' because the 'qsort' function has a generic type.
int compare(const void* a, const void* b){
	int A = *((int*)a);	// Typecasting to int* and getting value
	int B = *((int*)b);
	return A - B; // Will return a positive if A > B or Negative if A < B.
}

int main(){
	int i, A[] = {-51,22,-1,50,-6,4};
	qsort(A, 6, sizeof(int), compare);
	for (i = 0; i < 6; i++) printf("%d ", A[i]);
	NEWLINE
	return 0;
}
