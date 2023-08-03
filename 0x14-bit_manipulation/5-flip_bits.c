#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, num = 0;
	unsigned long int matter;
	unsigned long int comb = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		matter = comb >> index;
		if (matter & 1)
			num++;
	}

	return (num);
}
