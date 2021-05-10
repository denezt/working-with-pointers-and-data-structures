/*
* a. In the HEAP we control the Memory allocation and deallocation;
* must be explicitly deallocated.
* b. The Stack is automatically controlled.
* c. The Global variables live for the entire lifetime of the program.
*/

#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "ctype.h"
#include "math.h"
#include "time.h"

void programTitle(){
	printf("\033[32mProperly writing use of pointers example.\033[0m\n");
}

// Call by reference function
int *add(int *a, int *b){	// This is the 'Called Function'
	int *c = (int*)malloc(sizeof(int));
	*c = *a + *b;
	return c;
}

int main(void){ // This is the 'Calling Function'
	int a = 5, b = 10;
	// Calling a and b by value
	int* ptr = add(&a,&b);
	/*
	* Calling this function will modify the memory stack
	* and can inadvertly remove pointers.
	*/
	programTitle();
	printf("Sum Total: %d\n", *ptr);
	return 0;
}
