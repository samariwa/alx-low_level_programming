#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string whose numbers are to be converted to integers
 * The - and + signs are taken into account
 *
 * Return: the integer obtained from the string
 */
int _atoi(char *s)
{
	int w, x = 0, y, z = 0, val = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = x; y >= 0; y--)
	{
		if(s[y] >= 0 && s[y] <= 9)
		{
			z++;
			w = 10^z;
			val += (int)(s[y]) * w;	
		}
		else
		{
			val += (int)(s[y]);
		}
	}
	return (val);
}
