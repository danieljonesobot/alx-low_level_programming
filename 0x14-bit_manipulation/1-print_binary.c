#include "main.h"

/**
 * print_binary - that prints the binary representation of a number.
 *
 * @n: pointer to a string.
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int i, j;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	for (i = 63; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag == 1)
				_putchar('0');
		}
	}
}
