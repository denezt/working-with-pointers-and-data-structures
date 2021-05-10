/*
* Experiment for working with
* Dynamically Memory Allocated pointers
*/
#include "stdio.h"
#include "string.h"
#include "time.h"
#include "math.h"
#include "ctype.h"

void debugger(unsigned int *in){
	time_t timer;
	time(&timer);
	printf("\033[36mDEBUG\033[0m\t\033[33m[%u]\033[34m %i\033[0m\n",timer, in);
}

void logger(char *in){
	time_t timer;
	time(&timer);
	printf("\033[35mLOG\033[0m\t\033[33m[%u]\033[32m %s\033[0m\n",timer,in);
}

int main(){
	// Using malloc function
	void *ptr = malloc(3*sizeof(int)); // 3 elements with the size of integer datatype
	// Typecast to integer
	int *tcptr = (int*)ptr;
	tcptr[0] = 256;
	debugger(*tcptr);
	free(ptr); 	// We can free either 'ptr' or 'tcptr' but not both

	// New pointer with direct typecast
	int *nptr = (int*)malloc(3*sizeof(int)); // 3 elements with the size of integer datatype
	*nptr = 1;        // same as nptr[0]
	*(nptr + 1) = 2;  // same as nptr[1]
	*(nptr + 2) = 4; // same as nptr[2]
	*(nptr + 3) = 8;   // same as nptr[3]
	debugger(nptr[3]);
	free(nptr);

	// Using calloc function - will also initialize the memory it allocates
	int *cptr = (int*)calloc(3, sizeof(int)); // 3 elements with the size of integer datatype
	*cptr = 1;
	debugger(*cptr);
	free(cptr);

	// Using realloc function - will allow to to change the size of the memory block allocation
	int *fptr = (int*)malloc(sizeof(int)); 		// Fixed pointer with only 4 bytes
	int *nfptr = (int*)realloc(fptr,4*sizeof(int));	// Changing allocated size to 16 bytes
	printf("%i\n",sizeof(fptr));
	printf("%i\n",sizeof(nfptr));

	return 0;
}
