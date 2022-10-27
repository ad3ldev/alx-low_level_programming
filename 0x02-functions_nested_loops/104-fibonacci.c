#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 98 fibonacci numbers
 * Return: Always Success
 */
int main(void)
{
	const long long int half = 1000000000000LL;
	unsigned long long int n1_h, n1_l, n2_h, n2_l, next_h, next_l;
	int i;

	n1_h = 0;
	n2_h = 0;
	n1_l = 1;
	n2_l = 2;
	printf("%llu, ", n1_l);
	printf("%llu, ", n2_l);
	for (i = 2 ; i <= 98 ; i++)
	{
		next_l = n1_l + n2_l;
		next_h = n1_h + n2_h + (next_l / half);
		next_l %= half;
		if(next_h > 0)
			printf("%llu%llu", next_h, next_l);
		else
			printf("%llu", next_l);
		if (i != 98)
			printf(", ");
		n1_h = n2_h; n1_l = n2_l;
		n2_h = next_h; n2_l = next_l;
	}
	printf("\n");
	return (0);
}

