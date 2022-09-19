#include "main.h"

/**
 * _puts - prints to the stdout
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
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
