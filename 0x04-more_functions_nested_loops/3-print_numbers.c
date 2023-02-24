#include "main.h"

/**
 * print_number - check if number aew 0 - 9 with a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar("\n");
}
