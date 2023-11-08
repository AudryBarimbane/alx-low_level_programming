#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - returns the length of a string.
 *@s: string
 *Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy -  copies the string pointed to by src to dest
 * @dest: pointer to char
 * @src: pointer to string
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->age =  age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
