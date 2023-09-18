include "main.h"

/**
* swap_int - swapping variables
* @a: pointer 1
* @b: pointer 2
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
