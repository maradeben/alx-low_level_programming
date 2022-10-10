#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: pointer to dog struct
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
