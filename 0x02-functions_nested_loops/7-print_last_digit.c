#include "main.h"

/**
 * print_last_digit - printing last digit
 *
 * @n: number to print last digit of
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int zero;

	zero = 48;

	if(n < 0)
	{
		n *= -1;
	}

	_putchar(zero + (n % 10));

	return (n % 10);
}
