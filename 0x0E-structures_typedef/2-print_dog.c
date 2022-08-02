#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints sttributes of the struct dog
 * @d: Pointer of the struct dogs location
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
