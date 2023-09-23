#include "main.h"

/**
 * reverse_array -startpoint
 * this is a c program that do a function that reverses
 * the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int t;

	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i += 1;
		j -= 1;
	}
}
