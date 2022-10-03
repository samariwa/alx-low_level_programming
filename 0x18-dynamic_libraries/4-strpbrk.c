#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bits
 * @s: string to be searched
 * @accept: characters to be searched in string
 *
 * Return: pointer of first byte matching accept bytes
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = temp;
		s++;
	}
	return (NULL);
}
