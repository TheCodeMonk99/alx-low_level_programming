#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: minimum int
  * @max: maximum int
  * Return: pointer to newly created array
  */
int *array_range(int min, int max)
{
	int *arr, i, n;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * (max + 1 - min));
	if (arr == NULL)
		return (NULL);
	i = (max - min) + 1;
	n = 0;
	while (n < i)
	{
		arr[n] = min + n;
		n++;
	}
	return (arr);
}
