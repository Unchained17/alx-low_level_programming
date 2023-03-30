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
	while (h != 0)
	{
		if ((*h).str == 0)
		{
			printf("[%d] (nil)\n", 0);
		}
		printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		num += 1;
	}
	return (num);
}
