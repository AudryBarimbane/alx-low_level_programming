#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->nme : "(nil)");
		printf("Age: %d\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
