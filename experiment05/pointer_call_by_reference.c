#include "stdio.h"

// Application's
// Memory
/* ------------	*/
/*		*/
/* HEAP 	*/
/*		*/
/* ------------	*/
/*		*/
/* STACK 	*/
/*		*/
/* ------------	*/
/* STACK 	*/
/* ------------	*/
/*		*/
/* Code (Text)	*/
/* ------------	*/

void increment(int *a){ // Called Function, 'a' is Formal Argument
	*a = *a + 1; // a -> a  Call by value
}

void decrement(int *x){ // Called Function, 'x' is Formal Argument
	*x = *x - 1; // a -> x  Call by value
}

int main(){ // Calling Function
	int a;
	a = 10;
	increment(&a); // a is Actual Argument
	printf("a = %i\n",a);
	decrement(&a);
	decrement(&a);
	printf("a = %i\n",a);
	return 0;
}

