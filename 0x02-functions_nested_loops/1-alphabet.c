#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;
	
	for(c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return;
}

int main(void)
{
	print_alphabet();
	return (0);
}