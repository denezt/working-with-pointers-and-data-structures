#include "stdio.h"
#include "string.h"

// typedef  int (*myFunc)(int,int);
typedef  int *uInt;

struct GetData {
  unsigned int setColor;
  unsigned char nameColor[16];
  int isSet;
};

uInt main(int argc, char *argv[]){
  if ( argc > 1 ){
    printf("Value %i\n", argc);
  }
  struct GetData getData;
  getData.setColor = 1;
  strcpy(getData.nameColor,"Red");
  getData.isSet = 255;
  printf("Set Color: %i\nColor Name: %s\nIs Set: %i\n", getData.setColor, getData.nameColor, getData.isSet);
  return 0;
}
