#include<stdio.h>

/**
 * main - function that calculates simple arithmetic
 * Description: the function takes in the 2 inputs of type int, the a
 * and b and asks the user to select an operator that will be used in doing the
 * calculation. The option selected will be passed through a switch case and
 * the calculation done and result printed
 * Return: 0 if program is executed successfully
 */

int main(void)
{
	int a;
	int b;
	int option;

	printf("Enter 2 numbers\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Choices:\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	scanf("%d", &option);
	switch (option)
	{
		case 1:
			printf("The sum a + b is %d\n", a + b);
			break;
		case 2:
			printf("The difference a - b is %d\n", a - b);
			break;

		case 3:
			printf("The product a * b is %d\n", a * b);
			break;
		case 4:
			printf("The quotient a / b is %d\n", a / b);
			break;
		default:
			printf("invalid");
	}

	return (0);
}
