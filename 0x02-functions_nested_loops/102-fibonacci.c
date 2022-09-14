#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 * Return: Always Success
 */
int main(void)
{
	long i, n1, n2;

	n1 = 1;
	n2 = 2;
	printf("%ld, ", n1);
	for (i = 0 ; i <= 48 ; i++)
	{
		printf("%ld", n2);
		if (i != 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}

