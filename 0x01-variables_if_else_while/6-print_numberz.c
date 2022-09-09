#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * printing the numbers as char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii = 48;

	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(ascii + i);
	}
	putchar('\n');

	return (0);
}
