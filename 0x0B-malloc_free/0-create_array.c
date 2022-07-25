#include "main.h"
#include "stdlib.h"

/**
 * *create_array - creates an array of chars
 * @size: the size of the array
 * @c:the char to be initialized in the array
 *
 * Return: pointer to array if it allocates, else null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 1;

	if (size > 0)
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		while (i <= size)
		{
			*(str + i) = c;
			i++;
		}
	}
	else
	{
		return (NULL);
	}

	return (str);
}
