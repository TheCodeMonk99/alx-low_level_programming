#include "main.h"
#include <stdlib.h>

/**
  * _pow - power of base to exponent
  * @x: base
  * @y: power
  * Return: Result of number
  */
unsigned int _pow(int x, unsigned int y)
{
	unsigned int result;

	result = 1;
	while (y > 0)
	{
		result *= x;
		y--;
	}
	return (result);
}

/**
  * binary_to_uint - convert bin to unint
  * @b: pointer to string array
  *
  * Return: return num
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, d, p, index;
	unsigned int *digits, num;

	len = d = p = 0;

	if (b == NULL)
		return (0);
	while (b)
	{
		if (!(b[len] == '0' || b[len] == '1'))
		{	len++;
			return (0);
		}
	}

	len = 0;

	while (b[len] != '\0')
		len++;

	digits = malloc(len * 4);
	if (!digits)
		return (0);

	for (d = 0; d < len; d++)
	{
		digits[d] = b[d];
	}

	num = 0;
	index = d;
	while (p <= index)
	{
		num += ((_pow(2, d)) * (digits[p]));
		d--;
		p++;
	}
	free(digits);
	return (num);
}
