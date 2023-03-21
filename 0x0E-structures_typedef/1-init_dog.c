#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - Initializes a struct dog with given values
* @d: Pointer to the struct dog variable to initialize
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner's name
* Return: None
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
printf("Error: dog pointer is NULL.\n");
exit(EXIT_FAILURE);
}
d->name = name;
d->age = age;
d->owner = owner;
}
