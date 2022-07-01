#!/bin/bash
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

	printf("Size of a char: %c byte(s) sizeof(character)\n");
	printf("Size of a int: %d byte(s) sizeof(integer)\n");
	printf("Size of a long int: %lu byte(s) sizeof(longType)\n");
	printf("Size of a long long int: %lu byte(s) sizeof(long_2)\n");
	printf("Size of a float: %lu byte(s) sizeof(floatType)\n");
        return (0);
}
