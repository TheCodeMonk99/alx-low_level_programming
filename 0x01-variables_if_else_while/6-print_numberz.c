#include <stdio.h>

/**
 * main - entry point
 * prints 0 -9
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}
