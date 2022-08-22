#include "main.h"

/**
 * print_binary - prints th binary respresentation of a number
 * @n: the number whose binary representation is to be printed
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int limit = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (limit < n)
	{
		limit *= 2;
	}

	while (limit > 0)
	{
		if (limit > n)
		{
			_putchar('0');
			limit *= 0.5;
		}
		else
		{
			n -= limit;
			_putchar('1');
			limit *= 0.5;
		}
	}
}
