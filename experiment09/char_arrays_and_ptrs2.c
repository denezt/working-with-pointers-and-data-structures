#include "stdio.h"
#include "string.h"

void print(char *A){ // This is a writable pointer to an array.
	printf("> ");
	int i = 0;
	A[5] = '1';
	while (*(A+i) != '\0'){
		printf("%c",A[i]);
		i++;
	}
	printf("\n");
}

void prints(const char *B){ // This is only readable, here we force this behaviour.
	while (*B != '\0'){
		printf("%c",*B);
		B++;
	}
	printf("\n");
}

int main(){
	char A[15] = "Happy";
	print(A);
	char *B = "Jimmy";
	prints(B);
	return 0;
}
