#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints sum of all arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, i, temp;

	sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		temp = atoi(argv[i]);
		if (temp == 0)
		{
			if (strlen(argv[i]) != 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += temp;
	}
	printf("%d\n", sum);

	return (0);
}
