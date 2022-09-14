#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 * Return: Always Success
 */
int main(void)
{
	long i, n1, n2, temp;

	n1 = 1;
	n2 = 2;
	printf("%ld, ", n1);
	for (i = 0 ; i <= 10000 ; i++)
	{
		if (n2 > 4000000)
			break;
		printf("%ld", n2);
		if (i != 10000)
			printf(", ");
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}
	printf("\n");
	return (0);
}

