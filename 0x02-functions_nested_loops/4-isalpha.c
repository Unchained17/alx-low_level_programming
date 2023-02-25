#include "main.h"
/**
 * _isalpha - Function
 * @c: local variable
 * Return: (1) for upper and lower case and (0) for other.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
