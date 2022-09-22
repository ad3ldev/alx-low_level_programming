#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be capatalized.
 * Return: char * of the string after capitalization.
 */

char *cap_string(char *str)
{
	int i, flag;

	i = 0;
	while (str[i])
	{
		flag = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			flag = 1;
		else if (str[i] == ',' || str[i] == ';' || str[i] == '.')
			flag = 1;
		else if (str[i] == '!' || str[i] == '?' || str[i] == '(')
			flag = 1;
		else if (str[i] == ')' || str[i] == '{' || str[i] == '}')
			flag = 1;
		else if (flag)
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
