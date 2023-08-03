#include "main.h"

/**
  * get_bit - get value of bit at index
  * @n: value
  * @index: index position
  *
  * Return: value or -1 on error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
