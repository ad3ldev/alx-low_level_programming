#include "main.h"

/**
 * print_to_98 - print until 98
 *
 * @n: number to start
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i, neg;

	i = n;
	neg = 0;

	while (i != 98)
	{
		if (i < 0)
		{
		_putchar('-');
		neg = 1;
		i *= -1;
		}

		if (i >= 10)
		{
		_putchar('0' + (i / 10));
		}
		_putchar('0' + (i % 10));
		_putchar(',');
		_putchar(' ');

		if (neg == 1)
		{
			neg = 0;
			i *= -1;
		}

		if (i > 98)
		{
			i--;
		}
		else
		{
			i++;
		}
	}
	_putchar('9');
	_putchar('8');
	-putchar('\n');
}
