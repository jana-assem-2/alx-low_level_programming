#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by a new line
 * numbers are multiples of both three and five print FizzBuzz
 * numbers are multiples of five print Buzz
 * numbers are multiples of three print Fizz
 * Each number or word should be separated by a space
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(' ');
		else
			printf('\n');
	}
	return (0);
}
