#ifndef _DOG_H
#define _DOG_H

/**
   * struct dog - a new type
 *
 * @name: the name of the dog (Poppy)
 * @age: the age of the dog (3.5)
 * @owner: the name of the owner (Bob)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};	


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
