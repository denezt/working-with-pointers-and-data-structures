#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main(int argc, char *args[]){
	for ( int i =0; i < argc; i++){
		printf("%s\n",args[i]);
	}

	int a;	// Defining a variable
	int *p; // Creating a pointer
	a = 1;  // Set a value in the variable

	printf("Set p = &a\n");
	p = &a;	// &a is the address of variable 'a'

	// Note: Using '%p' makes the code more portable
	printf("[p]\t%X, %p\n", p, p);
	printf("[&a]\t%X, %p\n", &a, &a);

	a = 5;	// Changing the value in variable 'a'
	printf("Set a = %i\n", a);
	printf("[&p]\t%X, %p\n",&p, &p);
	printf("[*p]\t%i\n",*p);
	/**
	*	Changing the value of the pointer 'p'
	*	This is will also change the value in variable 'a'
	*/
	*p = 10;
	printf("Change [*p] to 10,\nvariable a => %i\nValue in *p => %i\n",a,*p);
	return 0;
}
