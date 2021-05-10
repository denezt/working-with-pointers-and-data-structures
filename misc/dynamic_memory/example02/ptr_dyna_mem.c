/*
* Experiment for working with
* pointers and dynamic memory
*/
#include "stdio.h"
#include "string.h"
#include "time.h"
#include "math.h"
#include "ctype.h"

void debugger(unsigned int *);

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
	int a; // Stores on the stack
	int *p;
	p = malloc(10*sizeof(int));
	p[0] = 1;
	// p[1] = 2;
	printf("%i\n",sizeof(&p));
	free(p);
        return 0;
}
