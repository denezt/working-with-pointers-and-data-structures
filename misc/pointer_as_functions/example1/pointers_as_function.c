#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "ctype.h"
#include "math.h"
#include "time.h"


// Call by reference function
int addref(int *a, int *b){	// This is the 'Called Function'
	printf("Address of a in 'add' func = %p\n", &a);
	int c = *a + *b;
	return c;
}

// Call by value function
int addval(int a, int b){	// This is the 'Called Function'
	printf("Address of a in 'add' func = %p\n", &a);
	int c = a + b;
	return c;
}

int main(int argc, char *argv[]){ // This is the 'Calling Function'
	int a = 5, b = 10;
	printf("Address of a in 'main' func = %p\n", &a);
	// Calling a and b by value
	int c = addval(a,b);
	int d = addref(&a,&b);
	printf("Sum Total: %d\n",c);
	printf("Sum Total: %d\n",d);
	return 0;
}
