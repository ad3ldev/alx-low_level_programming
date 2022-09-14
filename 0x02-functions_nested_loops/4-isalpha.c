#include "main.h"

/**
 * _isalpha - checking if the letter is an alphabet character
 *
 * @c: int of a single character in ascii
 *
 * Return: 0 if not lowercase and 1 if lower
 */
int _isalpha(int c)
{
	int a, A;

	a = 97;

	A = 65

	if ((c >= a && c < a + 26) || (c >= A && c < A + 26))
	{
		return (1);
	}
	return (0);
}
