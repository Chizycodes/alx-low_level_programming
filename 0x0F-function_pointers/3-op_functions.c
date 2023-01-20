#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - prints sum of a and b.
 * @a: num1.
 * @b: num2.
 *
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns diff of a and b.
 * @a: num1.
 * @b: num2.
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers.
 * @a: num1.
 * @b: num2.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: num1.
 * @b: num2.
 *
 * Return: the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of two numbers.
 * @a: num1.
 * @b: num2.
 *
 * Return: remainder of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
