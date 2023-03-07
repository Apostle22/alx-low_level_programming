#include "main.h"

/**
 * _memcpy - copy memory area
 * @n: number of bytes to copy
 * @src: memory copied from
 * @dest: memory stored to
 *
 * Retun: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int r = n;

	for (; p < r; n++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
