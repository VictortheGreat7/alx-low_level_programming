#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to the struct dog variable to initialize
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner's name
* Return: None
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = malloc(strlen(name) + 1);
if (d->name)
{
strcpy(d->name, name);
}

d->age = age;

d->owner = malloc(strlen(owner) + 1);
if (d->owner)
{
strcpy(d->owner, owner);
}
}
