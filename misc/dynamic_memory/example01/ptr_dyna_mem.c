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
	p = (int*)malloc(sizeof(int));
	*p = 10;
	printf("Ptr: %d\n",p);
	debugger(*p);
	p = (int*)malloc(sizeof(int));
	*p = 20;
	printf("Ptr: %d\n",p);
	debugger(*p);
	// free(p);
        return 0;
}
