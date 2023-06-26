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

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (m = i; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
