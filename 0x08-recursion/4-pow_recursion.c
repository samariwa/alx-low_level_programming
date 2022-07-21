#include "main.h"

/**
 * _pow_recursion - raises number to power
 * @x: number to be raised to power
 * @y: power the int x should be raised to
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
