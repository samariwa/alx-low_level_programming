#include "main.h"
int _sqrt_helper(int num, int min);

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: input whose square root is being sought
 *
 * Return: square root of a number and -1 if the number
 * has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
* _sqrt_helper - checks for the possible square root of a number
* @num: input integer whose square root is being sought
* @min: the minimum number to be checked as the square root
* The minimum will be increamented recursively and multiplied by itself to test
*
* Return: the square root of the number and -1 if the number has no square root
*/
int _sqrt_helper(int num, int min)
{
	if (min * min == num)
	{
		return (min);
	}
	else if (min * min < num)
	{
		return (_sqrt_helper(num, min + 1));
	}
	else
	{
		return (-1);
	}
}
