#include "main.h"

/**
 * print_array - start point
 * this is a c program that Write a function that prints n
 * elements of an array of integers, followed by a new line.
 * @a: this is a var of arr that stored
 * @n: this is the number that the arra contain arr[n]
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
