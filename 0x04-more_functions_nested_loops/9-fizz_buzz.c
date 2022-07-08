#include <stdio.h>

/**
 * fizz_buzz - prints numbers 1 to 100
 * prints fizz at multiples of 3
 * prints buzz at multiples of 5
 * prints fizzbuzz at multiples of 3 and 5
 * Returns nothing
 */

void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			if (x == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (x % 5 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
