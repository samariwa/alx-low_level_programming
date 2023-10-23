
#include<stdio.h>

/**
 * main - function that takes numbers from user and checks if they are equal
 * Description: the function takes in the input of type
 * int and prints their different or equal
 * Return: 0 if program is executed successfully
 */

int main(void)
{
	int a;
	int b;

	printf("Kindly input two numbers:\n");
	scanf("%d\n", &a);
	scanf("%d", &b);

	if (a == b)
		printf("Same\n");
	else
		printf("Different\n");

	return (0);
}
