#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: owners name
 * Return: pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name1, owner1, j;
	dog_t *x;

	x = malloc(sizeof(dog_t));
	if (x == NULL)
	{
		return (0);
	}
	for (name1 = 0; *(name + name1); name1 += 1)
		;
	name1++;
	(*x).name = malloc(name1 * sizeof(char));
	if (((*x).name) == NULL)
	{
		free(x);
		return (0);
	}
	for (j = 0; j < name1; j++)
	{
		(*x).name[j] = *(name + j);
	}
	(*x).age = age;
	for (owner1 = 0; *(owner + owner1); owner1 = owner1 + 1)
		;
	owner1++;
	(*x).owner = malloc(owner1 * sizeof(char));
	if ((*x).owner == NULL)
	{
		free((*x).name);
		free(x);
		return (NULL);
	}
	for (j = 0; j < owner1; j++)
	{
		(*x).owner[j] = *(owner + j);
	}
	return (x);
}
