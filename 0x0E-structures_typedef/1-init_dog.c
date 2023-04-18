#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog variable to  initialize
  * @name: a pointer to the variable char type
 * @age: age of the dog
 * @owner: a pointer to a type char variable
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* to access elements of a pointer to a structure */
	/* you have to dereference the pointer */
	/* and then access to the data */
	/* the simple way to do this is using '->' symbol */
	/* is the same than using '.' symbol */
	/* e.g (*ptr).name is the same than ptr->name but easier :) */

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
