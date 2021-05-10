#include "stdio.h"
#include "math.h"
#include "ctype.h"

int main(int argc, char *argv[]){
	printf("DataType\tSize in Bits\n");
	printf("Void\t\t%i\n",sizeof(void) * 8);
	printf("Char\t\t%i\n",sizeof(char) * 8);
	printf("Double\t\t%i\n",sizeof(double) * 8);
	printf("Float\t\t%i\n",sizeof(float) * 8);
	printf("Integer\t\t%i\n",sizeof(int) * 8);
	printf("Unsigned Int.\t%i\n",sizeof(unsigned int) * 8);
	printf("Signed Int.\t%i\n",sizeof(signed int) * 8);
	printf("Char *\t\t%i\n",sizeof(char *) * 8);
	printf("Long\t\t%i\n",sizeof(long) * 8);
	printf("Long Long\t%i\n",sizeof(long long) * 8);
	printf("Unsigned Long\t%i\n",sizeof(unsigned long) * 8);
	printf("Signed Long\t%i\n",sizeof(signed long) * 8);
	printf("Short\t\t%i\n",sizeof(short) * 8);
	printf("Unsigned Short\t%i\n",sizeof(unsigned short) * 8);
	printf("Signed Short\t%i\n",sizeof(signed short) * 8);
	return 0;
}
