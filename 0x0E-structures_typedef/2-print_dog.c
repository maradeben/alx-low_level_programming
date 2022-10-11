#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print details of dog
 * @d: pointer to dog struct
 * Return: None
 */

void print_dog(struct dog *d)
{
	char *d_name;
	char *d_owner;
	/* int d_age; */

	if (d->name != NULL)
		d_name = d->name;
	else
		d_name = "(nil)";
	printf("Name: %s\n", d_name);

	printf("Age: %.6f\n", d->age);

	if (d->owner != NULL)
		d_owner = d->owner;
	else
		d_owner = "(nil)";
	printf("Owner: %s\n", d_owner);
}
