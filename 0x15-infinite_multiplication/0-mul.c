#include "main.h"

/**
 * checknumber - Verify that a string is numeric
 * @string: A string
 * Return: 1 if valid, 0 if invalid
 */
int checknumber(char *string)
{
	int i;
	char c;

	for (i = 0; string[i]; i++)
	{
		c = string[i];
		if (c < '0' || c > '9')
			return (0);
	}

	return (1);
}

