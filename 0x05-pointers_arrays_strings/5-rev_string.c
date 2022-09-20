#include "main.h"

/**
 * rev_string - revesre a given string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int size, i;

	char temp;

	size = 0;
	while (s[size])
		size++;
	for (i = 0; i < size / 2; i++)
	{
		temp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = temp;
	}
}
