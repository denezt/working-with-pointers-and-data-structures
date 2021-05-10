#include "stdio.h"
#include "time.h"
#include "ctype.h"

int main(){
	int array[] = { 131, 392, 43, 841, 15, 6933, 4, 99 };
	printf("%u\n",array);		// Shows pointer
	printf("%u\n",&array[0]);	// Shows pointer
	printf("%u\n",array[0]);	// Shows value
	printf("%u\n",*array);		// Shows value

	int arrsize = sizeof(array)/sizeof(int);
	printf("Items in Array: %i\n", arrsize);
	for (int i=0; i < arrsize; i++){
		printf("Address: &array[%i]\t= %p\n",i, &array[i]);
		printf("Address: array + %i\t= %i\n",i, array + i);
		printf("Value: array[%i]\t\t= %i\n",i, array[i]);
		printf("Value: *(array + %i)\t= %i\n",i, *(array + i));
	}
	return 0;
}
