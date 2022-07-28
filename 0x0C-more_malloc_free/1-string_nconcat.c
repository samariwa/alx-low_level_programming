#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: The first string input
 * @s2: The second string input
 * @n: number of s2 bytes to be concatenated to s1
 *
 * Return: pointer to resultant string, else null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;

	int i = 0, j= 0, k = 0, sum, num;

	while (s1[i])
	{
		i++;
	}

	sum = n + i;
	num = n + 0;
	temp = malloc(sum * sizeof(char));

	if (temp == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		temp[j] = s1[j];
		j++;
	}


	while (k < num)
	{
		temp [j] = s2[k];
		j++;
		k++;
	}

	return (temp);
}

