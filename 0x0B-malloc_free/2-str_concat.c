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
	int size = 0;
	int size2 = 0;
	int i = 0;
	char *m;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
		s2 = "\0";
	for (; s1[size] != '\0'; size++)
		;
	for (; s2[size2] != '\0'; size2++)
		;
	m = (char *)malloc((size + size2) * sizeof(char) + 1);
	if (m == 0)
	{
		return (0);
	}
	for (i = 0; i <= (size + size2); i++)
	{
		if (i < size)
			m[i] = s1[i];
		else
			m[i] = s2[i - size];
	}
	m[i] = '\0';
	return (m);
}
