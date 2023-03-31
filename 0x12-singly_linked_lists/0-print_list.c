#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: single linked list
 * Return: (num) number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		if ((*h).str != 0)
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[%u] (nil)\n", 0);
		}
		h = h->next;
		num += 1;
	}
	return (num);
}
