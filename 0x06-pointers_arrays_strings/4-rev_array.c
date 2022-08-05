#include "main.h"

/**reverse_array - reverses the content of an array
 * @a: array input
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	n -= 1;

	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
