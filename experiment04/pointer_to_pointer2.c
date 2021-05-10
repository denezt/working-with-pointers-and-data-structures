#include "stdio.h"
#include "time.h"

void pprint(char *, int *, char *);
void logger(char *);

int argc;
char *argv;
int main(argc, argv){
	int a = 5;
	logger("a = 5");
	pprint("a",a,"decimal"); // Value
	int *b = &a;
	logger("int *b = &a");
	*b = 10;
	logger("*b = 10");
	int **c = &b;
	logger("**c = &b");
	int ***d = &c;
	logger("***d = &c");
	pprint("a",a, "decimal");		// Value
	// Deferencing variable 'a'
	pprint("*b",*b, "decimal");		// Value in pointer
	pprint("*c",*c,"pointer"); 		// Address of pointer to pointer
	pprint("*(*c)",*(*c),"decimal");	// Value of pointer to pointer
	pprint("*d",*(*d),"pointer");		// Address of pointer to pointer
	pprint("*(*(*d))",*(*(*(d))),"decimal");// Value of pointer to pointer
	***d = 15;
	logger("***d = 15");
	pprint("a",a,"decimal");		// Final value of initial variable

	// Last experiment
	**c = *b + 5;
	logger("**c = *b + 5");
	pprint("a",a,"decimal");
	return 0;
}

void pprint(char *in1, int *in2, char *type){
	if (type == "decimal"){
		printf("%s\n",type);
		printf("\033[35mOutput \033[33m[%s]\033[0m: \033[32m%d\033[0m\n", in1, in2);
	} else if (type == "pointer") {
		printf("%s\n",type);
		printf("\033[35mOutput \033[33m[%s]\033[0m: \033[32m%p\033[0m\n", in1, in2);
	}
}

void logger(char *in){
	time_t timer;
  	time(&timer);  // current time, same as: timer = time(NULL)
	printf("logger:[%d] %s\n",timer,in);
}
