#include "main.h"

/**
 * string_toupper - startpoint
 * this is a c program do a function that changes
 * all lowercase letters of a string to uppercase.
 * Return: s (success)
 * @s: this is the var stored the content that u want to make it uppercase
*/

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
