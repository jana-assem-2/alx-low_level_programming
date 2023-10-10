#include <stdio.h>
#include "dog.h"

/**
 * init_dog - startpoint
 * this is a function that initialize a variable of type struct dog
 * @d: this is all var in struct dog
 * @name: this is the name of the dog
 * @age: dog s age
 * @owner: this is the ower s name
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
