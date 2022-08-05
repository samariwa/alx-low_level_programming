#include "variadic_functions.h"

/**
 * print_strings - prints the strings in the parameters
 * @separator: The character separating the printed strings
 * @n: The number of strings to be printed
 * If separator is null, printing should not be done
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str;
		}
		if (i != n)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
