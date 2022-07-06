#include "main.h"

/**
 * _islower(c) - Checks if character c is lowercase and returns 1 if true and 0 if false
 *
 * Returns 1(true) if is lowercase and 0(false) otherwise
 **/

int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
