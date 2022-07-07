#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9
 * but skips 2 and 4
 * Returns nothing
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if(c != 2 || c != 4)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}

