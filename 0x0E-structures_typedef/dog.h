#ifndef _DOG_H_
#define _DOG_H_
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

/**
 * dog_t - typdef struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
