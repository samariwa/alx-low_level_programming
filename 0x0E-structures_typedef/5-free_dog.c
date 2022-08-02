#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory for struct dog
 * @d: Pointer to the struct to be freed
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
