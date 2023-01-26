#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all it's parameters.
 * @n: number of parameters.
 * @...: a variable number of parameters.
 *
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int index, sum = 0;

	va_start(args, n);

	for (index = 0; index < n; index++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
