#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string
 * @c: The character sought in the string
 *
 * Return: Pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
