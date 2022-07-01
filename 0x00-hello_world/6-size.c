#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integer;
	char character;
	long longType;
	float floatType;
	long long long_2;

	printf("Size of a char: %zu byte(s)\n",sizeof(character));
	printf("Size of a int: %d byte(s)\n",sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n",sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(long_2));
	printf("Size of a float: %lu byte(s)\n",sizeof(floatType));
        return (0);
}
