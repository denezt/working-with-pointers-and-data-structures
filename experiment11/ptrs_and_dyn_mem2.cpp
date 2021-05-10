/*
* Experiment for working with
* pointers and dynamic memory
*/
#include "stdio.h"
#include "string.h"
#include "time.h"
#include "math.h"
#include "ctype.h"
#include "iostream"

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
	p = new int;
	*p = 10;
	std::cout << "Pointer Value\n";
	debugger(*p);
	delete p;
	p = new int[20];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	while (isalpha(*p)){
		printf("%i\n",*p);
		p++;
	}
	printf("Size Of Pointer: %i\n", sizeof(*p));
	printf("Value in p: %i\n",*p);
	delete[] p;
        return 0;
}
