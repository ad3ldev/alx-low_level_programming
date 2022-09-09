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

	int i, j, k, l;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0; k < 10 ; k++)
			{
				for (l = 0; l < 10 ; l++)
				{
					putchar(ascii + i);
					putchar(ascii + j);
					putchar(' ');
					putchar(ascii + k);
					putchar(ascii + l);
					if (i != 9 || j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
