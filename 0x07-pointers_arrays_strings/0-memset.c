#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @b: the desired vlue
 * @s: staring address of memoryto be filled
 * @n: number of bytes to be changed
 *
 * Return: changed array with teh value for n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
