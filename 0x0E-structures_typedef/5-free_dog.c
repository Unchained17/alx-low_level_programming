#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 * @d: pointer to struct
 * Return: (void)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}