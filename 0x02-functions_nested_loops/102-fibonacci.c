#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 * Return: Always Success
 */
int main(void)
{
	int i, n1, n2, temp;

	n1 = 1;
	n2 = 2;
	printf("%d\n", n1);
	for (i = 0 ; i <= 48 ; i++)
	{
		printf("%d\n", n2);
		if (i != 48)
			printf(", ");
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}
	printf("\n");
	return (0);
}
