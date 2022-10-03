#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer of memory area
 * @n: number of bytes
 * @b: constant byte
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (temp);
}
