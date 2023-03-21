#ifndef DOG_H
#define DOG_H

/**
* struct dog - Struct that represents a dog
* @name: Dog's Name
* @age: Dog's age
* @owner: Dog's owner's name
* Description: This struct represents a dog and contains information about its
*              name, age, and owner.
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
