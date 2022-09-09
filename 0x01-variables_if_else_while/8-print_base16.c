#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * printing the numbers hexadecimal as char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii = 48;

	int i;

	for (i = 0; i < 16 ; i++)
	{
		if (i == 10)
		{
			ascii = 87;
		}
		putchar(ascii + i);
	}
	putchar('\n');

	return (0);
}
