#include "main.h"

/**
 * print_rev - prints to the stdout in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int size;

	size = 0;
	while (s[size)
		size++;
	while (size >= 0)
	{
		_putchar(s[size]);
		size--;
	}
	_putchar('\n');
}
