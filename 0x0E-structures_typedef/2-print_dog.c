#include <stdio.h>
#include "dog.h"
/**
 * print_dog - this function prints struct dog
 * @d: this is a pointer to each elements of struct dog
 *Return: void/null
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
