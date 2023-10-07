#include "main.h"

/**
 * string_nconcat - startpoint
 * this is ac function that concatenates two strings.
 * @s1: this is the string that i will concatenate to it
 * @s2: this is the string iw ill  + it to s1
 * @n: this is the no of char to copy it to s1
 * Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, size2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (size = 0; s1[size] != '\0'; size++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (n >= size2)
		ptr = (char *)malloc((size + size2) * sizeof(char) + 1);
	else
	{
		ptr = (char *)malloc((size + n) * sizeof(char) + 1);
		size2 = n;
	}
	if (ptr == 0)
		return (0);
	for (i = 0; i <= (size + size2); i++)
	{
		if (i < size)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size];
	}
	ptr[i] = '\0';
	return (m);

}
