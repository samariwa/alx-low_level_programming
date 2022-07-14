#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: the number of strings to be copied
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (result);
}
