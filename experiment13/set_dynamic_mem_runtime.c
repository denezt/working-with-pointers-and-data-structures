/*
* Experiment for working with
* Dynamically Memory Allocated pointers
*/
#include "stdio.h"
#include "string.h"
#include "time.h"
#include "math.h"
#include "ctype.h"

#define NEW_LINE	printf("\n");

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
	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int *array = (int*)malloc(n*sizeof(int)); // Creating a dynamically allocated array
	// This will initialize values.
	// If not initialize, then it will print garbage.
	for (int i = 0; i < n; i++ ){
		array[i] = i + 1;
	}
	for (int i = 0; i < n; i++ ){
		printf("%i ",array[i]);
	}
	NEW_LINE
	int m;
	printf("Enter size of array\n");
	scanf("%d",&m);
	int *narray = (int*)calloc(m,sizeof(int)); // Creating a new dynamically allocated array
	// This will initialize values.
	// If not initialize, then it will print 0.
	for (int i = 0; i < m; i++ ){
		narray[i] = i + 1;
	}
	for (int i = 0; i < m; i++ ){
		printf("%i ",narray[i]);
	}
	NEW_LINE


	return 0;
}
