#include "dog.h"

/**
 * init_dog - initializes the attributes of structure dog
 * @d: pointer to struct dog
 * @name: pointer to the input name
 * @age: input age of the dog
 * @owner: pointer to the input owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
