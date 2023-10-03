#include <stdio.h>
#include <stdlib.h>

/**
 * main - startpoint
 * this is a c program  that adds positive numbers.
 * @argv: this is the array
 * @argc: this is the length of array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
