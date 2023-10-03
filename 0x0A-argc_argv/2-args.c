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
	(void)argc;
	while (--argc)
	{
		printf("%s", argv[argc]);
	}
	return (0);
}

