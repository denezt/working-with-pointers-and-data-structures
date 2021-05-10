#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "ctype.h"
#include "math.h"
#include "time.h"

void A(){
	printf("\033[35mCalling A\033[0m\n");
}

void B(void (*ptr)()){ // Function pointer as argument
	printf("In B()\n");
	ptr(); // call-back function that "ptr" points to
}

int main(){
	// void (*p)() = A;
	// B(p);
	// The above statements are equivalent to:
	B(A); // A is a callback function.
	return 0;
}
