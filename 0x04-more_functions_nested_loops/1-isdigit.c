#include "main.h"
/**
 * _isdigit - function checks digit (0 through 9)
 * @c: Predefined variable
 * Returns: (1) || (0)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
