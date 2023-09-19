#include "main.h"

/**
* print_rev - print reversed string, followed by a new line
* @s: pointer to the string to point
* Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
