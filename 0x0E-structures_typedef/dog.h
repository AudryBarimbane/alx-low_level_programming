#ifndef _DOG_H_
#define _DOG_H_

#include <stddef.h>
/**
 *struct dog - dog info
 *@name: name of dog
 *@age: age
 *@owner: owner
 *
 * Descritpion: description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
