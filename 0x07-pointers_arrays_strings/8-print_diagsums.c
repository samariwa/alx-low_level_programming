#include "main.h"

/**
 * print_diagsums - prints the sum of teo diagonals of square matrix
 * @a: Pointer to the 2D array
 * @size: size of the diagonal
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0,j = 0, x = 0, y = 0, k = size - 1;

	while (i < size)
	{
		while (j < size)
		{
			if (i == j)
			{
				x += a[i][j];
			}
			if (k == j)
			{
				y += a[i][k];
				k--;
			}
			j++;
		}
		i++;
	}
	printf("%d, %d\n", x, y);
}
