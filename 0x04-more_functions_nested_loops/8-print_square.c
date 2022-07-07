#include "main.h"

/**
 * print_square - Function that prints square
 * @size - This input is the size of the square 
 * to be printed by the function
 * Returns nothing
 */

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
             	 	{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
