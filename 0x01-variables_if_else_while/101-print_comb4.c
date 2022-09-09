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

	int i, j, k;

	for (i = 0; i < 10 ; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
			for (k = j + 1 ; k < 10 ; k++)
			{
				putchar(ascii + i);
				putchar(ascii + j);
				putchar(ascii + k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
