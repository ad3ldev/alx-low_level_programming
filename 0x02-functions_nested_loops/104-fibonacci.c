#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 98 fibonacci numbers
 * Return: Always Success
 */
int main(void)
{
	unsigned long int i, n1, n2, next;

	n1 = 1;
	n2 = 2;
	printf("%lu, ", n1);
	for (i = 0 ; i <= 97 ; i++)
	{
		printf("%lu", n2);
		if (i != 97)
			printf(", ");
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("\n");
	return (0);
}

