#include "stdio.h"
#include "math.h"
#include "time.h"
#include "ctype.h"

void logger(char *);

int main(int argc, char *argv){
	int A[3][6] = {
	{2,3,5},
	{3,6,2},
	{2,3,5},
	{3,6,2},
	{4,6,5},
	{8,9,1}
	};
	int (*ptr)[6] = A;
	printf("%i\n",sizeof((ptr)[6])/sizeof(int));
	int dim2 = sizeof((ptr)[6])/sizeof(int);
	printf("%i\n",ptr[0][1]);
	return 0;
}

logger(char *in){
	time_t timer;
	time(&timer);
	printf("LOG [%u] %s\n",timer, in);
}



