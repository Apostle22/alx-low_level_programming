#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that print a line to the standard eror
 * Return: 1 (Success)
 */
int main(void)
{
        write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
        return (1);
}
