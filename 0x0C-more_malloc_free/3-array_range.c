#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * The values of the array should be arranged acsending order
 *
 * Return: pointer to the array if succeeds, elso null
 */
int *array_range(int min, int max)
{
	int *temp;
	int diff, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min + 1;
	temp = malloc(diff * sizeof(int));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (i <= diff)
	{
		temp[i] = min;
		i++;
		min++;
	}

	return (temp);

}
