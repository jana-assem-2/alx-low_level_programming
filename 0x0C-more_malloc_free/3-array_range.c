#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: this is the min value
 * @max: this is the max value
 * Return: m
*/

int *array_range(int min, int max)
{
	int i, *ptr;
	int len = (max - min) + 1;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc(len * sizeof(int));
	for (i = 0; i < len; i++)
		ptr[i] = min + i;
	return (ptr);
}
