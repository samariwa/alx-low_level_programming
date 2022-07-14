#include "main.h"

/**reverse_array - reverses the content of an array
 * @a: array input
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	for (; 1 <= n; n--)
	{
		printf("%d", *(a + n - 1));
		if (n != 1)
			printf(", ");
	}
	printf("\n");
}
