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

	num = 0;
	do {
		if ((*h).str == 0)
			printf("[%u] (nil)\n", 0);
		else	
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		num += 1;
	} while (h != NULL);
	return (num);
}
