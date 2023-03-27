#include "main.h"

/**
* swap_int - swap the value of two integers 
* @a: the first variable
* @b: the second variable
* Return: Nothing
*/

void swap_int(int *a, int *b) {
int temp = *a;  // store the value pointed to by a in a temporary variable
*a = *b;        // copy the value pointed to by b into the memory location pointed to by a
*b = temp;      // copy the value stored in the temporary variable into the memory location pointed to by b
}
