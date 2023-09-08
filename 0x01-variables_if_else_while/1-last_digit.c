#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start point
 * Description: pogram to print the last digit of the number
 * Return: always 0 (SUCCESS)
*/

int main(void)
{
	int n, Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Digit = n % 10;
	if (Digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, Digit);
	else if (Digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, Digit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, Digit);
	return (0);
}
