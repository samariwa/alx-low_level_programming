#include "main.h"

/**
 * print_binary - prints th binary respresentation of a number
 * @n: the number whose binary representation is to be printed
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int bin = 0;
	int rem, j, i = 1;
	char *str;

	while (n != 0)
	{
		rem = n % 2;
		n /= 2;
		bin += rem * i;
		i *= 10;
	}
	str = itoa(n, 10);
	for (j = 0; str[j] != '\0'; j++)
        	_putchar(str[j]);

}
