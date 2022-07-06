#include "main.h"

/**
 * print_last_digit - returns the last digit of int
 * @x: An integer input
 * Description: This function prints the last digit of input
 * Return: last digit of number x
 */
int print_last_digit(int x)
{
	if(x < 0)
	{
		_putchar(-1 * (x % 10));
		return (-1 * (x % 10));
	}
	else
	{
		_putchar(x % 10);
		return (x % 10);
	}
}
