#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: This function appends the src string to the dest string
 * @src: overwrite the null byte (\0) at the end of dest and adds new (\0)
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	y = 0;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
