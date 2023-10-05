#include "main.h"

/**
 * _strdup - startpoint
 * this is a function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer
*/

char *_strdup(char *str)
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
