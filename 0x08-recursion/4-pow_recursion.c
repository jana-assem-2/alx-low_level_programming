#include "main.h"

/**
 * _pow_recursion - startpoint
 * this is a c function that returns the value of x raised to the power of y.
 * @x: this is the number
 * @y: this is the number make it power to x
 * Return: x power y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else if (y == 1)
	return (x);
return (x * _pow_recursion(x, (y - 1)));
}
