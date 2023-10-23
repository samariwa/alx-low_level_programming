#include<stdio.h>

/**
 * main - function that takes numbers from user and increaments and decreaments
 * Description: the function takes in the 2 inputs of type int. One integer
 * is increamented and using post-incremental and pre-incremental operators
 * while the other is decreamented by post-decreamental and pre-decreamental
 * operators. The result of each computation is printed.
 * Return: 0 if program is executed successfully
 */

int main(void)
{
	int a;
	int b;
	int x;
	int y;

	printf("Kindly input two numbers a & b:\n");
	scanf("%d\n", &a);
	scanf("%d", &b);

	x = a++;
	printf("The value of post-increamented a is: %d\n", x);
	y = ++b;
	printf("The value of pre-increamented b is: %d\n", y);

	printf("Kindly input two numbers a & b again:\n");
	scanf("%d\n", &a);
	scanf("%d", &b);

	x = a--;
	printf("The value of post-decreamented a is: %d\n", x);
	y = --b;
	printf("The value of pre-decreamented b is: %d\n", y);

	return (0);
}
