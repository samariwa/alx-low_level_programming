#include <stdio.h>
#include <string.h>

/**
 * main - prints program name
 * @argc: Number of arguments given
 * @argv: Array of arguments
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
		argv[argc - 1] = strcat("./", argv[2]);
	printf("%s", argv[argc - 1]);
	return (0);
}
