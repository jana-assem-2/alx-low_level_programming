#include "main.h"

/**
* _puts_recursion - prints string
* @s: input string
* Return: no return
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
	}
	i++;
	_puts_recursion(s[i]);
}
