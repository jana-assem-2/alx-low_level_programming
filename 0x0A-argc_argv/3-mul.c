#include <stdio.h>
#include <stdlib.h>

/**
 * main -startpoint
 *this is a c program that multiplies two numbers.
 * @argc: this is a size of array
 * @argv: this is an array
 * Return: 0 or 1 if failed
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul = 1;

		while (--argc)
		{
			mul *= atoi(argv[argc]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
