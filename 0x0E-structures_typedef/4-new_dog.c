#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog, or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int name_len = 0, owner_len = 0, i;
dog_t *new_dog;

while (name[name_len] != '\0')
name_len++;

while (owner[owner_len] != '\0')
owner_len++;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(name_len + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = malloc(owner_len + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

for (i = 0; i <= name_len; i++)
new_dog->name[i] = name[i];

new_dog->age = age;

for (i = 0; i <= owner_len; i++)
new_dog->owner[i] = owner[i];

return (new_dog);
}
