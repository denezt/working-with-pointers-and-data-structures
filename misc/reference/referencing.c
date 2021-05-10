#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "ctype.h"
#include "math.h"
#include "time.h"

int main(int argc, char *argv[]){
	for (int i=0; i < argc; i++){
		printf("%s\n", argv[i]);
	}
	return 0;
}
