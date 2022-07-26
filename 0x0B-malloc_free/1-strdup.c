#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a pointer to a newly allocated space in memory
 * @str: string input
 *
 * Return: pointer to the allocated space if successful else NULL
 */
char *_strdup(char *str)
{
	char *temp;
	int i = 0, j = 0;

	if (str != NULL)
	{
		while (*str)
		{
			str++;
			j++;
		}
		temp = malloc(sizeof(char) * j + 1);
		while (i < j)
		{
			temp[i] = *(str + i);
			i++;
		}
		temp[i] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (temp);
}
