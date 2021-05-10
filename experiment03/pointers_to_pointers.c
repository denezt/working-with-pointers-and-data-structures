#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "ctype.h"


int main(int argc, char *args){
	int a = 100;
	printf("a = %i\n",a);
	int *p = &a;
	printf("&a => *p\n");
	*p = 90;
	printf("*p equals: %i\n",*p);
	return 0;
}
