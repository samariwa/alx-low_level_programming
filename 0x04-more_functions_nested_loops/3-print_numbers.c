#include "main.h"

/**
 *print_numbers - Prints numbers from 0 - 9
 *followed by a new line
 *Returns nothing
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
