#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a 2 dimensional array
 * @width: The nummber of elements in the arrays in 2D array
 * @height: The number of arrays in 2D array
 *
 * Return: pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **temp;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	temp = malloc(height * sizeof(int *));
	if (temp == NULL)
	{
		printf("Not enough memory left!\n");
		free(temp);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		temp[i] = malloc(width * sizeof(int));
		if (temp[i]  == NULL)
		{
			printf("Not enough memory left!\n");
			for (k = 0; k <= i; k++)
			{
				free(temp[k]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			temp[i][j] = 0;
		}
	}

	return (temp);
}
