#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers in the parameters
 * @separator: The character separating the printed numbers
 * @n: The number of numbers to be printed
 * If separator is null, printing should not be done
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
