#include <stdio.h>

/**
 * main - function that takes numbers from user and summs and multiplies them
 * Description: the function takes in the input of type
 * int and prints their product and sum
 * Return: 0 if program is executed successfully
 */

int main(void)
{
	int x;
	int y;

	printf("Please input an integer:\n");
	scanf("%d", &x);
	printf("Please input another integer:\n");
	scanf("%d", &y);
	printf("Sum = %d\n", x + y);
	printf("Mul = %d\n", x * y);

	return (0);
}
