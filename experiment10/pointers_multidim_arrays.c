/*
* Experiment for working with 
* pointers and multidimensional arrays
*/
#include "stdio.h"
#include "string.h"
#include "time.h"
#include "math.h"
#include "ctype.h"

void debugger(unsigned int *);
void myFunctionPtrType(int (*A)[2][2]);
void myFunctionArrayType(int A[][2]);

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

void myFunctionPtrType(int (*A)[2][2]){
	logger("In myFunctionPtrType");
	printf("%i\n", sizeof(*A));
}

void myFunctionArrayType(int A[][2]){
	logger("In myFunctionArrayType");
	printf("%i\n", sizeof(A));
}

int main(){
        unsigned int A[3][2][2] = {{{3,4},{5,9}},
                        {{5,2},{10,3}},
                        {{11,5},{9,24}}};
        printf("%p\n%p\n%p\n%p\n",A, *A, A[0], &A[0][0]);
        for ( int i=0; i < 2; i++){
                debugger(*(A[0][0]+i));
		sleep(0.5);
        }
        myFunctionPtrType(A);
        myFunctionArrayType(A);
        return 0;
}
