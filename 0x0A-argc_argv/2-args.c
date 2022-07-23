#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: The number of arguments
 * @argv: The arguments of the function
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
