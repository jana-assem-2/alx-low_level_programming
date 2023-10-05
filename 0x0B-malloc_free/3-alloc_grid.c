#include "main.h"

/**
 * alloc_grid - startopoint
 * this is a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: this is the width
 * @height: this is a height of the dime.
 * Return: 0
*/

int **alloc_grid(int width, int height)
{
	char *n;
	int i = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	n = malloc(size * sizeof(*str) + 1);
	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for ( ; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
