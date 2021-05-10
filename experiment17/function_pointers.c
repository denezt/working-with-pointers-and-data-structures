#include "stdio.h"
#include "string.h"


void programTitle(char *version){
	printf("\033[36mFunction Pointers %s\033[0m\n",version);
}

int add(int a, int b){
	return a + b;
}

int *Func(int a,int b){ // declaring a function that will return an integer pointer
	return 0;
}

int main(){
	void (*ptr)(char *);
	ptr = programTitle;
	ptr("v1.0.0");
	int a;
	int (*p)(int,int); // We need to wrapper the name in parenthesis (*p).
	// p = &add; // This is more readable.
	p = add;
	// a = (*p)(3,4); // We now de-reference and execute the function.
	a = p(3,4); // We can write it like this without parenthesis when calling pointer function.
	printf("%d\n",a);
	return 0;
}
