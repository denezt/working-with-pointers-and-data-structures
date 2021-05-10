/*
* Experiment for working with
* pointers and dynamic memory
*/
#include "stdio.h"
#include "string.h"
#include "time.h"
#include "math.h"
#include "ctype.h"

#define	ADD_NEWLINE	printf("\n");

void debugger(unsigned int *in){
	time_t timer;
	time(&timer);
	printf("\033[36mDEBUG\033[0m\t\033[33m[%u]\033[34m %i\033[0m\n",timer, in);
}

void logger(char *msg, char *val){
	time_t timer;
	time(&timer);
	printf("\033[35mLOG\033[0m\t\033[33m[%u]\033[32m %s\033[0m\n",timer,msg);
}

int main(){
	int a;	// Stores on the stack
	int *ptr;
	ptr = (int*)malloc(sizeof(int)); // Stores in the HEAP
	*ptr = 10;
	printf("Pointer => %d, Value => %i\n",ptr,*ptr);
	free(ptr); // We need to free the previously allocated memory
	ptr = (int*)malloc(sizeof(int)); // Stores in the HEAP
	// We can also store an Array in the HEAP
	ptr = (int*)malloc(20*sizeof(int));
	for (int i = 0; i < 10; i++){
		ptr[i] = i + 2;
	}
	printf("First Value in Array Pointer: %i\n",*(*(&(ptr))));
	printf("Address of dynamically Alloc Mem Array: %i\n",*(&(ptr)));
	for (int i = 0; i < 10; i++){
		printf("%i ", ptr[i]);
	}
	ADD_NEWLINE;
	free(ptr);
        return 0;
}
