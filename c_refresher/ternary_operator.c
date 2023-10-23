#include<stdio.h>

/**
 * main - function that takes numbers from user and compares the two numbers
 * Description: the function takes in the 2 inputs of type int. If the first
 * integer is greater than the second integer, the function prints true
 * otherwise it print false. All this is done using the ternary operator and
 * not the normal if else statements for the checks.
 * Return: 0 if program is executed successfully
 */

int main(void)
{
	int a;
	int b;

	printf("Kindly input two numbers a & b:\n");
	scanf("%d\n", &a);
	scanf("%d", &b);

	a > b ? printf("True\n") : printf("False\n");

	return (0);
}
