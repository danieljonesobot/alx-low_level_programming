#include "main.h"

/**
 * binary_to_uint - a program that converts a binary to unsigned int.
 *
 * @b: pointer to a string.
 *
 * Return: converted number (int)
 * OR 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int multiplier = 1;
	int i, j;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);

		if (b[j] == '1')
		{
			decimal += multiplier;
		}

		multiplier *= 2;
	}

	return (decimal);
}
