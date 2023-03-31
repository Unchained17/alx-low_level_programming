#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - Picks correct function to do user's operation.
 * @s: functions argument
 * Return: (s)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != 0 && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
