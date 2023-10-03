#include <stdio.h>

/**
 * main -startpoint
 * this is a c function that do a program that
 * prints all arguments it receives.
 * @argc: this is the size of argc
 * @argv: this is the array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
