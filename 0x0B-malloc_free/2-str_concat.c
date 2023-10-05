#include "main.h"

/**
 * str_concat - startpoint
 * this is a function that concatenates two strings.
 * @s1: this is the first string
 * @s2: this is the second string
 * Return: pointer of concatenates of two strings
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (i = 0; *s1 != '\0'; i++)
		;
	for (j = 0; *s2 != '\0'; j++)
		;
	ptr = (char *)malloc((i + j) * 8 + 1);
	if (ptr == 0)
	{
		return (0);
	}
	for (k = 0; k < (i + j); k++)
	{
		if (k < i)
		{
			ptr[k] = s1[k];
		}
		else
		{
			ptr[k] = s2[k - 2];
		}
	}
	return (ptr);
}
