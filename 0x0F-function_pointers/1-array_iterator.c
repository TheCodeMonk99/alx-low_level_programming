#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - executes a function given as
  * a paramater on each element of array
  * @array: array
  * @size: size of array
  * @action: pointer to function given as a parameter
  *
  * Return: Always 0
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size <= 0 || array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
