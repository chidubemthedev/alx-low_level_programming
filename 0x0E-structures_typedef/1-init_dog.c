#include "dog.h"

/**
 * init_dog - init type struct dog for *d
 *
 * @d: pointer to struct
 * @name: name of dog
 * @age: agee of dog
 * @owner: owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
