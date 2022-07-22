#include "main.h"
int _prime_number_helper(int min, int num);

/**
 * is_prime_number - checks if integer is prime number
 * @n: integer to be determined if prime number
 *
 * Return: 1 if integer is prime number, else 0
 */
int is_prime_number(int n)
{
	return (_prime_number_helper(2, n));
}

/**
 * _prime_number_helper - recursivley tests if integer is a prime number
 * @min: minumum number used to test if the integer is prime
 * @num: integer to be tested if prime
 *
 * Return: 1 if number is prime, else 0
 */
int _prime_number_helper(int min, int num)
{
	if (min == num && min >= 2)
	{
		return (1);
	}
	else if ((num % min == 0) || (num < 2))
	{
		return (0);
	}
	else if (num % min != 0)
	{
		return (_prime_number_helper(min + 1, num));
	}
	return (0);
}
