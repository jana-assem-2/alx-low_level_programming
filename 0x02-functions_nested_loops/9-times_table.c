#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar((i * j) + '0');
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');	
	}
}
