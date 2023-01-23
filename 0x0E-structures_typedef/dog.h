#ifndef TRUSTEE
#define TRUSTEE

/**
* struct dog - defines dog details
* @name: The dogs name
* @age: the dogs age
* @owner: the dogs owner
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Initialize a variable of type struct dog.
 *@d: Variable to initialize.
 *@name: Dog's name.
 *@age: Dog's age.
 *@owner: Dog's owner.
 **/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
