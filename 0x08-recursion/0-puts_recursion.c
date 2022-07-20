#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: pointer to string location
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');

		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
