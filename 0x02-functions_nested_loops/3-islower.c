#include "main.h"

/**
 * _islower - Checks if character is lowercase
 *
 * Returns 1 if is lowercase and 0 otherwise
 **/

int _islower(int c)
{
	if(islower(c) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
