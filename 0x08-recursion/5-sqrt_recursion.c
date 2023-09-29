#include "main.h"
int square(int n, int val);

/**
 * _sqrt_recursion - startpoint
 * this is the c function that returns the natural square root of a number.
 * @n: this is the number that want to know if it has a sqrt or not
 * Return: value if it has a sqrt and -1 if it hasnt
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - startpoint
 * this is the c function that do check if n has a sqrt or not
 * @val: this is the the val that product of itself
 * @n: this is the number to check if it has sqrt or not
 * Return: val if val * val == n or make recursion if val * val < n or
 * return -1 if it hasnt a sqrt
*/

int square(int n, int val)
{
	if ((val * val) == n)
		return (val);
	else if ((val * val) < n)
		return (square(n, val + 1));
	return (-1);
}
