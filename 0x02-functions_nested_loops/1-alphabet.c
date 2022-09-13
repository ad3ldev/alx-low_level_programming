#include "main.h"

/**
 * print_alphabet - printing alphabet
 *
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i, ch;

	ch = 97;

	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(ch + i);
	}
	_putchar('\n');
	return (0);
}
