#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: single linked list
 * Return: (num) number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num;

	for (num = 0; h != 0; num += 1)
	{
		if ((*h).str == 0)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
	}
	return (num);
}
