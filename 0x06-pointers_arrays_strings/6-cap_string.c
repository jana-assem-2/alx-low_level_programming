#include "main.h"

/**
 * is_separator - Check if character is a separator.
 * @c: Character to check.
 * Return: 1 if c is a separator, otherwise 0
*/

int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of  string.
 * @s: String to modify.
 * Return: Pointer to the modified string.
*/

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= ('a' - 'A');
	}
	for (i = 1; s[i]; i++)
	{
		if (is_separator(s[i - 1]) && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ('a' - 'A');
		}
	}
	return (s);
}
