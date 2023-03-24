#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: pointer
 * @f: pointer to a function with character pointer parameters
 * Return: (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || *f == 0)
		return;
	(*f)(name);
}
