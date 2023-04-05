#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n = n + 1)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (n);
}
