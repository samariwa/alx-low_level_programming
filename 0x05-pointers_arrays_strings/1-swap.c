#include "main.h"

/**
 * swap_int - Swaps integers input using the pointers
 * @a: pointer of first integer
 * @b: pointer of second integer
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
