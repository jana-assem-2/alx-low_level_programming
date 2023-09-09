#include <stdio.h>

/**
 * main - start point
 * Description: prints all single digit numbers of base 10
 * Return: always 0 (SUCCESS)
*/

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
			x++;
		}
		else
			break;
	}
	putchar('\n');
	return (0);
}
