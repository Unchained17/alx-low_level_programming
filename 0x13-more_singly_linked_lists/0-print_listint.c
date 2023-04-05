#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	for (; h != NULL; i += 1)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (i);
}
