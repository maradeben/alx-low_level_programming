#include "dog.h"
#include <stdlib.h>

int _strlen(char *c);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - create a new dog
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name == NULL)
		d->name = NULL;
	else
	{
		d->name = malloc(_strlen(name) + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = _strcpy(d->name, name);
	}
	if (owner == NULL)
		d->owner = NULL;
	else
	{
		d->owner = malloc(_strlen(owner) + 1);
		if (d->owner == NULL)
		{
			free(d);
			return (NULL);
		}
		d->owner = _strcpy(d->owner, owner);
	}

	d->age = age;

	return (d);
}


/**
 * _strlen - string length
 * Description: determine length of a string
 * @c: the string
 * Return: string length
 */

int _strlen(char *c)
{
	int count = 0;

	while (*(c + count) != 0)
		count++;
	return (count);
}

/**
 * _strcpy - strcpy analog
 * Description: copies a string into another
 * @dest: the copy
 * @src: the source (original)
 * Return: bointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
