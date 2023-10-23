#include <stdio.h>

/**
 * main - prints an integer variable that is declared as a constant
 * Description: testing the printing of other data types
 * Return: 0 if successful
 */

int main(void)
{
	const int i = 100;
	const char *c = "Hello World!";

	printf("%d\n", i);
	printf("%s\n", c);

	return (0);
}
