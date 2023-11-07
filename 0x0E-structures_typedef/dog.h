#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog -  name of a structure
 *@name : name
 *@age: age
 *@owner: owner
 *
 * Description: description
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

#endif

