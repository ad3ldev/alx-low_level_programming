#include "main.h"

/**
 * print_rev - prints to the stdout in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int size;

	size = _strlen(str);
	while (size >= 0)
	{
		_putchar(str[size]);
		size--;
	}
	_putchar('\n');
}
