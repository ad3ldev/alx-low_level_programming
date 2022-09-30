#include "main.h"

/**
 * _strcpy - copy string to another
 * @dest: str to copy to
 * @src: str to copy from
 * Return: dest str
 */

char *_strcpy(char *dest, char *src)
{
	int size = 0;

	while (src[size])
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = src[size];
	return (dest);
}
