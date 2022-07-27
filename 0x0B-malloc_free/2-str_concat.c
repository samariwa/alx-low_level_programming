#include "main.h"
#include <stdlib.h>

int str_count(char *str);

/**
 * *str_concat - concatenates two strings
 * @s1: The first input string
 * @s2: The second input string
 *
 * Return: pointer to the allocated space if successful, else null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l = 0;
	char *temp;

	i = str_count(s1);
	j = str_count(s2);
	if (s1 != NULL && s2 != NULL)
	{
		temp = malloc(sizeof(char) * (i + j) + 1);
		if (temp == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < i; k++)
		{
			temp[k] = s1[k];
		}
		for (; k < (i + j); k++)
		{
			temp[k] = s2[l];
			l++;
		}
		temp[k] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (temp);
}

/**
 *str_count - counts the number of characters in a string
 *@str: the pointer to the string to be counted
 *
 * Return: the number of characters in the string
 */
int str_count(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}
