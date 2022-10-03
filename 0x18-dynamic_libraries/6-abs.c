#include "main.h"

/**
 *_abs - Check absolute value of int
 * @x: An integer input
 * Description: This function returns absolute value of the int
 * Return: Absolute value of x
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
