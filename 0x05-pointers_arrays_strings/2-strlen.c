#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is returned
 *
 * Return: Length of the string s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		continue;
	}
	return (i);
}
