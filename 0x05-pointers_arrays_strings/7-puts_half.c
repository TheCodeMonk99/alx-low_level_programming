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
	for (prin = (len / 2); prin <= len; prin++)
			_putchar(str[prin]);
}
