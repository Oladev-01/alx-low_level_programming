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
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);

#endif
