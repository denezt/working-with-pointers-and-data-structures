# Developer Notes for Understanding Pointers and Arrays

## Definition for Pointer and Array

* A pointer references a location in memory, and obtaining the value stored at that location is known as 
dereferencing the pointer.

* An array is a series of memory locations and each of which holds a single item of data, 
but with each block sharing the same name.

### Additional Information
<pre>
1. Using *(A + i) is equal to using A[i]
2. Using (A + i) is equal to using &A[i]
3. A[i][j] = *(A[i] + j) = *(*(A + i) + j)
		\/	     \-----/	
		 \-> int *	\-> int *
</pre>

### Pointers and Multidimensional Arrays
using the multidimensional array:
``` c
int A[2][5];
int (*ptr)[3] = A; // This is a valid assignment
```

``` c
int A[4][2][2];
int (*ptr)[2][2] = A; // This is a valid assignment
A[i][j][k] == *(A[i][j] + k) == *(*(A[i] + j) + k) == *(*(*(A + i) + j) + k)
```
