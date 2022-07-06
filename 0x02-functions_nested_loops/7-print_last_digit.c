#include "main.h"

/**
 * print_last_digit - returns the last digit of int
 * @x: An integer input
 * Description: This function prints the last digit of input
 * Return: last digit of number x
 */
int print_last_digit(int x)
{
	int n;

	if (x < 0)
		n = -1 * (x % 10);
	else
		n = x % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
