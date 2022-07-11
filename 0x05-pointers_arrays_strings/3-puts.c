#include "main.h"

/**
 * _puts - Prints the string input
 * @str: The pointer of the string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
