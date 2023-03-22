#include "main.h"
/**
 * main - entry point
 * Return: Return description
 */

int main(void)
{
	int position;
	char *string;

	string = "_putchar";

	for (position = 0; string[position] != '\0'; position++)
		_putchar(string[position]);
	_putchar('\n');
	return (0);
}
