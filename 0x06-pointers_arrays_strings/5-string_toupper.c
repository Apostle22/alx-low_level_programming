#include "main.h"

/**
 * string_toupper - changed all lowercase letters of a string
 * @n: pointer
 *
 * Return: n
 */

char *string_toupper(char *)
{
	char i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
