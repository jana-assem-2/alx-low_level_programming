#include "main.h"

/**
* _print_rev_recursion - print reversed string, followed by a new line
* @s: pointer to the string to point
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
