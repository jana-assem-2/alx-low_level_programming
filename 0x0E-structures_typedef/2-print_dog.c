#include "dog.h"

/**
 * print_dog - startpoint
 * this is a function that prints a struct dog
 * @d: this is the pointer to struct dog
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
