#include "main.h"

/**
  * jack_bauer - prints every min of the day
  * Return: always 0
  */

void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i <= 23)
	{	j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
