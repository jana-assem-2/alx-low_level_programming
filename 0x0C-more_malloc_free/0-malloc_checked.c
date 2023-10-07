#include "main.h"

/**
 * malloc_checked - startpoint
 * this is a c function that allocates memory using malloc.
 * and if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 * @b: this is a size of allocation
 * Return: m
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
