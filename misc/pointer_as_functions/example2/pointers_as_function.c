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
	printf("\033[31mPoorly writing use of pointers example.\033[0m\n");
}

/**
* Call by reference function
* This function is saved to the Stack
*/
int *add(int *a, int *b){	// This is the 'Called Function'
	int c = *a + *b;	// This variable is saved in the stack and maybe be removed.
	return &c;
}

int main(void){ // This is the 'Calling Function'
	int a = 5, b = 10;
	// Calling a and b by value
	int* ptr = add(&a,&b);
	/*
	* Calling this function will modify the memory stack
	* and can inadvertly remove pointers.
	*/
	programTitle();			// This function was call from stack and could have removed all pointers.
	printf("Sum Total: %d\n", *ptr); // This variable was probably removed from the stack (compiler dependent).
	return 0;
}
