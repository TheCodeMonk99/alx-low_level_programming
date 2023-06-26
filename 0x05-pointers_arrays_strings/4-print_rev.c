#include "main.h"

/**
  * print_rev - prints string in reverse
  *
  * @s: string to be printed
  *
  * Return: Null
  */

void print_rev(char *s)
{
	int i, m;

	for (m = 0; s[m] != '\0'; m++)
		i = m;
	for (i; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}

