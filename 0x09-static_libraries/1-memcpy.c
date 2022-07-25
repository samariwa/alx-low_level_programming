#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @dest: Destination of copied area
 * @src: copied area
 * @n: number of bytes from copied area
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (temp);
}
