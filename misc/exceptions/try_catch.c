#include <stdio.h>
#include <stdbool.h>
#define try bool __HadError=false;
#define catch(x) ExitJmp:if(__HadError)
#define throw(x) __HadError=true;goto ExitJmp;

char *error = "Missing valid parameter";

int main(void)
{
    try
    {
        printf("One\n");
        throw();
        printf("Two\n");
    }
    catch()
    {
        printf("Error %s\n", error);
    }
    return 0;
}
