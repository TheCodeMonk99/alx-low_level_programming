#include "main.h"

/**
  *print_alphabet - prints alphabet
  *Return: alphabet
  */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar(10);
}