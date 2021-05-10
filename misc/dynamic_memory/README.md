# Working with Pointers and Data Structures in C and C++
## Using Dynamic Memory in C Programming


### C Functions
1. malloc(size) - for allocating memory 
2. calloc(nobj, size) - for allocating memory
3. newptr = realloc(ptr,size) - change size of storage
4. free(ptr) =  deallocate storage

``` c
// Where '3' is number of elements and 'sizeof(int)' is size of one unit.
int *p = malloc(4*sizeof(int)); // will allocate 16 bytes of memory (i.e. if first is 301, then the last will be 316)
printf("%p\n",p); // will print Address
```
