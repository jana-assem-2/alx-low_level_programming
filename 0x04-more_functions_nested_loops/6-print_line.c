#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return:0
 */

void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
