#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of the types of arguments passed
 * if string is null, prints nill
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	while (format)
	{
		i++;
	}
	printf("%d", i);
}
