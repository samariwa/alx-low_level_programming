#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Number of arguments passed
 * @argv: The pointers to the arguments passed
 *
 * Return: return 0 if the inputs are correct, else 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
