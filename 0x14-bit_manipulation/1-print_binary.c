#include "main.h"
/**
  *print_binary - prints binary
  * @n: integer to be printed
  * Return: Always success
  */
void print_binary(unsigned long int n)
{
	unsigned long int trial = 1UL << ((sizeof(unsigned long int)) * 8 - 1);

	while (trial > 0)
	{
		if (n & trial)
			_putchar('1');
		else
			_putchar('0');
		trial >>= 1;
	}
}
