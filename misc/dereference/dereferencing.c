#include "stdio.h"
#include "math.h"
#include "time.h"
#include "ctype.h"

void logger(char *);

int main(int argc, char *argv){
	int a = 100;
	logger("int a = 100");
	printf("&a = %p\n", &a);
	char *p = &a;
	logger("char *p = &a");
	printf("pointer value of p => %p\n",p);
	printf("dereferencing value *p as char => %c\n",*p);
	printf("dereferencing value *p as int => %i\n",*p);
	*p = *p + 1;
	logger("*p = *p + 1");
	printf("value of a => %i\n",a);
	return 0;
}

logger(char *in){
	time_t timer;
	time(&timer);
	printf("LOG [%u] %s\n",timer, in);
}



