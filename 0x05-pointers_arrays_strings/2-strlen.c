#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: string to be calculated
 * Return: length of string
 */

int _strlen(char *s)
{
	int size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}
