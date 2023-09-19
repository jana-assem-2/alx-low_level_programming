#include "main.h"

/**
* puts_half - printing half a string
* @str: that's the string
* Return: void
*/

void puts_half(char *str)
{
	int i, half;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (half = len / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half] + 0);
		}
	}
	else
	{
		for (half = (len / 2) + 1; str[half] != '\0'; half++)
		{
			_putchar(str[half] + 0);
		}
	}
	_putchar('\n');
}
