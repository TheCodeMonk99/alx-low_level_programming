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

	i = _strlen(*s);
	for (m = --i; m >= 0 ; m--)
		_putchar(s[m]);
	_putchar(10);
}

