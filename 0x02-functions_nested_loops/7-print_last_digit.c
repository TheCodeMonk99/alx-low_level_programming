#include "main.h"

/**
  * print_last_digit - prints last digit of num
  * @n: num in question
  * Return: last digit of num
  */

int print_last_digit(int n)
{
	int v;

	if (n < 0)
		n = -n;
	v = (n % 10);
	if (v < 0)
		v = -v;
	_putchar(v + '0');
	return (v);
}
