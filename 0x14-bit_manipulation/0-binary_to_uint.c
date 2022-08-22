#include "main.h"
#include <stdio.h>
int _strlen(char *s);
unsigned int _pow(int i);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number to be converted to the unsigned int
 * Description: b is a pointer to the binary digits stored 0 & 1 stored as char
 *
 * Return:the unsigned int that has been converted, else NULL if failed
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = _strlen((char *)b) - 1;
	unsigned int num = 0;

	for (; j >= 0; j--)
	{
		if (b[j] == '1')
		{
			num += _pow(i);
		}
		else if (b[j] != '0')
		{
			return (0);
		}
		i++;
	}

	return (num);
}

/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int _pow(int i)
{
	unsigned int x = 1;

	while (i > 0)
	{
		x *= 2;
		i--;
	}

	return (x);
}
