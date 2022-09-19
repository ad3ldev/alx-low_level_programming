#include "main.h"

/**
 * _puts - prints to the stdout
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int size;

	size = 0;
	while (str[size])
	{
		_putchar(str[size]);
		size++;
	}
	_putchar('\n');
}
