#include "main.h"

/**
 * puts2 - prints every other char to the stdout
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int size;

	size = 0;
	while (str[size])
	{
		if (size % 2 == 0)
			_putchar(str[size]);
		size++;
	}
	_putchar('\n');
}
