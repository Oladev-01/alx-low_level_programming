#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this function declares a mixed data types
 * @name: pointer to a char type which should be holding a name
 *@age: float variable which holds an age integer
 *@owner: pointer to a char which holds the owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
