#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number to be converted to the unsigned int
 * Description: b is a pointer to the binary digits stored 0 & 1 stored as char
 *
 * Return:the unsigned int that has been converted, else NULL if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	char *c = (char*)b;
	*c += 1;
	/**int weight = 1, reminder;
	void *bin = b;

	if (bin == NULL)
	{
		return (0);
	}

	while (bin != 0)
	{
		reminder = bin % 10;
		decimal += reminder * weight;
		bin /= 10;
		weight *= 2;
	}*/

	return (decimal);
}
