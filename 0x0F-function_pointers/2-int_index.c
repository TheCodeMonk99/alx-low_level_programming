#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: int array
  * @size: size of array
  * @cmp: pointer to function
  *
  * Return: returns index of 1st element if cmp does
  * not return 0, -1 if false
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	i = 0;
	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
		i++;
	}
	return (-1);
}
