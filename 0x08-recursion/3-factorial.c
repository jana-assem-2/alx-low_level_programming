#include "main.h"

/**
 * factorial - startpoint
 * this is a c function that returns the factorial of a given number.
 * @n: this is the pointer of the number that u want to know its factorial
 * Return: the factorial of n
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
