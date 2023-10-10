#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this function initilaizes the variaous types in struct dog
 * @d: this variables is the name of the structure type dog
 * @name: pointer to a char array to hold a name
 * @age: float type to hold the age
 * @owner: pointer to a char array to hold the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
