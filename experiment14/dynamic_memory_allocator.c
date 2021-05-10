#include "stdio.h"
#include "string.h"

#define NEWLINE	printf("\n");

int main(){
	int n;
	printf("Enter size of array: \n");
	scanf("%d",&n);
	int *array = (int*)malloc(n*sizeof(int)); //dynamically allocated array
	printf("Saving items to array...\n");
	for (int i=0; i < n; i++){
		array[i] = i + 1;
	}
	printf("Show item in array:\n");
	for (int i = 0;i < n; i++){
		printf("%d ", array[i]);
	}
	NEWLINE
	printf("Deallocate space.\n");
	free(array);
	array = NULL; // After free, adjust point to NULL
	printf("Show item in array:\n");
	if (array != NULL){
		for (int i = 0;i < n; i++){
			printf("%d ", array[i]);
		}
	} else {
		// array[0] = 0;
		printf("Array: %i\n",array);
	}
	NEWLINE
	printf("Using calloc function.\n");
	int *aptr = (int*)calloc(n,sizeof(int));
        printf("Saving items to array...\n");
	for (int i = 0; i < n; i++){
		*(aptr + i) = i + 1;
	}
	for (int i = 0; i < n; i++){
		printf("%d ", *(aptr + i));
	}
	NEWLINE
	free(aptr);
	return 0;
}
