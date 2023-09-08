#include <stdio.h>

/**
 * main - start point
 * Description : program that prints the alphabet in lowercase,
 * and then in uppercase
 * Return: always 0 (SUCCESS)
*/

int main(void)
{
	char letter1, letter2;

	for (letter1 = 'a'; letter1 <= 'z'; letter1++)
	{
		putchar(letter1);
	}
	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
	{
		putchar(letter2);
	}
	putchar('\n');
	return (0);
}

