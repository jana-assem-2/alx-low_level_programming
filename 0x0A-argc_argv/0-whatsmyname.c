#include <stdio.h>

/**
 * main -startpoint
 * this is the c function that that prints its name, followed by a new line.
 * @argc: this is the size of argv
 * Return: 0
 * @argv: this is the arg that stored the data
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
