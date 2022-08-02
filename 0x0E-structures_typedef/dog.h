#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog object
 * @name: The name od the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * The name takes in a set of characters and referenced to by a pointer
 * The age attribute takes in an integer
 * The owner attribute takes in a set of characters referenced to by a pointer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
