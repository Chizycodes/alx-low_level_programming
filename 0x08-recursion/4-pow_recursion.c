#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number.
 * @y: number.
 *
 * Return: x to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	pow *= _pow_recursion(x, y - 1);

	return (pow);
}
