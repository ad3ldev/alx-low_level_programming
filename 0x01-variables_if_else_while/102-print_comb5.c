#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * printing the numbers as char separated by ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii = 48;

	int i, j;

	for (i = 0; i < 100 ; i++)
	{
		for (j = i+1 ; j < 100 ; j++)
		{
			putchar(ascii + i / 10);
			putchar(ascii + j % 10);
			putchar(' ');
			putchar(ascii + k);
			putchar(ascii + l);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
