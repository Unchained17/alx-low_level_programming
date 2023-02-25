#include "main.h"
/**
 * _islower - Function name
 * @c: local variable
 * Return: (1) 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}	
