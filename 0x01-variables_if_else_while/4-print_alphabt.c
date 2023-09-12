#include <stdio.h>
/**
 * main - start point
 * Description: program that prints the alphabet in lowercase
 * Return: always 0 (SUCCESS)
*/

int  main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}