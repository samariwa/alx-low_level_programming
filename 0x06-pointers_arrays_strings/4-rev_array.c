#include "main.h"

/**reverse_array - reverses the content of an array
 * @a: array input
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp[98];

	for (; 0 < n; n--)
	{
		temp[i] = *(a + n - 1);
		i++;
	}
	*a = temp;
}
