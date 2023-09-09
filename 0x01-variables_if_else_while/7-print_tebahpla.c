#include <stdio.h>

/**
 * main - start point
 * Description: program prints the alphabet in lowercase in reverse
 * Return: always 0 (SUCCESS)
*/

int  main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
