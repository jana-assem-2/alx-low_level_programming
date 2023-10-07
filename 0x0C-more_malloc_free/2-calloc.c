#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - startpoint
 * this is a c  function that allocates memory for an array, using malloc.
 * like clloc with default 0
 * @nmemb: this is the number of element
 * @size: this is a sizr of data type
 * Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
