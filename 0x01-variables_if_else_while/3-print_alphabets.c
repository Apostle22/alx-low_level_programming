#include <stdio.h>

/**
 * main - prints thee alphabetts.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchr('\n');
	return (0);
}
