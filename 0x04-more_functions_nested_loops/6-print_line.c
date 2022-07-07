#include "main.h"

/**
 * print_line - prints line using the _ character
 * @n - the number of times _ will be printed
 * Line should end with \n
 * Returns nothing
 */

void print_line(int n)
{
	int x;
	
	if(n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
