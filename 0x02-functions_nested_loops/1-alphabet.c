#include "main.h"

/**
  *print_alphabet - prints alphabet
  *Return: alphabet
  */

int print_alphabet(void)
{
	int i;

	for (i = 97, i <= 122, i++)
		putchar(i);
	putchar(10);
}
