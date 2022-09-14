#include "main.h"

/**
 * _islower - checking if the letter is a lowercase
 *
 * @c: int of a single character in ascii
 *
 * Return: 0 if not lowercase and 1 if lower
 */
int _islower(int c)
{
	int a;

	a = 97;

	if (c >= a && c < a + 26)
	{
		return (1);
	}
	return (0);
}
