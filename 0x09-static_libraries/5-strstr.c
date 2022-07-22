#include "main.h"

/**
 * *_strstr - Locates a substring in a string
 * @haystack: The string input that the substring is being sought
 * @needle: The substring being sought in the needle
 *
 * Return: pointer to beginning of located substring, else null if none found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	
	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			if (needle[i] != '\0')
			{
				j++;
			}
			else
			{
				return (0);
			}
		}
		else
		{
			j = 0;
		}
	}
	return (NULL);
}
