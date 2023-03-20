#include "dog.h"
#include <stdio.h>

/**
* init_dog - initializes a variable of type struct dog
* @d: struct dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the dog's owner
* Return: none
*/

void init_dog(struct dog *d, char *name, float age, char *owner){
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
