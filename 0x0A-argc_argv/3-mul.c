#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints multiply of 2 arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	return (mult);
}
