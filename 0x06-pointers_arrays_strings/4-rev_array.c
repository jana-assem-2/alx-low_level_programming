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
	int aux[n];

	for (int i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
