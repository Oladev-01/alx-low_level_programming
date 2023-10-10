#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * _strdup - this function returns a pointer to an allocated
 * memory that contains a copy of a string
 * @str: the string to be copied is parsed here
 *Return: a pointer to a string that contains the copy
 */
char *_strdup(char *str)
{
	int len;
	int a = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	s = (char *)malloc((len + 1) * sizeof(*str));
	if (s == NULL)
	{
		return (NULL);
	}
	while (a < len)
	{
		s[a] = str[a];
		a++;
	}
	return (s);
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
	dog_t *bad_dog = malloc(sizeof(dog_t));

	if (bad_dog == NULL)
		return (NULL);

	bad_dog->age = age;

	bad_dog->name = _strdup(name);
	if (bad_dog->name == NULL)
	{
		free(bad_dog);
		return (NULL);
	}

	bad_dog->owner = _strdup(owner);
	if (bad_dog->owner == NULL)
	{
		free(bad_dog->name);
		free(bad_dog);
		return (NULL);
	}
	return (bad_dog);
}
