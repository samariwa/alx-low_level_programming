#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: number if parameters to be summed up
 * if n is 0 return 0
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
