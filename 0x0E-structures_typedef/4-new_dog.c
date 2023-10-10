#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 *char *_strcpy - entry
 *@dest: copy
 *@src: copied
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}

/**
 * new_dog - this function creates a new struct dog (dog_t)
 * which in this function is bad_dog
 * @name: a pointer to the string that hold a name
 * @age: the float variable that holds the age
 * @owner: string array that holds a name of (owner)
* Return: a pointer to the memmory allocated for the new name of the struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_1 = strlen(name);
	int len = strlen(owner);
	dog_t *bad_dog = malloc(sizeof(dog_t));

	if (bad_dog == NULL)
		return (NULL);

	bad_dog->age = age;

	bad_dog->name = malloc((len_1 + 1) * sizeof(*name));
	if (bad_dog->name == NULL)
	{
		free(bad_dog);
		return (NULL);
	}
	_strcpy(bad_dog->name, name);
	bad_dog->owner = malloc((len + 1) * sizeof(*owner));
	if (bad_dog->owner == NULL)
	{
		free(bad_dog);
		free(bad_dog->name);
		return (NULL);
	}
	_strcpy(bad_dog->owner, owner);
	return (bad_dog);
}
