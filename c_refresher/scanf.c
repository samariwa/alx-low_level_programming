#include <stdio.h>

/**
 * main - function that takes input from user
 * Description: the function takes in the input of type
 * int and prints it
 * Return: 0 if program is executed successfully
 */

int main(void)
{
	int i;

	printf("Please input an integer:\n");
	scanf("%d", &i);
	printf("You have entered: %d\n", i);

	return (0);
}
