#include "main.h"

/**
 * puts_half - prints second half to the stdout
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int size, n, i;

	size = 0;
	while (str[size])
	{
		size++;
	}
	if (size % 2 == 0)
		n = size / 2;
	else
		n = (size - 1) / 2 + 1;

	for (i = n; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
}
