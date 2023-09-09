#include <stdio.h>

/**
 * main - start point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: always 0 (SUCCESS)
*/

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		char hexChar = i < 10 ? i + '0' : i - 10 + 'a';

		putchar(hexChar);
	}
	putchar('\n');
	return (0);
}
