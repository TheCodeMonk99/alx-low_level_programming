#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string whose half is to be printed
  *
  * Return: void
  */

void puts_half(char *str)
{
	int len, prin, i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	prin = (len / 2);

	if (prin == 1)
		n = ((len + 1) / 2);

	for (prin; prin <= len; prin++)
		_putchar(str[prin]);

	_putchar(10);
}
