#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	int A;

	A = 65;
	if (c >= A && c < A + 26)
	{
		return (1);
	}
	return (0);
}
