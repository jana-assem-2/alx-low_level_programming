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
	int j, i;
	char *ptr;

	for (i = 0; *str != '\0'; str++)
	{
		i++;
	}
	ptr = (char *) malloc(i);
	if (i == 0 || ptr == 0)
	{
		return (0);
	}
	for (j = 0; *str != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);

}
