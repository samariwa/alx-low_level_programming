#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int change_compute(int value, int num);

/**
 * main - prints the minimum amount of coins to make change
 * @argc: number of parameters given to the function
 * @argv: The parameters given to the function
 *
 * Return: 0 if the number of parameters is one, else 0
 */
int main(int argc, char *argv[])
{
	int value = atoi(*(argv + 1));

	if (argc > 1)
	{
		printf("%d\n", change_compute(value, 0));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

/**
 * change_compute - returns number of coins to be obtained from the value
 * @value: The value of the change
 * @num: number of coins obtained so far
 *
 * Return: Number of coina to be obtained
 */
int change_compute(int value, int num)
{
	int coins[] = {1, 2, 5, 10, 25};
	int i;
	if (value == 0)
	{
		return (num);
	}
	for (i = 0; i <= 4; i++)
	{
		if (value >= coins[i])
		{
			value = value - (value % coins[i]);
			num++;
		}
	}
	return(change_compute(value, num));
}
