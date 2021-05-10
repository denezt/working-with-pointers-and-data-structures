#include "stdio.h"
#include "string.h"

#define NEWLINE	printf("\n");

int main(){
	int n;
	printf("Enter size of array: \n");
	scanf("%d",&n);
	int *array1 = (int*)malloc(n*sizeof(int)); // A dynamically allocated array
	printf("Array 1 block address: %d\n",array1);
	// int *array1 = (int*)calloc(n, sizeof(int)); // A dynamically allocated array
	int incr = 0;
	while (incr < n){
		array1[incr] = incr + 1;
		incr++;
	}
	for (int i = 0;i < n; i++){
		printf("%d ", array1[i]);
	}
	NEWLINE
	/*
	* Reallocate will attempt to extend the previous block if possible.
	* If this is not possible it will create a new block and delete the previous.
	* block.
	*/
	int *array2 = (int*)realloc(array1, 0); // is same as using free(ptr)
	printf("Previous block address = %d, new address = %d\n",array1, array2);
	NEWLINE
	int *array3 = (int*)realloc(NULL, n*sizeof(int)); // equivalent to malloc
	printf("Previous block address = %d, new address = %d\n",NULL,array3);
	for (int i = 0; i < n; i++){
		printf("%d\n",array3[i]);
	}
	return 0;
}


