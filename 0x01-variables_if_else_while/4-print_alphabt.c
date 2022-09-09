#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * printing the alphabet without q and e
 *
 * Return: Always 0 (Success)i
 */
int main(void)
{
	int ascii = 97;

	int i;

	for (i = 0; i < 26 ; i++)
	{
		if (i != 16 || i != 4)
		{
			putchar(ascii + i);
		}
	}
	putchar('\n');

	return (0);
}
