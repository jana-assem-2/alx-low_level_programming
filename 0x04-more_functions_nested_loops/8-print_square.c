#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 * Return:0
 */

void print_square(int size)
{
	int count, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (count = 0; count < size; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
