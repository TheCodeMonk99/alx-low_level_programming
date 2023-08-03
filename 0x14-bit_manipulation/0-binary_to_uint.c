#include "main.h"
#include <stdlib.h>
/**
  * binary_to_uint - converts bin to int
  * @b: pointer to string
  * Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');
		i++;
	}
	return (num);
}
