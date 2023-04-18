#include "dog.h"
#include <stdio.h>

/**
   * print_dog - function that prints a struct dog
 *
  * @d: a pointer to the struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	printf("Age: %f\n", d->age);
}
