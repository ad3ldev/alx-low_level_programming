#include "main.h"

/**
 * swap_int - swap values between 2 ints
 * @a: first int
 * @b: second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
