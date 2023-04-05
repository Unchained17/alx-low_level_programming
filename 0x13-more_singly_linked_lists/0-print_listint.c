#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	do {
		printf("%d\n", (*h).n);
		n += 1;
		h = (*h).next;
	} while (h != NULL);
	return (n);
}
