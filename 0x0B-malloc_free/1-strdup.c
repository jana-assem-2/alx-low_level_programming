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

	if (str == NULL)
		return (NULL);
	for (i = 0; *str != '\0'; str++)
	{
		i++;
	}
	ptr = (char *) malloc(i + 1);
	if (ptr == 0)
	{
		return (0);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			ptr[j] = str[j];
		}
	}
	return (ptr);

}
