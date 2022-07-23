#include <stdio.h>
#include<stdlib.h>
/**
 * main - Multiplies 2 numbers
 * @argc: number of arguments given
 * @argv: An array of pointers to the arguments given
 * The function should print 'Error' if two arguments are not passed into it
 *
 * Return: 0 if the arguments are correct, else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
}
