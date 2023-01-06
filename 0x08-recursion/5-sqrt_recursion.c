#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 *
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	root++;
	return (_sqrt_recursion(n));
}
