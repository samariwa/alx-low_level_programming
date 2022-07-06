#include "main.h"

/**
 * print_sign - Checks for the sign of a number
 * @n: An input integer
 * Description: function returns 1 if int is greater than 0
 * 0 if int is 0, and -1 if int is less than 1.
 * Return: 1, 0, or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
