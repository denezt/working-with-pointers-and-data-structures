#include "stdio.h"
#include "string.h"

void getStringUndefinedArray(){
	printf("\033[35mIn func getStringUndefinedArray\033[0m\n");
	char A[] = "JIMMY"; // The null termination '\0' is implicit in string chars
	int len = strlen(A);
	printf("%s array length %i\n",A, len);
}

void getStringDefinedArray(){
	printf("\033[35mIn func getStringDefinedArray\033[0m\n");
	char B[2] = "JIMMY"; // The null termination '\0' is implicit in string chars
	int len = strlen(B);
	printf("%s array length %i\n",B, len);
}

void getCharsInArray(){
	printf("\033[35mIn func getCharsInArray\033[0m\n");
	char C[5] = { 'C','H','U','C','K','\0' };
	printf("Size in bytes = %i\n",sizeof(C));
	int len = strlen(C);
	printf("%s array length %i\n",C, len);
}

void print(char *D){
	printf("> ");
	int i = 0;
	while (*(D+i) != '\0'){
		printf("%c",D[i]);
		i++;
	}
	printf("\n");
}

void prints(char *E){
	printf(">> ");
	while (*E != '\0'){
		printf("%c",*E);
		E++;
	}
	printf("\n");
}

int main(){
	char array[8];
	printf("Array Size: %i\n",sizeof(array));
	array[0] = 'H';
	printf("%p\n", &array[0]);
	array[1] = 'A';
	printf("%p\n", &array[1]);
	array[2] = 'P';
	array[3] = 'P';
	array[4] = 'Y';
	array[5] = '\0';
	printf("%s\n",array);
	int len = strlen(array);
	printf("Length => %i\n",len);

	char *arrayp = array;
	// iterate array items
	for (int i=0; i < len; i++ ){
		printf("array[%i]: %c = %c\n",i,*(array+i),*(arrayp+i));
	}
	print(arrayp);
	prints(arrayp);
	getStringUndefinedArray();
	getStringDefinedArray();
	getCharsInArray();
	return 0;
}
