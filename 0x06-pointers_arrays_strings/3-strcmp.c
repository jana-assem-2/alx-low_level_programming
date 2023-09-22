#include "main.h"

/**
 * _strcmp - startpoint
 * this is a c program that do a function that compares two strings.
 * Return: 0 or s1[i]-s2[i]
 * @s1: this is the first var stored content want to check it with @s2
 * @s2: this is the secord var stored content want to check it with @s1
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
