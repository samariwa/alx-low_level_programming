#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: The number of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (*argv)
	{
		i++;
		argv++;
		argc++;
	}

	printf("%d\n", i - 1);

	return (0);
}
