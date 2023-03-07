#include "main.h"

/**
 * _memcpy - copy memory area
 * @n: number of bytes to copy
 * @src: memory copied from
 * @dest: memory stored to
 *
 * Return: copied memory with n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; n++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
