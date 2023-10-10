#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - this function frees the memory allocated for struct dog(dog_t)
 * @d: this is the pointer to elements of struct dog(dog_t)
 *Return: freed memory allocated for struct dog(dog_t)
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->name);
	free(d->owner);
}

	free(d);
}
