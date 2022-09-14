#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 * Return: Always Success
 */
int main(void)
{
	unsigned long i, n1, n2, temp;

	n1 = 1;
	n2 = 2;
	temp = 0;
	printf("%lu, ", n1);
	for (i = 0 ; i <= 97 ; i++)
	{
		printf("%lu", n2);
		if (i != 97)
			printf(", ");
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}
	printf("\n");
	return (0);
}

