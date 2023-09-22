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
	int i;

	for (i = 0; s1[i] == '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-15);
		else if (s1[i] > s2[i])
			return (15);
		else
			return (0);

	}
}
